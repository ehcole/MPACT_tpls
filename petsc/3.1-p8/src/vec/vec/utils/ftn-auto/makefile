
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = vinvf.c combf.c vecmpitoseqf.c vscatf.c cmeshf.c vpscatf.c
OBJSC    = vinvf.o combf.o vecmpitoseqf.o vscatf.o cmeshf.o vpscatf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscvec
LOCDIR   = src/vec/vec/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
