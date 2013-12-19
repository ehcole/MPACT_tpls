
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = mffddeff.c mffdf.c wpf.c
OBJSC    = mffddeff.o mffdf.o wpf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscmat
LOCDIR   = src/mat/impls/mffd/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
