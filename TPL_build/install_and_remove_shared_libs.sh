#!/bin/sh

make install

find $1 -name "*.so*" -exec rm -v {} \;
