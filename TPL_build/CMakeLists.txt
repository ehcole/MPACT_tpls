# Set some CMake properties
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)


MESSAGE("================")
MESSAGE("Configuring TPLS")
MESSAGE("================")


# Check if we are asking for help
IF ( HELP )
    UNSET( HELP CACHE )
    FILE(READ README.txt TMP )
    MESSAGE("")
    MESSAGE("${TMP}")
    MESSAGE(FATAL_ERROR)
ENDIF()


# Set the compilers (must be done before PROJECT)
IF ( NOT CMAKE_C_COMPILER AND C_COMPILER )
    SET( CMAKE_C_COMPILER "${C_COMPILER}" )
ENDIF()
IF ( NOT CMAKE_CXX_COMPILER AND CXX_COMPILER )
    SET( CMAKE_CXX_COMPILER "${CXX_COMPILER}" )
ENDIF()
IF ( NOT CMAKE_Fortran_COMPILER AND Fortran_COMPILER )
    SET( CMAKE_Fortran_COMPILER "${Fortran_COMPILER}" )
ELSEIF ( NOT CMAKE_Fortran_COMPILER AND FORTRAN_COMPILER )
    SET( CMAKE_Fortran_COMPILER "${FORTRAN_COMPILER}" )
ENDIF()


# Set the project name
PROJECT( TPLs )

# Set the install path
IF( PREFIX )
    SET( CMAKE_INSTALL_PREFIX ${PREFIX} )
ELSEIF( INSTALL_DIR )
    SET( CMAKE_INSTALL_PREFIX ${INSTALL_DIR} )
ELSEIF( TPL_INSTALL_DIR )
    SET( CMAKE_INSTALL_PREFIX ${TPL_INSTALL_DIR} )
ELSE( CMAKE_INSTALL_PREFIX )
    SET( CMAKE_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX} )
ENDIF()

#LEGACY DIR STRUCTURE
IF( NAME_LEGACY )
	IF(${CMAKE_BUILD_TYPE} STREQUAL "Release" OR ${CMAKE_BUILD_TYPE} STREQUAL "RELEASE" ) 
  		SET( CMAKE_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX}/tpls/opt )
        ELSEIF( ${CMAKE_BUILD_TYPE} STREQUAL "Debug" OR ${CMAKE_BUILD_TYPE} STREQUAL "DEBUG")
		SET( CMAKE_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX}/tpls/dbg ) 
	ENDIF()
ENDIF()
MESSAGE("Installing TPLs in: ${CMAKE_INSTALL_PREFIX}")

SET( BOOST_VERSION 1.55.0 )
SET( HDF5_VERSION 1.8.9   )
SET( HYPRE_VERSION 2.8.0b )
SET( LAPACK_VERSION 3.3.1 )
SET( MOAB_VERSION 4.5.0   )
SET( PETSC_VERSION 3.3-p4 )
SET( QT_VERSION 4.8.2     )
SET( SILO_VERSION 4.8     )
SET( ZLIB_VERSION 1.2.7   )

# Create a cmake file that can be included from other projects
FILE( WRITE "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "# This file sets cmake variables that specify the locations of TPLs\n")
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "# It may also include comments for record information on how the TPLs were compiled\n")


# Enable the desired languages
ENABLE_LANGUAGE(C)
ENABLE_LANGUAGE(CXX)
ENABLE_LANGUAGE(Fortran)


# Include CMake files
INCLUDE(ExternalProject)
INCLUDE(macros.cmake)


# SET the global compile and link flags
IDENTIFY_COMPILER()
SET_COMPILE_FLAGS()


# Set TPL list
IF ( NOT TPL_LIST )
    SET( TPL_LIST "BOOST;LAPACK;ZLIB;HYPRE;PETSC;HDF5;SILO;QT;MOAB" )
ENDIF()
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "\n# TPL_LIST\nSET(TPL_LIST \"${TPL_LIST}\")\n")


# Set TPL defaults
SET( TPL_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/.. )
SET_DEFAULT_TPL( BOOST  SRC_DIR  ${TPL_SRC_DIR}/boost/1.55.0 )
SET_DEFAULT_TPL( HDF5   SRC_DIR  ${TPL_SRC_DIR}/hdf5/1.8.9   )
SET_DEFAULT_TPL( HYPRE  SRC_DIR  ${TPL_SRC_DIR}/hypre/2.8.0b )
SET_DEFAULT_TPL( LAPACK SRC_DIR  ${TPL_SRC_DIR}/lapack/3.3.1 )
SET_DEFAULT_TPL( MOAB   SRC_DIR  ${TPL_SRC_DIR}/moab/4.5.0   )
SET_DEFAULT_TPL( PETSC  SRC_DIR  ${TPL_SRC_DIR}/petsc/3.3-p4 )
SET_DEFAULT_TPL( QT     SRC_DIR  ${TPL_SRC_DIR}/qt/4.8.2     )
SET_DEFAULT_TPL( SILO   SRC_DIR  ${TPL_SRC_DIR}/silo/4.8     )
SET_DEFAULT_TPL( ZLIB   SRC_DIR  ${TPL_SRC_DIR}/zlib/1.2.7   )


# Configure TPLs
FOREACH( TPL ${TPL_LIST} )
    FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "\n")
    MESSAGE_TPL("Configuring ${TPL}")
    INCLUDE(TPLs/${TPL}.cmake)
ENDFOREACH()
FILE( APPEND "${CMAKE_INSTALL_PREFIX}/TPLs.cmake" "\n")


# Add distclean
ADD_DISTCLEAN()


