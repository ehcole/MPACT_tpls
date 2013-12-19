export SILO_VERSION=silo-4.8
export SILO_VER=4.8

export CC_BASE=gcc
export CXX_BASE=g++
export FC_BASE=gfortran

export SILO_DIR=${TPL_INSTALL_DIR}/vera_cs/silo
if [ ! -d "${SILO_DIR}" ] ; then
   mkdir -p ${SILO_DIR}
fi

export BUILD_LOC=${PACKAGE_DIR}/silo/${SILO_VERSION}_build
if [ ! -d "${BUILD_LOC}" ]
then
   mkdir -p ${BUILD_LOC}
fi
cd ${BUILD_LOC}
echo "PWD = $PWD"

if [ $METHOD == opt ] ; then
  echo "Configuring opt version ..."
  ../${SILO_VER}/configure CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib --disable-debug CFLAGS="-O2 -fPIC" CXXFLAGS="-O2 -fPIC" FCFLAGS="-O2 -fPIC"
else
  ../${SILO_VER}/configure CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib --enable-debug CFLAGS="-g -fPIC" CXXFLAGS="-g -fPIC" FCFLAGS="-g -fPIC"
fi
make ${MAKE_FLAGS}
make install
