# This will configure and build qt
# User can configure the source path by speficfying QT_SRC_DIR,
#    the download path by specifying QT_URL, or the installed 
#    location by specifying QT_INSTALL_DIR


# Intialize download/src/install vars
SET( QT_BUILD_DIR "${CMAKE_BINARY_DIR}/QT-prefix/src/QT-build" )
IF ( QT_URL ) 
    MESSAGE_TPL("   QT_URL = ${QT_URL}")
    SET( QT_CMAKE_URL            "${QT_URL}"     )
    SET( QT_CMAKE_DOWNLOAD_DIR   "${QT_BUILD_DIR}" )
    SET( QT_CMAKE_SOURCE_DIR     "${QT_BUILD_DIR}" )
    SET( QT_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/vera_cs/qt-${QT_VERSION}" )
    SET( CMAKE_BUILD_QT TRUE )
ELSEIF ( QT_SRC_DIR )
    VERIFY_PATH("${QT_SRC_DIR}")
    MESSAGE_TPL("   QT_SRC_DIR = ${QT_SRC_DIR}")
    SET( QT_CMAKE_URL            "${QT_SRC_DIR}"   )
    SET( QT_CMAKE_DOWNLOAD_DIR   "${QT_BUILD_DIR}" )
    SET( QT_CMAKE_SOURCE_DIR     "${QT_BUILD_DIR}" )
    SET( QT_CMAKE_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/vera_cs/qt-${QT_VERSION}" )
    SET( CMAKE_BUILD_QT TRUE )
ELSEIF ( QT_INSTALL_DIR ) 
    SET( QT_CMAKE_INSTALL_DIR "${QT_INSTALL_DIR}" )
    SET( CMAKE_BUILD_QT FALSE )
ELSE()
    MESSAGE(FATAL_ERROR "Please specify QT_SRC_DIR, QT_URL, or QT_INSTALL_DIR")
ENDIF()
SET( QT_INSTALL_DIR "${QT_CMAKE_INSTALL_DIR}" )
MESSAGE_TPL( "   QT_INSTALL_DIR = ${QT_INSTALL_DIR}" )
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "SET(QT_INSTALL_DIR \"${QT_INSTALL_DIR}\")\n" )


# Configure qt
IF ( CMAKE_BUILD_QT )
    SET( CONFIGURE_OPTIONS )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --prefix=${QT_CMAKE_INSTALL_DIR} )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -opensource -confirm-license )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -no-webkit -no-multimedia )
    IF ( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -debug )
    ELSEIF ( ${CMAKE_BUILD_TYPE} STREQUAL "Release" )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -release )
    ELSE()
        MESSAGE ( FATAL_ERROR "Unknown CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}" )
    ENDIF()
    IF ( ENABLE_SHARED AND ENABLE_STATIC )
        MESSAGE(FATAL_ERROR "Compiling qt with both static and shared libraries is not yet supported")
    ELSEIF ( ENABLE_SHARED )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --shared )
        SET( SUFFIX so )
    ELSEIF ( ENABLE_STATIC )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --static )
        SET( SUFFIX a)
    ENDIF()

    IF( USING_GCC )
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -platform linux-g++ )
    ELSEIF( (${CMAKE_C_COMPILER_ID} MATCHES "Intel") OR (${CMAKE_CXX_COMPILER_ID} MATCHES "Intel") ) 
        SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} -platform linux-icc )
    ELSE()
        MESSAGE(WARNING "QT platform not set")
    ENDIF()

    SET( QT_ENV_VARS CC=${CC_SERIAL} )
    #SET( QT_ENV_VARS ${QT_ENV_VARS} CFLAGS=${CMAKE_C_FLAGS} )
    SET( QT_ENV_VARS ${QT_ENV_VARS} CXX=${CXX_SERIAL} )
    #SET( QT_ENV_VARS ${QT_ENV_VARS} CXXFLAGS=${CMAKE_CXX_FLAGS} )
    SET( QT_ENV_VARS ${QT_ENV_VARS} FC=${FC_SERIAL} )
    #SET( QT_ENV_VARS ${QT_ENV_VARS} FCFLAGS=${CMAKE_Fortran_FLAGS} )
    #SET( QT_ENV_VARS ${QT_ENV_VARS} LDFLAGS=${ENV_LDFLAGS} )
ENDIF()


# Build qt
IF ( CMAKE_BUILD_QT )
    EXTERNALPROJECT_ADD( 
        QT
        URL                 "${QT_CMAKE_URL}"
        DOWNLOAD_DIR        "${QT_CMAKE_DOWNLOAD_DIR}"
        SOURCE_DIR          "${QT_CMAKE_SOURCE_DIR}"
        UPDATE_COMMAND      ""
        BUILD_IN_SOURCE     1
        CONFIGURE_COMMAND   ./configure ${CONFIGURE_OPTIONS} 
        BUILD_COMMAND       make ${QT_ENV_VARS} -j ${PROCS_INSTALL} VERBOSE=1
        INSTALL_COMMAND     make install
        LOG_DOWNLOAD 1   LOG_UPDATE 1   LOG_CONFIGURE 1   LOG_BUILD 1   LOG_TEST 1   LOG_INSTALL 1
    )
    EXTERNALPROJECT_ADD_STEP(
        QT
        link
        COMMAND             ln -sf libQtCore.prl libQtCore_debug.prl 
        COMMAND             ln -sf libQtTest.prl libQtTest_debug.prl
        COMMAND             ln -sf libQtXml.prl  libQtXml_debug.prl 
        COMMAND             ln -sf libQtSql.prl  libQtSql_debug.prl
        COMMAND             ln -sf libQtCore.${SUFFIX} libQtCore_debug.${SUFFIX}
        COMMAND             ln -sf libQtTest.${SUFFIX} libQtTest_debug.${SUFFIX}
        COMMAND             ln -sf libQtXml.${SUFFIX} libQtXml_debug.${SUFFIX}
        COMMAND             ln -sf libQtSql.${SUFFIX} libQtSql_debug.${SUFFIX}
        COMMENT             ""
        DEPENDEES           install
        WORKING_DIRECTORY   "${QT_CMAKE_INSTALL_DIR}/lib"
        LOG                 0
    )
    ADD_TPL_SAVE_LOGS( QT )
    ADD_TPL_CLEAN( QT )
ELSE()
    ADD_TPL_EMPTY( QT )
ENDIF()


