#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

echo "Building ${HDF5_VERSION} ..."

export BUILD_LOC=${PACKAGE_DIR}/hdf5/${HDF5_VERSION}_build
if [ ! -d "${BUILD_LOC}" ] ; then
   mkdir -p ${BUILD_LOC}
fi

cd ${BUILD_LOC}

echo "Configuring ${HDF5_VERSION} ..."
COMMON_OPTIONS="--prefix=${HDF5_DIR} --enable-static --enable-shared --enable-cxx --enable-fortran --disable-parallel --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib"
if [ $METHOD == opt ] ; then 
  ../${HDF5_VER}/configure ${COMMON_OPTIONS} --enable-production --disable-debug
else
  ../${HDF5_VER}/configure ${COMMON_OPTIONS} --disable-production --enable-debug
fi

echo "Building ${HDF5_VERSION} ..."
make ${MAKE_FLAGS}
make install

echo "Installed ${HDF5_DIR}"


