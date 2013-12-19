
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = eigef.c itcreatef.c itfuncf.c iterativf.c itclf.c xmonf.c itresf.c
OBJSC    = eigef.o itcreatef.o itfuncf.o iterativf.o itclf.o xmonf.o itresf.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE  = libpetscksp
LOCDIR   = src/ksp/ksp/interface/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
