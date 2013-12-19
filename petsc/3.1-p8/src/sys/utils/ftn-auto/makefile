
#requirespackage   'PETSC_HAVE_FORTRAN'
ALL: lib

CFLAGS   =
FFLAGS   =
SOURCEC  = psleepf.c mpiuf.c sortdf.c memcf.c sortipf.c psplitf.c sortif.c
OBJSC    = psleepf.o mpiuf.o sortdf.o memcf.o sortipf.o psplitf.o sortif.o
SOURCEF  =
SOURCEH  = 
DIRS     =
LIBBASE	  = libpetscsys
LOCDIR	  = src/sys/utils/ftn-auto/
include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules
include ${PETSC_DIR}/conf/test
