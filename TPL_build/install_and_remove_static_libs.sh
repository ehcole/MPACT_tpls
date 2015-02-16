#!/bin/sh

make install

find $1 -name "*.a" -exec rm -v {} \;
