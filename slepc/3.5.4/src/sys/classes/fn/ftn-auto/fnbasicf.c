#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fnbasic.c */
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

#include "slepcfn.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define fnsetparameters_ FNSETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define fnsetparameters_ fnsetparameters
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define fngetparameters_ FNGETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define fngetparameters_ fngetparameters
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define fnevaluatefunction_ FNEVALUATEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define fnevaluatefunction_ fnevaluatefunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define fnevaluatederivative_ FNEVALUATEDERIVATIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define fnevaluatederivative_ fnevaluatederivative
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define fnsetfromoptions_ FNSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define fnsetfromoptions_ fnsetfromoptions
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  fnsetparameters_(FN *fn,PetscInt *na,PetscScalar *alpha,PetscInt *nb,PetscScalar *beta, int *__ierr ){
*__ierr = FNSetParameters(*fn,*na,alpha,*nb,beta);
}
PETSC_EXTERN void PETSC_STDCALL  fngetparameters_(FN *fn,PetscInt *na,PetscScalar *alpha[],PetscInt *nb,PetscScalar *beta[], int *__ierr ){
*__ierr = FNGetParameters(*fn,na,alpha,nb,beta);
}
PETSC_EXTERN void PETSC_STDCALL  fnevaluatefunction_(FN *fn,PetscScalar *x,PetscScalar *y, int *__ierr ){
*__ierr = FNEvaluateFunction(*fn,*x,y);
}
PETSC_EXTERN void PETSC_STDCALL  fnevaluatederivative_(FN *fn,PetscScalar *x,PetscScalar *y, int *__ierr ){
*__ierr = FNEvaluateDerivative(*fn,*x,y);
}
PETSC_EXTERN void PETSC_STDCALL  fnsetfromoptions_(FN *fn, int *__ierr ){
*__ierr = FNSetFromOptions(*fn);
}
#if defined(__cplusplus)
}
#endif
