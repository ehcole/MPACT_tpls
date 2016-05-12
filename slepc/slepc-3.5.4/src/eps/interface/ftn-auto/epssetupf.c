#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* epssetup.c */
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

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetup_ EPSSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetup_ epssetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetoperators_ EPSSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetoperators_ epssetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetdeflationspace_ EPSSETDEFLATIONSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetdeflationspace_ epssetdeflationspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetinitialspace_ EPSSETINITIALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetinitialspace_ epssetinitialspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsallocatesolution_ EPSALLOCATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsallocatesolution_ epsallocatesolution
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epssetup_(EPS *eps, int *__ierr ){
*__ierr = EPSSetUp(*eps);
}
PETSC_EXTERN void PETSC_STDCALL  epssetoperators_(EPS *eps,Mat A,Mat B, int *__ierr ){
*__ierr = EPSSetOperators(*eps,
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ));
}
PETSC_EXTERN void PETSC_STDCALL  epssetdeflationspace_(EPS *eps,PetscInt *n,Vec *v, int *__ierr ){
*__ierr = EPSSetDeflationSpace(*eps,*n,v);
}
PETSC_EXTERN void PETSC_STDCALL  epssetinitialspace_(EPS *eps,PetscInt *n,Vec *is, int *__ierr ){
*__ierr = EPSSetInitialSpace(*eps,*n,is);
}
PETSC_EXTERN void PETSC_STDCALL  epsallocatesolution_(EPS *eps,PetscInt *extra, int *__ierr ){
*__ierr = EPSAllocateSolution(*eps,*extra);
}
#if defined(__cplusplus)
}
#endif
