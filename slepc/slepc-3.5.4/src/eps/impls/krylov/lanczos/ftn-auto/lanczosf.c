#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* lanczos.c */
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
#define epslanczossetreorthog_ EPSLANCZOSSETREORTHOG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epslanczossetreorthog_ epslanczossetreorthog
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epslanczossetreorthog_(EPS *eps,EPSLanczosReorthogType *reorthog, int *__ierr ){
*__ierr = EPSLanczosSetReorthog(*eps,*reorthog);
}
#if defined(__cplusplus)
}
#endif
