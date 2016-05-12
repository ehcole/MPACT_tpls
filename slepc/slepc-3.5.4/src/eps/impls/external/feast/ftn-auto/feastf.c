#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* feast.c */
/* Fortran interface file */

/*
* This file was generated automatically by bfort from the C source
* file.  
 */

#ifdef PETSC_USE_POINTER_CONVERSION
#if defined(__cplusplus)
extern "C" { 
#endif 
extern void *PetscToPointer(void*);
extern int PetscFromPointer(void *);
extern void PetscRmPointer(void*);
#if defined(__cplusplus)
} 
#endif 

#else

#define PetscToPointer(a) (*(long *)(a))
#define PetscFromPointer(a) (long)(a)
#define PetscRmPointer(a)
#endif

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsfeastsetnumpoints_ EPSFEASTSETNUMPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsfeastsetnumpoints_ epsfeastsetnumpoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsfeastgetnumpoints_ EPSFEASTGETNUMPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsfeastgetnumpoints_ epsfeastgetnumpoints
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsfeastsetnumpoints_(EPS *eps,PetscInt *npoints, int *__ierr ){
*__ierr = EPSFEASTSetNumPoints(*eps,*npoints);
}
PETSC_EXTERN void PETSC_STDCALL  epsfeastgetnumpoints_(EPS *eps,PetscInt *npoints, int *__ierr ){
*__ierr = EPSFEASTGetNumPoints(*eps,npoints);
}
#if defined(__cplusplus)
}
#endif
