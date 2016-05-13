#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* linear.c */
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

#include "slepcpep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peplinearsetcompanionform_ PEPLINEARSETCOMPANIONFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peplinearsetcompanionform_ peplinearsetcompanionform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peplineargetcompanionform_ PEPLINEARGETCOMPANIONFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peplineargetcompanionform_ peplineargetcompanionform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peplinearsetexplicitmatrix_ PEPLINEARSETEXPLICITMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peplinearsetexplicitmatrix_ peplinearsetexplicitmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peplineargetexplicitmatrix_ PEPLINEARGETEXPLICITMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peplineargetexplicitmatrix_ peplineargetexplicitmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peplinearseteps_ PEPLINEARSETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peplinearseteps_ peplinearseteps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peplineargeteps_ PEPLINEARGETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peplineargeteps_ peplineargeteps
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  peplinearsetcompanionform_(PEP *pep,PetscInt *cform, int *__ierr ){
*__ierr = PEPLinearSetCompanionForm(*pep,*cform);
}
PETSC_EXTERN void PETSC_STDCALL  peplineargetcompanionform_(PEP *pep,PetscInt *cform, int *__ierr ){
*__ierr = PEPLinearGetCompanionForm(*pep,cform);
}
PETSC_EXTERN void PETSC_STDCALL  peplinearsetexplicitmatrix_(PEP *pep,PetscBool *explicitmatrix, int *__ierr ){
*__ierr = PEPLinearSetExplicitMatrix(*pep,*explicitmatrix);
}
PETSC_EXTERN void PETSC_STDCALL  peplineargetexplicitmatrix_(PEP *pep,PetscBool *explicitmatrix, int *__ierr ){
*__ierr = PEPLinearGetExplicitMatrix(*pep,explicitmatrix);
}
PETSC_EXTERN void PETSC_STDCALL  peplinearseteps_(PEP *pep,EPS *eps, int *__ierr ){
*__ierr = PEPLinearSetEPS(*pep,*eps);
}
PETSC_EXTERN void PETSC_STDCALL  peplineargeteps_(PEP *pep,EPS *eps, int *__ierr ){
*__ierr = PEPLinearGetEPS(*pep,
	(EPS* )PetscToPointer((eps) ));
}
#if defined(__cplusplus)
}
#endif
