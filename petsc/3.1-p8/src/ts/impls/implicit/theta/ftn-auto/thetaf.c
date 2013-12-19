#include "petscsys.h"
#include "petscfix.h"
/* theta.c */
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

#include "petscts.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsthetagettheta_ TSTHETAGETTHETA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsthetagettheta_ tsthetagettheta
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsthetasettheta_ TSTHETASETTHETA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsthetasettheta_ tsthetasettheta
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   tsthetagettheta_(TS ts,PetscReal *theta, int *__ierr ){
*__ierr = TSThetaGetTheta(
	(TS)PetscToPointer((ts) ),theta);
}
void PETSC_STDCALL   tsthetasettheta_(TS ts,PetscReal *theta, int *__ierr ){
*__ierr = TSThetaSetTheta(
	(TS)PetscToPointer((ts) ),*theta);
}
#if defined(__cplusplus)
}
#endif
