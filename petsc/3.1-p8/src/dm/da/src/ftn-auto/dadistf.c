#include "petscsys.h"
#include "petscfix.h"
/* dadist.c */
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
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacreateglobalvector_ DACREATEGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacreateglobalvector_ dacreateglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacreatenaturalvector_ DACREATENATURALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacreatenaturalvector_ dacreatenaturalvector
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dacreateglobalvector_(DA da,Vec* g, int *__ierr ){
*__ierr = DACreateGlobalVector(
	(DA)PetscToPointer((da) ),g);
}
void PETSC_STDCALL   dacreatenaturalvector_(DA da,Vec* g, int *__ierr ){
*__ierr = DACreateNaturalVector(
	(DA)PetscToPointer((da) ),g);
}
#if defined(__cplusplus)
}
#endif
