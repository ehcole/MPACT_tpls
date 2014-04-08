# This will configure and build netcdf
# User can configure the source path by speficfying NETCDF_SRC_DIR

IF ( NOT NETCDF_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify NETCDF_SRC_DIR")
ENDIF()

MESSAGE("   NETCDF_SRC_DIR = ${NETCDF_SRC_DIR}")
FILE(MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/netcdf")

SET( NETCDF_CFLAGS "${CMAKE_C_FLAGS} -I${CMAKE_INSTALL_PREFIX}/hdf5/include -I${CMAKE_INSTALL_PREFIX}/netcdf/include" )
SET( NETCDF_LDFLAGS "${LDFLAGS} -L/${CMAKE_INSTALL_PREFIX}/hdf5/lib -L/${CMAKE_INSTALL_PREFIX}/netcdf/lib" )

IF ( ENABLE_SHARED )
    SET( CONFIGURE_OPTIONS --enable-shared )
ELSE()
    SET( CONFIGURE_OPTIONS --disable-shared )
ENDIF()
IF ( ENABLE_STATIC )
    SET( CONFIGURE_OPTIONS --enable-static )
ELSE()
    SET( CONFIGURE_OPTIONS --disable-static )
ENDIF()

EXTERNALPROJECT_ADD(
    NETCDF
    SOURCE_DIR          "${NETCDF_SRC_DIR}"
    UPDATE_COMMAND      ""
    CONFIGURE_COMMAND   ${NETCDF_SRC_DIR}/configure --prefix=${CMAKE_INSTALL_PREFIX}/netcdf --disable-examples --enable-netcdf4 --disable-dap ${CONFIGURE_OPTIONS} CC=${CMAKE_C_COMPILER} CFLAGS=${NETCDF_CFLAGS} LDFLAGS=${NETCDF_LDFLAGS}
    BUILD_COMMAND       make install -j ${PROCS_INSTALL}
    BUILD_IN_SOURCE     0
    INSTALL_COMMAND     ""
    DEPENDS             HDF5
)


