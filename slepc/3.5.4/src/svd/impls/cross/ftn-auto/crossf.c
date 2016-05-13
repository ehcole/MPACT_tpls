#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* cross.c */
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
#define svdcrossseteps_ SVDCROSSSETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcrossseteps_ svdcrossseteps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcrossgeteps_ SVDCROSSGETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcrossgeteps_ svdcrossgeteps
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdcrossseteps_(SVD *svd,EPS *eps, int *__ierr ){
*__ierr = SVDCrossSetEPS(*svd,*eps);
}
PETSC_EXTERN void PETSC_STDCALL  svdcrossgeteps_(SVD *svd,EPS *eps, int *__ierr ){
*__ierr = SVDCrossGetEPS(*svd,
	(EPS* )PetscToPointer((eps) ));
}
#if defined(__cplusplus)
}
#endif
