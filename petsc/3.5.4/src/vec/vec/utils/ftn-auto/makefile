
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = vpscatf.c vecmpitoseqf.c vscatf.c veciof.c projectionf.c combf.c vinvf.c cmeshf.c
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscvec
LOCDIR   = src/vec/vec/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
