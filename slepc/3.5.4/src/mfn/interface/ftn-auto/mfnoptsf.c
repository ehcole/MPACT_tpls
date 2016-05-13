#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mfnopts.c */
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

#include "slepcmfn.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetfromoptions_ MFNSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetfromoptions_ mfnsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfngettolerances_ MFNGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfngettolerances_ mfngettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsettolerances_ MFNSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsettolerances_ mfnsettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfngetdimensions_ MFNGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfngetdimensions_ mfngetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetdimensions_ MFNSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetdimensions_ mfnsetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetfunction_ MFNSETFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetfunction_ mfnsetfunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetscalefactor_ MFNSETSCALEFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetscalefactor_ mfnsetscalefactor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfngetscalefactor_ MFNGETSCALEFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfngetscalefactor_ mfngetscalefactor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnseterrorifnotconverged_ MFNSETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnseterrorifnotconverged_ mfnseterrorifnotconverged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfngeterrorifnotconverged_ MFNGETERRORIFNOTCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfngeterrorifnotconverged_ mfngeterrorifnotconverged
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  mfnsetfromoptions_(MFN *mfn, int *__ierr ){
*__ierr = MFNSetFromOptions(*mfn);
}
PETSC_EXTERN void PETSC_STDCALL  mfngettolerances_(MFN *mfn,PetscReal *tol,PetscInt *maxits, int *__ierr ){
*__ierr = MFNGetTolerances(*mfn,tol,maxits);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsettolerances_(MFN *mfn,PetscReal *tol,PetscInt *maxits, int *__ierr ){
*__ierr = MFNSetTolerances(*mfn,*tol,*maxits);
}
PETSC_EXTERN void PETSC_STDCALL  mfngetdimensions_(MFN *mfn,PetscInt *ncv, int *__ierr ){
*__ierr = MFNGetDimensions(*mfn,ncv);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsetdimensions_(MFN *mfn,PetscInt *ncv, int *__ierr ){
*__ierr = MFNSetDimensions(*mfn,*ncv);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsetfunction_(MFN *mfn,SlepcFunction *fun, int *__ierr ){
*__ierr = MFNSetFunction(*mfn,*fun);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsetscalefactor_(MFN *mfn,PetscScalar *alpha, int *__ierr ){
*__ierr = MFNSetScaleFactor(*mfn,*alpha);
}
PETSC_EXTERN void PETSC_STDCALL  mfngetscalefactor_(MFN *mfn,PetscScalar *alpha, int *__ierr ){
*__ierr = MFNGetScaleFactor(*mfn,alpha);
}
PETSC_EXTERN void PETSC_STDCALL  mfnseterrorifnotconverged_(MFN *mfn,PetscBool *flg, int *__ierr ){
*__ierr = MFNSetErrorIfNotConverged(*mfn,*flg);
}
PETSC_EXTERN void PETSC_STDCALL  mfngeterrorifnotconverged_(MFN *mfn,PetscBool *flag, int *__ierr ){
*__ierr = MFNGetErrorIfNotConverged(*mfn,flag);
}
#if defined(__cplusplus)
}
#endif
