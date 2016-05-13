#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mfnsetup.c */
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
#define mfnsetup_ MFNSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetup_ mfnsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnsetoperator_ MFNSETOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnsetoperator_ mfnsetoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfngetoperator_ MFNGETOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfngetoperator_ mfngetoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mfnallocatesolution_ MFNALLOCATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mfnallocatesolution_ mfnallocatesolution
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  mfnsetup_(MFN *mfn, int *__ierr ){
*__ierr = MFNSetUp(*mfn);
}
PETSC_EXTERN void PETSC_STDCALL  mfnsetoperator_(MFN *mfn,Mat A, int *__ierr ){
*__ierr = MFNSetOperator(*mfn,
	(Mat)PetscToPointer((A) ));
}
PETSC_EXTERN void PETSC_STDCALL  mfngetoperator_(MFN *mfn,Mat *A, int *__ierr ){
*__ierr = MFNGetOperator(*mfn,A);
}
PETSC_EXTERN void PETSC_STDCALL  mfnallocatesolution_(MFN *mfn,PetscInt *extra, int *__ierr ){
*__ierr = MFNAllocateSolution(*mfn,*extra);
}
#if defined(__cplusplus)
}
#endif
