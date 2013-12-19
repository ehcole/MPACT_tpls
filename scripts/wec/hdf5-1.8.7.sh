#!/bin/bash

export HDF5_VERSION=hdf5-1.8.7
export HDF5_VER=1.8.7

export HDF5_DIR=${TPL_INSTALL_DIR}/vera_cs/hdf5
if [ ! -d "${HDF5_DIR}" ]
then
   mkdir -p ${HDF5_DIR}
fi

export BUILD_LOC=${PACKAGE_DIR}/hdf5/${HDF5_VERSION}_build
if [ ! -d "${BUILD_LOC}" ]
then
   mkdir -p ${BUILD_LOC}
fi
cd ${BUILD_LOC}

if [ $METHOD == opt ] ; then 
  ../${HDF5_VER}/configure --prefix=${HDF5_DIR}  --enable-production --enable-static --disable-debug --enable-shared --enable-cxx --enable-fortran --disable-parallel --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib
else
  ../${HDF5_VER}/configure --prefix=${HDF5_DIR}   --disable-production --enable-static --enable-debug  --enable-shared --enable-cxx --enable-fortran --disable-parallel --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib
fi
make ${MAKE_FLAGS}
make install


