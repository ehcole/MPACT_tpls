#!/bin/bash -e
#
# This script does the standard TPL build for VERA.  You can change default by
# passing in more CMake arguments as:
#
#   cd ${VERA_SCRATCH_DIR}/
#   ${VERA_BASE_DIR}/vera_tpls/TPL_build/install_tpls.sh [other options]
#
# The env vars LOADED_TRIBITS_DEV_ENV and VERA_TPL_INSTALL_DIR must be set
# before calling this script!
#
# By default this script blows away the TPL_build dir in the current scratch
# directory.  If you need to reinstall only one TPL, you can run with:
#
#   env VERA_TPL_LEAVE_BUILD_DIR=1 \
#     ${VERA_BASE_DIR}/vera_tpls/TPL_build/install_tpls.sh [other options]
#

EXTRA_ARGS=$@

echo
echo "#########################################################"
echo "### Installing VERA TPLs using standard configuration ###"
echo "#########################################################"
echo

if [ "$LOADED_TRIBITS_DEV_ENV" == "" ] ; then
  echo "Error, LOADED_TRIBITS_DEV_ENV is not properly set!"
  echo "May be you did not source load_dev_env.[sh,csh]?"
  exit 1
fi

if [ "$VERA_TPL_INSTALL_DIR" == "" ] ; then
  echo "Error, VERA_TPL_INSTALL_DIR is not set!"
  exit 1
fi

_SCRIPT_DIR=`echo $0 | sed "s/\(.*\)\/.*install_tpls.sh/\1/g"`
VERA_TPL_BUILD_DIR=$(readlink -f $_SCRIPT_DIR)
echo
echo "VERA TPL build dir: '$VERA_TPL_BUILD_DIR'"

if [ -e $PWD/TPL_build ] ; then
  if [ "$VERA_TPL_LEAVE_BUILD_DIR" == "" ] ; then
    echo
    echo "Removing existing TPL_build directory ..."
    rm -rf $PWD/TPL_build
  else
    echo "Leaving the build dir TPL_build alone!"
  fi
fi
  
if [ -e $PWD/TPL_build ] ; then
  echo
  echo "TPL_build directory already exists!"
else
  echo
  echo "Creating new TPL_build directory ..."
  mkdir TPL_build
fi
cd TPL_build

echo "Changed directory to '$PWD'"

echo
echo "***"
echo "*** A) Doing configure of the CMake ExternalProject TPL build  ..."
echo "***"
echo

env \
  CC_SERIAL=`which gcc` \
  CXX_SERIAL=`which g++` \
  FC_SERIAL=`which gfortran` \
cmake \
  -D CMAKE_BUILD_TYPE=Release \
  -D CMAKE_C_COMPILER=`which mpicc` \
  -D CMAKE_CXX_COMPILER=`which mpic++` \
  -D CMAKE_Fortran_COMPILER=`which mpif90` \
  -D FFLAGS="-fPIC -O3" \
  -D CFLAGS="-fPIC -O3" \
  -D CXXFLAGS="-fPIC -O3" \
  -D LDFLAGS="" \
  -D ENABLE_SHARED=ON \
  -D CMAKE_INSTALL_PREFIX=${VERA_TPL_INSTALL_DIR} \
  -D PROCS_INSTALL=4 \
  ${EXTRA_ARGS} \
  ${VERA_TPL_BUILD_DIR}

echo
echo "***"
echo "*** B) Doing build and install using the CMake ExternalProject TPL build  ..."
echo "***"
echo

make
