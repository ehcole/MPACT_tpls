# This will configure and build petsc
# User can configure the source path by speficfying PETSC_SRC_DIR,
#    the download path by specifying PETSC_URL, or the installed 
#    location by specifying PETSC_INSTALL_DIR


# Intialize download/src/install vars
SET( PETSC_BUILD_DIR "${CMAKE_BINARY_DIR}/PETSC-prefix/src/PETSC-build" )
IF ( PETSC_URL ) 
    MESSAGE_TPL("   PETSC_URL = ${PETSC_URL}")
    SET( PETSC_CMAKE_URL            "${PETSC_URL}"       )
    SET( PETSC_CMAKE_DOWNLOAD_DIR   "${PETSC_BUILD_DIR}" )
    SET( PETSC_CMAKE_SOURCE_DIR     "${PETSC_BUILD_DIR}" )
    SET( PETSC_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/petsc-${PETSC_VERSION}" )
    SET( CMAKE_BUILD_PETSC TRUE )
ELSEIF ( PETSC_SRC_DIR )
    VERIFY_PATH("${PETSC_SRC_DIR}")
    MESSAGE_TPL("   PETSC_SRC_DIR = ${PETSC_SRC_DIR}")
    SET( PETSC_CMAKE_URL            "${PETSC_SRC_DIR}"   )
    SET( PETSC_CMAKE_DOWNLOAD_DIR   "${PETSC_BUILD_DIR}" )
    SET( PETSC_CMAKE_SOURCE_DIR     "${PETSC_BUILD_DIR}" )
    SET( PETSC_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/petsc-${PETSC_VERSION}" )
    #SET( CMAKE_BUILD_PETSC TRUE )
ELSEIF ( PETSC_INSTALL_DIR ) 
    SET( PETSC_CMAKE_INSTALL_DIR "${PETSC_INSTALL_DIR}" )
    SET( CMAKE_BUILD_PETSC FALSE )
ELSE()
    MESSAGE(FATAL_ERROR "Please specify PETSC_SRC_DIR, PETSC_URL, or PETSC_INSTALL_DIR")
ENDIF()
SET( PETSC_INSTALL_DIR "${PETSC_CMAKE_INSTALL_DIR}" )
MESSAGE_TPL( "   PETSC_INSTALL_DIR = ${PETSC_INSTALL_DIR}" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(PETSC_INSTALL_DIR \"${PETSC_INSTALL_DIR}\")\n" )


# Configure petsc
IF ( CMAKE_BUILD_PETSC )
    IF ( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" )
        SET( PETSC_ARCH linux-gnu-dbg )
        SET( BUILD_OPTS --with-debugging=1 )
    ELSEIF ( ${CMAKE_BUILD_TYPE} STREQUAL "Release" )
        SET( PETSC_ARCH linux-gnu-opt )
        SET( BUILD_OPTS --with-debugging=0 )
    ELSE()
        MESSAGE ( FATAL_ERROR "Unknown CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}" )
    ENDIF()
    SET( CONFIGURE_OPTIONS
      --PETSC_ARCH=${PETSC_ARCH} --PETSC_DIR=${PETSC_CMAKE_SOURCE_DIR}
      --prefix=${CMAKE_INSTALL_PREFIX}/petsc-${PETSC_VERSION}
      --with-x=0
      --with-pthread=0
      --with-hypre-dir=${CMAKE_INSTALL_PREFIX}/hypre-${HYPRE_VERSION}
      --with-batch=0
#      --with-openmp
      --with-pic=1
      ${BUILD_OPTS}
      --with-blas-lib=${BLAS_LIBS}
      --with-lapack-lib=${LAPACK_LIBS}
      "--CFLAGS=-fPIC -fopenmp ${CMAKE_C_FLAGS}" 
      "--CXXFLAGS=-fPIC -fopenmp ${CMAKE_CXX_FLAGS}" 
      "--FFLAGS=-fPIC -fopenmp ${CMAKE_Fortran_FLAGS}"
      )
    IF ( ENABLE_SHARED AND ENABLE_STATIC )
        MESSAGE(FATAL_ERROR "Compiling petsc with both static and shared libraries is not yet supported")
    ELSEIF ( ENABLE_SHARED )
      LIST(APPEND CONFIGURE_OPTIONS
        --with-shared-libraries --LDFLAGS=${CMAKE_SHARED_LINKER_FLAGS} )
    ELSEIF ( ENABLE_STATIC )
      LIST(APPEND CONFIGURE_OPTIONS
        --with-known-mpi-shared=0 --with-shared-libraries=0)
    ENDIF()
#    LIST(APPEND CONFIGURE_OPTIONS --with-dynamic-loading=0)
ENDIF()

# Build petsc
IF (CMAKE_BUILD_PETSC)

    SET(DEPENDS_ARGS)
    IF (CMAKE_BUILD_LAPACK)
      LIST(APPEND DEPENDS_ARGS  LAPACK)
    ENDIF()
    IF (CMAKE_BUILD_HYPRE)
      LIST(APPEND DEPENDS_ARGS  HYPRE)
    ENDIF()
    IF (DEPENDS_ARGS)
      SET(DEPENDS_ARGS DEPENDS ${DEPENDS_ARGS})
    ENDIF()

    PRINT_VAR(CONFIGURE_OPTIONS)
    EXTERNALPROJECT_ADD( 
        PETSC
        URL                 "${PETSC_CMAKE_URL}"
        DOWNLOAD_DIR        "${PETSC_CMAKE_DOWNLOAD_DIR}"
        SOURCE_DIR          "${PETSC_CMAKE_SOURCE_DIR}"
        UPDATE_COMMAND      ""
        CONFIGURE_COMMAND   ${PETSC_BUILD_DIR}/configure
          --prefix=${CMAKE_INSTALL_PREFIX}/petsc-${PETSC_VERSION} ${CONFIGURE_OPTIONS}
        BUILD_COMMAND       make MAKE_NP=${PROCS_INSTALL} PETSC_DIR=${PETSC_CMAKE_SOURCE_DIR}
          PETSC_ARCH=${PETSC_ARCH} VERBOSE=1
        BUILD_IN_SOURCE     1
        INSTALL_COMMAND     make PETSC_DIR=${PETSC_CMAKE_SOURCE_DIR} PETSC_ARCH=${PETSC_ARCH} install
        ${DEPENDS_ARGS}
        LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
      )

    ADD_TPL_SAVE_LOGS( PETSC )
    ADD_TPL_CLEAN( PETSC )

ENDIF()


