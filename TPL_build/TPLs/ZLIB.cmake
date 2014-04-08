# This will configure and build zlib
# User can configure the source path by speficfying ZLIB_SRC_DIR

IF ( NOT ZLIB_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify ZLIB_SRC_DIR")
ENDIF()

MESSAGE("   ZLIB_SRC_DIR = ${ZLIB_SRC_DIR}")
FILE(MAKE_DIRECTORY "${CMAKE_INSTALL_PREFIX}/zlib")


EXTERNALPROJECT_ADD(
    ZLIB
    SOURCE_DIR          "${ZLIB_SRC_DIR}"
    UPDATE_COMMAND      ""
    BUILD_IN_SOURCE     0
    INSTALL_DIR         ${CMAKE_INSTALL_PREFIX}/zlib
    CMAKE_ARGS          "${CMAKE_ARGS};-DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}/zlib"
    BUILD_COMMAND       make install -j ${PROCS_INSTALL}
)

