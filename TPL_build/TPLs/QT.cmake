# This will configure and build qt
# User can configure the source path by speficfying QT_SRC_DIR

IF ( NOT QT_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify QT_SRC_DIR")
ENDIF()

MESSAGE("   QT_SRC_DIR = ${QT_SRC_DIR}")
FILE(MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/qt")

IF ( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" )
    SET(CONFIGURE_OPTIONS -debug )
ELSEIF ( ${CMAKE_BUILD_TYPE} STREQUAL "Release" )
    SET(CONFIGURE_OPTIONS -release )
ELSE()
    MESSAGE ( FATAL_ERROR "Unknown CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}" )
ENDIF()
IF ( ENABLE_SHARED AND ENABLED_STATIC )
    MESSAGE(FATAL_ERROR "Compiling qt with both static and shared libraries is not yet supported")
ELSEIF ( ENABLE_SHARED )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --shared )
ELSEIF ( ENABLE_STATIC )
    SET( CONFIGURE_OPTIONS ${CONFIGURE_OPTIONS} --static )
ENDIF()


EXTERNALPROJECT_ADD(
    QT
    SOURCE_DIR          "${QT_SRC_DIR}"
    UPDATE_COMMAND      ""
    BUILD_IN_SOURCE     0
    CONFIGURE_COMMAND   ${QT_SRC_DIR}/configure --prefix=${CMAKE_INSTALL_PREFIX}/qt -opensource -confirm-license -no-webkit -no-multimedia ${CONFIGURE_OPTIONS} 
    BUILD_COMMAND       make all ${ENV_VARS} -j ${PROCS_INSTALL} && make install
    INSTALL_COMMAND     "cd ${CMAKE_INSTALL_PREFIX}/qt && ln -s libQtCore.prl libQtCore_debug.prl && ln -s libQtTest.prl libQtTest_debug.prl && ln -s libQtXml.prl libQtXml_debug.prl && ln -s libQtSql.prl libQtSql_debug.prl && ln -s libQtCore.a libQtCore_debug.a && ln -s libQtTest.a libQtTest_debug.a && ln -s libQtXml.a libQtXml_debug.a && ln -s libQtSql.a libQtSql_debug.a"
)


