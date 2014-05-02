# This will configure and build boost
# User can configure the source path by speficfying BOOST_SRC_DIR,
#    the download path by specifying BOOST_URL, or the installed 
#    location by specifying BOOST_INSTALL_DIR


# Intialize download/src/install vars
SET( BOOST_BUILD_DIR "${CMAKE_BINARY_DIR}/BOOST-prefix/src/BOOST-build" )
IF ( BOOST_URL ) 
    MESSAGE_TPL("   BOOST_URL = ${BOOST_URL}")
    SET( BOOST_CMAKE_URL            "${BOOST_URL}"       )
    SET( BOOST_CMAKE_DOWNLOAD_DIR   "${BOOST_BUILD_DIR}" )
    SET( BOOST_CMAKE_SOURCE_DIR     "${BOOST_BUILD_DIR}" )
    SET( BOOST_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/boost" )
    SET( CMAKE_BUILD_BOOST TRUE )
ELSEIF ( BOOST_SRC_DIR )
    VERIFY_PATH("${BOOST_SRC_DIR}")
    MESSAGE_TPL("   BOOST_SRC_DIR = ${BOOST_SRC_DIR}")
    SET( BOOST_CMAKE_URL            "${BOOST_SRC_DIR}"   )
    SET( BOOST_CMAKE_DOWNLOAD_DIR   "${BOOST_BUILD_DIR}" )
    SET( BOOST_CMAKE_SOURCE_DIR     "${BOOST_BUILD_DIR}" )
    SET( BOOST_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/boost" )
    SET( CMAKE_BUILD_BOOST TRUE )
ELSEIF ( BOOST_INSTALL_DIR ) 
    SET( BOOST_CMAKE_INSTALL_DIR "${BOOST_INSTALL_DIR}" )
    SET( CMAKE_BUILD_BOOST FALSE )
ELSE()
    MESSAGE(FATAL_ERROR "Please specify BOOST_SRC_DIR, BOOST_URL, or BOOST_INSTALL_DIR")
ENDIF()
SET( BOOST_INSTALL_DIR "${BOOST_CMAKE_INSTALL_DIR}" )
MESSAGE_TPL( "   BOOST_INSTALL_DIR = ${BOOST_INSTALL_DIR}" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(BOOST_INSTALL_DIR \"${BOOST_INSTALL_DIR}\")\n" )


# Configure boost
IF ( CMAKE_BUILD_BOOST ) 
    SET( BUILD_OPTIONS )
    SET( CONFIGURE_OPTIONS )
    IF ( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" )
        SET(CONFIGURE_OPTIONS debug )
    ELSEIF ( ${CMAKE_BUILD_TYPE} STREQUAL "Release" )
        SET(CONFIGURE_OPTIONS release )
    ELSE()
        MESSAGE( FATAL_ERROR "Unknown CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}" )
    ENDIF()
    IF ( ENABLE_SHARED AND ENABLE_STATIC )
        MESSAGE(FATAL_ERROR "Compiling boost with both static and shared libraries is not yet supported")
    ELSEIF ( ENABLE_SHARED )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} link=shared )
    ELSEIF ( ENABLE_STATIC )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} link=static )
    ENDIF()

    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --with-libraries= )

    IF( USING_GCC )
        SET( TOOLSET gcc )
    ELSEIF( MSVC OR MSVC_IDE OR MSVC60 OR MSVC70 OR MSVC71 OR MSVC80 OR CMAKE_COMPILER_2005 OR MSVC90 OR MSVC10 )
        SET( TOOLSET msvc )
    ELSEIF( (${CMAKE_C_COMPILER_ID} MATCHES "Intel") OR (${CMAKE_CXX_COMPILER_ID} MATCHES "Intel") ) 
        SET( TOOLSET intel-linux )
    ELSE()
        MESSAGE(FATAL_ERROR "BOOST toolset not set")
    ENDIF()

    SET( BUILD_OPTIONS ${BUILD_OPTIONS} -sNO_BZIP2=1 --without-mpi --without-python ) 
    #SET( BUILD_OPTIONS ${BUILD_OPTIONS} -s"NO_BZIP2=1" ) 
    #SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -d0  )
    #SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --without-mpi --without-python )
ENDIF()


# Build boost
IF ( CMAKE_BUILD_BOOST ) 
    IF ( BOOST_ONLY_COPY_HEADERS )
        EXTERNALPROJECT_ADD(
            BOOST
            URL                 "${BOOST_CMAKE_URL}"
            DOWNLOAD_DIR        "${BOOST_CMAKE_DOWNLOAD_DIR}"
            SOURCE_DIR          "${BOOST_CMAKE_SOURCE_DIR}"
            UPDATE_COMMAND      ""
            CONFIGURE_COMMAND   ls  "${BOOST_CMAKE_SOURCE_DIR}"
            BUILD_COMMAND       ""
            BUILD_IN_SOURCE     0
            INSTALL_COMMAND     ${CMAKE_COMMAND} -E copy_directory "${BOOST_CMAKE_SOURCE_DIR}/include"
                                "${BOOST_CMAKE_INSTALL_DIR}/include"
            WORKING_DIRECTORY   "${BOOST_CMAKE_SOURCE_DIR}"
            LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
        )
    ELSE()
        EXTERNALPROJECT_ADD(
            BOOST
            URL                 "${BOOST_CMAKE_URL}"
            DOWNLOAD_DIR        "${BOOST_CMAKE_DOWNLOAD_DIR}"
            SOURCE_DIR          "${BOOST_CMAKE_SOURCE_DIR}"
            UPDATE_COMMAND      ""
            CONFIGURE_COMMAND   ./bootstrap.sh --with-toolset=${TOOLSET} ${CONFIGURE_OPTIONS} --prefix=${BOOST_CMAKE_INSTALL_DIR}
            BUILD_COMMAND       ./b2 install ${BUILD_OPTIONS} -j ${PROCS_INSTALL}
            BUILD_IN_SOURCE     1
            INSTALL_COMMAND     ""
            #DEPENDS ZLIB
            LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
        )
    ENDIF()
    ADD_TPL_SAVE_LOGS( BOOST )
ELSE()
    ADD_TPL_EMPTY( BOOST )
ENDIF()
ADD_TPL_CLEAN( BOOST )


