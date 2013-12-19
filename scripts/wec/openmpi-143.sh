#!/bin/bash -e

##OPENMPI##


 if [ ! -d "${TPL_INSTALL_DIR}/toolset/openmpi" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/openmpi
 fi
 if [ ! -d "${PACKAGE_DIR}/openmpi/${OPENMPI_VER}_build" ]
 then
    mkdir -p ${PACKAGE_DIR}/openmpi/${OPENMPI_VER}_build
 fi
 cd ${PACKAGE_DIR}/openmpi/${OPENMPI_VER}_build
 export BUILD_LOC=${PACKAGE_DIR}/openmpi/${OPENMPI_VERSION}_build
#OPENMPI CONFIGURE, BASED ON FISSILE BUILD
    ../${OPENMPI_VER}/configure --prefix=${TPL_INSTALL_DIR}/toolset/openmpi
 make
 make install
 export OPENMPI_DIR=${TPL_INSTALL_DIR}/toolset/openmpi
 export PATH=${OPENMPI_DIR}/bin:$PATH
 export LD_LIBRARY_PATH=${OPENMPI_DIR}/lib:$LD_LIBRARY_PATH
rm -rf ${BUILD_LOC}
##END OPENMPI##
