# Base image from which to build is taken from Docker official repository for
# Ubuntu. We pick the image for Ubuntu 16.04 Xenial which is a LTS version.
FROM ubuntu:16.04

MAINTAINER Damien L-G <lebrungrandt@ornl.gov>

# Here we define a variable for the number of cores to use when building this
# image. A default value is provided but you can change it by passing the 
# ``--build-arg NPROC=<value>`` flag to the ``docker build`` command.
ARG NPROC=8
 
# Use the package management system as much as possible.
RUN apt-get update && apt-get install -y \
        build-essential \
        gfortran \
        mpich \
        cmake \
        git \
        curl \
        python \
        python-numpy \
        perl \
        libx11-dev \
        libxext-dev \
        m4 \
        zlib1g-dev \
        libcurl4-gnutls-dev \
        && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# Set VERA development environment.
ENV VERA_TPL_INSTALL_DIR=/tools/vera/gcc-5.4.0/tpls/opt \
    VERA_SCRATCH_DIR=/scratch \  
    VERA_BUILD_DIR=/scratch/vera_build \
    VERA_DIR=/scratch/vera-Source.X.Y.Z \
    VERA_INSTALL_DIR=/tools/vera_installs/YYYY-MM-DD

# Install the VERA TPLs.
RUN mkdir -p ${VERA_SCRATCH_DIR} && \
    cd ${VERA_SCRATCH_DIR} && \
    git clone https://github.com/CASL/vera_tpls && \
    mkdir -p ${VERA_SCRATCH_DIR}/tpl_build && \
    cd ${VERA_SCRATCH_DIR}/tpl_build && \
    cmake \
        -D CMAKE_INSTALL_PREFIX=${VERA_TPL_INSTALL_DIR} \
        -D CMAKE_BUILD_TYPE=Release \
        -D CMAKE_CXX_COMPILER=mpic++ \
        -D CMAKE_C_COMPILER=mpicc \
        -D CMAKE_Fortran_COMPILER=mpif90 \
        -D FFLAGS="-fPIC -O3" \
        -D CFLAGS="-fPIC -O3" \
        -D CXXFLAGS="-fPIC -O3" \
        -D LDFLAGS="" \
        -D ENABLE_SHARED=ON \
        -D PROCS_INSTALL=${NPROC} \
        ${VERA_SCRATCH_DIR}/vera_tpls/TPL_build && \
    make && \
    rm -rf ${VERA_SCRATCH_DIR}

# Copy the ``do-configure.sh`` script into the VERA build directory.
COPY do-configure.sh ${VERA_BUILD_DIR}/
