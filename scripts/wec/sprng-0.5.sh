#!/bin/bash

if [ ! -d "$TPL_INSTALL_DIR/vera_cs/sprng" ]
then
   mkdir -p $TPL_INSTALL_DIR/vera_cs/sprng
fi

cd $PACKAGE_DIR/sprng
cp -r $PACKAGE_DIR/sprng/* $TPL_INSTALL_DIR/vera_cs/sprng
fi
export SPRNG_DIR=${TPL_INSTALL_DIR}/vera_cs/sprng/0.5
