#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

echo "Installing ${PETSC_VERSION} ..."

BUILD_LOC=${PACKAGE_DIR}/petsc/${PETSC_VER}_build
if [ ! -d "${BUILD_LOC}" ] ; then
  mkdir -p ${BUILD_LOC}
fi

if [ "${PETSC_SKIP_SOURCE_COPY}" -eq "1" ]; then
  echo "Skipping copy of source to ${BUILD_LOC}/ ..."
else
  echo "Copying source to ${BUILD_LOC}/ ..."
  cp -rf ${PACKAGE_DIR}/petsc/${PETSC_VER}/* ${BUILD_LOC}/
fi
mkdir -p ${PETSC_DIR}/linux-gnu-c-opt
cd ${BUILD_LOC}/

echo "Configuring ${BUILD_LOC}/ ... using ${HYPRE_DIR} hypre build loc"

PETSC_ARCH=
LAPACK_DIR=/opt/intel/Compiler/composerxe-2011.4.191/mkl/lib/intel64
./configure \
PETSC_DIR=${BUILD_LOC} \
VERBOSE=1 \
--prefix=${PETSC_DIR}_mod \
--CFLAGS="-fPIC" \
--CXXFLAGS="-fPIC" \
--FFLAGS="-fPIC" \
--with-opt=0 \
--with-debugging=1 \
--with-batch=0 \
--with-hypre-include=${HYPRE_DIR}/include  \
--with-hypre-lib=${HYPRE_DIR}/lib/libHYPRE.a \
--with-shared-libraries=0 \
--with-x=0 \
--with-pthread=0 \
--with-known-mpi-shared=0 \
--with-blas-lib=[$LAPACK_DIR/libmkl_blas95_lp64.a,$LAPACK_DIR/libmkl_lapack95_lp64.a,$LAPACK_DIR/libmkl_intel_lp64.a,$LAPACK_DIR/libmkl_core.a,$LAPACK_DIR/libmkl_gnu_thread.a,/opt/intel/Compiler/composerxe-2011.4.191/compiler/lib/intel64/libiomp5.a] \
--with-lapack-lib=[$LAPACK_DIR/libmkl_lapack95_lp64.a,$LAPACK_DIR/libmkl_intel_lp64.a,$LAPACK_DIR/libmkl_core.a,libmkl_gnu_thread.a,/opt/intel/Compiler/composerxe-2011.4.191/compiler/lib/intel64/libiomp5.a]

#--with-blas-lib=${BLAS_LIBS} \
#--with-lapack-lib=${LAPACK_LIBS}

#--with-mpi-dir=${TPL_INSTALL_DIR}/toolset/openmpi  \

#--with-blas-lib=libblas.a \
#--with-lapack-lib=liblapack.a \
#--with-blas-dir=${LAPACK_DIR}\lib \
#--with-lapack-dir=${LAPACK_DIR}\lib

#--with-blas-lib= \
#--with-lapack-lib=

#--with-blas-lib=libblas.a \
#--with-lapack-lib=liblapack.a \

echo "Building ${BUILD_LOC}/ ..."
make ${MAKE_FLAGS} PETSC_DIR=${BUILD_LOC}

#make ${MAKE_FLAGS} PETSC_DIR=${BUILD_LOC} \
#    PETSC_ARCH=${PETSC_ARCH} test

echo "Installing from ${BUILD_LOC}/ ..."
make ${MAKE_FLAGS} PETSC_DIR=${BUILD_LOC} install

echo "Installed ${PETSC_DIR}"

# NOTE: 2013/05/30: It would seem that PETSC will go off at configure
# time and try to find a version of blas and lapack on the system if it
# fails to find the version that you point to with --with-blas-lib,
# --with-lapack-lib, --with-blas-lapack-dir, etc.  This is bad because
# it might find a different BLAS and LAPACK that will conflicit with
# another version thath might be pulled in with another TPL.  This would
# cause strange link and runtime errors.  This is very bad behavior and
# shows a lack of consideration of larger projects with many TPL
# dependencies, not just PETSC.  This is something to be carefully
# watched after in other installs of PETSC.
