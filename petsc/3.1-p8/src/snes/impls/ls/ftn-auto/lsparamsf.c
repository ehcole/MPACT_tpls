#include "petscsys.h"
#include "petscfix.h"
/* lsparams.c */
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

#include "petscsnes.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneslinesearchsetparams_ SNESLINESEARCHSETPARAMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneslinesearchsetparams_ sneslinesearchsetparams
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   sneslinesearchsetparams_(SNES snes,PetscReal *alpha,PetscReal *maxstep, int *__ierr ){
*__ierr = SNESLineSearchSetParams(
	(SNES)PetscToPointer((snes) ),*alpha,*maxstep);
}
#if defined(__cplusplus)
}
#endif
