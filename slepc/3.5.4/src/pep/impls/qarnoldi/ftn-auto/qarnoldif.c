#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* qarnoldi.c */
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
#define pepqarnoldisetrestart_ PEPQARNOLDISETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepqarnoldisetrestart_ pepqarnoldisetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepqarnoldigetrestart_ PEPQARNOLDIGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepqarnoldigetrestart_ pepqarnoldigetrestart
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  pepqarnoldisetrestart_(PEP *pep,PetscReal *keep, int *__ierr ){
*__ierr = PEPQArnoldiSetRestart(*pep,*keep);
}
PETSC_EXTERN void PETSC_STDCALL  pepqarnoldigetrestart_(PEP *pep,PetscReal *keep, int *__ierr ){
*__ierr = PEPQArnoldiGetRestart(*pep,keep);
}
#if defined(__cplusplus)
}
#endif
