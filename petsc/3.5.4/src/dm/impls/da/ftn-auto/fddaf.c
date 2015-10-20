#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* fdda.c */
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

#include "petscdmda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdasetblockfills_ DMDASETBLOCKFILLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdasetblockfills_ dmdasetblockfills
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmdasetblockfills_(DM da, PetscInt *dfill, PetscInt *ofill, int *__ierr ){
*__ierr = DMDASetBlockFills(
	(DM)PetscToPointer((da) ),dfill,ofill);
}
#if defined(__cplusplus)
}
#endif
