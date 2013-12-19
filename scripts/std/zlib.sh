#!/bin/bash -e

# ToDo: Replace 'gcc' with 'CXX_COMPILER' below!

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

cd ${PACKAGE_DIR}/zlib
BUILD_LOC=${ZLIB_VERSION}_build
if [ ! -d " ${BUILD_LOC}" ] ; then
  mkdir -p ${BUILD_LOC}
fi

cd ${BUILD_LOC}
echo "Running cmake to configure zlib ..."
cmake \
  -D CMAKE_C_COMPILER:PATH=gcc \
  -D BUILD_SHARED_LIBS=OFF \
  -D CMAKE_C_FLAGS=-fPIC \
  -D CMAKE_INSTALL_PREFIX:PATH=${ZLIB_DIR} ../${ZLIB_VER}
echo "Building ${ZLIB_VERSION} ..."
make $MAKE_FLAGS install
