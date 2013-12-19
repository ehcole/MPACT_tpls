#!/bin/bash -e

export COMMON_PETSC_VERSION=petsc-3.3-p4
export COMMON_PETSC_VER=3.3-p4

PETSC_DIR=${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}
if [ ! -d "${PETSC_DIR}"  ] ; then
  mkdir  -p ${PETSC_DIR}
fi

BUILD_LOC=${PACKAGE_DIR}/petsc/${COMMON_PETSC_VER}_build
if [ ! -d "${BUILD_LOC}" ] ; then
  mkdir -p ${BUILD_LOC}
fi

if [ "${PETSC_SKIP_SOURCE_COPY}" -eq "1" ]; then
  echo "Skipping copy of source to ${BUILD_LOC}/ ..."
else
  echo "Copying source to ${BUILD_LOC}/ ..."
  cp -rf ${PACKAGE_DIR}/petsc/${COMMON_PETSC_VER}/* ${BUILD_LOC}/
fi

cd ${BUILD_LOC}/

echo "Configuring ${BUILD_LOC}/ ..."
PETSC_ARCH=linux-gnu-opt
./configure \
PETSC_DIR=${BUILD_LOC} \
PETSC_ARCH=${PETSC_ARCH} \
VERBOSE=1 \
--prefix=${PETSC_DIR}/${PETSC_ARCH} \
--with-opt=1 \
--with-debugging=0 \
--with-batch=0 \
--with-hypre=${HYPRE_DIR} \
--with-shared-libraries=0 \
--with-known-mpi-shared=0 \
--with-mpi-dir=${TPL_INSTALL_DIR}/toolset/openmpi  \
--with-blas-lib=${LAPACK_DIR}/lib/libblas.a \
--with-lapack-lib=${LAPACK_DIR}/lib/liblapack.a

#--with-blas-lib=libblas.a \
#--with-lapack-lib=liblapack.a \
#--with-blas-dir=${LAPACK_DIR}\lib \
#--with-lapack-dir=${LAPACK_DIR}\lib

#--with-blas-lib= \
#--with-lapack-lib=

#--with-blas-lib=libblas.a \
#--with-lapack-lib=liblapack.a \


echo "Configuring ${BUILD_LOC}/ ..."
make ${MAKE_FLAGS} PETSC_DIR=${BUILD_LOC} \
     PETSC_ARCH=${PETSC_ARCH}
#make ${MAKE_FLAGS} PETSC_DIR=${BUILD_LOC} \
#    PETSC_ARCH=${PETSC_ARCH} test
make ${MAKE_FLAGS} PETSC_DIR=${BUILD_LOC} \
    PETSC_ARCH=${PETSC_ARCH} install

echo "Installed ${PETSC_DIR}"
