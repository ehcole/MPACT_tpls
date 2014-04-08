# This will configure and build lapack
# User can configure the source path by speficfying LAPACK_SRC_DIR

IF ( NOT LAPACK_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify LAPACK_SRC_DIR")
ENDIF()

MESSAGE("   LAPACK_SRC_DIR = ${LAPACK_SRC_DIR}")
FILE(MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/lapack")

EXTERNALPROJECT_ADD(
    LAPACK
    SOURCE_DIR          "${LAPACK_SRC_DIR}"
    UPDATE_COMMAND      ""
    BUILD_IN_SOURCE     0
    INSTALL_DIR         ${CMAKE_INSTALL_PREFIX}/lapack
    CMAKE_ARGS          "${CMAKE_ARGS};-DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}/lapack"
    BUILD_COMMAND       make install -j ${PROCS_INSTALL}
)

