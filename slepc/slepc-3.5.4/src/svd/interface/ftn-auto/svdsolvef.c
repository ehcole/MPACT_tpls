#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* svdsolve.c */
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
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsolve_ SVDSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsolve_ svdsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetiterationnumber_ SVDGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetiterationnumber_ svdgetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetconverged_ SVDGETCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetconverged_ svdgetconverged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetsingulartriplet_ SVDGETSINGULARTRIPLET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetsingulartriplet_ svdgetsingulartriplet
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcomputeresidualnorms_ SVDCOMPUTERESIDUALNORMS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcomputeresidualnorms_ svdcomputeresidualnorms
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdcomputerelativeerror_ SVDCOMPUTERELATIVEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdcomputerelativeerror_ svdcomputerelativeerror
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdsolve_(SVD *svd, int *__ierr ){
*__ierr = SVDSolve(*svd);
}
PETSC_EXTERN void PETSC_STDCALL  svdgetiterationnumber_(SVD *svd,PetscInt *its, int *__ierr ){
*__ierr = SVDGetIterationNumber(*svd,its);
}
PETSC_EXTERN void PETSC_STDCALL  svdgetconverged_(SVD *svd,PetscInt *nconv, int *__ierr ){
*__ierr = SVDGetConverged(*svd,nconv);
}
PETSC_EXTERN void PETSC_STDCALL  svdgetsingulartriplet_(SVD *svd,PetscInt *i,PetscReal *sigma,Vec u,Vec v, int *__ierr ){
*__ierr = SVDGetSingularTriplet(*svd,*i,sigma,
	(Vec)PetscToPointer((u) ),
	(Vec)PetscToPointer((v) ));
}
PETSC_EXTERN void PETSC_STDCALL  svdcomputeresidualnorms_(SVD *svd,PetscInt *i,PetscReal *norm1,PetscReal *norm2, int *__ierr ){
*__ierr = SVDComputeResidualNorms(*svd,*i,norm1,norm2);
}
PETSC_EXTERN void PETSC_STDCALL  svdcomputerelativeerror_(SVD *svd,PetscInt *i,PetscReal *error, int *__ierr ){
*__ierr = SVDComputeRelativeError(*svd,*i,error);
}
#if defined(__cplusplus)
}
#endif
