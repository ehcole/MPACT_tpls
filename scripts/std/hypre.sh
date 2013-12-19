#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

echo "Installing ${HYPRE_VERSION} ..."

BUILD_LOC=${PACKAGE_DIR}/hypre/${HYPRE_VER}_build
if [ ! -d "${BUILD_LOC}" ] ; then
  mkdir -p ${BUILD_LOC}
fi

echo "Copying source files to ${BUILD_LOC}/ ..."
cp -rf ${PACKAGE_DIR}/hypre/${HYPRE_VER}/* ${BUILD_LOC}/

if [ $METHOD == opt ] ; then 
  HYPRE_OPT_DBG_FLAGS=-O3
else
  HYPRE_OPT_DBG_FLAGS=-g -O0
fi

echo "Configuring source for ${HYPRE_VERSION} ..."
cd ${BUILD_LOC}/src 
./configure  \
--prefix=${HYPRE_DIR}  \
--with-blas-libs=[${BLAS_LIBS}] \
--with-lapack-libs=[${LAPACK_LIBS}]  \
--with-blas=yes \
--with-lapack=yes \
--with-openmp \
CC=mpicc CXX=mpicxx FC=mpif90 F77=mpif77 F90=mpif90 \
CFLAGS="$HYPRE_OPT_DBG_FLAGS -fPIC -fopenmp" \
CXXFLAGS="$HYPRE_OPT_DBG_FLAGS -fPIC -fopenmp" \
FLAGS="$HYPRE_OPT_DBG_FLAGS -fopenmp"

# ToDo: Allow generalization of the compilers above!

echo "Building and installing ${HYPRE_VERSION} ..."
make ${MAKE_FLAGS}
make install

echo "Installed ${HYPRE_DIR}"
