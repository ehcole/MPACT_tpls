#!/bin/bash -e

##LAPACK##
if [ $BUILD_LAPACK -eq "1" ]; then

 echo "Building ${LAPACK_VERSION} ..."

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/lapack/lib" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/lapack/lib
 fi
 export BUILD_LOC=${PACKAGE_DIR}/lapack/${LAPACK_VERSION}_build
 if [ ! -d "${BUILD_LOC}" ]
 then
    mkdir -p ${BUILD_LOC}
 fi
 cd ${BUILD_LOC}
 cp -r ${PACKAGE_DIR}/lapack/${LAPACK_VER}/* ${PACKAGE_DIR}/lapack/${LAPACK_VERSION}_build/
#LAPACK CONFIGURE, BASED ON FISSILE BUILD
 cp make.inc.example make.inc
 make blaslib lapacklib tmglib
 export LAPACK_DIR=${TPL_INSTALL_DIR}/toolset/lapack/lib
 cp blas_LINUX.a ${LAPACK_DIR}/libblas.a
 cp lapack_LINUX.a ${LAPACK_DIR}/liblapack.a
 cp tmglib_LINUX.a ${LAPACK_DIR}/libtmglib.a
 export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${LAPACK_DIR}/lib
fi
rm -rf ${BUILD_LOC}
##LAPACK END##
