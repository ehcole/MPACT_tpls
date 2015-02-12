#!/bin/sh

find $1 -name "*.so*" -exec rm -v {} \;
