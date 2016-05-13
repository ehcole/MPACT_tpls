#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mfnbasic.c */
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
#define mfnreset_ MFNRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnreset_ mfnreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetbv_ MFNSETBV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetbv_ mfnsetbv
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetds_ MFNSETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetds_ mfnsetds
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  mfnreset_(MFN *mfn, int *__ierr ){
*__ierr = MFNReset(*mfn);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsetbv_(MFN *mfn,BV *bv, int *__ierr ){
*__ierr = MFNSetBV(*mfn,*bv);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsetds_(MFN *mfn,DS *ds, int *__ierr ){
*__ierr = MFNSetDS(*mfn,*ds);
}
#if defined(__cplusplus)
}
#endif
