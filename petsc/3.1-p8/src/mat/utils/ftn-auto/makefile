
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = gcreatef.c multequalf.c getcolvf.c axpyf.c zerodiagf.c
OBJSC    = gcreatef.o multequalf.o getcolvf.o axpyf.o zerodiagf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscmat
LOCDIR   = src/mat/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
