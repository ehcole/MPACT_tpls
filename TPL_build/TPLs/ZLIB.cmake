# This will configure and build zlib
# User can configure the source path by speficfying ZLIB_SRC_DIR
#    the download path by specifying ZLIB_URL, or the installed 
#    location by specifying ZLIB_INSTALL_DIR


# Intialize download/src/install vars
SET( ZLIB_BUILD_DIR "${CMAKE_BINARY_DIR}/ZLIB-prefix/src/ZLIB-build" )
IF ( ZLIB_URL ) 
    MESSAGE_TPL("   ZLIB_URL = ${ZLIB_URL}")
    SET( ZLIB_CMAKE_URL            "${ZLIB_URL}"        )
    SET( ZLIB_CMAKE_DOWNLOAD_DIR   "${ZLIB_BUILD_DIR}"  )
    SET( ZLIB_CMAKE_SOURCE_DIR     "${ZLIB_BUILD_DIR}"  )
    SET( ZLIB_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/common/zlib-${ZLIB_VERSION}-patched" )
    SET( CMAKE_BUILD_ZLIB TRUE )
ELSEIF ( ZLIB_SRC_DIR )
    VERIFY_PATH("${ZLIB_SRC_DIR}")
    MESSAGE_TPL("   ZLIB_SRC_DIR = ${ZLIB_SRC_DIR}")
    SET( ZLIB_CMAKE_URL                                 )
    SET( ZLIB_CMAKE_DOWNLOAD_DIR                        )
    SET( ZLIB_CMAKE_SOURCE_DIR     "${ZLIB_SRC_DIR}"    )
    SET( ZLIB_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/common/zlib-${ZLIB_VERSION}-patched" )
    SET( CMAKE_BUILD_ZLIB TRUE )
ELSEIF ( ZLIB_INSTALL_DIR ) 
    SET( ZLIB_CMAKE_INSTALL_DIR "${ZLIB_INSTALL_DIR}" )
    SET( CMAKE_BUILD_ZLIB FALSE )
ELSE()
    MESSAGE(FATAL_ERROR "Please specify ZLIB_SRC_DIR, ZLIB_URL, or ZLIB_INSTALL_DIR")
ENDIF()
FILE( MAKE_DIRECTORY "${ZLIB_CMAKE_INSTALL_DIR}" )
SET( ZLIB_INSTALL_DIR "${ZLIB_CMAKE_INSTALL_DIR}" )
MESSAGE_TPL( "   ZLIB_INSTALL_DIR = ${ZLIB_INSTALL_DIR}" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(ZLIB_INSTALL_DIR \"${ZLIB_INSTALL_DIR}\")\n" )


# Build zlib
IF ( CMAKE_BUILD_ZLIB ) 
    EXTERNALPROJECT_ADD(
        ZLIB
        URL                 "${ZLIB_CMAKE_URL}"
        DOWNLOAD_DIR        "${ZLIB_CMAKE_DOWNLOAD_DIR}"
        SOURCE_DIR          "${ZLIB_SRC_DIR}"
        UPDATE_COMMAND      ""
        BUILD_IN_SOURCE     0
        INSTALL_DIR         "${ZLIB_INSTALL_DIR}"
        CMAKE_ARGS          "${CMAKE_ARGS};-DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}/zlib"
        BUILD_COMMAND       make install -j ${PROCS_INSTALL} VERBOSE=1
        LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
    )
    SET( ZLIB_INCLUDE_DIR "${ZLIB_INSTALL_DIR}/include")
    SET( ZLIB_LIB_DIR "${ZLIB_INSTALL_DIR}/lib")
    ADD_TPL_SAVE_LOGS( ZLIB )
    ADD_TPL_CLEAN( ZLIB )
ELSE()
    VERIFY_PATH( "${ZLIB_INSTALL_DIR}" )
    IF ( NOT ZLIB_INCLUDE_DIR )
        SET( ZLIB_INCLUDE_DIR "${ZLIB_INSTALL_DIR}" )
        IF ( EXISTS "${ZLIB_INCLUDE_DIR}/include" )
            SET( ZLIB_LIB_DIR "${ZLIB_INCLUDE_DIR}/include" )
        ENDIF()
    ENDIF()
    IF ( NOT ZLIB_LIB_DIR )
        SET( ZLIB_LIB_DIR "${ZLIB_INSTALL_DIR}" )
        IF ( EXISTS "${ZLIB_INSTALL_DIR}/lib" )
            SET( ZLIB_LIB_DIR "${ZLIB_INSTALL_DIR}/lib" )
        ENDIF()
    ENDIF()
    IF ( ENABLE_STATIC ) 
        FIND_LIBRARY( ZLIB_LIBRARY    NAMES libz.a     PATHS "${ZLIB_LIB_DIR}"  NO_DEFAULT_PATH )
    ELSEIF( ENABLE_SHARED ) 
        FIND_LIBRARY( ZLIB_LIBRARY    NAMES libz.so    PATHS "${ZLIB_LIB_DIR}"  NO_DEFAULT_PATH )
    ELSE()
        MESSAGE(FATAL_ERROR "Both static and shared libraries are disabled")
    ENDIF()
    IF ( NOT ZLIB_LIBRARY )
        MESSAGE(FATAL_ERROR "No sutable zlib library found in ${ZLIB_INSTALL_DIR}")
    ENDIF()
    ADD_TPL_EMPTY( ZLIB )
ENDIF()
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(ZLIB_INCLUDE_DIR \"${ZLIB_INCLUDE_DIR}\")\n" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(ZLIB_LIB_DIR \"${ZLIB_LIB_DIR}\")\n" )


