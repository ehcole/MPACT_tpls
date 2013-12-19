#!/bin/bash -e

##GCC##


 if [ ! -d ${TPL_INSTALL_DIR}/toolset/gcc ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/gcc
 fi
 if [ ! -d ${PACKAGE_DIR}/gcc/${GCC_VERSION}_build ]
 then
    mkdir -p ${PACKAGE_DIR}/gcc/${GCC_VERSION}_build
 fi
 cd ${PACKAGE_DIR}/gcc/${GCC_VERSION}_build
 export BUILD_LOC=${PACKAGE_DIR}/gcc/${GCC_VERSION}_build
#GCC CONFIGURE, BASED ON FISSILE BUILD, DISALLOWING MULTILIB
    ../${GCC_VER}/configure --prefix=${TPL_INSTALL_DIR}/toolset/gcc --enable-threads=posix --enable-languages=c,c++,fortran  --disable-multilib
 make
 make install
 export GCC_DIR=${TPL_INSTALL_DIR}/toolset/gcc
 export PATH=${GCC_DIR}/bin:$PATH
 export LD_LIBRARY_PATH=${GCC_DIR}/lib64:$LD_LIBRARY_PATH
rm -rf ${BUILD_LOC}
##END GCC##
