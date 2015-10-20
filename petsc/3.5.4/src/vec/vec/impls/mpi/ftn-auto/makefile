
#requiresdefine   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = pbvecf.c commonmpvecf.c vmpicrf.c
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscvec
LOCDIR   = src/vec/vec/impls/mpi/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
