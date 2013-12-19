#include "petscsys.h"
#include "petscfix.h"
/* damgsnesad.c */
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

#include "petscda.h"
#include "petscmg.h"
#include "petscdmmg.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesdacomputejacobianwithadic_ SNESDACOMPUTEJACOBIANWITHADIC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesdacomputejacobianwithadic_ snesdacomputejacobianwithadic
#endif
#include "petscmg.h"


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   snesdacomputejacobianwithadic_(SNES snes,Vec X,Mat *J,Mat *B,MatStructure *flag,void*ptr, int *__ierr ){
*__ierr = SNESDAComputeJacobianWithAdic(
	(SNES)PetscToPointer((snes) ),
	(Vec)PetscToPointer((X) ),J,B,flag,ptr);
}
#if defined(__cplusplus)
}
#endif
