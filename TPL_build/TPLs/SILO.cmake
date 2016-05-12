# This will configure and build silo
# User can configure the source path by speficfying SILO_SRC_DIR,
#    the download path by specifying SILO_URL, or the installed 
#    location by specifying SILO_INSTALL_DIR


# Intialize download/src/install vars
SET( SILO_BUILD_DIR "${CMAKE_BINARY_DIR}/SILO-prefix/src/SILO-build" )
IF ( SILO_URL ) 
    MESSAGE_TPL("   SILO_URL = ${SILO_URL}")
    SET( SILO_SRC_DIR "${CMAKE_BINARY_DIR}/SILO-prefix/src/SILO-src" )
    SET( SILO_CMAKE_URL            "${SILO_URL}"        )
    SET( SILO_CMAKE_DOWNLOAD_DIR   "${SILO_SRC_DIR}"    )
    SET( SILO_CMAKE_SOURCE_DIR     "${SILO_SRC_DIR}"    )
    SET( SILO_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/silo-${SILO_VERSION}" )
    SET( CMAKE_BUILD_SILO TRUE )
ELSEIF ( SILO_SRC_DIR )
    VERIFY_PATH("${SILO_SRC_DIR}")
    MESSAGE_TPL("   SILO_SRC_DIR = ${SILO_SRC_DIR}")
    SET( SILO_CMAKE_URL            ""                   )
    SET( SILO_CMAKE_DOWNLOAD_DIR   ""                   )
    SET( SILO_CMAKE_SOURCE_DIR     "${SILO_SRC_DIR}"    )
    SET( SILO_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/silo-${SILO_VERSION}" )
    #SET( CMAKE_BUILD_SILO TRUE )
ELSEIF ( SILO_INSTALL_DIR ) 
    SET( SILO_CMAKE_INSTALL_DIR "${SILO_INSTALL_DIR}" )
    SET( CMAKE_BUILD_SILO FALSE )
ELSE()
    MESSAGE(FATAL_ERROR "Please specify SILO_SRC_DIR, SILO_URL, or SILO_INSTALL_DIR")
ENDIF()
IF(BUILD_SERIAL_TPLS)
SET( SILO_INSTALL_DIR "${SILO_CMAKE_INSTALL_DIR}_serial" )
MESSAGE_TPL( "   SILO_INSTALL_DIR = ${SILO_INSTALL_DIR}_serial" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(SILO_INSTALL_DIR \"${SILO_INSTALL_DIR}_serial\")\n" )


# Configure silo
IF ( CMAKE_BUILD_SILO )
    SET( CONFIGURE_OPTIONS )
    LIST(APPEND CONFIGURE_OPTIONS --prefix=${CMAKE_INSTALL_PREFIX}/silo-${SILO_VERSION}_serial  )
    LIST(APPEND CONFIGURE_OPTIONS --with-hdf5=${HDF5_INSTALL_DIR}/include,${HDF5_INSTALL_DIR}/lib )
    IF (ENABLE_SHARED)
        LIST(APPEND CONFIGURE_OPTIONS --disable-static --enable-shared)
        #LIST(APPEND CONFIGURE_OPTIONS --enable-static=no --enable-shared=yes)
    ELSE()
        LIST(APPEND CONFIGURE_OPTIONS --enable-static --disable-shared)
        #LIST(APPEND CONFIGURE_OPTIONS --enable-static=yes --enable-shared=no)
    ENDIF()
ENDIF()
SET(BUILD_FLAGS "-O3 -fPIC")
SET(ENV_SERIAL_VARS CC=gcc "CFLAGS=${BUILD_FLAGS}" CXX=g++ "CXXFLAGS=${BUILD_FLAGS}" F77=g77 "FFLAGS=${BUILD_FLAGS}" FC=gfortran "FCFLAGS=${BUILD_FLAGS}" LDFLAGS= )

# Build silo
IF ( CMAKE_BUILD_SILO )
    EXTERNALPROJECT_ADD(
        SILO
        URL                 "${SILO_CMAKE_URL}"
        DOWNLOAD_DIR        "${SILO_CMAKE_DOWNLOAD_DIR}"
        SOURCE_DIR          "${SILO_CMAKE_SOURCE_DIR}"
        UPDATE_COMMAND      ""
        CONFIGURE_COMMAND   "${SILO_CMAKE_SOURCE_DIR}/configure" ${CONFIGURE_OPTIONS} ${ENV_SERIAL_VARS}
        BUILD_COMMAND       make -j ${PROCS_INSTALL} VERBOSE=1
        BUILD_IN_SOURCE     0
        INSTALL_COMMAND     make install -j ${PROCS_INSTALL} VERBOSE=1
        DEPENDS             HDF5
        LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
    )
    ADD_TPL_SAVE_LOGS( SILO )
    ADD_TPL_CLEAN( SILO )
ENDIF()
ELSE()
SET( SILO_INSTALL_DIR "${SILO_CMAKE_INSTALL_DIR}" )
MESSAGE_TPL( "   SILO_INSTALL_DIR = ${SILO_INSTALL_DIR}" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(SILO_INSTALL_DIR \"${SILO_INSTALL_DIR}\")\n" )


# Configure silo
IF ( CMAKE_BUILD_SILO )
    SET( CONFIGURE_OPTIONS )
    LIST(APPEND CONFIGURE_OPTIONS --prefix=${CMAKE_INSTALL_PREFIX}/silo-${SILO_VERSION}  )
    LIST(APPEND CONFIGURE_OPTIONS --with-hdf5=${HDF5_INSTALL_DIR}/include,${HDF5_INSTALL_DIR}/lib )
    IF (ENABLE_SHARED)
        LIST(APPEND CONFIGURE_OPTIONS --disable-static --enable-shared)
        #LIST(APPEND CONFIGURE_OPTIONS --enable-static=no --enable-shared=yes)
    ELSE()
        LIST(APPEND CONFIGURE_OPTIONS --enable-static --disable-shared)
        #LIST(APPEND CONFIGURE_OPTIONS --enable-static=yes --enable-shared=no)
    ENDIF()
ENDIF()


# Build silo
IF ( CMAKE_BUILD_SILO )
    EXTERNALPROJECT_ADD(
        SILO
        URL                 "${SILO_CMAKE_URL}"
        DOWNLOAD_DIR        "${SILO_CMAKE_DOWNLOAD_DIR}"
        SOURCE_DIR          "${SILO_CMAKE_SOURCE_DIR}"
        UPDATE_COMMAND      ""
        CONFIGURE_COMMAND   "${SILO_CMAKE_SOURCE_DIR}/configure" ${CONFIGURE_OPTIONS} ${ENV_VARS}
        BUILD_COMMAND       make -j ${PROCS_INSTALL} VERBOSE=1
        BUILD_IN_SOURCE     0
        INSTALL_COMMAND     make install -j ${PROCS_INSTALL} VERBOSE=1
        DEPENDS             HDF5
        LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
    )
    ADD_TPL_SAVE_LOGS( SILO )
    ADD_TPL_CLEAN( SILO )
ENDIF()
ENDIF()
