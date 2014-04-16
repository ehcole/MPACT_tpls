# This will configure and build qt
# User can configure the source path by speficfying QT_SRC_DIR

IF ( NOT QT_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify QT_SRC_DIR")
ENDIF()

MESSAGE("   QT_SRC_DIR = ${QT_SRC_DIR}")
FILE(MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/qt")

SET( QT_BUILD_DIR "${CMAKE_BINARY_DIR}/QT-prefix/src/QT-build" )
SET( COPY_QT_SRC 1 )     # Copy src to a temporary directory, or build in src tree

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

IF ( COPY_QT_SRC )
    SET( QT_CMAKE_URL            "${QT_SRC_DIR}"   )
    SET( QT_CMAKE_DOWNLOAD_DIR   "${QT_BUILD_DIR}" )
    SET( QT_CMAKE_SOURCE_DIR     "${QT_BUILD_DIR}" )
ELSE()
    SET( QT_CMAKE_URL            ""   )
    SET( QT_CMAKE_DOWNLOAD_DIR   "" )
    SET( QT_CMAKE_SOURCE_DIR     "${QT_SRC_DIR}" )
ENDIF()

SET( QT_ENV_VARS CC=${CMAKE_C_COMPILER} )
#SET( QT_ENV_VARS ${QT_ENV_VARS} CFLAGS=${CMAKE_C_FLAGS} )
SET( QT_ENV_VARS ${QT_ENV_VARS} CXX=${CMAKE_CXX_COMPILER} )
#SET( QT_ENV_VARS ${QT_ENV_VARS} CXXFLAGS=${CMAKE_CXX_FLAGS} )
SET( QT_ENV_VARS ${QT_ENV_VARS} FC=${CMAKE_Fortran_COMPILER} )
#SET( QT_ENV_VARS ${QT_ENV_VARS} FCFLAGS=${CMAKE_Fortran_FLAGS} )
#SET( QT_ENV_VARS ${QT_ENV_VARS} LDFLAGS=${ENV_LDFLAGS} )

EXTERNALPROJECT_ADD(
    QT
    URL                 "${QT_CMAKE_URL}"
    DOWNLOAD_DIR        "${QT_CMAKE_DOWNLOAD_DIR}"
    SOURCE_DIR          "${QT_CMAKE_SOURCE_DIR}"
    UPDATE_COMMAND      ""
    BUILD_IN_SOURCE     1
    CONFIGURE_COMMAND   ./configure --prefix=${CMAKE_INSTALL_PREFIX}/qt -opensource -confirm-license -no-webkit -no-multimedia ${CONFIGURE_OPTIONS} 
    BUILD_COMMAND       make ${QT_ENV_VARS} -j ${PROCS_INSTALL} && make install
    #BUILD_COMMAND       make -j ${PROCS_INSTALL} && make install
    INSTALL_COMMAND     cd ${CMAKE_INSTALL_PREFIX}/qt/lib && ln -sf libQtCore.prl libQtCore_debug.prl && ln -sf libQtTest.prl libQtTest_debug.prl && ln -sf libQtXml.prl libQtXml_debug.prl && ln -sf libQtSql.prl libQtSql_debug.prl && ln -sf libQtCore.${SUFFIX} libQtCore_debug.${SUFFIX} && ln -sf libQtTest.${SUFFIX} libQtTest_debug.${SUFFIX} && ln -sf libQtXml.${SUFFIX} libQtXml_debug.${SUFFIX} && ln -sf libQtSql.${SUFFIX} libQtSql_debug.${SUFFIX}
)


