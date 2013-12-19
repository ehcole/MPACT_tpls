
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = iscoloringf.c isltogf.c isdifff.c iscompf.c
OBJSC    = iscoloringf.o isltogf.o isdifff.o iscompf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE	 = libpetscvec
LOCDIR	 = src/vec/is/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
