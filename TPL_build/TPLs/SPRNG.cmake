# This will configure and build sprng
# User can configure the source path by speficfying SPRNG_SRC_DIR

IF ( NOT SPRNG_SRC_DIR )
    MESSAGE(FATAL_ERROR "Please specify SPRNG_SRC_DIR")
ENDIF()

MESSAGE("   SPRNG_SRC_DIR = ${SPRNG_SRC_DIR}")


EXTERNALPROJECT_ADD(
    SPRNG
    SOURCE_DIR          "${SPRNG_SRC_DIR}"
    UPDATE_COMMAND      ""
    CONFIGURE_COMMAND   ""
    BUILD_COMMAND       ${CMAKE_COMMAND} -E copy_directory ${SPRNG_SRC_DIR} ${CMAKE_INSTALL_PREFIX}/sprng
    BUILD_IN_SOURCE     0
    INSTALL_COMMAND     ""
)

