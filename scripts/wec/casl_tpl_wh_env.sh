#!/bin/bash -l

#Usage arg[0]=optimazation level ex dbg or opt
#Usage arg[1]=base tpl install directory
#EXAMPLE . casl.sh opt /home/inb/test_vera/VERA/tpl  /home/inb/test_vera/VERA
#please note to use .space or source before envokeing the tpl script
#*****NOTE*****If you do not have Intel 12.04 or later or gcc 4.6.1 compilers 
#installed you must install them before running this script. You will find install 
#instructions below. *****END NOTE****
#Initial Version inb                                    10/09/2012
#Gereralized Version inb                                02/06/2013
#Updated Generalized tpl build script                   04/02/2013
#Branch for Westinghouse specific build                 04/02/2013
#
#TPL Requirements:
#
# COMMON
#      HDF5 1.8.7
#      PETSC 3.3-p4
#      MOAB 4.5.0
#
# VERA-CS
#      HDF5 1.8.7
#      SILO-4.8
#      SPRNG 0.5
#      QT 4.8.2
#
# HYDRA-TH
#      CHACO-2.2-patched(mac)
#      EXODUSII-5.14-patched
#      HDF5-1.8.7
#      ML-6.2 (Trilinos)
#      NETCDF4.1.3
#      PARMETIS-4.0.2-patched
#      ZLIB-1.2.5-patched.tar.gz
#      PETSC-3.1.-p8
#
# COBRA
#      NONE
#
#
# LIME
#      NONE
#
# MPACT
#
#
#DEFINE TPLS TO BUILD, TO BUILD SET EQUAL TO 1
if [ $PASS_IN_SELECTIONS -eq 1 ]; then
  echo "All build options must be set in env before calling ..."
else
  export BUILD_GCC=1
  export BUILD_OPENMPI=1
  export BUILD_CMAKE=1
  export BUILD_LAPACK=1
  export BUILD_BOOST=1
  export BUILD_COMMON_MOAB=1
  export BUILD_COMMON_HYPRE=1
  export BUILD_COMMON_PETSC=1
  export BUILD_VERA_CS_HDF5=1
  export BUILD_VERA_CS_SILO=1
  export BUILD_VERA_CS_SPRNG=1
  export BUILD_VERA_CS_QT=1
  export BUILD_TRILINOS=1
  export BUILD_HYDRATH_HDF5=1
  export BUILD_HYDRATH_ZLIB=1
  export BUILD_HYDRATH_NETCDF=1
  export BUILD_HYDRATH_EXODUS=1
  export BUILD_HYDRATH_PARMETIS=1
  export BUILD_HYDRATH_CHACO=1
  export BUILD_HYDRATH_PETSC=1
  export BUILD_HYDRATH_ML=1
  export BUILD_HYDRATH_TRILINOS=1
  export BUILD_TPL_SCRIPT=1  
fi

args=("$@")
   echo  ${args[0]} ${args[1]} ' -> args=("$@"); echo ${args[0]} ${args[1]}'
   export ARGONE=${args[0]}
   export ARGTWO=${args[1]}
   echo "${ARGONE} ${ARGTWO}"
#   export COMP_USE=""
#   export TYPE=""
#   export PACKAGE_NUMBER=""
#   export COMPARE_NUMBER=""
#   export MPI_USE=""

#   export NODE=`uname -n |sed 's/\(.\{0\}\).\{9\}$//'`
#   echo "First if"
#if [ "${TYPE}" = "" -a "${COMPARE_NUMBER}" = "" ]; then
#	COMP_USE=`icc --version |egrep "icc" |sed 's/[()IC ]//g' |sed 's/\(.\{0\}\).\{8\}$//' |sed 's/icc/intel-/g'`	
#	TYPE=`icc --version |egrep "icc" |sed 's/[()IC ]//g' |sed 's/\(.\{0\}\).\{14\}$//' |sed 's/icc/intel/g'`
#        PACKAGE_NUMBER=`icc --version |egrep "icc" |sed 's/[()ICic ]//g' |sed 's/\(.\{0\}\).\{8\}$//'`
#	COMPARE_NUMBER=`icc --version |egrep "icc" |sed 's/[()ICic ]//g' |sed 's/\(.\{0\}\).\{8\}$//' |sed 's/[.]//g'`
#        MPI_USE=`icc --version |egrep "icc" |sed 's/[()IC ]//g' |sed 's/\(.\{0\}\).\{8\}$//' |sed 's/icc/intel-/g' |sed 's/4/8/g'`
#  CC_BASE=icc
#  CXX_BASE=icpc
#  FC_BASE=ifort
#fi
#    echo "Second if"
#if [ "${TYPE}" = "" -a "${COMPARE_NUMBER}" = "" ]; then
#        COMP_USE=`gcc --version |egrep "gcc" |sed 's/[\[()GCSUELinux ]//g' |sed 's/\(.\{0\}\).\{25\}$//' |sed 's/gcc/gcc-/g'`
#        TYPE=`gcc --version |egrep "gcc" |sed 's/[\[()GCSUELinux.]//g' |sed 's/\(.\{0\}\).\{31\}$//'`
#        PACKAGE_NUMBER=`echo $COMP_USE |sed 's/-//g'`
#        COMPARE_NUMBER=`echo $COMP_USE |sed 's/[.gc]//g' |sed 's/[-]//g'`
#        MPI_USE=`gcc --version |egrep "gcc" |sed 's/[()GC ]//g' |sed 's/\(.\{0\}\).\{21\}$//' |sed 's/gcc/gnu-/g'`
  export COMP_USE="gcc-4.6.1"
  export TYPE="gcc"
  export PACKAGE_NUMBER="gcc461"
  export COMPARE_NUMBER="461"
  export CC_BASE=gcc
  export CXX_BASE=g++
  export FC_BASE=gfortran
#fi
if [ "${TYPE}" = "" -a "${COMPARE_NUMBER}" = "" ]; then
  echo "No compatable compilers found, either add desired compilers to your PATH and LD_LIBRARY_PATH env or installed compatable compilers"
fi

if [ "${TYPE}" = "gcc" -a "${COMPARE_NUMBER}" -lt 460 ]; then
        echo "You need to update your GNU compilers to at least 4.6.1"
        BUILD_GCC=1
fi

if [ "${TYPE}" = "intel" -a "${COMPARE_NUMBER}" -lt 111 ]; then
        echo "You need to update your INTEL compilers to at least 11.1"
fi
#SEARCH $PATH DIRECTORIES
export PATH_SEARCH=`echo $PATH |sed 's/:/ /g'`
for j in ${PATH_SEARCH} 
do 
echo $j
	for k in cmake gcc mpicc
        do 
	if [ -e $j/$k ]
	then
	echo "found"
	eval FOUND_"$k"=1
        break
	fi
        done
done

#SEARCH $LD_LIBRARY_PATH DIRECTORIES
export LIBRARY_PATH_SEARCH=`echo $LD_LIBRARY_PATH |sed 's/:/ /g'`
for l in ${LIBRARY_PATH_SEARCH} /usr/lib64 /lib64
do 
echo $l
	for m in liblapack 
        do 
        echo $K
	if [ -e $l/$m.a ]
	then
	echo "found"
	eval FOUND_"$m"=1
        eval LAPACK_DIR=$l/$m.a
        break
	fi
        done
done

   export METHOD=${ARGONE}
   export BASE_DIR=${ARGTWO}
   export TPL_INSTALL_DIR=${BASE_DIR}/${COMP_USE}
   export PACKAGE_DIR=${PWD}/../..
   export PREFIX=${TPL_INSTALL_DIR}
   echo "${METHOD} ${BASE_DIR} ${TPL_INSTALL_DIR} ${PACKAGE_DIR}"

#LINUX BASED VARIABLES (WILL MAKE GENERAL IN FUTURE RELEASES)
   export PLATFORM=linux-gnu
   export PETSC_ARCH=${PLATFORM}-$METHOD
   export TRILINOS_DIR=$TPL_INSTALL_DIR/../Trilinos
   export HYDRATH_TRILINOS_DIR=$TPL_INSTALL_DIR/../Trilinos
   export ZLIB_DIR=$TPL_INSTALL_DIR/toolset/zlib
   export PATH=$PATH:.

#  Set versions of TPLS
   export HDF5_VERSION=hdf5-1.8.7
   export SILO_VERSION=silo-4.8
   export QT_VERSION=qt-everywhere-opensource-src-4.8.2
   export OPENMPI_VERSION=openmpi-1.4.3
   export HYDRATH_ZLIB_VERSION=zlib-1.2.5-patched
   export HYDRATH_HDF5_VERSION=hdf5-1.8.7
   export HYDRATH_NETCDF_VERSION=netcdf-4.1.3
   export HYDRATH_EXODUS_VERSION=exodusii-5.14-patched
   export HYDRATH_PARMETIS_VERSION=parmetis-4.0.2-patched
   export HYDRATH_CHACO_VERSION=Chaco-2.2-patched
   export HYDRATH_ML_VERSION=ml-6.2
   export HYDRATH_TRILINOS_VERSION=trilinos-10.6.4
   export HYDRATH_PETSC_VERSION=petsc-3.3-p6
   export LAPACK_VERSION=lapack-3.3.1
   export BOOST_VERSION=boost-1.49.0
   export CMAKE_VERSION=cmake-2.8.5
   export GCC_VERSION=gcc-4.6.1
   export COMMON_MOAB_VERSION=moab-4.5.0
   export COMMON_PETSC_VERSION=petsc-3.3-p4
   export COMMON_HYPRE_VERSION=hypre-2.8.0b

   export OPENMPI_VER=1.4.3
   export HDF5_VER=1.8.7
   export SILO_VER=4.8
   export QT_VER=4.8.2
   export HYDRATH_ZLIB_VER=1.2.5-patched
   export HYDRATH_HDF5_VER=1.8.7
   export HYDRATH_NETCDF_VER=4.1.3
   export HYDRATH_EXODUS_VER=5.14-patched
   export HYDRATH_PARMETIS_VER=4.0.2-patched
   export HYDRATH_CHACO_VER=2.2-patched
   export HYDRATH_PETSC_VER=3.3-p6
   export HYDRATH_ML_VER=6.2
   export HYDRATH_TRILINOS_VER=10.6.4
   export LAPACK_VER=3.3.1
   export BOOST_VER=1.49.0
   export CMAKE_VER=2.8.5
   export GCC_VER=4.6.1
   export COMMON_MOAB_VER=4.5.0
   export COMMON_PETSC_VER=3.3-p4
   export COMMON_HYPRE_VER=2.8.0b

#set compile flags
if [ "$METHOD" = "opt" ]
then 
   export COMPILE_MODE=optimized
   export CFLAGS="-O2 -fPIC"
   export CXXFLAGS="-O2 -fPIC"
   export FCFLAGS="-O2 -fPIC"
   export DEBUG_BOOL="FALSE"
else
   export COMPILE_MODE=debug
   export CFLAGS="-g -fPIC"
   export CXXFLAGS="-g -fPIC"
   export FCFLAGS="-g -fPIC" 
   export DEBUG_BOOL="TRUE"
fi

#SETUP DIRECTORY TREE BASED ON COMPILER DESIRED (SHOULD BE USER DEFINABLE HOWEVER COMPATABILITY ISSUES MAY ARISE IF YOU DIVERGE FROM THE TESTED PATH)
if [ ! -d "${TPL_INSTALL_DIR}" ]
then
   echo "${TPL_INSTALL_DIR}"
   mkdir -p ${TPL_INSTALL_DIR}
fi
#CHECK EXISTANCE OF COMMON AND PACKAGE SPECIFIC DIRECTORIES for TPLS, The 
#game plan is to make this script use a for statement, so a name can 
#be added to list and then make that directory part of the install structure
for i in common cobra-tf datatransferkit hydrath lime moose mpact pssdrivers scale vera_cs verain
do
   if [ ! -d "${TPL_INSTALL_DIR}/$i" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/$i    
   fi
done

#####################
##ENVIORNMENT SETUP##
#####################

##GCC##

if [ $BUILD_GCC -eq 1 ]; then
  ./gcc-461.sh
fi
export GCC_DIR=${TPL_INSTALL_DIR}/toolset/gcc
##END GCC##


##OPENMPI##

if [ $BUILD_OPENMPI -eq 1 ]; then
  ./openmpi-143.sh 
fi
export OPENMPI_DIR=${TPL_INSTALL_DIR}/toolset/openmpi
##END OPENMPI##


##BOOST##
if [ $BUILD_BOOST -eq 1 ]; then
  ./boost-1.49.0.sh
fi
export BOOST_DIR=${TPL_INSTALL_DIR}/toolset/boost-${BOOST_VER}
##BOOST END##

##LAPACK##
if [ $BUILD_LAPACK -eq 1 ]; then
  ./lapack-3.3.1.sh
fi
export LAPACK_DIR=${TPL_INSTALL_DIR}/toolset/lapack/lib
##LAPACK END##

##CMAKE##
if [ $BUILD_CMAKE -eq 1 ]; then
   ./cmake-2.8.5.sh
fi
export CMAKE_DIR=${TPL_INSTALL_DIR}/toolset/cmake
##CMAKE END##

##########
##COMMON##
##########

#COMMON DIRECTORY, SHOULD BE SHARABLE BY ALL PACKAGES, UNLESS NOTED FOR EACH SPECIFIC PACKAGE WITH CAUSE OF CONFLIC

export CC=gcc
export CXX=g++
export FC=gfortran

# MOAB
if [ $BUILD_COMMON_MOAB -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/common/moab" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/common/moab
   fi
   if [ ! -d "${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build
   fi
  cp -r ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}/* ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build
  cd ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build
  autoreconf -fi
  configure  \
  --prefix=${TPL_INSTALL_DIR}/common/moab \
  --enable-optimize \
  --enable-shared \
  --enable-static \
  QTDIR=/usr/lib64/qt3/
  make install
  rm -rf ${PACKAGE_DIR}/moab/${COMMON_MOAB_VER}_build
fi 
export COMMON_MOAB_DIR=${TPL_INSTALL_DIR}/common/moab

# HYPRE
if [ $BUILD_COMMON_HYPRE -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/common/hypre/${COMMON_HYPRE_VERSION}" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/common/hypre/${COMMON_HYPRE_VERSION}
   fi
   if [ ! -d "${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}_build
   fi
  cp -r ${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}/* ${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}_build
  BUILD_LOC=${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}_build
 cd ${PACKAGE_DIR}/hypre/${COMMON_HYPRE_VER}_build/src 
  ./configure  \
  --prefix=${TPL_INSTALL_DIR}/common/hypre/${COMMON_HYPRE_VERSION}  \
  --with-blas-libs=libblas.a \
  --with-blas-lib-dir=${LAPACK_DIR} \
  --with-lapack-libs=liblapack.a \
  --with-lapack-lib-dir=${LAPACK_DIR} \
  --with-blas=yes \
  --with-lapack=yes \
  --with-LDFLAGS=-fopenmp \
  --with-openmp \
  CC=mpicc CXX=mpicxx FC=mpif90 F77=mpif77 F90=mpif90 \
  CFLAGS='-O3 -fopenmp -fPIC' CXXFLAGS='-O3 -fopenmp -fPIC' FFLAGS='-O3 -fopenmp'
  make
  make install
  rm -rf ${BUILD_LOC}
fi
  export COMMON_PETSC_DIR=${TPL_INSTALL_DIR}/common/hypre/${COMMON_HYPRE_VERSION}

# PETSc
if [ $BUILD_COMMON_PETSC -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}"  ]
   then
   mkdir  -p ${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}
   fi
   cd ${PACKAGE_DIR}/petsc/${PETSC_VER}
   cp -r ${PACKAGE_DIR}/petsc/${COMMON_PETSC_VER}/* ${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}/
   cd ${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}/

   configure \
   PETSC_DIR=${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}
   PETSC_ARCH=linux-gnu-c-opt
   --with-opt=1 \
   --with-debugging=0 \
   --with-batch=0 \
   --with-hypre=${TPL_INSTALL_DIR}/common/hypre/${COMMON_HYPRE_VERSION}
   --with-shared-libraries=0 \
   --with-known-mpi-shared=0 \
   --with-mpi-dir=/projects/vera/gcc-4.6.1/toolset/openmpi  \
   --with-blas-lapack-dir=${LAPACK_DIR}
 
   make PETSC_DIR=${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION} \
        PETSC_ARCH=linux-gnu-c-opt
   make PETSC_DIR=${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION} \
       PETSC_ARCH=linux-gnu-c-opt test
   fi
   export COMMON_PETSC_DIR=${TPL_INSTALL_DIR}/common/${COMMON_PETSC_VERSION}


###############
##  VERA_CS  ##
###############
#HDF5
if [ $BUILD_VERA_CS_HDF5 -eq 1 ]; then
cd ${PREFIX}/vera_cs
 if [ ! -d "$TPL_INSTALL_DIR/vera_cs/hdf5" ]
 then
    mkdir -p $TPL_INSTALL_DIR/vera_cs/hdf5
 fi
 cd ${PACKAGE_DIR}/hdf5/${HDF5_VER}
 make distclean
 if [ $METHOD == opt ]
 then 
        configure --prefix=${TPL_INSTALL_DIR}/vera_cs/hdf5  --enable-production --enable-static --disable-debug --enable-shared --enable-cxx --enable-fortran --disable-parallel 
 else
        configure --prefix=${TPL_INSTALL_DIR}/vera_cs/hdf5   --disable-production --enable-static --enable-debug --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib --enable-shared --enable-cxx --enable-fortran --disable-parallel  --with-zlib=${TPL_INSTALL_DIR}/toolset/zlib/lib
 fi
 make
 make install
fi
 export HDF5_DIR=${TPL_INSTALL_DIR}/vera_cs/hdf5

#SILO INSTALL
if [ $BUILD_VERA_CS_SILO -eq 1 ]; then
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/silo" ]
then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/silo
fi

cd $PACKAGE_DIR/silo/${SILO_VER}
make distclean
if [ $METHOD == opt ]
then  
      ./configure CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --disable-debug CFLAGS="-O2 -fPIC" CXXFLAGS="-O2 -fPIC" FCFLAGS="-O2 -fPIC"
else
        ./configure CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --with-zlib=${ZLIB_DIR}/include,${ZLIB_DIR}/lib --enable-debug CFLAGS="-g -fPIC" CXXFLAGS="-g -fPIC" FCFLAGS="-g -fPIC"
fi
make
make install
fi
export SILO_DIR=${TPL_INSTALL_DIR}/vera_cs/silo


#SPRNG_INSTALL
if [ $BUILD_VERA_CS_SPRNG -eq "1" ]; then
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/sprng" ]
then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/sprng
fi
cd $PACKAGE_DIR/sprng
cp -r $PACKAGE_DIR/sprng/* $TPL_INSTALL_DIR/vera_cs/sprng
fi
export SPRNG_DIR=${TPL_INSTALL_DIR}/vera_cs/sprng/0.5

#QT INSTALL
if [ $BUILD_VERA_CS_QT -eq "1" ]; then
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/qt" ]
then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/qt
fi
cd $PACKAGE_DIR/qt
cd ${QT_VER}
gmake confclean
if [ $METHOD == opt ]
then 
   export CC=gcc
   export CXX=g++
   export FC=gfortran
   export F90=gfortran
        configure -prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -release -confirm-license -no-multimedia -static
else
   export CC=gcc
   export CXX=g++
   export F90=gfortran
        configure -prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -debug -confirm-license -no-webkit -no-multimedia -static
fi
gmake all
gmake install
cd $TPL_INSTALL_DIR/vera_cs/qt/lib
#THERE WERE INITAL ISSUES WITH SHARED LIBRARIES WITH SCALE/EXNIHILO WHICH IS THE REASON FOR SHARED LIBRARIES
 if [ $METHOD == dbg ]
 then
    ln -s libQtCore.prl libQtCore_debug.prl
    ln -s libQtTest.prl libQtTest_debug.prl
    ln -s libQtXml.prl libQtXml_debug.prl
    ln -s libQtSql.prl libQtSql_debug.prl
    ln -s libQtCore.a libQtCore_debug.a
    ln -s libQtTest.a libQtTest_debug.a
    ln -s libQtXml.a libQtXml_debug.a
    ln -s libQtSql.a libQtSql_debug.a
 else
    ln -s libQtCore.prl libQtCore_debug.prl
    ln -s libQtTest.prl libQtTest_debug.prl
    ln -s libQtXml.prl libQtXml_debug.prl
    ln -s libQtSql.prl libQtSql_debug.prl
    ln -s libQtCore.a libQtCore_debug.a
    ln -s libQtTest.a libQtTest_debug.a
    ln -s libQtXml.a libQtXml_debug.a
    ln -s libQtSql.a libQtSql_debug.a 
 fi
fi
export QT_DIR=${TPL_INSTALL_DIR}/vera_cs/qt

############
##HYDRA-TH##
############

cd ${PREFIX}/hydrath

# Trilinos
if [ $BUILD_HYDRATH_TRILINOS -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/trilinos" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath/trilinos
   fi
   if [ ! -d "${PACKAGE_DIR}/hyrath/trilinos/${HYDRATH_TRILINOS_VER}_build" ]
   then
   mkdir -p ${PACKAGE_DIR}/trilinos/${HYDRATH_TRILINOS_VER}_build
   fi
   cd ${PACKAGE_DIR}/trilinos/${HYDRATH_TRILINOS_VER}_build
   rm -rf CMake*
   cmake \
    -D CMAKE_Fortran_COMPILER:PATH=mpif90 \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
    -D CMAKE_Fortran_FLAGS:STRING=${FARG} \
    -D TPL_ENABLE_MPI:BOOL=ON \
    -D TPL_BLAS_LIBRARIES:FILEPATH="${LAPACK_DIR}/libblas.a;${LAPACK_DIR}/liblapack.a;${GCC_DIR}/lib64/libgfortran.a" \
    -D TPL_LAPACK_LIBRARIES:FILEPATH="${LAPACK_DIR}/libblas.a;${LAPACK_DIR}/liblapack.a;${GCC_DIR}/lib64/libgfortran.a" \
    -D Trilinos_ENABLE_Epetra:BOOL=ON \
    -D Trilinos_ENABLE_EpetraExt:BOOL=ON \
    -D Trilinos_ENABLE_Tpetra:BOOL=ON \
    -D Trilinos_ENABLE_Teuchos:BOOL=OFF \
    -D Trilinos_ENABLE_Kokkos:BOOL=OFF \
    -D Trilinos_ENABLE_AztecOO:BOOL=OFF \
    -D Trilinos_ENABLE_ML:BOOL=OFF \
    -D Trilinos_ENABLE_NOX:BOOL=OFF \
    -D Trilinos_ENABLE_Amesos:BOOL=OFF \
    -D Trilinos_ENABLE_TESTS:BOOL=OFF \
    -D Trilinos_ENABLE_PERFORMANCE_TESTS:BOOL=OFF \
    -D Trilinos_ENABLE_Fortran:BOOL=ON \
    -D Trilinos_ENABLE_Ifpack:BOOL=OFF \
    -D Trilinos_ENABLE_Zoltan:BOOL=ON \
    ../10.6.4
  make $MAKEFLAGS install
  fi
 export HYDRATH_TRILINOS_DIR=${TPL_INSTALL_DIR}/hydrath

# Zlib
if [ $BUILD_HYDRATH_ZLIB -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi

   if [ ! -d "${PACKAGE_DIR}/zlib/${HYDRATH_ZLIB_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/zlib/${HYDRATH_ZLIB_VER}_build
   fi
   cd ${PACKAGE_DIR}/zlib/${ZLIB_VER}_build
    echo "${TPL_INSTALL_DIR}/hydrath"
    echo "${PACKAGE_DIR}/zlib/${HYDRATH_ZLIB_VER}_build"
    echo "${HYDRATH_ZLIB_VER}" 
   cmake \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D BUILD_SHARED_LIBS=OFF \
    -D CMAKE_C_FLAGS=-fPIC \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
    ../${HYDRATH_ZLIB_VER}
   make $MAKEFLAGS install
   export HYDRATH_ZLIB_DIR=${TPL_INSTALL_DIR}/hydrath
fi

# HDF5
if [ $BUILD_HYDRATH_HDF5 -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi

   if [ ! -d "${PACKAGE_DIR}/hdf5/${HYDRATH_HDF5_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/hdf5/${HYDRATH_HDF5_VER}_build
   fi
   cp -r ${PACKAGE_DIR}/hdf5/${HYDRATH_HDF5_VER}/* ${PACKAGE_DIR}/hdf5/${HYDRATH_HDF5_VER}_build
   cd ${PACKAGE_DIR}/hdf5/${HYDRATH_HDF5_VER}
   make distclean
   export CC=gcc
   export CXX=g++
   export FC=gfortran
   configure                    \
    --with-zlib=${TPL_INSTALL_DIR}/hydrath/lib \
    --prefix=${TPL_INSTALL_DIR}/hydrath
   make $MAKEFLAGS install
   export CC=mpicc
   export CXX=mpicxx
   export FC=mpif90
export HYDRATH_HDF5_DIR=${TPL_INSTALL_DIR}/hydrath
fi

# NetCDF
if [ $BUILD_HYDRATH_NETCDF -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi
   if [ ! -d "${PACKAGE_DIR}/netcdf/${HYDRATH_NETCDF_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/netcdf/${HYDRATH_NETCDF_VER}_build
   fi
  cp -r ${PACKAGE_DIR}/netcdf/${HYDRATH_NETCDF_VER}/* ${PACKAGE_DIR}/netcdf/${HYDRATH_NETCDF_VER}_build
  cd ${PACKAGE_DIR}/netcdf/${HYDRATH_NETCDF_VER}_build
  make distclean
  configure      \
    --prefix=${TPL_INSTALL_DIR}/hydrath      \
    --disable-examples                              \
    --enable-netcdf4      \
    --disable-dap         \
    CPPFLAGS="-I${TPL_INSTALL_DIR}/hydrath/include -I${TPL_INSTALL_DIR}/hydrath/include"     \
    LDFLAGS="-L${TPL_INSTALL_DIR}/hydrath/lib -L${TPL_INSTALL_DIR}/hydrath/lib"
  make $MAKEFLAGS install
fi 
export HYDRATH_NETCDF_DIR=${TPL_INSTALL_DIR}/hydrath

# ExodusII & Nemesis
if [ $BUILD_HYDRATH_EXODUS -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi
   if [ ! -d "${PACKAGE_DIR}/exodusii/${EXODUS_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/exodusii/${EXODUS_VER}_build
   fi
  cd ${PACKAGE_DIR}/exodusii/${EXODUS_VER}_build
  rm -rf *
  cmake \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
    -D HDF5HL_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5_hl.a \
    -D HDF5_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5.a \
    -D NETCDF_INCLUDE_DIR:PATH=${TPL_INSTALL_DIR}/hydrath/include \
    -D NETCDF_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libnetcdf.a \
    -D NETCDF_NCDUMP:PATH=${TPL_INSTALL_DIR}/hydrath/bin/ncdump \
    -D Z_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libz.a \
    ../${EXODUS_VER}/exodus
  make $MAKEFLAGS install
  rm -f CMakeCache.txt
  cmake \
    -D CMAKE_Fortran_COMPILER:PATH=mpif90 \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
    -D EXODUS_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libexoIIv2c.a \
    -D EXODUS_INCLUDE:PATH=${TPL_INSTALL_DIR}/hydrath/include/exodusII.h \
    -D HDF5HL_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5_hl.a \
    -D HDF5_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5.a \
    -D NETCDF_INCLUDE_DIR:PATH=${TPL_INSTALL_DIR}/hydrath/include \
    -D NETCDF_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libnetcdf.a \
    -D NETCDF_NCDUMP:PATH=${TPL_INSTALL_DIR}/hydrath/bin/ncdump \
    -D Z_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libz.a \
    ../${EXODUS_VER}/nemesis
  cp ${TPL_INSTALL_DIR}/hydrath/include/*.h $PACKAGE_DIR/exodusii-5.14-patched/nemesis
  make $MAKEFLAGS install
fi
export HYDRATH_EXODUS_DIR=${TPL_INSTALL_DIR}/hydrath

# ParMetis
if [ $BUILD_HYDRATH_PARMETIS -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi
   if [ ! -d "${PACKAGE_DIR}/parmetis/${HYDRATH_PARMETIS_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/parmetis/${HYDRATH_PARMETIS_VER}_build
   fi
  cd ${PACKAGE_DIR}/parmetis/${HYDRATH_PARMETIS_VER}
  make config prefix=${TPL_INSTALL_DIR}/hydrath
  MF=$MAKEFLAGS
  unset MAKEFLAGS
  make install
  export MAKEFLAGS=$MF
  cp -vf build/$(uname -s)-$(uname -m | sed "s/\\ /_/g")/libmetis/libmetis.a \
     ${TPL_INSTALL_DIR}/hydrath/lib
  cp -vf metis/include/metis.h ${TPL_INSTALL_DIR}/hydrath/include
fi
export HYDRATH_PARMETIS_DIR=${TPL_INSTALL_DIR}/hydrath

# Chaco
if [ $BUILD_HYDRATH_CHACO -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi
   if [ ! -d "${PACKAGE_DIR}/chaco/${CHACO_VER}_build" ]
   then
       mkdir -p ${PACKAGE_DIR}/chaco/${CHACO_VER}_build
   fi
   cd ${PACKAGE_DIR}/chaco/${CHACO_VER}/code
   sed -i {s/icc/gcc/} Makefile
   make $MAKEFLAGS AR=ar lib
   cp libchaco.a ${TPL_INSTALL_DIR}/hydrath/lib/
fi
export HYDRATH_CHACO_DIR=${TPL_INSTALL_DIR}/hydrath



# PETSc
if [ $BUILD_HYDRATH_PETSC -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hydrath/${HYDRATH_PETSC_VERSION}"  ]
   then
   mkdir  -p ${TPL_INSTALL_DIR}/hydrath/${HYDRATH_PETSC_VERSION}
   fi
   cd ${PACKAGE_DIR}/petsc/${HYDRATH_PETSC_VER}
   export PETSC_ARCH=linux-gnu-opt 
   rm -rf $PETSC_ARCH
   mkdir $PETSC_ARCH
   cd $PETSC_ARCH
   ln -s lib lib64
   cd .. 
   configure \
      PETSC_DIR=${PACKAGE_DIR}/petsc/${HYDRATH_PETSC_VER} \
      PETSC_ARCH=${PETSC_ARCH} \
      --prefix=${TPL_INSTALL_DIR}/hydrath/${HYDRATH_PETSC_VERSION} \
      --with-clanguage=c++ \
      --with-x=false \
      --with-x11=false \
      --download-ml=${PACKAGE_DIR}/ml/ml-6.2.tar.gz \
      --with-debugging=0 \
      --with-blas-lib=$TPL_INSTALL_DIR/toolset/lapack/lib/libblas.a \
      --with-lapack-lib=$TPL_INSTALL_DIR/toolset/lapack/lib/liblapack.a \
      -COPTFLAGS=-O3 \
      -CXXOPTFLAGS=-O3 \
      -FOPTFLAGS=-O3 \
      -FFLAGS=-ffree-line-length-none
   make $MAKEFLAGS PETSC_DIR=${PACKAGE_DIR}/petsc/${HYDRATH_PETSC_VER} \
        PETSC_ARCH=${PETSC_ARCH}
   make $MAKEFLAGS PETSC_DIR=${PACKAGE_DIR}/petsc/${HYDRATH_PETSC_VER} \
       PETSC_ARCH=${PETSC_ARCH} install
   make $MAKEFLAGS PETSC_DIR=${PACKAGE_DIR}/petsc/${HYDRATH_PETSC_VER} \
       PETSC_ARCH=${PETSC_ARCH} test
   fi
   export HYDRATH_PETSC_DIR=${TPL_INSTALL_DIR}/hydrath
