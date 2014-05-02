This project is a CMake wrapper that will build the dependencies for VERA.  

This help file can be viewed by any text editor or by passing "-D HELP=1"
to CMake as one of the arguments in the configure scripts (discussed later).

This assumes the users is familiar with basic builds on their system and
CMake is already installed.  If CMake is required it can be obtained from
   http://www.cmake.org/cmake/resources/software.html
Note that we require CMake 2.8 or higher.

To begin there are 3 download/install paths for each third party library (TPL).
The TPL can be downloaded from bitbucket as part of the configure/build 
process (default), a source path to the TPL source tree can be provided,
or an existing build can be used (advanced users only).  It is strongly
recommended that new users build all TPLs from source using the provided TPLs,
either pre-downloaded or using the download option from the configure script.

Note:  The automatic download of TPLs is still being developed.  
Users should pre-download all TPLs into a common folder and then specify their
locate using TPL_URL.  

The current TPL list and default versions are:
    BOOST  - 1.55.0
    HDF5   - 1.8.9
    HYPRE  - 2.8.0b
    LAPACK - 3.3.1
    MOAB   - 4.5.0
    PETSC  - 3.3-p4
    QT     - 4.8.2
    SILO   - 4.8
    ZLIB   - 1.2.7

Note:  For the purposes of the TPL builder BLAS/LAPACK are configured as one TPL (LAPACK).
A user may still provided their own libraries to use for blas/lapack which may
be installed in different locations.  In this case the user would provide the 
additional flags (BLAS_INSTALL_DIR, LAPACK_INSTALL_DIR, BLAS_LIB, LAPACK_LIB) 
specified in the LAPACK section of this document.  Installations such as ACML and MKL 
are supported by specifying their installed location through LAPACK_INSTALL_DIR.  


To begin the configure/build process there are 4 paths that we will refer to in this document:
1) VERA_BUILDER - The source tree for the VERA_BUILDER project (path to this file)
2) TPL_SRC_DIR  - The source tree for each TPL if provided.  If we are using the automatic
                  download, this will be created by the builder.  
                  There are 3 variations on this variable (TPL_SRC_DIR, TPL_URL, TPL_INSTALL_DIR)
                  that will be described later. 
                  Note: replace TPL with the TPL name (e.g. BOOST_SRC_DIR). 
3) BUILD_DIR    - The build directory where we will execute the cmake command and 
                  build all TPLs.  This should NOT be in any of the source directories
                  including the VERA_BUILDER directory.  
                  Note: this is always the current directory where we call the cmake command.
                  It is NOT set in the configure script, but is the directory from which 
                  we call the script.  It is also the directory where we will call make.
4) INSTALL_DIR  - The install path for the TPLs.  If this is not provided, it will default
                  to the current build tree.

An example folder layout is:
root_dir
    | -- TPL_ROOT
    |       | -- boost
    |       |       | -- 1.49.0
    |       |       | -- 1.55.0
    |       | -- hdf5
    |       |       | -- 1.8.7
    |       |       | -- 1.8.9
    |       | ...
    | -- build
    |       | -- debug
    |       | -- opt
    | -- install
            | -- debug
            | -- opt
In this example layout if we are creating an opt install, VERA_BUILDER=root_dir/VERABuilder,
TPL_SRC_DIR=root_dir/VERABuilder, BOOST_SRC_DIR=TPL_ROOT/boost/1.55.0,
BUILD_DIR=root_dir/build/opt, and INSTALL_DIR=root_dir/install/opt.  
We would be operating from build/opt.


A sample configure script for this project is:
    cmake                                               \
        -D CMAKE_BUILD_TYPE=Release                     \
        -D C_COMPILER=mpicc                             \
        -D CXX_COMPILER=mpic++                          \
        -D Fortran_COMPILER=mpif90                      \
            -D CFLAGS="-fPIC"                           \
            -D CXXFLAGS="-fPIC"                         \
            -D FFLAGS="-fPIC"                           \
            -D LDFLAGS=""                               \
        -D ENABLE_STATIC:BOOL=ON                        \
        -D ENABLE_SHARED:BOOL=OFF                       \
        -D INSTALL_DIR:PATH=${INSTALL_DIR}              \
        -D PROCS_INSTALL=4                              \
        -D TPL_LIST:STRING="BOOST;LAPACK;ZLIB;HYPRE;PETSC;HDF5;SILO;QT;MOAB" \
        ${VERA_BUILDER}


There are a number of variables that can be passed to the configure process.
Unless otherwise noted, all variables are optional.  
The important variables are:
    CMAKE_BUILD_TYPE - The type of build we are performing (Debug,Release,...) (Required)
                       Note that we will automatically set default flags based on 
                       the build type.
    C_COMPILER       - The compiler to use for compiling C code
    CXX_COMPILER     - The compiler to use for compiling C++ code
    Fortran_COMPILER - The compiler to use for compiling Fortran code
    CFLAGS           - Any user-defined flags for C code
    CXXFLAGS         - Any user-defined flags for C++ code
    FFLAGS           - Any user-defined flags for Fortran code
    LDFLAGS          - Any user-defined flags for linking
    ENABLE_STATIC    - Do we want to compile static libraries (default)
    ENABLE_SHARED    - Do we want to compile shared libraries
                       Note: we can only build one type of library (shared or static) at this time
    INSTALL_DIR      - The install path where we want to install the libraries
    PROCS_INSTALL    - The number of processors to use to compile each TPL.
                       Note: we specify the number of processors to use for parallel build
                       through this flag which will be passed to the subsequent build systems.
                       specifying "make -j N" at the top level will build N TPLs in parallel,
                       each with ${PROCS_INSTALL} procs.  
                       If this is not specified the builds will default to serial builds.  
    TPL_LIST         - The list of TPLs to build.  By default all required TPLs will be built. 
                       Note: if provided the TPL_LIST must be in order of the required dependencies.
                       Failure to do so will result in a cmake error at configure time:
                           CMake Error at ExternalProject.cmake (get_property):
                           get_property could not find TARGET LAPACK.  Perhaps it has not yet been created.
                       The order of the subsequent TPL_VARIABLES does not matter.

The final argument must always point to the VERA_BUILDER directory.  


For each TPL, there are additional arguments that may be provided.  These arguments control
how that that TPL is built.  
    TPL_URL          - URL specifying the location to download the TPL.  
                       This URL may be a URL of the form 
                          http://zlib.net/zlib-1.2.8.tar.gz
                       or may point to a local .tar.gz file or directory where the files have been 
                       untared.  By default all TPLs will be downloaded from bitbucket.
    TPL_SRC_DIR      - User specified directory for the TPL.  This is useful if the user
                       wants to use a different version, or pre-download the TPL for 
                       performance or firewall reasons.  
    TPL_INSTALL_DIR  - Directory where an existing TPL is located.  This should
                       be used by advanced users who wish to reuse libraries.
                       It is the responsibility of the user to ensure the TPL was installed
                       properly with the correct complier and compiler options to be 
                       compatible with the other software that will be installed.  


Special TPL FLAGS:
BOOST:
    BOOST_ONLY_COPY_HEADERS - Only copy the headers from the URL/SRC/INSTALL location.
                       If this flag is set, we will copy the include directory and will not 
                       configure or compile boost.  Note that the headers must exist in the 
                       include directory for this to work, and should not be used if boost
                       libraries are needed.
ZLIB:
    ZLIB_INCLUDE_DIR - If ZLIB_INSTALL_DIR is specified, this indicates an alternative path for zlib.h
    ZLIB_LIB_DIR     - If ZLIB_INSTALL_DIR is specified, this indicates an alternative path for libz
LAPACK:
    LAPACK_INSTALL_DIR - This specifies the directory to search for blas/lapack/acml/mkl/etc.  
    BLAS_INSTALL_DIR - If LAPACK_INSTALL_DIR is specified, this indicates an alternative path for blas
    BLAS_LIB         - If LAPACK_INSTALL_DIR is specified, this indicates the library to use (e.g. libblas.a)
    LAPACK_LIB       - If LAPACK_INSTALL_DIR is specified, this indicates the library to use (e.g. liblapack.a)
HDF5:
    HDF5_DISABLE_CXX - Disable cxx support in hdf5


To build:
    cd to the build directory
    run the configure script
    run "make"
Note that "make" will build all TPLs.  
To build a specific TPL the command "make TPL" can be used.  This will build the specified 
    TPL and any required dependencies. 
"make clean" will clean all TPLs
"make distclean" will remove all build files, CMake files, and installed files.
"make TPL-clean" will clean a specific TPL
To rebuild a TPL, use "make TPL-clean" followed by "make TPL"

Additionally all TPLs are setup to perform out of source builds.  If a given TPL does not
support out of source builds (e.g. boost), then the source directory will be copied to a
temporary directory for building.  This insures that we can perform multiple builds in 
parallel (e.g. Debug and Release) without corrupting the build or src trees.  







