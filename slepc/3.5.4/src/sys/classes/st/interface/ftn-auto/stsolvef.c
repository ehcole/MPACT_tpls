#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* stsolve.c */
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

#include "slepcst.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stapply_ STAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stapply_ stapply
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stapplytranspose_ STAPPLYTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stapplytranspose_ stapplytranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetbilinearform_ STGETBILINEARFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetbilinearform_ stgetbilinearform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stcomputeexplicitoperator_ STCOMPUTEEXPLICITOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stcomputeexplicitoperator_ stcomputeexplicitoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stsetup_ STSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stsetup_ stsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stpostsolve_ STPOSTSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stpostsolve_ stpostsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stbacktransform_ STBACKTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stbacktransform_ stbacktransform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stmatsetup_ STMATSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatsetup_ stmatsetup
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  stapply_(ST *st,Vec x,Vec y, int *__ierr ){
*__ierr = STApply(*st,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
PETSC_EXTERN void PETSC_STDCALL  stapplytranspose_(ST *st,Vec x,Vec y, int *__ierr ){
*__ierr = STApplyTranspose(*st,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
PETSC_EXTERN void PETSC_STDCALL  stgetbilinearform_(ST *st,Mat *B, int *__ierr ){
*__ierr = STGetBilinearForm(*st,B);
}
PETSC_EXTERN void PETSC_STDCALL  stcomputeexplicitoperator_(ST *st,Mat *mat, int *__ierr ){
*__ierr = STComputeExplicitOperator(*st,mat);
}
PETSC_EXTERN void PETSC_STDCALL  stsetup_(ST *st, int *__ierr ){
*__ierr = STSetUp(*st);
}
PETSC_EXTERN void PETSC_STDCALL  stpostsolve_(ST *st, int *__ierr ){
*__ierr = STPostSolve(*st);
}
PETSC_EXTERN void PETSC_STDCALL  stbacktransform_(ST *st,PetscInt *n,PetscScalar* eigr,PetscScalar* eigi, int *__ierr ){
*__ierr = STBackTransform(*st,*n,eigr,eigi);
}
PETSC_EXTERN void PETSC_STDCALL  stmatsetup_(ST *st,PetscScalar *sigma,PetscScalar *coeffs, int *__ierr ){
*__ierr = STMatSetUp(*st,*sigma,coeffs);
}
#if defined(__cplusplus)
}
#endif
