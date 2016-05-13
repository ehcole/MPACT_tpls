#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* cyclic.c */
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

#include "slepcsvd.h"
#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcyclicsetexplicitmatrix_ SVDCYCLICSETEXPLICITMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcyclicsetexplicitmatrix_ svdcyclicsetexplicitmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcyclicgetexplicitmatrix_ SVDCYCLICGETEXPLICITMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcyclicgetexplicitmatrix_ svdcyclicgetexplicitmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcyclicseteps_ SVDCYCLICSETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcyclicseteps_ svdcyclicseteps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcyclicgeteps_ SVDCYCLICGETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcyclicgeteps_ svdcyclicgeteps
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdcyclicsetexplicitmatrix_(SVD *svd,PetscBool *explicitmatrix, int *__ierr ){
*__ierr = SVDCyclicSetExplicitMatrix(*svd,*explicitmatrix);
}
PETSC_EXTERN void PETSC_STDCALL  svdcyclicgetexplicitmatrix_(SVD *svd,PetscBool *explicitmatrix, int *__ierr ){
*__ierr = SVDCyclicGetExplicitMatrix(*svd,explicitmatrix);
}
PETSC_EXTERN void PETSC_STDCALL  svdcyclicseteps_(SVD *svd,EPS *eps, int *__ierr ){
*__ierr = SVDCyclicSetEPS(*svd,*eps);
}
PETSC_EXTERN void PETSC_STDCALL  svdcyclicgeteps_(SVD *svd,EPS *eps, int *__ierr ){
*__ierr = SVDCyclicGetEPS(*svd,
	(EPS* )PetscToPointer((eps) ));
}
#if defined(__cplusplus)
}
#endif
