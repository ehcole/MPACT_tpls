#!/bin/bash -e

export COMMON_HYPRE_VERSION=hypre-2.8.0b
export COMMON_HYPRE_VER=2.8.0b

export COMMON_HYPRE_DIR=${TPL_INSTALL_DIR}/common/${COMMON_HYPRE_VERSION}
if [ ! -d "${COMMON_HYPRE_DIR}" ] ; then
  mkdir -p ${COMMON_HYPRE_DIR}
fi

BUILD_LOC=${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}_build
if [ ! -d "${BUILD_LOC}" ] ; then
  mkdir -p ${BUILD_LOC}
fi

echo "Copying source files to ${BUILD_LOC}/ ..."
cp -rf ${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}/* ${BUILD_LOC}/

echo "Configuring source for ${COMMON_HYPRE_VERSION} ..."
cd ${BUILD_LOC}/src 
./configure  \
--prefix=${COMMON_HYPRE_DIR}  \
--with-blas-libs=libblas.a \
--with-blas-lib-dir=${LAPACK_DIR} \
--with-lapack-libs=liblapack.a \
--with-lapack-lib-dir=${LAPACK_DIR} \
--with-blas=yes \
--with-lapack=yes \
--with-LDFLAGS=-fopenmp \
--with-openmp \
CC=mpicc CXX=mpicxx FC=mpif90 F77=mpif77 F90=mpif90 \
CFLAGS='-O3 -fopenmp -fPIC' CXXFLAGS='-O3 -fopenmp -fPIC' FFLAGS='-O3 -fopenmp'

echo "Building source for ${COMMON_HYPRE_VERSION} ..."
make ${MAKE_FLAGS}
make install
#rm -rf ${BUILD_LOC}
