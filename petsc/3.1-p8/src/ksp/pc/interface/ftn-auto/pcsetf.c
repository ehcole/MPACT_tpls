#include "petscsys.h"
#include "petscfix.h"
/* pcset.c */
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

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcregisterdestroy_ PCREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcregisterdestroy_ pcregisterdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsetfromoptions_ PCSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsetfromoptions_ pcsetfromoptions
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   pcregisterdestroy_(int *__ierr ){
*__ierr = PCRegisterDestroy();
}
void PETSC_STDCALL   pcsetfromoptions_(PC pc, int *__ierr ){
*__ierr = PCSetFromOptions(
	(PC)PetscToPointer((pc) ));
}
#if defined(__cplusplus)
}
#endif
