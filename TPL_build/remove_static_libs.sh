#!/bin/sh

find $1 -name "*.a" -exec rm -v {} \;
