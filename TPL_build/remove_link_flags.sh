#!/bin/sh
directory=$1
#echo "This is the location ${directory}" > /home/inb/test_tpl.log

#find $1 -name "libtool" -exec rm -v {} \;
sed -i -- 's/-l //g' ${directory}/libtool;

make -j8


