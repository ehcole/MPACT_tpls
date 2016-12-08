#!/usr/bin/env bash

EXTRA_ARGS=$@

cmake \
    -D CMAKE_INSTALL_PREFIX=${VERA_INSTALL_DIR} \
    -D CMAKE_BUILD_TYPE=Release \
    -D CMAKE_CXX_COMPILER=mpicxx \
    -D CMAKE_C_COMPILER=mpicc \
    -D CMAKE_Fortran_COMPILER=mpifort \
    -D BUILD_SHARED_LIBS=ON \
    -D TPL_ENABLE_MPI=ON \
    -D TPL_INSTALL_DIR=${VERA_TPL_INSTALL_DIR} \
    -D VERA_ENABLE_ALL_PACKAGES=ON \
    -D VERA_ENABLE_TESTS=ON \
    -D VERA_CONFIGURE_OPTIONS_FILE=${VERA_DIR}/cmake/std/gcc-4.8.3/vera-tpls-std.cmake \
    -D MPI_EXEC=/usr/bin/mpiexec.mpich \
    ${EXTRA_ARGS} \
    ${VERA_DIR}
