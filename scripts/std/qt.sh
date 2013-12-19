#!/bin/bash -e

source ${PACKAGE_DIR}/scripts/std/std-tpls.sh

echo "Installing ${QT_VERSION} ..."

 export CC=gcc
 export CXX=g++
 export FC=gfortran
 export F90=gfortran

# ToDo: Generalize the compilers!

export BUILD_LOC=${PACKAGE_DIR}/qt/${QT_VER}_build
if [ ! -d "${BUILD_LOC}" ]
then
   mkdir -p ${BUILD_LOC}
fi

cd ${BUILD_LOC}

#QT_COMMON_OPTIONS="--prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -confirm-license -no-multimedia -static -no-audio-backend -no-phonon-backend -no-javascript-jit -qt-zlib -qt-libtiff -qt-libpng -qt-libjpeg -qt-libmng -nomake demos -nomake examples -nomake translations -nomake docs -no-declarative-debug -no-declarative -no-cups -no-pch -no-sql-sqlite -no-xvideo -nomake tools -no-phonon -no-xshape"

QT_COMMON_OPTIONS="-prefix ${QT_DIR} -opensource -confirm-license -no-multimedia -static"

if [ $METHOD == opt ] ; then 
  ../${QT_VER}/configure ${QT_COMMON_OPTIONS} -release
else
  ../${QT_VER}/configure ${QT_COMMON_OPTIONS} -debug
fi

#
# NOTE: The QT configure script looks for the static libraries for X11.
# Therefore, if you see the configure error:
#
#   Basic XLib functionality test failed!
#    You might need to modify the include and library search paths by editing
#    QMAKE_INCDIR_X11 and QMAKE_LIBDIR_X11 in ???/casl_tpls.svn/qt/4.8.2/mkspecs/linux-g++-64.
#
# Look to make sure the static X11 library libX11.a is installed!
#

gmake ${MAKE_FLAGS} all
gmake install

cd ${QT_DIR}/lib

#THERE WERE INITAL ISSUES WITH SHARED LIBRARIES WITH SCALE/EXNIHILO WHICH IS
#THE REASON FOR SHARED LIBRARIES

if [ $METHOD == dbg ] ; then
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

echo "Installed ${QT_DIR}"
