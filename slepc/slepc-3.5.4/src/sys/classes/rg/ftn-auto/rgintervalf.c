#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* rginterval.c */
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

#include "slepcrg.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgintervalsetendpoints_ RGINTERVALSETENDPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgintervalsetendpoints_ rgintervalsetendpoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgintervalgetendpoints_ RGINTERVALGETENDPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgintervalgetendpoints_ rgintervalgetendpoints
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  rgintervalsetendpoints_(RG *rg,PetscReal *a,PetscReal *b,PetscReal *c,PetscReal *d, int *__ierr ){
*__ierr = RGIntervalSetEndpoints(*rg,*a,*b,*c,*d);
}
PETSC_EXTERN void PETSC_STDCALL  rgintervalgetendpoints_(RG *rg,PetscReal *a,PetscReal *b,PetscReal *c,PetscReal *d, int *__ierr ){
*__ierr = RGIntervalGetEndpoints(*rg,a,b,c,d);
}
#if defined(__cplusplus)
}
#endif
