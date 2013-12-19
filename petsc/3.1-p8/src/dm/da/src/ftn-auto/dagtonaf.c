#include "petscsys.h"
#include "petscfix.h"
/* dagtona.c */
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

#include "petscda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daglobaltonaturalallcreate_ DAGLOBALTONATURALALLCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daglobaltonaturalallcreate_ daglobaltonaturalallcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define danaturalalltoglobalcreate_ DANATURALALLTOGLOBALCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define danaturalalltoglobalcreate_ danaturalalltoglobalcreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   daglobaltonaturalallcreate_(DA da,VecScatter *scatter, int *__ierr ){
*__ierr = DAGlobalToNaturalAllCreate(
	(DA)PetscToPointer((da) ),scatter);
}
void PETSC_STDCALL   danaturalalltoglobalcreate_(DA da,VecScatter *scatter, int *__ierr ){
*__ierr = DANaturalAllToGlobalCreate(
	(DA)PetscToPointer((da) ),scatter);
}
#if defined(__cplusplus)
}
#endif
