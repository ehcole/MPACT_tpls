# This will configure and build hypre
# User can configure the source path by speficfying HYPRE_SRC_DIR
#    the download path by specifying HYPRE_URL, or the installed 
#    location by specifying HYPRE_INSTALL_DIR


# Intialize download/src/install vars
SET( HYPRE_BUILD_DIR "${CMAKE_BINARY_DIR}/HYPRE-prefix/src/HYPRE-build" )
IF ( HYPRE_URL ) 
    MESSAGE_TPL("   HYPRE_URL = ${HYPRE_URL}")
    SET( HYPRE_CMAKE_URL            "${HYPRE_URL}"       )
    SET( HYPRE_CMAKE_DOWNLOAD_DIR   "${HYPRE_BUILD_DIR}" )
    SET( HYPRE_CMAKE_SOURCE_DIR     "${HYPRE_BUILD_DIR}" )
    SET( HYPRE_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/common/hypre-${HYPRE_VERSION}" )
    SET( CMAKE_BUILD_HYPRE TRUE )
ELSEIF ( HYPRE_SRC_DIR )
    MESSAGE_TPL("   HYPRE_SRC_DIR = ${HYPRE_SRC_DIR}")
    SET( HYPRE_CMAKE_URL            "${HYPRE_SRC_DIR}" )
    SET( HYPRE_CMAKE_DOWNLOAD_DIR   "${HYPRE_BUILD_DIR}" )
    SET( HYPRE_CMAKE_SOURCE_DIR     "${HYPRE_BUILD_DIR}" )
    SET( HYPRE_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/common/hypre-${HYPRE_VERSION}" )
    SET( CMAKE_BUILD_HYPRE TRUE )
ELSEIF ( HYPRE_INSTALL_DIR ) 
    SET( HYPRE_CMAKE_INSTALL_DIR "${HYPRE_INSTALL_DIR}" )
    SET( CMAKE_BUILD_HYPRE FALSE )
ELSE()
    MESSAGE(FATAL_ERROR "Please specify HYPRE_SRC_DIR, HYPRE_URL, or HYPRE_INSTALL_DIR")
ENDIF()
FILE( MAKE_DIRECTORY "${HYPRE_CMAKE_INSTALL_DIR}" )
SET( HYPRE_INSTALL_DIR "${HYPRE_CMAKE_INSTALL_DIR}" )
MESSAGE_TPL( "   HYPRE_INSTALL_DIR = ${HYPRE_INSTALL_DIR}" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(HYPRE_INSTALL_DIR \"${HYPRE_INSTALL_DIR}\")\n" )


# Configure hypre
IF ( CMAKE_BUILD_HYPRE )
    SET( CONFIGURE_OPTIONS --with-blas=yes --with-lapack=yes )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --with-blas-libs=${BLAS_LIBS} )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --with-blas-lib-dirs=${BLAS_DIR} )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --with-lapack-libs=${LAPACK_LIBS} )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --with-lapack-lib-dirs=${LAPACK_DIR} )
    IF ( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --enable-debug )
    ELSEIF ( ${CMAKE_BUILD_TYPE} STREQUAL "Release" )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --enable-optimize )
    ELSE()
        MESSAGE ( FATAL_ERROR "Unknown CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}" )
    ENDIF()
    IF ( ENABLE_SHARED )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --enable-shared )
    ELSE()
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --disable-shared )
    ENDIF()
    IF ( ENABLE_STATIC )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --enable-static )
    ELSE()
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --disable-static )
    ENDIF()
ENDIF()


# Build hypre
IF ( CMAKE_BUILD_HYPRE )
    EXTERNALPROJECT_ADD(
        HYPRE
        URL                 "${HYPRE_CMAKE_URL}"
        DOWNLOAD_DIR        "${HYPRE_CMAKE_DOWNLOAD_DIR}"
        SOURCE_DIR          "${HYPRE_CMAKE_SOURCE_DIR}"
        UPDATE_COMMAND      ${CMAKE_COMMAND} -E echo "" 
        CONFIGURE_COMMAND   "./configure" --prefix=${HYPRE_INSTALL_DIR} ${CONFIGURE_OPTIONS} ${ENV_VARS}
        BUILD_COMMAND       make -j ${PROCS_INSTALL} VERBOSE=1
        BUILD_IN_SOURCE     1
        INSTALL_COMMAND     make install
        DEPENDS             LAPACK
        LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
    )
    EXTERNALPROJECT_ADD_STEP(
        HYPRE
        pre-configure
        COMMAND             ${CMAKE_COMMAND} -E copy_directory "${HYPRE_CMAKE_SOURCE_DIR}/src" "HYPRE-tmp" 
        COMMAND             ${CMAKE_COMMAND} -E remove_directory "${HYPRE_CMAKE_SOURCE_DIR}"
        COMMAND             ${CMAKE_COMMAND} -E rename "HYPRE-tmp" "${HYPRE_CMAKE_SOURCE_DIR}"
        COMMENT             ""
        DEPENDEES           download update
        DEPENDERS           configure
        WORKING_DIRECTORY   "${HYPRE_CMAKE_SOURCE_DIR}/.."
        LOG                 0
    )
    ADD_TPL_SAVE_LOGS( HYPRE )
    ADD_TPL_CLEAN( HYPRE )
ELSE()
    ADD_TPL_EMPTY( HYPRE )
ENDIF()


