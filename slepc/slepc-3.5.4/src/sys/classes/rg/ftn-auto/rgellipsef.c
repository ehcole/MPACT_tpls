#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* rgellipse.c */
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
#define rgellipsesetparameters_ RGELLIPSESETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgellipsesetparameters_ rgellipsesetparameters
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgellipsegetparameters_ RGELLIPSEGETPARAMETERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgellipsegetparameters_ rgellipsegetparameters
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  rgellipsesetparameters_(RG *rg,PetscScalar *center,PetscReal *radius,PetscReal *vscale, int *__ierr ){
*__ierr = RGEllipseSetParameters(*rg,*center,*radius,*vscale);
}
PETSC_EXTERN void PETSC_STDCALL  rgellipsegetparameters_(RG *rg,PetscScalar *center,PetscReal *radius,PetscReal *vscale, int *__ierr ){
*__ierr = RGEllipseGetParameters(*rg,center,radius,vscale);
}
#if defined(__cplusplus)
}
#endif
