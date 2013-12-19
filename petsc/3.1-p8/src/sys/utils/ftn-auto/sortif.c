#include "petscsys.h"
#include "petscfix.h"
/* sorti.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortint_ PETSCSORTINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortint_ petscsortint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortintwitharray_ PETSCSORTINTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortintwitharray_ petscsortintwitharray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortmpiintwitharray_ PETSCSORTMPIINTWITHARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortmpiintwitharray_ petscsortmpiintwitharray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsortintwithscalararray_ PETSCSORTINTWITHSCALARARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsortintwithscalararray_ petscsortintwithscalararray
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscsortint_(PetscInt *n,PetscInt i[], int *__ierr ){
*__ierr = PetscSortInt(*n,i);
}
void PETSC_STDCALL   petscsortintwitharray_(PetscInt *n,PetscInt i[],PetscInt Ii[], int *__ierr ){
*__ierr = PetscSortIntWithArray(*n,i,Ii);
}
void PETSC_STDCALL   petscsortmpiintwitharray_(PetscMPIInt *n,PetscMPIInt i[],PetscMPIInt Ii[], int *__ierr ){
*__ierr = PetscSortMPIIntWithArray(*n,i,Ii);
}
void PETSC_STDCALL   petscsortintwithscalararray_(PetscInt *n,PetscInt i[],PetscScalar Ii[], int *__ierr ){
*__ierr = PetscSortIntWithScalarArray(*n,i,Ii);
}
#if defined(__cplusplus)
}
#endif
