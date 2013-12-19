#
# TPLs and other compiler-specific settings for VERA gcc-4.6.1 builds
#
# NOTE: This file only needs to get included when doing an actual configure,
# not during package dependency adjustment such as in the CI and Nightly
# CTest/CDash drivers.
#
Offical VERA TPLs.
#
## NOTE: These are TPLs that are offcially maintained by the VRI Infrastructure
# team and represent official versions of TPLs
#
# VERA TPLs to specifically turn on (not on by default)
SET(TPL_ENABLE_Netcdf ON CACHE BOOL )
SET(TPL_ENABLE_Zlib  ON  CACHE BOOL )
SET(TPL_ENABLE_SPRNG  OFF CACHE BOOL )

# VERA offical TPLs
SET(HDF5_LIBRARY_NAMES "hdf5_hl;hdf5;hdf5_cpp" CACHE STRING "")
SET(HDF5_LIBRARY_DIRS /projects/vera/gcc-4.6.1/vera_cs/hdf5/lib CACHE FILEPATH )
SET(HDF5_INCLUDE_DIRS /projects/vera/gcc-4.6.1/vera_cs/hdf5/include CACHE FILEPATH )
SET(Netcdf_INCLUDE_DIRS /include CACHE FILEPATH )
SET(Netcdf_LIBRARY_DIRS /lib CACHE FILEPATH )
SET(SILO_INCLUDE_DIRS /projects/vera/gcc-4.6.1/vera_cs/silo/include CACHE FILEPATH )
SET(SILO_LIBRARY_DIRS /projects/vera/gcc-4.6.1/vera_cs/silo/lib CACHE FILEPATH )
SET(Zlib_INCLUDE_DIRS /projects/vera/gcc-4.6.1/toolset/zlib/include CACHE FILEPATH )
SET(Zlib_LIBRARY_DIRS /projects/vera/gcc-4.6.1/toolset/zlib/lib CACHE FILEPATH )
SET(QT_REQUIRED_VERSION 4.7.1 CACHE STRING   )
SET(QT_QMAKE_EXECUTABLE /projects/vera/gcc-4.6.1/vera_cs/qt/bin/qmake CACHE FILEPATH )
#
# Axillary VERA component TPLs
#
# NOTE: These sets of TPLs should not overlap with other component TPLs or the
# offical VERA TPLs in order to provide independence of the different VERA
# component efforts.  Once these axillary are made to use standard TPL
# version, such as is required in a linked coupled multi-physics executable,
# the TPLs will be moved to the above list and removed from here.  We can play
# this game as long as we never link together these in a single executable and
# we are careful with package dependencies.
#
#SET(TPL_ENABLE_MOOSE_HYPRE ON CACHE BOOL )
#SET(TPL_ENABLE_Libmesh ON CACHE BOOL )
#SET(TPL_ENABLE_Libmesh_Contrib ON CACHE BOOL )
#
# Hydra-TH TPLs
SET(HYDRATPL_INCLUDE_DIRS /projects/vera/gcc-4.6.1/hydrath/include CACHE FILEPATH )
SET(HYDRATPL_LIBRARY_DIRS /projects/vera/gcc-4.6.1/hydrath/lib     CACHE FILEPATH )
SET(HYDRATPL_BINARY_DIRS  /projects/vera/gcc-4.6.1/hydrath/bin     CACHE FILEPATH )
#
# MOOSE-related TPLs
SET(Libmesh_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/include/flat_headers CACHE FILEPATH )
SET(Libmesh_LIBRARY_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/lib/x86_64-unknown-linux-gnu_opt CACHE FILEPATH )
SET(Libmesh_Contrib_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/contrib/flat_headers CACHE FILEPATH )
SET(Libmesh_Contrib_LIBRARY_DIRS  '/projects/TPLs/moose_libs/libmesh-pcu/contrib/lib/x86_64-unknown-linux-gnu_opt;/projects/TPLs/moose_libs/libmesh-pcu/contrib/tecplot/lib/x86_64-unknown-linux-gnu' CACHE FILEPATH )
SET(MOOSE_PETSC_INCLUDE_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/include  CACHE FILEPATH )
SET(MOOSE_PETSC_LIBRARY_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/lib      CACHE FILEPATH )
SET(MOOSE_HYPRE_INCLUDE_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/include  CACHE FILEPATH )
SET(MOOSE_HYPRE_LIBRARY_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/lib      CACHE FILEPATH )
#
# DataTransferKit TPLs
SET(TPL_ENABLE_MOAB ON CACHE BOOL )
SET(MOAB_LIBRARY_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/lib CACHE FILEPATH )
SET(MOAB_INCLUDE_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/include CACHE FILEPATH )
# TPLs and other compiler-specific settings for VERA gcc-4.6.1 builds
#
# NOTE: This file only needs to get included when doing an actual configure,
# not during package dependency adjustment such as in the CI and Nightly
# CTest/CDash drivers.
#
Offical VERA TPLs.
#
## NOTE: These are TPLs that are offcially maintained by the VRI Infrastructure
# team and represent official versions of TPLs
#
# VERA TPLs to specifically turn on (not on by default)
SET(TPL_ENABLE_Netcdf ON CACHE BOOL )
SET(TPL_ENABLE_Zlib  ON  CACHE BOOL )
SET(TPL_ENABLE_SPRNG  OFF CACHE BOOL )

# VERA offical TPLs
SET(HDF5_LIBRARY_NAMES "hdf5_hl;hdf5;hdf5_cpp" CACHE STRING "")
SET(HDF5_LIBRARY_DIRS /projects/vera/gcc-4.6.1/vera_cs/hdf5/lib CACHE FILEPATH )
SET(HDF5_INCLUDE_DIRS /projects/vera/gcc-4.6.1/vera_cs/hdf5/include CACHE FILEPATH )
SET(Netcdf_INCLUDE_DIRS /include CACHE FILEPATH )
SET(Netcdf_LIBRARY_DIRS /lib CACHE FILEPATH )
SET(SILO_INCLUDE_DIRS /projects/vera/gcc-4.6.1/vera_cs/silo/include CACHE FILEPATH )
SET(SILO_LIBRARY_DIRS /projects/vera/gcc-4.6.1/vera_cs/silo/lib CACHE FILEPATH )
SET(Zlib_INCLUDE_DIRS /projects/vera/gcc-4.6.1/toolset/zlib/include CACHE FILEPATH )
SET(Zlib_LIBRARY_DIRS /projects/vera/gcc-4.6.1/toolset/zlib/lib CACHE FILEPATH )
SET(QT_REQUIRED_VERSION 4.7.1 CACHE STRING   )
SET(QT_QMAKE_EXECUTABLE /projects/vera/gcc-4.6.1/vera_cs/qt/bin/qmake CACHE FILEPATH )
#
# Axillary VERA component TPLs
#
# NOTE: These sets of TPLs should not overlap with other component TPLs or the
# offical VERA TPLs in order to provide independence of the different VERA
# component efforts.  Once these axillary are made to use standard TPL
# version, such as is required in a linked coupled multi-physics executable,
# the TPLs will be moved to the above list and removed from here.  We can play
# this game as long as we never link together these in a single executable and
# we are careful with package dependencies.
#
#SET(TPL_ENABLE_MOOSE_HYPRE ON CACHE BOOL )
#SET(TPL_ENABLE_Libmesh ON CACHE BOOL )
#SET(TPL_ENABLE_Libmesh_Contrib ON CACHE BOOL )
#
# Hydra-TH TPLs
SET(HYDRATPL_INCLUDE_DIRS /projects/vera/gcc-4.6.1/hydrath/include CACHE FILEPATH )
SET(HYDRATPL_LIBRARY_DIRS /projects/vera/gcc-4.6.1/hydrath/lib     CACHE FILEPATH )
SET(HYDRATPL_BINARY_DIRS  /projects/vera/gcc-4.6.1/hydrath/bin     CACHE FILEPATH )
#
# MOOSE-related TPLs
SET(Libmesh_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/include/flat_headers CACHE FILEPATH )
SET(Libmesh_LIBRARY_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/lib/x86_64-unknown-linux-gnu_opt CACHE FILEPATH )
SET(Libmesh_Contrib_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/contrib/flat_headers CACHE FILEPATH )
SET(Libmesh_Contrib_LIBRARY_DIRS  '/projects/TPLs/moose_libs/libmesh-pcu/contrib/lib/x86_64-unknown-linux-gnu_opt;/projects/TPLs/moose_libs/libmesh-pcu/contrib/tecplot/lib/x86_64-unknown-linux-gnu' CACHE FILEPATH )
SET(MOOSE_PETSC_INCLUDE_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/include  CACHE FILEPATH )
SET(MOOSE_PETSC_LIBRARY_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/lib      CACHE FILEPATH )
SET(MOOSE_HYPRE_INCLUDE_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/include  CACHE FILEPATH )
SET(MOOSE_HYPRE_LIBRARY_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/lib      CACHE FILEPATH )
#
# DataTransferKit TPLs
SET(TPL_ENABLE_MOAB ON CACHE BOOL )
SET(MOAB_LIBRARY_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/lib CACHE FILEPATH )
SET(MOAB_INCLUDE_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/include CACHE FILEPATH )
# TPLs and other compiler-specific settings for VERA gcc-4.6.1 builds
#
# NOTE: This file only needs to get included when doing an actual configure,
# not during package dependency adjustment such as in the CI and Nightly
# CTest/CDash drivers.
#
Offical VERA TPLs.
#
## NOTE: These are TPLs that are offcially maintained by the VRI Infrastructure
# team and represent official versions of TPLs
#
# VERA TPLs to specifically turn on (not on by default)
SET(TPL_ENABLE_Netcdf ON CACHE BOOL )
SET(TPL_ENABLE_Zlib  ON  CACHE BOOL )
SET(TPL_ENABLE_SPRNG  OFF CACHE BOOL )

# VERA offical TPLs
SET(HDF5_LIBRARY_NAMES "hdf5_hl;hdf5;hdf5_cpp" CACHE STRING "")
SET(HDF5_LIBRARY_DIRS /projects/vera/gcc-4.6.1/vera_cs/hdf5/lib CACHE FILEPATH )
SET(HDF5_INCLUDE_DIRS /projects/vera/gcc-4.6.1/vera_cs/hdf5/include CACHE FILEPATH )
SET(Netcdf_INCLUDE_DIRS /include CACHE FILEPATH )
SET(Netcdf_LIBRARY_DIRS /lib CACHE FILEPATH )
SET(SILO_INCLUDE_DIRS /projects/vera/gcc-4.6.1/vera_cs/silo/include CACHE FILEPATH )
SET(SILO_LIBRARY_DIRS /projects/vera/gcc-4.6.1/vera_cs/silo/lib CACHE FILEPATH )
SET(Zlib_INCLUDE_DIRS /projects/vera/gcc-4.6.1/toolset/zlib/include CACHE FILEPATH )
SET(Zlib_LIBRARY_DIRS /projects/vera/gcc-4.6.1/toolset/zlib/lib CACHE FILEPATH )
SET(QT_REQUIRED_VERSION 4.7.1 CACHE STRING   )
SET(QT_QMAKE_EXECUTABLE /projects/vera/gcc-4.6.1/vera_cs/qt/bin/qmake CACHE FILEPATH )
#
# Axillary VERA component TPLs
#
# NOTE: These sets of TPLs should not overlap with other component TPLs or the
# offical VERA TPLs in order to provide independence of the different VERA
# component efforts.  Once these axillary are made to use standard TPL
# version, such as is required in a linked coupled multi-physics executable,
# the TPLs will be moved to the above list and removed from here.  We can play
# this game as long as we never link together these in a single executable and
# we are careful with package dependencies.
#
#SET(TPL_ENABLE_MOOSE_HYPRE ON CACHE BOOL )
#SET(TPL_ENABLE_Libmesh ON CACHE BOOL )
#SET(TPL_ENABLE_Libmesh_Contrib ON CACHE BOOL )
#
# Hydra-TH TPLs
SET(HYDRATPL_INCLUDE_DIRS /projects/vera/gcc-4.6.1/hydrath/include CACHE FILEPATH )
SET(HYDRATPL_LIBRARY_DIRS /projects/vera/gcc-4.6.1/hydrath/lib     CACHE FILEPATH )
SET(HYDRATPL_BINARY_DIRS  /projects/vera/gcc-4.6.1/hydrath/bin     CACHE FILEPATH )
#
# MOOSE-related TPLs
SET(Libmesh_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/include/flat_headers CACHE FILEPATH )
SET(Libmesh_LIBRARY_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/lib/x86_64-unknown-linux-gnu_opt CACHE FILEPATH )
SET(Libmesh_Contrib_INCLUDE_DIRS  /projects/TPLs/moose_libs/libmesh-pcu/contrib/flat_headers CACHE FILEPATH )
SET(Libmesh_Contrib_LIBRARY_DIRS  '/projects/TPLs/moose_libs/libmesh-pcu/contrib/lib/x86_64-unknown-linux-gnu_opt;/projects/TPLs/moose_libs/libmesh-pcu/contrib/tecplot/lib/x86_64-unknown-linux-gnu' CACHE FILEPATH )
SET(MOOSE_PETSC_INCLUDE_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/include  CACHE FILEPATH )
SET(MOOSE_PETSC_LIBRARY_DIRS  /projects/TPLs/moose_libs/petsc-pcu/petsc-3.1-p8/gnu-opt/lib      CACHE FILEPATH )
SET(MOOSE_HYPRE_INCLUDE_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/include  CACHE FILEPATH )
SET(MOOSE_HYPRE_LIBRARY_DIRS  /projects/TPLs/moose_libs/hypre-pcu/hypre-2.8.0b/gnu-opt/lib      CACHE FILEPATH )
#
# DataTransferKit TPLs
SET(TPL_ENABLE_MOAB ON CACHE BOOL )
SET(MOAB_LIBRARY_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/lib CACHE FILEPATH )
SET(MOAB_INCLUDE_DIRS /projects/gcc-4.6.1/tpls/moab-4.5.0/include CACHE FILEPATH )
