#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* cheby.c */
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

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspchebyshevseteigenvalues_ KSPCHEBYSHEVSETEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspchebyshevseteigenvalues_ kspchebyshevseteigenvalues
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspchebyshevsetestimateeigenvalues_ KSPCHEBYSHEVSETESTIMATEEIGENVALUES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspchebyshevsetestimateeigenvalues_ kspchebyshevsetestimateeigenvalues
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspchebyshevesteigsetrandom_ KSPCHEBYSHEVESTEIGSETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspchebyshevesteigsetrandom_ kspchebyshevesteigsetrandom
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspchebyshevsetnewmatrix_ KSPCHEBYSHEVSETNEWMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspchebyshevsetnewmatrix_ kspchebyshevsetnewmatrix
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  kspchebyshevseteigenvalues_(KSP ksp,PetscReal *emax,PetscReal *emin, int *__ierr ){
*__ierr = KSPChebyshevSetEigenvalues(
	(KSP)PetscToPointer((ksp) ),*emax,*emin);
}
PETSC_EXTERN void PETSC_STDCALL  kspchebyshevsetestimateeigenvalues_(KSP ksp,PetscReal *a,PetscReal *b,PetscReal *c,PetscReal *d, int *__ierr ){
*__ierr = KSPChebyshevSetEstimateEigenvalues(
	(KSP)PetscToPointer((ksp) ),*a,*b,*c,*d);
}
PETSC_EXTERN void PETSC_STDCALL  kspchebyshevesteigsetrandom_(KSP ksp,PetscRandom random, int *__ierr ){
*__ierr = KSPChebyshevEstEigSetRandom(
	(KSP)PetscToPointer((ksp) ),
	(PetscRandom)PetscToPointer((random) ));
}
PETSC_EXTERN void PETSC_STDCALL  kspchebyshevsetnewmatrix_(KSP ksp, int *__ierr ){
*__ierr = KSPChebyshevSetNewMatrix(
	(KSP)PetscToPointer((ksp) ));
}
#if defined(__cplusplus)
}
#endif
