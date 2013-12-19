# This script must be sourced!

#
# common
#

# LAPACK
if [ "${LAPACK_LIBS}" == "" -a "${BLAS_LIBS}" == ""  ] ; then
  export LAPACK_VER=3.3.1
  export LAPACK_VERSION=lapack-${LAPACK_VER}
  export LAPACK_DIR=${TPL_INSTALL_DIR}/common/${LAPACK_VERSION}/lib

  export BLAS_LIBS=${LAPACK_DIR}/libblas.a
  export LAPACK_LIBS=${LAPACK_DIR}/liblapack.a
fi

# Boost
export BOOST_VER=1.49.0
export BOOST_VERSION=boost-${BOOST_VER}
export BOOST_DIR=${TPL_INSTALL_DIR}/common/${BOOST_VERSION}

# Zlib
export ZLIB_VER=1.2.5-patched
export ZLIB_VERSION=zlib-${ZLIB_VER}
export ZLIB_DIR=${TPL_INSTALL_DIR}/common/${ZLIB_VERSION}

# MOAB
export MOAB_VER=4.5.0
export MOAB_VERSION=moab-${MOAB_VER}
export MOAB_DIR=${TPL_INSTALL_DIR}/common/${MOAB_VERSION}

# HYPRE
export HYPRE_VER=2.8.0b
export HYPRE_VERSION=hypre-${HYPRE_VER}
if [ "${HYPRE_DIR}" == "" ] ; then
  export HYPRE_DIR=${TPL_INSTALL_DIR}/common/${HYPRE_VERSION}
fi
export HYPRE_LIB=${HYPRE_DIR}/lib/libHYPRE.a

# PETSC
export PETSC_VER=3.3-p4
export PETSC_VERSION=petsc-${PETSC_VER}
if [ "${PETSC_DIR}" == "" ] ; then
  export PETSC_DIR=${TPL_INSTALL_DIR}/common/${PETSC_VERSION}
fi

#
# vera_cs
#

# HDF5
export HDF5_VER=1.8.7
export HDF5_VERSION=hdf5-${HDF5_VER}
export HDF5_DIR=${TPL_INSTALL_DIR}/vera_cs/${HDF5_VERSION}

# SILO
export SILO_VER=4.8
export SILO_VERSION=silo-${SILO_VER}
export SILO_DIR=${TPL_INSTALL_DIR}/vera_cs/${SILO_VERSION}

# QT
export QT_VER=4.8.2
export QT_VERSION=qt-everywhere-opensource-src-${QT_VER}
export QT_DIR=${TPL_INSTALL_DIR}/vera_cs/qt-${QT_VER}
