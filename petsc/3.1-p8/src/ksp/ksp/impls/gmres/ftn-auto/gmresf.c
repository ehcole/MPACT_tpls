#include "petscsys.h"
#include "petscfix.h"
/* gmres.c */
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
#define kspgmressetcgsrefinementtype_ KSPGMRESSETCGSREFINEMENTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgmressetcgsrefinementtype_ kspgmressetcgsrefinementtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgmressetrestart_ KSPGMRESSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgmressetrestart_ kspgmressetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspgmressethaptol_ KSPGMRESSETHAPTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspgmressethaptol_ kspgmressethaptol
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   kspgmressetcgsrefinementtype_(KSP ksp,KSPGMRESCGSRefinementType *type, int *__ierr ){
*__ierr = KSPGMRESSetCGSRefinementType(
	(KSP)PetscToPointer((ksp) ),*type);
}
void PETSC_STDCALL   kspgmressetrestart_(KSP ksp,PetscInt *restart, int *__ierr ){
*__ierr = KSPGMRESSetRestart(
	(KSP)PetscToPointer((ksp) ),*restart);
}
void PETSC_STDCALL   kspgmressethaptol_(KSP ksp,PetscReal *tol, int *__ierr ){
*__ierr = KSPGMRESSetHapTol(
	(KSP)PetscToPointer((ksp) ),*tol);
}
#if defined(__cplusplus)
}
#endif
