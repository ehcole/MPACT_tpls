# Set some CMake properties    
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)


MESSAGE("================")
MESSAGE("Configuring TPLS")
MESSAGE("================")


# Set the project name
PROJECT( TPLs )

# Enable the required compilers
ENABLE_LANGUAGE(C)
ENABLE_LANGUAGE(CXX)
ENABLE_LANGUAGE(Fortran)

# Include CMake files
INCLUDE(ExternalProject)
INCLUDE(macros.cmake)

# SET the global compile and link flags
IDENTIFY_COMPILER()
SET_COMPILE_FLAGS()

# Set TPL src directories
SET( TPL_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/.. )
SET( LAPACK_SRC_DIR     ${TPL_SRC_DIR}/lapack/3.3.1         )
SET( ZLIB_SRC_DIR       ${TPL_SRC_DIR}/zlib/1.2.7           )
SET( BOOST_SRC_DIR      ${TPL_SRC_DIR}/boost/1.55.0         )
SET( HDF5_SRC_DIR       ${TPL_SRC_DIR}/hdf5/1.8.9           )
SET( SILO_SRC_DIR       ${TPL_SRC_DIR}/silo/4.8             )
SET( HYPRE_SRC_DIR      ${TPL_SRC_DIR}/hypre/2.8.0b/src     )
SET( SPRNG_SRC_DIR      ${TPL_SRC_DIR}/sprng/0.5            )
SET( ML_SRC_DIR         ${TPL_SRC_DIR}/ml/6.2               )
SET( ML_TAR             ${TPL_SRC_DIR}/ml/ml-6.2.tar.gz     )
SET( PETSC_SRC_DIR      ${TPL_SRC_DIR}/petsc/3.3-p4         )
SET( TRILINOS_SRC_DIR   ${TPL_SRC_DIR}/trilinos/10.6.4      )
SET( CHACO_SRC_DIR      ${TPL_SRC_DIR}/chaco/2.2-patched    )
SET( EXODUSII_SRC_DIR   ${TPL_SRC_DIR}/exodusii/5.14-patched/exodus )
SET( NEMESIS_SRC_DIR    ${TPL_SRC_DIR}/exodusii/5.14-patched/nemesis )
SET( NETCDF_SRC_DIR     ${TPL_SRC_DIR}/netcdf/4.2           )
SET( PARMETIS_SRC_DIR   ${TPL_SRC_DIR}/parmetis/4.0.2-patched )
SET( QT_SRC_DIR         ${TPL_SRC_DIR}/qt/4.8.2             )
SET( MOAB_SRC_DIR       ${TPL_SRC_DIR}/moab/4.5.0           )

# Configure TPLs
FOREACH( TPL ${TPL_LIST} )
    MESSAGE("Configuring ${TPL}")
    INCLUDE(TPLs/${TPL}.cmake)
ENDFOREACH()





