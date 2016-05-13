#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* ptoar.c */
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
#define peptoarsetrestart_ PEPTOARSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peptoarsetrestart_ peptoarsetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define peptoargetrestart_ PEPTOARGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define peptoargetrestart_ peptoargetrestart
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  peptoarsetrestart_(PEP *pep,PetscReal *keep, int *__ierr ){
*__ierr = PEPTOARSetRestart(*pep,*keep);
}
PETSC_EXTERN void PETSC_STDCALL  peptoargetrestart_(PEP *pep,PetscReal *keep, int *__ierr ){
*__ierr = PEPTOARGetRestart(*pep,keep);
}
#if defined(__cplusplus)
}
#endif
