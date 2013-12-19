#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

# ToDo: Pull out these macros and define them outside!
export CC=gcc
export CXX=g++
export FC=gfortran

echo "Installing ${MOAB_VERSION} ..."

BUILD_LOC=${PACKAGE_DIR}/moab/${MOAB_VER}_build
if [ ! -d "${BUILD_LOC}" ] ; then
    mkdir -p ${BUILD_LOC}
fi

if [ $MOAB_SKIP_SOURCE_COPY -eq "1" ]; then
  echo "Skipping copying source to ${BUILD_LOC} ..."
else
  echo "Copying source to build dir ${BUILD_LOC} ..."
  cp -r ${PACKAGE_DIR}/moab/${MOAB_VER}/* ${BUILD_LOC}/
fi

echo "Configuring ${MOAB_VERSION} ..." 
cd ${BUILD_LOC}
./configure  \
--prefix=${MOAB_DIR} \
--enable-optimize \
--enable-shared \
--enable-static \
QTDIR=/usr/lib64/qt3/

# NOTE: we use an old version of QT3 from QT4 that is built but for some
# reason this works?

# ToDo: consider passing in QTDIR from the outside to use the same QT4 we
# build for SCALE

echo "Building and installing ${MOAB_VERSION} ..."
make ${MAKE_FLAGS} install

echo "Installed ${MOAB_DIR}"
