#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* pepsetup.c */
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
#define pepsetup_ PEPSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetup_ pepsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetoperators_ PEPSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetoperators_ pepsetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetoperators_ PEPGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetoperators_ pepgetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetnummatrices_ PEPGETNUMMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetnummatrices_ pepgetnummatrices
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetinitialspace_ PEPSETINITIALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetinitialspace_ pepsetinitialspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepallocatesolution_ PEPALLOCATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepallocatesolution_ pepallocatesolution
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  pepsetup_(PEP *pep, int *__ierr ){
*__ierr = PEPSetUp(*pep);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetoperators_(PEP *pep,PetscInt *nmat,Mat A[], int *__ierr ){
*__ierr = PEPSetOperators(*pep,*nmat,A);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetoperators_(PEP *pep,PetscInt *k,Mat *A, int *__ierr ){
*__ierr = PEPGetOperators(*pep,*k,A);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetnummatrices_(PEP *pep,PetscInt *nmat, int *__ierr ){
*__ierr = PEPGetNumMatrices(*pep,nmat);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetinitialspace_(PEP *pep,PetscInt *n,Vec *is, int *__ierr ){
*__ierr = PEPSetInitialSpace(*pep,*n,is);
}
PETSC_EXTERN void PETSC_STDCALL  pepallocatesolution_(PEP *pep,PetscInt *extra, int *__ierr ){
*__ierr = PEPAllocateSolution(*pep,*extra);
}
#if defined(__cplusplus)
}
#endif
