#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

echo "Building ${BOOST_VERSION} ..."

BUILD_LOC=${PACKAGE_DIR}/boost/${BOOST_VERSION}_build
if [ ! -d "${BUILD_LOC}" ] ; then
   echo "Creating directory ${BUILD_LOC} ..."
   mkdir -p ${BUILD_LOC}
fi

if [ $BOOST_SKIP_SOURCE_COPY -eq "1" ]; then
  echo "Skipping copying source to ${BUILD_LOC} ..."
else
  echo "Copying source to ${BUILD_LOC} ..."
  cp -rf ${PACKAGE_DIR}/boost/${BOOST_VER}/* ${BUILD_LOC}
fi

echo "Configuring and building under ${BUILD_LOC} ..."
cd ${BUILD_LOC}
#BOOST CONFIGURE, BASED ON FISSILE BUILD
./bootstrap.sh --with-libraries=
./b2 install ${MAKE_FLAGS} --prefix=${BOOST_DIR}

echo "Installed ${BOOST_DIR}"
