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
#      OPENMPI-1.4.3
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
#COMPILER SPECIFIC VARIABLES
#  If on the fissile 4 machines you can uncomment the first 2 lines and groups of 4 for 
# the desired compiler enviornmentbefore executing the script. Supported configurations include:
#
#module load casl-dev
#module load starccm
#GCC4.5.1/Intel12.0.4
#  module load gcc/4.5.1
#  module load intel/12.0.4
#  module load openmpi/gcc-4.5.1-ifort-12.0.4
#  module load MKL/12.0.4
#  module load TBB/12.0.4
#Intel12.0.8
#  module load intel/12.0.8
#  module load openmpi/intel-12.0.8
#  module load MKL/12.0.8
#  module load TBB/12.0.8
#GCC4.5.1/Intel11.1.064
#  module load gcc/4.5.1
#  module load intel/11.1.064
#  module load openmpi/gcc-4.5.1-ifort-11.1.064
#  module load MKL/11.1.064
#  module load TBB/11.1.064
#GCC4.6.1 WITH Intel Libs
#  module load gcc/4.6.1
#  module load openmpi/gnu-4.6.1
#  module load MKL/12.0.4  
#  module load TBB/12.0.4  
#
#  If on the fissile 4 machines you can uncomment the first 6 lines before executing the script.
#   module load casl-dev
#   module load starccm
#   module load gcc/4.6.1
#   module load openmpi/gnu-4.6.1
#   module load MKL/12.0.4
#   module load TBB/12.0.4
#

#   export PATH=/opt/gcc-4.6.1/trilqqinos-toolset/bin:/opt/trilinos-toolset/bin:/opt/casl_vri_dev_env/common_tools:#$PATH:.:/opt/star/starccm+6.06.011/star/bin
#   export LD_LIBRARY_PATH=/opt/gcc-4.6.1/trilinos-toolset/lib64:/opt/intel/Compiler/composerxe-2011.4.191/mkl/lib/intel64:/opt/intel/Compiler/composerxe-2011.4.191/tbb/lib/intel64//cc4.1.0_libc2.4_kernel2.6.16.21:/opt/trilinos-toolset/bin:/opt/casl_vri_dev_env/common_tools:/opt/intel-11.1.064/tpls/hdf5-1.8.5-patch1/lib:LD_LIBRARY_PATH

#DEFINE TPLS TO BUILD, TO BUILD SET EQUAL TO 1
BUILD_GCC=0
BUILD_OPENMPI=0
BUILD_CMAKE=0
BUILD_LAPACK=0
BUILD_BOOST=0
BUILD_VERA_CS_HDF5=1
BUILD_VERA_CS_SILO=1
BUILD_VERA_CS_SPRNG=1
BUILD_VERA_CS_QT=1
BUILD_TRILINOS=1
BUILD_HYDRATH_HDF5=1
BUILD_HYDRATH_ZLIB=1
BUILD_HYDRATH_NETCDF=1
BUILD_HYDRATH_EXODUS=1
BUILD_HYDRATH_PARMETIS=1
BUILD_HYDRATH_CHACO=1
BUILD_HYDRATH_PETSC=1
BUILD_HYDRATH_ML=1
BUILD_HYDRATH_TRILINOS=1
args=("$@")
   echo  ${args[0]} ${args[1]} ' -> args=("$@"); echo ${args[0]} ${args[1]}'
   export ARGONE=${args[0]}
   export ARGTWO=${args[1]}
   echo "${ARGONE} ${ARGTWO}"


   export NODE=`uname -n |sed 's/\(.\{0\}\).\{9\}$//'`
if [ ${TYPE} = "" -a ${COMPARE_NUMBER} = "" ]; then
	COMP_USE=`icc --version |egrep "icc" |sed 's/[()IC ]//g' |sed 's/\(.\{0\}\).\{8\}$//' |sed 's/icc/intel-/g'`	
	TYPE=`icc --version |egrep "icc" |sed 's/[()IC ]//g' |sed 's/\(.\{0\}\).\{14\}$//' |sed 's/icc/intel/g'`
        PACKAGE_NUMBER=`icc --version |egrep "icc" |sed 's/[()ICic ]//g' |sed 's/\(.\{0\}\).\{8\}$//'`
	COMPARE_NUMBER=`icc --version |egrep "icc" |sed 's/[()ICic ]//g' |sed 's/\(.\{0\}\).\{8\}$//' |sed 's/[.]//g'`
        MPI_USE=`icc --version |egrep "icc" |sed 's/[()IC ]//g' |sed 's/\(.\{0\}\).\{8\}$//' |sed 's/icc/intel-/g' |sed 's/4/8/g'`
  CC_BASE=icc
  CXX_BASE=icpc
  FC_BASE=ifort
fi
if [ ${TYPE} = "" -a ${COMPARE_NUMBER} = "" ]; then
	COMP_USE=`gcc --version |egrep "gcc" |sed 's/[()GC ]//g' |sed 's/\(.\{0\}\).\{21\}$//' |sed 's/gcc/gcc-/g'`
	TYPE=`gcc --version |egrep "gcc" |sed 's/[()GC ]//g' |sed 's/\(.\{0\}\).\{26\}$//'`
	PACKAGE_NUMBER=`gcc --version |egrep "gcc" |sed 's/[()GCgc ]//g' |sed 's/\(.\{0\}\).\{21\}$//'`
	COMPARE_NUMBER=`gcc --version |egrep "gcc" |sed 's/[()GCgc ]//g' |sed 's/\(.\{0\}\).\{21\}$//'  |sed 's/[.]//g'`
        MPI_USE=`gcc --version |egrep "gcc" |sed 's/[()GC ]//g' |sed 's/\(.\{0\}\).\{21\}$//' |sed 's/gcc/gnu-/g'`
  CC_BASE=gcc
  CXX_BASE=g++
  FC_BASE=gfortran
fi
if [ ${TYPE} = "" -a ${COMPARE_NUMBER} = "" ]; then
  echo "No compatable compilers found, either add desired compilers to your PATH and LD_LIBRARY_PATH env"
fi

echo $NODE
if [ $NODE = pu239 -o $NODE = u241 -o $NODE = u233 ]; then
       module use /opt/casl_vri_dev_env/fissile_four/modules
       module load casl-dev
       module load starccm
       module load ${TYPE}/${PACKAGE_NUMBER}
       module load openmpi/$MPI_USE
       module load MKL/12.0.4  
       module load TBB/12.0.4
        ENV_LOADED="1" 
fi
if [ $NODE = boris -o $NODE = natasha ]; then
        module use /opt/casl_vri_dev_env/fissile_four/modules
        module load casl-dev
        module load starccm
        module load ${TYPE}/${PACKAGE_NUMBER}
        module load openmpi/$MPI_USE
        module load MKL/12.0.4  
        module load TBB/12.0.4
        ENV_LOADED=1 
fi 
module list

if [ ${TYPE} = gcc -a ${COMPARE_NUMBER} -lt 460 ]; then
        echo "You need to update your GNU compilers to at least 4.6.1"
        BUILD_GCC=1
fi

if [ ${TYPE} = intel -a ${COMPARE_NUMBER} -lt 111 ]; then
        echo "You need to update your INTEL compilers to at least 11.1"
fi
#SEARCH $PATH DIRECTORIES
PATH_SEARCH=`echo $PATH |sed 's/:/ /g'`
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
LIBRARY_PATH_SEARCH=`echo $LD_LIBRARY_PATH |sed 's/:/ /g'`
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
   export PACKAGE_DIR=${PWD}/..
   export MPI_DIR=/opt/gcc-4.6.1/trilinos-toolset
   export PREFIX=${TPL_INSTALL_DIR}
   echo "${METHOD} ${BASE_DIR} ${TPL_INSTALL_DIR} ${PACKAGE_DIR}"

#LINUX BASED VARIABLES (WILL MAKE GENERAL IN FUTURE RELEASES)
   export PLATFORM=linux-gnu
   export PETSC_ARCH=${PLATFORM}-$METHOD
   export TRILINOS_DIR=$TPL_INSTALL_DIR/../Trilinos
   export HYDRATH_TRILINOS_DIR=$TPL_INSTALL_DIR/../Trilinos
   export PATH=$PATH:.

#  Set versions of TPLS
   export HDF5_VERSION=hdf5-1.8.7
   export SILO_VERSION=silo-4.7.2
   export QT_VERSION=qt-everywhere-opensource-src-4.8.2
   export OPENMPI_VERSION=openmpi-1.4.3
   export TRILINOS_VERSION=Trilinos
   export ZLIB_VERSION=zlib-1.2.5-patched
   export HDF5_VERSION=hdf5-1.8.7
   export NETCDF_VERSION=netcdf-4.1.3
   export EXODUS_VERSION=exodusii-5.14-patched
   export PARMETIS_VERSION=parmetis-4.0.2-patched
   export CHACO_VERSION=Chaco-2.2-patched
   export PETSC_VERSION=petsc-3.1-p8
   export ML_VERSION=ml-6.2
   export HYDRATH_TRILINOS_VERSION=Trilinos
   export LAPACK_VERSION=lapack-3.3.1
   export BOOST_VERSION=boost_1_49_0
   export CMAKE_VERSION=cmake-2.8.5

   export OPENMPI_VER=1.4.3
   export HDF5_VER=1.8.7
   export SILO_VER=4.7.2
   export QT_VER=4.8.2
   export ZLIB_VER=1.2.5-patched
   export NETCDF_VER=4.1.3
   export EXODUS_VER=5.14-patched
   export PARMETIS_VERSION=4.0.2-patched
   export CHACO_VER=2.2-patched
   export PETSC_VER=3.1-p8
   export ML_VER=6.2
   export HYDRATH_TRILINOS_VERSION=Trilinos
   export LAPACK_VER=3.3.1
   export BOOST_VERSION=1.49.0
   export CMAKE_VERSION=2.8.5


#set compile flags
if [ $METHOD = opt ]
then 
   COMPILE_MODE=optimized
   CFLAGS="-O2 -fPIC"
   CXXFLAGS="-O2 -fPIC"
   FCFLAGS="-O2 -fPIC"
   DEBUG_BOOL="FALSE"
else
   COMPILE_MODE=debug
   CFLAGS="-g -fPIC"
   CXXFLAGS="-g -fPIC"
   FCFLAGS="-g -fPIC" 
   DEBUG_BOOL="TRUE"
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
for i in common cobra-tf decartext hydrath lime moose scale starccm vera_cs
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

if [ $BUILD_GCC -eq "1" ]; then

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/gcc" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/gcc
    mkdir -p ${PACKAGE_DIR}/gcc/${COMP_USE}_build    
 fi
 cd ${PACKAGE_DIR}/gcc/${COMP_USE}
 ./contrib/download_prerequisites 
 cd ${PACKAGE_DIR}/gcc/${COMP_USE}_build
 make distclean
#GCC CONFIGURE, BASED ON FISSILE BUILD, DISALLOWING MULTILIB
    ../${COMP_USE}/configure --prefix=${TPL_INSTALL_DIR}/toolset/gcc --enable-threads=posix --enable-languages=c,c++,fortran  --disable-multilib      
 make
 make install
 export GCC_DIR=${TPL_INSTALL_DIR}/toolset/gcc
 export PATH=${GCC_DIR}/bin:$PATH
 export LD_LIBRARY_PATH=${GCC_DIR}/lib64:$LD_LIBRARY_PATH
fi
read -n1 -r -p "Press any key to continue..." key
##END GCC##


##OPENMPI##

if [ $BUILD_OPENMPI -eq "1" ]; then

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/openmpi" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/openmpi
    mkdir -p ${PACKAGE_DIR}/openmpi/${OPENMPI_VERSION}_build
 fi
 cd ${PACKAGE_DIR}/openmpi/${OPENMPI_VERSION}_build
 make distclean
#OPENMPI CONFIGURE, BASED ON FISSILE BUILD
    ../${OPENMPI_VERSION}/configure --prefix=${TPL_INSTALL_DIR}/toolset/openmpi
 make
 make install
 make tests
 export OPENMPI_DIR=${TPL_INSTALL_DIR}/toolset/openmpi
 export PATH=${OPENMPI_DIR}/bin:$PATH
 export LD_LIBRARY_PATH=${OPENMPI_DIR}/lib:$LD_LIBRARY_PATH
fi
read -n1 -r -p "Press any key to continue..." key
##END OPENMPI##


##BOOST##
if [ $BUILD_BOOST -eq "1" ]; then

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/boost" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/boost
 fi
 mkdir -p ${PACKAGE_DIR}/boost/${BOOST_VERSION}_build
 cd ${PACKAGE_DIR}/boost/${BOOST_VERSION}_build
 make distclean
#BOOST CONFIGURE, BASED ON FISSILE BUILD
 ./bootstrap.sh
 ./b2 install --prefix=$TPL_INSTALL_DIR/toolset/boost
 export BOOST_DIR=${TPL_INSTALL_DIR}/toolset/boost
fi
read -n1 -r -p "Press any key to continue..." key
##BOOST END##

##LAPACK##
if [ $BUILD_LAPACK -eq "1" ]; then

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/lapack" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/lapack
 fi
 mkdir -p ${PACKAGE_DIR}/boost/${LAPACK_VERSION}_build
 cd ${PACKAGE_DIR}/boost/${LAPACK_VERSION}_build
 make distclean
#LAPACK CONFIGURE, BASED ON FISSILE BUILD
 cp make.inc.example make.inc
 make blaslib lapacklib tmglib
 export LAPACK_DIR=${TPL_INSTALL_DIR}/toolset/lapack
 cp blas_${PLATFORM}.a ${LAPACK_DIR}/lib/libblas.a
 cp lapack_${PLATFORM}.a ${LAPACK_DIR}/lib/liblapack.a
 cp tmglib_${PLATFORM}.a ${LAPACK_DIR}/lib/libtmglib.a
 export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${LAPACK_DIR}/lib
fi
read -n1 -r -p "Press any key to continue..." key
##LAPACK END##

##CMAKE##
if [ $BUILD_CMAKE -eq "1" ]; then

 if [ ! -d "${TPL_INSTALL_DIR}/toolset/cmake" ]
 then
    mkdir -p ${TPL_INSTALL_DIR}/toolset/cmake
 fi
 mkdir -p ${PACKAGE_DIR}/boost/${CMAKE_VERSION}_build
 cd ${PACKAGE_DIR}/boost/${CMAKE_VERSION}_build
 make distclean
#CMAKE CONFIGURE, BASED ON FISSILE BUILD
 ./bootstrap --prefix=$TPL_INSTALL_DIR/toolset/cmake
 make
 make install
 export CMAKE_DIR=${TPL_INSTALL_DIR}/toolset/cmake
 export PATH=${CMAKE_DIR}/bin:${PATH}
fi
read -n1 -r -p "Press any key to continue..." key
##CMAKE END##

##########
##COMMON##
##########

#COMMON DIRECTORY, SHOULD BE SHARABLE BY ALL PACKAGES, UNLESS NOTED FOR EACH SPECIFIC 
#PACKAGE WITH CAUSE OF CONFLIC

export CC=gcc
export CXX=g++
export FC=gfortran


###############
##  VERA_CS  ##
###############
#HDF5
if [ $BUILD_HDF5 -eq "1" ]; then
cd ${PREFIX}/VERA/${COMP_USE}/vera_cs
 if [ ! -d "$TPL_INSTALL_DIR/vera_cs/hdf5" ]
 then
    mkdir -p $TPL_INSTALL_DIR/vera_cs/hdf5
 fi

 cd ${PACKAGE_DIR}/hdf5
 cd ${HDF5_VER}
 make distclean

 if [ $METHOD == opt ]
 then 
        configure --prefix=${TPL_INSTALL_DIR}/vera_cs/hdf5 --enable-production --enable-static --disable-debug --disable-shared --disable-paralle
 else
        configure --prefix=${TPL_INSTALL_DIR}/vera_cs/hdf5 --disable-production --enable-static --enable-debug --disable-shared
 fi
 make
 make install
 export HDF5_DIR=${TPL_INSTALL_DIR}/vera_cs/hdf5
fi
read -n1 -r -p "Press any key to continue..." key

#SILO INSTALL
if [ $BUILD_SILO -eq "1" ]; then
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/silo" ]
then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/silo
fi

cd $PACKAGE_DIR/silo
cd ${SILO_VER}
make distclean
if [ $METHOD == opt ]
then  
       configure CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --disable-debug CFLAGS="-O2 -fPIC" CXXFLAGS="-O2 -fPIC" FCFLAGS="-O2 -fPIC"
else
        configure CC=$CC_BASE CXX=$CXX_BASE FC=$FC_BASE F77=$FC_BASE --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --enable-debug CFLAGS="-g -fPIC" CXXFLAGS="-g -fPIC" FCFLAGS="-g -fPIC"
fi
make
make install
export SILO_DIR=${TPL_INSTALL_DIR}/vera_cs/silo
fi
read -n1 -r -p "Press any key to continue..." key


#SPRNG_INSTALL
if [ $BUILD_SPRNG -eq "1" ]; then
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/sprng" ]
then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/sprng
fi
cd $PACKAGE_DIR/sprng
cp sprng.tar.gz $TPL_INSTALL_DIR/vera_cs
cd $TPL_INSTALL_DIR/vera_cs
tar zxvf sprng.tar.gz
rm sprng.tar.gz
fi
read -n1 -r -p "Press any key to continue..." key

#QT INSTALL
if [ $BUILD_QT -eq "1" ]; then
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
   export CC=ccc
   export CXX=g++
   export FC=gfortran
   export F90=gfortran
        configure -prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -release -confirm-license -no-webkit -no-multimedia -static
else
   export CC=ccc
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
read -n1 -r -p "Press any key to continue..." key

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

   cd ${PACKAGE_DIR}
#   if [ ! -d " ${HYDRATH_TRILINOS_VERSION}" ]
#   then
#       tar zxvf ${HYDRATH_TRILINOS_VERSION}.tar.gz
#   fi
  mkdir -p ${HYDRATH_TRILINOS_VERSION}_build
  cd ${HYDRATH_TRILINOS_VERSION}_build
  rm -rf CMake*
   cmake \
    -D CMAKE_Fortran_COMPILER:PATH=mpif90 \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
    -D CMAKE_Fortran_FLAGS:STRING=${FARG} \
    -D TPL_ENABLE_MPI:BOOL=ON \
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
    ${HYDRATH_TRILINOS_DIR}
  make $MAKEFLAGS install
  fi
 read -n1 -r -p "Press any key to continue..." key

# Zlib
if [ $BUILD_ZLIB -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/zlib" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath/zlib
   fi

   cd ${PACKAGE_DIR}/zlib
   if [ ! -d " ${ZLIB_VER}" ]
   then
       tar zxvf ${ZLIB_VERSION}.tar.gz
       mkdir -p ${ZLIB_VERSION}_build
   fi
  cd ${ZLIB_VERSION}_build
  rm -r CMake*
cmake \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D BUILD_SHARED_LIBS=OFF \
    -D CMAKE_C_FLAGS=-fPIC \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath ../${ZLIB_VERSION}
  make $MAKEFLAGS install
fi
read -n1 -r -p "Press any key to continue..." key

# HDF5
if [ $BUILD_HDF5 -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/hdf5" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath ${TPL_INSTALL_DIR}/hydrath/hdf5
   fi

   cd ${PACKAGE_DIR}/hdf5
   if [ ! -d " ${HDF5_VER}" ]
   then
       tar zxvf ${HDF5_VERSION}.tar.gz
   fi
  cd ${HDF5_VER}
  make distclean
   export CC=gcc
   export CXX=g++
   export FC=gfortran
   configure                    \
    --with-zlib=${TPL_INSTALL_DIR}/lib \
    --prefix=${TPL_INSTALL_DIR}/hydrath
  make $MAKEFLAGS install
   export CC=mpicc
   export CXX=mpicxx
   export FC=mpif90
fi
read -n1 -r -p "Press any key to continue..." key

# NetCDF
if [ $BUILD_NETCDF -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi

   cd ${PACKAGE_DIR}/netcdf
   if [ ! -d " ${NETCDF_VER}" ]
   then
       tar zxvf ${NETCDF_VER}.tar.gz
   fi
  cd ${NETCDF_VER}
  make distclean
  configure      \
    --prefix=${TPL_INSTALL_DIR}/hydrath      \
    --disable-examples                              \
    --enable-netcdf4      \
    --disable-dap         \
    CPPFLAGS="-I${TPL_INSTALL_DIR}/hydrath/include -I${TPL_INSTALL_DIR}/hydrath/include"     \
    LDFLAGS="-L${TPL_INSTALL_DIR}/hydrath/lib -L${TPL_INSTALL_DIR}/hydrath/lib"
  make $MAKEFLAGS install
  make check
NETCDF_DIR=${TPL_INSTALL_DIR}/hydrath
fi 
read -n1 -r -p "Press any key to continue..." key

# ExodusII & Nemesis
if [ $BUILD_EXODUS -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath
   fi

   cd ${PACKAGE_DIR}/exodus
   if [ ! -d " ${EXODUS_VER}" ]
   then
       tar zxvf ${EXODUS_VERSION}.tar.gz
       mkdir -p ${EXODUS_VER}_build
   fi
  cd ${EXODUS_VERSION}_build
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
read -n1 -r -p "Press any key to continue..." key


# ParMetis
if [ $BUILD_PARMETIS -eq "1" ]; then
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath/parmetis
   fi
   if [ ! -d " ${PARMETIS_VERSION}" ]
   then
       tar zxvf ${PARMETIS_VERSION}.tar.gz
       mkdir -p ${TPL_INSTALL_DIR}/hydrath/lib
   fi
  cd ${PARMETIS_VER}
  make distclean
  make config prefix=${TPL_INSTALL_DIR}/hydrath
  MF=$MAKEFLAGS
  unset MAKEFLAGS
  make install
  export MAKEFLAGS=$MF
  cp -vf build/$(uname -s)-$(uname -m | sed "s/\\ /_/g")/libmetis/libmetis.a \
     ${TPL_INSTALL_DIR}/hydrath/lib
  cp -vf metis/include/metis.h ${TPL_INSTALL_DIR}/hydrath/include
read -n1 -r -p "Press any key to continue..." key

# Chaco
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/chaco" ]
   then
   mkdir -p ${TPL_INSTALL_DIR}/hydrath/lib
   fi
   cd ${PACKAGE_DIR}/chaco
   if [ ! -d " ${CHACO_VER}" ]
   then
       tar zxvf ${CHACO_VERSION}.tar.gz
   fi
   cd ${CHACO_VER}/code
   ${CHACO_CONF_CMD}
   make $MAKEFLAGS AR=ar lib
   cp libchaco.a ${TPL_INSTALL_DIR}/hydrath/lib/
fi
read -n1 -r -p "Press any key to continue..." key



# PETSc
if [ $BUILD_PETSC -eq "1" ]; then
   if [ ! -d "$PETSC_DIR" ]
   then
   mkdir  -p ${TPL_INSTALL_DIR}/hydrath/petsc ${TPL_INSTALL_DIR}/hydrath/petsc/lib 
   fi

   cd ${PACKAGE_DIR} 
   if [ ! -d " ${PETSC_VERSION}" ]
   then
       tar zxvf ${PETSC_VERSION}.tar.gz
   fi
   cd  ${PETSC_VERSION}
   export PETSC_ARCH=llinux-gnu-opt 
    configure \
      PETSC_DIR=${PACKAGE_DIR}/$PETSC_VERSION \
      PETSC_ARCH=${PETSC_ARCH} \
      --prefix=${TPL_INSTALL_DIR}/hydrath \
      --with-clanguage=c++ \
      --with-x=false \
      --with-x11=false \
      --download-ml=${PACKAGE_DIR}/${ML_VERSION}.tar.gz \
      --with-debugging=0 \
      --with-blas-lib=$TPL_INSTALL_DIR/common/lapack/lib/libblas.a \
      --with-lapack-lib=$TPL_INSTALL_DIR/common/lapack/lib/liblapack.a \
      -COPTFLAGS=-O3 \
      -CXXOPTFLAGS=-O3 \
      -FOPTFLAGS=-O3 \
      -FFLAGS=-ffree-line-length-none
   make $MAKEFLAGS PETSC_DIR=${PACKAGE_DIR}/${PETSC_VERSION} \
        PETSC_ARCH=${PLATFORM}-opt all
   make $MAKEFLAGS PETSC_DIR=${PACKAGE_DIR}/${PETSC_VERSION} \
       PETSC_ARCH=${PLATFORM}-opt install
   make $MAKEFLAGS PETSC_DIR=${PACKAGE_DIR}/${PETSC_VERSION} \
       PETSC_ARCH=${PLATFORM}-opt test
   cd $TPL_INSTALL_DIR/../../
   fi
   read -n1 -r -p "Press any key to continue..." key


echo "#" >> $COMP_USE_tpl.cmake
echo "# TPLs and other compiler-specific settings for VERA $COMP_USE builds" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# NOTE: This file only needs to get included when doing an actual configure,
# not during package dependency adjustment such as in the CI and Nightly
# CTest/CDash drivers." >> $COMP_USE_tpl.cmake 
echo "#" >> $COMP_USE_tpl.cmake
echo "Offical VERA TPLs." >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "## NOTE: These are TPLs that are offcially maintained by the VRI Infrastructure
# team and represent official versions of TPLs" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# VERA TPLs to specifically turn on (not on by default)" >> $COMP_USE_tpl.cmake
echo "SET(TPL_ENABLE_Netcdf ON CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "SET(TPL_ENABLE_Zlib  ON  CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "SET(TPL_ENABLE_SPRNG  OFF CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "" >> $COMP_USE_tpl.cmake
echo "# VERA offical TPLs" >> $COMP_USE_tpl.cmake
echo 'SET(HDF5_LIBRARY_NAMES "hdf5_hl;hdf5;hdf5_cpp" CACHE STRING "")' >> $COMP_USE_tpl.cmake
echo "SET(HDF5_LIBRARY_DIRS $HDF5_DIR/lib CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(HDF5_INCLUDE_DIRS $HDF5_DIR/include CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Netcdf_INCLUDE_DIRS $NETCDF/include CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Netcdf_LIBRARY_DIRS $NETCDF/lib CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(SILO_INCLUDE_DIRS $SILO_DIR/include CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(SILO_LIBRARY_DIRS $SILO_DIR/lib CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Zlib_INCLUDE_DIRS $ZLIB_DIR/include CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Zlib_LIBRARY_DIRS $ZLIB_DIR/lib CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(QT_REQUIRED_VERSION 4.7.1 CACHE STRING   "")" >> $COMP_USE_tpl.cmake
echo "SET(QT_QMAKE_EXECUTABLE $QT_DIR/bin/qmake CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# Axillary VERA component TPLs" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# NOTE: These sets of TPLs should not overlap with other component TPLs or the
# offical VERA TPLs in order to provide independence of the different VERA
# component efforts.  Once these axillary are made to use standard TPL
# version, such as is required in a linked coupled multi-physics executable,
# the TPLs will be moved to the above list and removed from here.  We can play
# this game as long as we never link together these in a single executable and
# we are careful with package dependencies." >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "#SET(TPL_ENABLE_MOOSE_HYPRE ON CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "#SET(TPL_ENABLE_Libmesh ON CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "#SET(TPL_ENABLE_Libmesh_Contrib ON CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# Hydra-TH TPLs" >> $COMP_USE_tpl.cmake
echo "SET(HYDRATPL_INCLUDE_DIRS ${TPL_INSTALL_DIR}/hydrath/include CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(HYDRATPL_LIBRARY_DIRS ${TPL_INSTALL_DIR}/hydrath/lib     CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(HYDRATPL_BINARY_DIRS  ${TPL_INSTALL_DIR}/hydrath/bin     CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# MOOSE-related TPLs" >> $COMP_USE_tpl.cmake
echo "SET(Libmesh_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/include/flat_headers CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Libmesh_LIBRARY_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/lib/x86_64-unknown-linux-gnu_opt CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Libmesh_Contrib_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/contrib/flat_headers CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(Libmesh_Contrib_LIBRARY_DIRS  '/projects/TPLs/moose_libs/libmesh-pcu/contrib/lib/x86_64-unknown-linux-gnu_opt;/projects/TPLs/moose_libs/libmesh-pcu/contrib/tecplot/lib/x86_64-unknown-linux-gnu' CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(MOOSE_PETSC_INCLUDE_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/include  CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(MOOSE_PETSC_LIBRARY_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/lib      CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(MOOSE_HYPRE_INCLUDE_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/include  CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(MOOSE_HYPRE_LIBRARY_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/lib      CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "#" >> $COMP_USE_tpl.cmake
echo "# DataTransferKit TPLs" >> $COMP_USE_tpl.cmake
echo "SET(TPL_ENABLE_MOAB ON CACHE BOOL "")" >> $COMP_USE_tpl.cmake
echo "SET(MOAB_LIBRARY_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/lib CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
echo "SET(MOAB_INCLUDE_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/include CACHE FILEPATH "")" >> $COMP_USE_tpl.cmake
