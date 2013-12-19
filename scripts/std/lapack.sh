#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

echo "Building ${LAPACK_VERSION} ..."

export LAPACK_DIR=${TPL_INSTALL_DIR}/common/${LAPACK_VERSION}/lib
if [ ! -d "${LAPACK_DIR}" ] ; then
   mkdir -p ${LAPACK_DIR}
fi

BUILD_LOC=${PACKAGE_DIR}/lapack/${LAPACK_VERSION}_build
if [ ! -d "${BUILD_LOC}" ] ; then
   mkdir -p ${BUILD_LOC}
fi

cd ${BUILD_LOC}
cp -rf ${PACKAGE_DIR}/lapack/${LAPACK_VER}/* \
  ${PACKAGE_DIR}/lapack/${LAPACK_VERSION}_build/
# LAPACK CONFIGURE, BASED ON FISSILE BUILD
cp make.inc.example make.inc
make ${MAKE_FLAGS} blaslib lapacklib tmglib

cp blas_LINUX.a ${LAPACK_DIR}/libblas.a
cp lapack_LINUX.a ${LAPACK_DIR}/liblapack.a
cp tmglib_LINUX.a ${LAPACK_DIR}/libtmglib.a

echo "Installed: ${LAPACK_DIR}"
