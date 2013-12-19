#!/bin/bash -e

export BOOST_VERSION=boost-1.49.0
export BOOST_VER=1.49.0

echo "Building ${BOOST_VERSION} ..."

if [ ! -d "${TPL_INSTALL_DIR}/toolset/boost" ]
then
   mkdir -p ${TPL_INSTALL_DIR}/toolset/boost
fi

export BUILD_LOC=${PACKAGE_DIR}/boost/${BOOST_VERSION}_build
if [ ! -d "${BUILD_LOC}" ]
then
   echo "Creating directory ${BUILD_LOC} ..."
   mkdir -p ${BUILD_LOC}
fi

if [ $BOOST_SKIP_SOURCE_COPY -eq "1" ]; then
  echo "Skipping copying source to ${BUILD_LOC} ..."
else
  echo "Copying source to ${BUILD_LOC} ..."
  cp -rf ${PACKAGE_DIR}/boost/${BOOST_VER}/* ${BUILD_LOC}
fi

echo "Configuring under ${BUILD_LOC} ..."
cd ${BUILD_LOC}
#BOOST CONFIGURE, BASED ON FISSILE BUILD
./bootstrap.sh --with-libraries=
./b2 install ${MAKE_FLAGS} --prefix=$TPL_INSTALL_DIR/toolset/boost-${BOOST_VER}
export BOOST_DIR=${TPL_INSTALL_DIR}/toolset/boost-${BOOST_VER}
echo "Installed ${BOOST_VERSION} under ${BOOST_DIR}"
