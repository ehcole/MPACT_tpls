#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* slp.c */
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

#include "slepcnep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepslpseteps_ NEPSLPSETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepslpseteps_ nepslpseteps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepslpgeteps_ NEPSLPGETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepslpgeteps_ nepslpgeteps
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  nepslpseteps_(NEP *nep,EPS *eps, int *__ierr ){
*__ierr = NEPSLPSetEPS(*nep,*eps);
}
PETSC_EXTERN void PETSC_STDCALL  nepslpgeteps_(NEP *nep,EPS *eps, int *__ierr ){
*__ierr = NEPSLPGetEPS(*nep,
	(EPS* )PetscToPointer((eps) ));
}
#if defined(__cplusplus)
}
#endif
