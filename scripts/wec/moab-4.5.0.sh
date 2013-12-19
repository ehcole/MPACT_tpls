#!/bin/bash

export CC=gcc
export CXX=g++
export FC=gfortran

export COMMON_MOAB_VERSION=moab-4.5.0
export COMMON_MOAB_VER=4.5.0

echo "Building ${COMMON_MOAB_VERSION} ..."
if [ ! -d "${TPL_INSTALL_DIR}/common/moab" ] ; then
  mkdir -p ${TPL_INSTALL_DIR}/common/moab
fi

BUILD_LOC=${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build
if [ ! -d "${BUILD_LOC}" ] ; then
    mkdir -p ${BUILD_LOC}
fi

if [ $BOOST_SKIP_SOURCE_COPY -eq "1" ]; then
  echo "Skipping copying source to ${BUILD_LOC} ..."
else
  echo "Copying source to build dir ..."
  cp -r ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}/* ${BUILD_LOC}/
fi

echo "Configuring ..." 
cd ${BUILD_LOC}
./configure  \
--prefix=${TPL_INSTALL_DIR}/common/moab \
--enable-optimize \
--enable-shared \
--enable-static \
QTDIR=/usr/lib64/qt3/
echo "Starting make ..."
make ${MAKE_FLAGS} install
#  rm -rf ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build
export COMMON_MOAB_DIR=${TPL_INSTALL_DIR}/common/moab
