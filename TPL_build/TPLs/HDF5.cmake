# This will configure and build hdf5
# User can configure the source path by speficfying HDF5_SRC_DIR

IF ( NOT HDF5_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify HDF5_SRC_DIR")
ENDIF()


MESSAGE("   HDF5_SRC_DIR = ${HDF5_SRC_DIR}")
FILE(MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/hdf5")


IF ( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" )
    SET(CONFIGURE_OPTIONS --disable-production --enable-debug )
ELSEIF ( ${CMAKE_BUILD_TYPE} STREQUAL "Release" )
    SET(CONFIGURE_OPTIONS --enable-production --disable-debug )
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

EXTERNALPROJECT_ADD(
    HDF5
    SOURCE_DIR          "${HDF5_SRC_DIR}"
    UPDATE_COMMAND      ""
    CONFIGURE_COMMAND   ${HDF5_SRC_DIR}/configure --prefix=${CMAKE_INSTALL_PREFIX}/hdf5 ${CONFIGURE_OPTIONS}  ${ENV_VARS}
    BUILD_COMMAND       make install -j ${PROCS_INSTALL}
    BUILD_IN_SOURCE     0
    INSTALL_COMMAND     ""
)

