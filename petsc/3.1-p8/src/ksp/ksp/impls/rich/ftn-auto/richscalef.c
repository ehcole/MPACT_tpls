#include "petscsys.h"
#include "petscfix.h"
/* richscale.c */
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

#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define ksprichardsonsetscale_ KSPRICHARDSONSETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define ksprichardsonsetscale_ ksprichardsonsetscale
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   ksprichardsonsetscale_(KSP ksp,PetscReal *scale, int *__ierr ){
*__ierr = KSPRichardsonSetScale(
	(KSP)PetscToPointer((ksp) ),*scale);
}
#if defined(__cplusplus)
}
#endif
