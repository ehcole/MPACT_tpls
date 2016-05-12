#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* blzpack.c */
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

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsblzpacksetblocksize_ EPSBLZPACKSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsblzpacksetblocksize_ epsblzpacksetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsblzpacksetnsteps_ EPSBLZPACKSETNSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsblzpacksetnsteps_ epsblzpacksetnsteps
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsblzpacksetblocksize_(EPS *eps,PetscInt *bs, int *__ierr ){
*__ierr = EPSBlzpackSetBlockSize(*eps,*bs);
}
PETSC_EXTERN void PETSC_STDCALL  epsblzpacksetnsteps_(EPS *eps,PetscInt *nsteps, int *__ierr ){
*__ierr = EPSBlzpackSetNSteps(*eps,*nsteps);
}
#if defined(__cplusplus)
}
#endif
