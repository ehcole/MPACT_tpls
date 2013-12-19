#!/bin/bash -e

export QT_VERSION=qt-everywhere-opensource-src-4.8.2
export QT_VER=4.8.2

 export CC=gcc
 export CXX=g++
 export FC=gfortran
 export F90=gfortran

#If the build directory does not exist, create it
if [ ! -d "$TPL_INSTALL_DIR/vera_cs/qt" ] ; then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/qt
fi
#gmake confclean

export BUILD_LOC=${PACKAGE_DIR}/qt/${QT_VER}_build
if [ ! -d "${BUILD_LOC}" ]
then
   mkdir -p ${BUILD_LOC}
fi
cd ${BUILD_LOC}

#QT_COMMON_OPTIONS="--prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -confirm-license -no-multimedia -static -no-audio-backend -no-phonon-backend -no-javascript-jit -qt-zlib -qt-libtiff -qt-libpng -qt-libjpeg -qt-libmng -nomake demos -nomake examples -nomake translations -nomake docs -no-declarative-debug -no-declarative -no-cups -no-pch -no-sql-sqlite -no-xvideo -nomake tools -no-phonon -no-xshape"

QT_COMMON_OPTIONS="-prefix $TPL_INSTALL_DIR/vera_cs/qt -opensource -confirm-license -no-multimedia -static"

if [ $METHOD == opt ] ; then 
  ../${QT_VER}/configure ${QT_COMMON_OPTIONS} -release
else
  ../${QT_VER}/configure ${QT_COMMON_OPTIONS} -debug
fi

gmake ${MAKE_FLAGS} all
gmake install

cd $TPL_INSTALL_DIR/vera_cs/qt/lib

#THERE WERE INITAL ISSUES WITH SHARED LIBRARIES WITH SCALE/EXNIHILO WHICH IS THE REASON FOR SHARED LIBRARIES
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

export QT_DIR=${TPL_INSTALL_DIR}/vera_cs/qt
