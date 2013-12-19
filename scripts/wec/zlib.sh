#!/bin/bash -e

export ZLIB_VERSION=zlib-1.2.5-patched
export ZLIB_VER=1.2.5-patched

if [ ! -d "${TPL_INSTALL_DIR}/toolset/zlib" ] ; then
   mkdir -p ${TPL_INSTALL_DIR}/toolset/zlib
fi

cd ${PACKAGE_DIR}/zlib
if [ ! -d " ${ZLIB_VERION}_build" ] ; then
  mkdir -p ${ZLIB_VERSION}_build
fi
cd ${ZLIB_VERSION}_build
echo "Running cmake to configure zlib ..."
cmake \
  -D CMAKE_C_COMPILER:PATH=gcc \
  -D BUILD_SHARED_LIBS=OFF \
  -D CMAKE_C_FLAGS=-fPIC \
  -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/toolset/zlib ../${ZLIB_VER}
make $MAKE_FLAGS install
