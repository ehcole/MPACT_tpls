#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dpoints.c */
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

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscdraw.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawpointsetsize_ PETSCDRAWPOINTSETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawpointsetsize_ petscdrawpointsetsize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  petscdrawpointsetsize_(PetscDraw draw,PetscReal *width, int *__ierr ){
*__ierr = PetscDrawPointSetSize(
	(PetscDraw)PetscToPointer((draw) ),*width);
}
#if defined(__cplusplus)
}
#endif
