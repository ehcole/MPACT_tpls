
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = sda2f.c fddaf.c dmf.c packf.c
OBJSC    = sda2f.o fddaf.o dmf.o packf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscdm
LOCDIR   = src/dm/da/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
