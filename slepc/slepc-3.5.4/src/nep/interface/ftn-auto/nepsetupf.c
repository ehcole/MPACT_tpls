#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* nepsetup.c */
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

#include "slepcnep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetup_ NEPSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetup_ nepsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetinitialspace_ NEPSETINITIALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetinitialspace_ nepsetinitialspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepallocatesolution_ NEPALLOCATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepallocatesolution_ nepallocatesolution
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  nepsetup_(NEP *nep, int *__ierr ){
*__ierr = NEPSetUp(*nep);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetinitialspace_(NEP *nep,PetscInt *n,Vec *is, int *__ierr ){
*__ierr = NEPSetInitialSpace(*nep,*n,is);
}
PETSC_EXTERN void PETSC_STDCALL  nepallocatesolution_(NEP *nep,PetscInt *extra, int *__ierr ){
*__ierr = NEPAllocateSolution(*nep,*extra);
}
#if defined(__cplusplus)
}
#endif
