#!/bin/bash -eu

#Usage arg[0]=optimazation level ex dbg or opt
#Usage arg[1]=base package directory,, where tarballs are stored.  HDF5 
#1.8.8, SILO 4.7.0, SPRNG 0.5, TRILINOS dev pull. 
#Usage arg[2]=base tpl install directory
#EXAMPLE . casl.sh opt /home/inb/test_vera/VERA/tpl  /home/inb/test_vera/VERA
#please note to use .space before envokeing the tpl script
#*****NOTE*****If you do not have Intel 12.04 or later or gcc 4.6.1 compilers 
#installed you must install them before running this script. You will find install 
#instructions below. *****END NOTE****
#Final Version inb                                    10/09/2012
#
#TPL Requirements:
#
# VERA-CS
#      HDF5 1.8.5-patch1
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
#  If on the fissile 4 machines you can uncomment the first 4 lines before executing the script.
#  Supported configurations include:
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
#eGCC4.5.1/Intel11.1.064
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
   export PATH=/opt/gcc-4.6.1/trilinos-toolset/bin:/opt/trilinos-toolset/bin:/opt/casl_vri_dev_env/common_tools:$PATH:.:/opt/star/starccm+6.06.011/star/bin
   export LD_LIBRARY_PATH=/opt/gcc-4.6.1/trilinos-toolset/lib64:/opt/intel/Compiler/composerxe-2011.4.191/mkl/lib/intel64:/opt/intel/Compiler/composerxe-

2011.4.191/tbb/lib/intel64//cc4.1.0_libc2.4_kernel2.6.16.21:/opt/trilinos-toolset/bin:/opt/casl_vri_dev_env/common_tools:/opt/intel-11.1.064/tpls/hdf5-1.8.5-patch1/lib:LD_LIBRARY_PATH
   export GCC_LIB_DIR=/opt/gcc-4.6.1/trilinos-toolset/lib64:/opt/gcc-4.6.1/trilinos-toolset/lib:$GCC_LIB_DIR
   export TYPE=gcc461
   export METHOD=opt
   export COMP_USE=gcc-4.6.1
   export BASE_DIR=/localprojects
   export PACKAGE_DIR=/localprojects/vera/tpl
   export TPL_INSTALL_DIR=/localprojects/vera/${COMP_USE}
   export MPI_DIR=/opt/gcc-4.6.1/trilinos-toolset
   export PREFIX=$TPL_INSTALL_DIR


#LINUX BASED VARIABLES (WILL MAKE GENERAL IN FUTURE RELEASES
   export PATH=$PATH:$TPL_INSTALL_DIR/common/cmake/bin
   export PLATFORM=linux-gnu
   export PETSC_ARCH=${PLATFORM}-$METHOD
   export TRILINOS_DIR=$TPL_INSTALL_DIR/../Trilinos
   export HYDRATH_TRILINOS_DIR=$TPL_INSTALL_DIR/../Trilinos
   export PATH=$PATH:.

# Set the compilers
   export CC=mpicc
   export CXX=mpicxx
   export FC=mpif90

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
   export OPENMPI_VERSION=openmpi-1.4.3
#   export GCC_VERSION=

    
#SET CONFIGURE STATEMENTS
#   export OPENMPI_CONF_CMD="configure --prefix=${TPL_INSTALL_DIR}/hydrath"
#
#   export HYDRATH_TRILINOS_CONF_CMD=" \
#   cmake \
#    -D CMAKE_Fortran_COMPILER:PATH=mpif90 \
#    -D CMAKE_C_COMPILER:PATH=mpicc \
#    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
#    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
#    -D CMAKE_Fortran_FLAGS:STRING=${FARG} \
#    -D TPL_ENABLE_MPI:BOOL=ON \
#    -D Trilinos_ENABLE_Epetra:BOOL=ON \
#    -D Trilinos_ENABLE_EpetraExt:BOOL=ON \
#    -D Trilinos_ENABLE_Tpetra:BOOL=ON \
#    -D Trilinos_ENABLE_Teuchos:BOOL=OFF \
#    -D Trilinos_ENABLE_Kokkos:BOOL=OFF \
#    -D Trilinos_ENABLE_AztecOO:BOOL=OFF \
#    -D Trilinos_ENABLE_ML:BOOL=OFF \
#    -D Trilinos_ENABLE_NOX:BOOL=OFF \
#    -D Trilinos_ENABLE_Amesos:BOOL=OFF \
#    -D Trilinos_ENABLE_TESTS:BOOL=OFF \
#    -D Trilinos_ENABLE_PERFORMANCE_TESTS:BOOL=OFF \
#    -D Trilinos_ENABLE_Fortran:BOOL=ON \
#    -D Trilinos_ENABLE_Ifpack:BOOL=OFF \
#    -D Trilinos_ENABLE_Zoltan:BOOL=ON \
#    ${HYDRATH_TRILINOS_DIR}"
#
#ZLIB_CONF_CMD=" \
#   cmake \
#    -D CMAKE_C_COMPILER:PATH=mpicc \
#    -D BUILD_SHARED_LIBS=OFF \
#    -D CMAKE_C_FLAGS=-fPIC \
#    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath ../${ZLIB_VERSION}"
#
#HDF5_CONF_CMD="configure                    \
#    --with-zlib=${TPL_INSTALL_DIR}/lib \
#    --prefix=${TPL_INSTALL_DIR}/hydrath"
#
#NETCDF_CONF_CMD=configure      \
#    --prefix=${TPL_INSTALL_DIR}/hydrath      \
#    --disable-examples                              \
#    --enable-netcdf4      \
#    --disable-dap         \
#    CPPFLAGS="-I${TPL_INSTALL_DIR}/hydrath/include -I${TPL_INSTALL_DIR}/hydrath/include"     \
#    LDFLAGS="-L${TPL_INSTALL_DIR}/hydrath/lib -L${TPL_INSTALL_DIR}/hydrath/lib"
#
#EXODUS_CONF_CMD=" \
#  cmake \
#    -D CMAKE_C_COMPILER:PATH=mpicc \
#    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
#    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
#    -D HDF5HL_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5_hl.a \
#    -D HDF5_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5.a \
#    -D NETCDF_INCLUDE_DIR:PATH=${TPL_INSTALL_DIR}/hydrath/include \
#    -D NETCDF_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libnetcdf.a \
#    -D NETCDF_NCDUMP:PATH=${TPL_INSTALL_DIR}/hydrath/bin/ncdump \
#    -D Z_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libz.a \
#    ../${EXODUS_VERSION}/exodus"
#
#NEMESIS_CONF_CMD=" \
#    cmake \
#    -D CMAKE_Fortran_COMPILER:PATH=mpif90 \
#    -D CMAKE_C_COMPILER:PATH=mpicc \
#    -D CMAKE_CXX_COMPILER:PATH=mpic++ \
#    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath \
#    -D EXODUS_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libexoIIv2c.a \
#    -D EXODUS_INCLUDE:PATH=${TPL_INSTALL_DIR}/hydrath/include/exodusII.h \
#    -D HDF5HL_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5_hl.a \
#    -D HDF5_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libhdf5.a \
#    -D NETCDF_INCLUDE_DIR:PATH=${TPL_INSTALL_DIR}/hydrath/include \
#    -D NETCDF_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libnetcdf.a \
#    -D NETCDF_NCDUMP:PATH=${TPL_INSTALL_DIR}/hydrath/bin/ncdump \
#    -D Z_LIBRARY:PATH=${TPL_INSTALL_DIR}/hydrath/lib/libz.a \
#    ../${EXODUS_VERSION}/nemesis"
#
#PARMETIS_CONF_CMD="make config prefix=${TPL_INSTALL_DIR}/hydrath"
#
#
#CHACO_CONF_CMD=""
#
#PETSC_CONF_CMD="configure \
#      PETSC_DIR=${PACKAGE_DIR}/$PETSC_VERSION \
#      PETSC_ARCH=${PETSC_ARCH} \
#      --prefix=${TPL_INSTALL_DIR}/hydrath \
#      --with-clanguage=c++ \
#      --with-x=false \
#      --with-x11=false \
#      --download-ml=${PACKAGE_DIR}/${ML_VERSION}.tar.gz \
#      --with-debugging=0 \
#      -COPTFLAGS=-O3 \
#      -CXXOPTFLAGS=-O3 \
#      -FOPTFLAGS=-O3 \
#      -FFLAGS=-ffree-line-length-none"

#set compile flags
if [ $METHOD == opt ]
then 
   COMPILE_MODE=optimized
   CFLAGS="-O2 -fPIC"
   CXXFLAGS="-O2 -fPIC"
   FCFLAGS="-O2 -fPIC"
   DEBUG_BOOL="true"
else
   COMPILE_MODE=debug
   CFLAGS="-g -fPIC"
   CXXFLAGS="-g -fPIC"
   FCFLAGS="-g -fPIC" 
   DEBUG_BOOL="false"
fi


#SETUP BASIC DIRECTORY STRUCTURE (SHOULD BE USER DEFINABLE)
if [ ! -d "${BASE_DIR}/VERA" ]
then
   mkdir  ${BASE_DIR} ${BASE_DIR}/VERA
fi


#SETUP DIRECTORY TREE BASED ON COMPILER DESIRED (SHOULD BE USER DEFINABLE HOWEVER COMPATABILITY ISSUES MAY ARISE IF YOU 

#VER FROM THE TESTED PATH)
if [ ! -d "${BASE_DIR}/VERA/${COMP_USE}" ]
then
   mkdir  ${BASE_DIR} ${BASE_DIR}/VERA/${COMP_USE}
fi

#CHECK EXISTANCE OF COMMON AND PACKAGE SPECIFIC DIRECTORIES for TPLS, The game place is to make this script use a for 

#statement, so a name can be added to list and then make that directory part of the install structure
for i in common hydrath cobraext decartext vera_cs starccmext scale lime moose
do
   if [ ! -d "${TPL_INSTALL_DIR}/$i" ]
   then
   mkdir ${TPL_INSTALL_DIR}/$i 
   fi
done

##########
##COMMON##
##########

#COMMON DIRECTORY, SHOULD BE SHARABLE BY ALL PACKAGES, UNLESS NOTED FOR EACH SPECIFIC 
#PACKAGE WITH CAUSE OF CONFLIC

#GCC install, please only use if you do not have a version of GNU GCC 4.6.1 
#installed on your system.  This is a lengthy process and will take some time 
#to successfully complete.  The basic sets for installation.  Download the 
#following programs fom the internet to your $PACKAGE_DIR
#gnu gcc 4.6.3
#GMP 5.0.5
#MPFR-3.1.0
#MPC-0.9
#Extract GMP, MPFR and MPC to the top directory GCC.  Remove the version portion of 
#the gmp, mpfr and mpc directories so you should have a gmp, mpfr and mpc folders S
#EXAMPLE
#gcc-4.6.1\
#       gmp\
#       mpfr\
#       mpc\
export CC=gcc
export CXX=g++
export FC=gfortran
#cd  to the gcc-4.6.1 and type the following configure statement
#  configure \
#  --with-gmp=/projects/amp/packages/gcc-4.6.3/gmp   \
#  --with-mpc=/projects/amp/packages/gcc-4.6.3/mpc   \
#  --with-mpfr=/projects/amp/packages/gcc-4.6.3/mpfr \
#  --prefix=$TPL_INSTALL_DIR/gcc                     \
#  --enable-languages=c,c++,fortran
#Once configuration is complete type the following:
#make
#make install 

#CMAKE BUILD
#if [ ! -d "$TPL_INSTALL_DIR/common/cmake" ]
#then
#   mkdir  $TPL_INSTALL_DIR/common $TPL_INSTALL_DIR/common/common $TPL_INSTALL_DIR/common/cmake
#fi
#cd $PACKAGE_DIR
#if [ ! -d " ${CMAKE_VERSION} " ]
#then
#   tar zxvf ${CMAKE_VERSION}.tar.gz
#fi
#cd ${CMAKE_VERSION}
#make distclean
#./bootstrap --prefix=$TPL_INSTALL_DIR/common/cmake
#gmake
#gmake install
#export PATH=$PATH:$TPL_INSTALL_DIR/common/cmake/bin


#LAPACK
#if [ ! -d "$TPL_INSTALL_DIR/common/lapack" ]
#then
#   mkdir  $TPL_INSTALL_DIR/common $TPL_INSTALL_DIR/common/lapack $TPL_INSTALL_DIR/common/lapack/lib
#fi
#cd $PACKAGE_DIR
#if [ ! -d " ${LAPACK_VERSION} " ]
#then
#   tar zxvf ${LAPACK_VERSION}.tgz
#fi
#cd ${LAPACK_VERSION}
#cp make.inc.example make.inc
#make distclean
#PATH=$PATH:. export PATH; make blaslib lapacklib tmglib
#cp blas_LINUX.a $TPL_INSTALL_DIR/common/lapack/lib/libblas.a
#cp lapack_LINUX.a $TPL_INSTALL_DIR/common/lapack/lib/liblapack.a
#cp tmglib_LINUX.a $TPL_INSTALL_DIR/common/lapack/lib/libtmglib.a
#export PATH=$PATH:$TPL_INSTALL_DIR/common/lapack/lib



#BOOST
#if [ ! -d "$TPL_INSTALL_DIR/common/boost" ]
#then
#   mkdir  $TPL_INSTALL_DIR/common $TPL_INSTALL_DIR/common/boost
#fi
#cd $PACKAGE_DIR
#if [ ! -d " ${BOOST_VERSION} " ]
#then
#   tar zxvf ${BOOST_VERSION}.tar.gz
#fi
#cd ${BOOST_VERSION}
#make distclean
#./bootstrap.sh
#./b2 install --prefix=$TPL_INSTALL_DIR/common/boost
#export PATH=$PATH:$TPL_INSTALL_DIR/common/cmake/bin

   export CC=mpicc
   export CXX=mpicxx
   export F90=mpif90


###############
##  VERA_CS  ##
###############
#HDF5
#HDF5 INSTALL
cd ${PREFIX}/VERA/${COMP_USE}/vera_cs
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/hdf5" ]
then
   mkdir  $TPL_INSTALL_DIR/vera_cs $TPL_INSTALL_DIR/vera_cs/hdf5 $TPL_INSTALL_DIR/vera_cs/hdf5
fi

cd ${PACKAGE_DIR}
if [ ! -d " ${HDF5_VERSION}" ]
then
   tar zxvf ${HDF5_VERSION}.tar.gz
fi
cd ${HDF5_VERSION}
make distclean

if [ $METHOD == opt ]
then 
        configure --prefix=${TPL_INSTALL_DIR}/vera_cs/hdf5 --enable-production --enable-static --disable-debug --disable-shared
else
        configure --prefix=${TPL_INSTALL_DIR}/vera_cs/hdf5 --disable-production --enable-static --enable-debug --disable-shared
fi
make
make install
export HDF5_DIR=${TPL_INSTALL_DIR}/vera_cs/hdf5
read -n1 -r -p "Press any key to continue..." key


#SILO INSTALL
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/silo" ]
then
   mkdir  $TPL_INSTALL_DIR/vera_cs $TPL_INSTALL_DIR/vera_cs/silo $TPL_INSTALL_DIR/vera_cs/silo
fi


cd $PACKAGE_DIR
if [ ! -d " ${SILO_VERSION}" ]
then
   tar zxvf ${SILO_VERSION}.tar.gz
fi
cd ${SILO_VERSION}
make distclean
if [ $METHOD == opt ]
then 
        configure CC=mpicc CXX=mpicxx FC=mpif90 F77=mpif90 --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --disable-debug CFLAGS="-O2 -fPIC" CXXFLAGS="-

O2 -fPIC" FCFLAGS="-O2 -fPIC"
else
        configure CC=mpicc CXX=mpicxx FC=mpif90 F77=mpif90 --prefix=${TPL_INSTALL_DIR}/vera_cs/silo --with-hdf5=${HDF5_DIR}/include,${HDF5_DIR}/lib --enable-debug CFLAGS="-g -fPIC" CXXFLAGS="-g 

-fPIC" FCFLAGS="-g -fPIC"
fi
make
make install
export SILO_DIR=${TPL_INSTALL_DIR}/vera_cs/silo
read -n1 -r -p "Press any key to continue..." key


#SPRNG_INSTALL
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/sprng" ]
then
   mkdir  $TPL_INSTALL_DIR/vera_cs $TPL_INSTALL_DIR/vera_cs/sprng
fi
cd $PACKAGE_DIR
cp sprng.tar.gz $TPL_INSTALL_DIR/vera_cs
cd $TPL_INSTALL_DIR/vera_cs
tar zxvf sprng.tar.gz
rm sprng.tar.gz
read -n1 -r -p "Press any key to continue..." key

#QT INSTALL
#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/qt" ]
then
   mkdir  $TPL_INSTALL_DIR/vera_cs $TPL_INSTALL_DIR/vera_cs/qt $TPL_INSTALL_DIR/vera_cs/qt
fi


cd $PACKAGE_DIR
if [ ! -d " ${QT_VERSION} " ]
then
   tar zxvf ${QT_VERSION}.tar.gz
fi
cd ${QT_VERSION}
gmake confclean
if [ $METHOD == opt ]
then 
   export CC=ccc
   export CXX=g++
   export F90=gfortran
        configure -prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -release -confirm-license -no-webkit -no-multimedia -static
   export CC=mpicc
   export CXX=mpicxx
   export F90=mpif90
else
   export CC=ccc
   export CXX=g++
   export F90=gfortran
        configure -prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -debug -confirm-license -no-webkit -no-multimedia -static
   export CC=mpicc
   export CXX=mpicxx
   export F90=mpif90
fi
gmake all
gmake install
cd $TPL_INSTALL_DIR/vera_cs/qt/lib
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
read -n1 -r -p "Press any key to continue..." key

############
##HYDRA-TH##
############

cd ${PREFIX}/VERA/${COMP_USE}/hydrath

# OpenMPI
#   export CC=gcc
#   export CXX=g++
#   export FC=gfortran#
#
#   if [ ! -d "${TPL_INSTALL_DIR}/hydrath/openmpi" ]
#   then
#   mkdir ${TPL_INSTALL_DIR}/hydrath/openmpi 
#   fi
#
#   cd ${PACKAGE_DIR}
#   if [ ! -d " ${OPENMPI_VERSION}" ]
#   then
#       tar zxvf ${OPENMPI_VERSION}.tar.gz
#   fi
#  cd ${OPENMPI_VERSION}
#  make distclean
#  configure --prefix=${TPL_INSTALL_DIR}/hydrath
#  make $MAKEFLAGS install

# Trilinos
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/trilinos" ]
   then
   mkdir ${TPL_INSTALL_DIR}/hydrath/trilinos ${TPL_INSTALL_DIR}/hydrath/trilinos
   fi

   cd ${PACKAGE_DIR}
#   if [ ! -d " ${HYDRATH_TRILINOS_VERSION}" ]
#   then
#       tar zxvf ${HYDRATH_TRILINOS_VERSION}.tar.gz
#   fi
  mkdir ${HYDRATH_TRILINOS_VERSION}_build
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
 read -n1 -r -p "Press any key to continue..." key

# Zlib
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/zlib" ]
   then
   mkdir ${TPL_INSTALL_DIR}/hydrath  ${TPL_INSTALL_DIR}/hydrath/zlib
   fi

   cd ${PACKAGE_DIR}
   if [ ! -d " ${ZLIB_VERSION}" ]
   then
       tar zxvf ${ZLIB_VERSION}.tar.gz
       mkdir ${ZLIB_VERSION}_build
   fi
  cd ${ZLIB_VERSION}_build
  rm -r CMake*
cmake \
    -D CMAKE_C_COMPILER:PATH=mpicc \
    -D BUILD_SHARED_LIBS=OFF \
    -D CMAKE_C_FLAGS=-fPIC \
    -D CMAKE_INSTALL_PREFIX:PATH=${TPL_INSTALL_DIR}/hydrath ../${ZLIB_VERSION}
  make $MAKEFLAGS install
read -n1 -r -p "Press any key to continue..." key

# HDF5
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/hdf5" ]
   then
   mkdir ${TPL_INSTALL_DIR}/hydrath ${TPL_INSTALL_DIR}/hydrath/hdf5
   fi

   cd ${PACKAGE_DIR}
   if [ ! -d " ${HDF5_VERSION}" ]
   then
       tar zxvf ${HDF5_VERSION}.tar.gz
   fi
  cd ${HDF5_VERSION}
  make distclean
   export CC=ccc
   export CXX=g++
   export F90=mpif90
   configure                    \
    --with-zlib=${TPL_INSTALL_DIR}/lib \
    --prefix=${TPL_INSTALL_DIR}/hydrath
  make $MAKEFLAGS install
   export CC=mpicc
   export CXX=mpicxx
   export FC=mpif90
read -n1 -r -p "Press any key to continue..." key

# NetCDF
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/netcdf" ]
   then
   mkdir ${TPL_INSTALL_DIR}/hydrath ${TPL_INSTALL_DIR}/hydrath/netcdf
   fi

   cd ${PACKAGE_DIR}
   if [ ! -d " ${NETCDF_VERSION}" ]
   then
       tar zxvf ${NETCDF_VERSION}.tar.gz
   fi
  cd ${NETCDF_VERSION}
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
read -n1 -r -p "Press any key to continue..." key

# ExodusII & Nemesis
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/exodus" ]
   then
   mkdir ${TPL_INSTALL_DIR}/hydrath ${TPL_INSTALL_DIR}/hydrath/ecd xodus
   fi

   cd ${PACKAGE_DIR}
   if [ ! -d " ${EXODUS_VERSION}" ]
   then
       tar zxvf ${EXODUS_VERSION}.tar.gz
       mkdir ${EXODUS_VERSION}_build
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
    ../${EXODUS_VERSION}/exodus
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
    ../${EXODUS_VERSION}/nemesis
  cp ${TPL_INSTALL_DIR}/hydrath/include/*.h $PACKAGE_DIR/exodusii-5.14-patched/nemesis
  make $MAKEFLAGS install
read -n1 -r -p "Press any key to continue..." key


# ParMetis
   if [ ! -d "${TPL_INSTALL_DIR}/hyrath/parmetis" ]
   then
   mkdir ${TPL_INSTALL_DIR}/hydrath ${TPL_INSTALL_DIR}/hydrath/parmetis
   fi
   if [ ! -d " ${PARMETIS_VERSION}" ]
   then
       tar zxvf ${PARMETIS_VERSION}.tar.gz
       mkdir ${TPL_INSTALL_DIR}/hydrath/parmetis ${TPL_INSTALL_DIR}/hydrath/parmetis/include ${TPL_INSTALL_DIR}/hydrath/parmetis/lib
   fi
  cd ${PARMETIS_VERSION}
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
   mkdir ${TPL_INSTALL_DIR}/hydrath/chaco ${TPL_INSTALL_DIR}/hydrath/chaco/lib
   fi
   cd ${PACKAGE_DIR}
   if [ ! -d " ${CHACO_VERSION}" ]
   then
       tar zxvf ${CHACO_VERSION}.tar.gz
   fi
   cd ${CHACO_VERSION}/code
   ${CHACO_CONF_CMD}
   make $MAKEFLAGS AR=ar lib
   cp libchaco.a ${TPL_INSTALL_DIR}/hydrath/lib/
read -n1 -r -p "Press any key to continue..." key



# PETSc
   if [ ! -d "$PETSC_DIR" ]
   then
   mkdir  ${TPL_INSTALL_DIR}/hydrath/petsc ${TPL_INSTALL_DIR}/hydrath/petsc/lib 
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
   read -n1 -r -p "Press any key to continue..." key
