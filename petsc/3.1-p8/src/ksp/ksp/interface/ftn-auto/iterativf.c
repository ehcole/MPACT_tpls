#include "petscsys.h"
#include "petscfix.h"
/* iterativ.c */
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
#define kspgetresidualnorm_ KSPGETRESIDUALNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgetresidualnorm_ kspgetresidualnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgetiterationnumber_ KSPGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgetiterationnumber_ kspgetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspdefaultconvergedsetuirnorm_ KSPDEFAULTCONVERGEDSETUIRNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspdefaultconvergedsetuirnorm_ kspdefaultconvergedsetuirnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspdefaultconvergedsetumirnorm_ KSPDEFAULTCONVERGEDSETUMIRNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspdefaultconvergedsetumirnorm_ kspdefaultconvergedsetumirnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgetconvergedreason_ KSPGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgetconvergedreason_ kspgetconvergedreason
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   kspgetresidualnorm_(KSP ksp,PetscReal *rnorm, int *__ierr ){
*__ierr = KSPGetResidualNorm(
	(KSP)PetscToPointer((ksp) ),rnorm);
}
void PETSC_STDCALL   kspgetiterationnumber_(KSP ksp,PetscInt *its, int *__ierr ){
*__ierr = KSPGetIterationNumber(
	(KSP)PetscToPointer((ksp) ),its);
}
void PETSC_STDCALL   kspdefaultconvergedsetuirnorm_(KSP ksp, int *__ierr ){
*__ierr = KSPDefaultConvergedSetUIRNorm(
	(KSP)PetscToPointer((ksp) ));
}
void PETSC_STDCALL   kspdefaultconvergedsetumirnorm_(KSP ksp, int *__ierr ){
*__ierr = KSPDefaultConvergedSetUMIRNorm(
	(KSP)PetscToPointer((ksp) ));
}
void PETSC_STDCALL   kspgetconvergedreason_(KSP ksp,KSPConvergedReason *reason, int *__ierr ){
*__ierr = KSPGetConvergedReason(
	(KSP)PetscToPointer((ksp) ),reason);
}
#if defined(__cplusplus)
}
#endif
