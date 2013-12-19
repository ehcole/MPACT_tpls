#include "petscsys.h"
#include "petscfix.h"
/* inherit.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscobjectdereference_ PETSCOBJECTDEREFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscobjectdereference_ petscobjectdereference
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscobjectsetfromoptions_ PETSCOBJECTSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscobjectsetfromoptions_ petscobjectsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscobjectsetup_ PETSCOBJECTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscobjectsetup_ petscobjectsetup
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscobjectdereference_(PetscObject obj, int *__ierr ){
*__ierr = PetscObjectDereference(
	(PetscObject)PetscToPointer((obj) ));
}
void PETSC_STDCALL   petscobjectsetfromoptions_(PetscObject obj, int *__ierr ){
*__ierr = PetscObjectSetFromOptions(
	(PetscObject)PetscToPointer((obj) ));
}
void PETSC_STDCALL   petscobjectsetup_(PetscObject obj, int *__ierr ){
*__ierr = PetscObjectSetUp(
	(PetscObject)PetscToPointer((obj) ));
}
#if defined(__cplusplus)
}
#endif
