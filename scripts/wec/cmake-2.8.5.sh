#!/bin/bash -e

##CMAKE##
if [ $BUILD_CMAKE -eq "1" ]; then

 echo "Buliding and installing ${CMAKE_VERSION} ..."

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/cmake" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/cmake
 fi
 if [ ! -d "${PACKAGE_DIR}/cmake/${CMAKE_VERSION}_build" ]
 then
    mkdir -p ${PACKAGE_DIR}/cmake/${CMAKE_VERSION}_build
 fi
 export BUILD_LOC=${PACKAGE_DIR}/cmake/${CMAKE_VERSION}_build
 export CMAKE_DIR=${TPL_INSTALL_DIR}/toolset/cmake
 cp -r ${PACKAGE_DIR}/cmake/${CMAKE_VER}/* ${BUILD_LOC}
 cd ${BUILD_LOC}
#CMAKE CONFIGURE, BASED ON FISSILE BUILD
 ../${CMAKE_VER}/bootstrap --prefix=${CMAKE_DIR}
 make
 make install
 export PATH=${CMAKE_DIR}/bin:${PATH}
fi
rm -rf ${BUILD_LOC}
##CMAKE END##
