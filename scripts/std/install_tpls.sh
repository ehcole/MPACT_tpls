#!/bin/bash -e

# This script can be run from any directory and is used to install the TPLs
# one at a time, in batches of several, or all at once.
#
# To use this, set the varaibles:
# 
#   export TPL_INSTALL_DIR=${VERA_DEV_ENV_BASE}/gcc-4.6.1/tpls/opt
#   export MAKE_FLAGS=-j8
#   export METHOD=opt
#
# You can then run it with:
#
#  env BUILD_LAPACK=1 BUILD_BOOST=1 ... \
#    ${PACKAGE_DIR}/scripts/std/install_tpls.sh
#

_SCRIPT_DIR=`echo $0 | sed "s/\(.*\)\/scripts\/std\/install_tpls.sh/\1/g"`
echo "_SCRIPT_DIR = $_SCRIPT_DIR"

export PACKAGE_DIR=$(readlink -f ${_SCRIPT_DIR})

echo "*******************************"
echo "*** Running install-tpls.sh ***"
echo "*******************************"
echo
echo "PACKAGE_DIR      = ${PACKAGE_DIR}"
echo "TPL_INSTALL_DIR  = ${TPL_INSTALL_DIR}"
echo "MAKE_FLAGS       = ${MAKE_FLAGS}"
echo "METHOD           = ${METHOD}"
echo

# ToDo: Add a BUILD_ALL to set to on all of the individual builds

STD_SCRIPTS_DIR=${PACKAGE_DIR}/scripts/std

# LAPACK
if [ "${BUILD_LAPACK}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/lapack.sh
fi

# Boost
if [ "${BUILD_BOOST}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/boost.sh
fi

# Zlib
if [ "${BUILD_ZLIB}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/zlib.sh
fi

# MOAB
if [ "${BUILD_MOAB}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/moab.sh
fi

# HYPRE
if [ "${BUILD_HYPRE}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/hypre.sh
fi

# PETSC
if [ "${BUILD_PETSC}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/petsc.sh
fi

# HDF5
if [ "${BUILD_HDF5}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/hdf5.sh
fi

# SILO
if [ "${BUILD_SILO}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/silo.sh
fi

# QT
if [ "${BUILD_QT}" != "" ] ; then
  ${STD_SCRIPTS_DIR}/qt.sh
fi
