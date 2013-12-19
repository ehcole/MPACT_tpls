#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

export CC_BASE=gcc
export CXX_BASE=g++
export FC_BASE=gfortran

# ToDo: Generalize the compilers!

echo "Installing ${SILO_VERSION} ..."

export BUILD_LOC=${PACKAGE_DIR}/silo/${SILO_VERSION}_build
if [ ! -d "${BUILD_LOC}" ] ; then
   mkdir -p ${BUILD_LOC}
fi

cd ${BUILD_LOC}

COMMON_ARGS="CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${SILO_DIR} --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib"
if [ $METHOD == opt ] ; then
  echo "Configuring opt version ..."
  ../${SILO_VER}/configure ${COMMON_ARGS} --disable-debug CFLAGS="-O2 -fPIC" CXXFLAGS="-O2 -fPIC" FCFLAGS="-O2 -fPIC"
else
  echo "Configuring dbg version ..."
  ../${SILO_VER}/configure ${COMMON_ARGS} --enable-debug CFLAGS="-g -fPIC" CXXFLAGS="-g -fPIC" FCFLAGS="-g -fPIC"
fi
make ${MAKE_FLAGS}
make install

echo "Installed ${SILO_DIR}"