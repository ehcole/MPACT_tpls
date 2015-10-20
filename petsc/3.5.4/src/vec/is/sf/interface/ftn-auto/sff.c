#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* sf.c */
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

#include "petscsf.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsfsetup_ PETSCSFSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsfsetup_ petscsfsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscsfduplicate_ PETSCSFDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscsfduplicate_ petscsfduplicate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  petscsfsetup_(PetscSF sf, int *__ierr ){
*__ierr = PetscSFSetUp(
	(PetscSF)PetscToPointer((sf) ));
}
PETSC_EXTERN void PETSC_STDCALL  petscsfduplicate_(PetscSF sf,PetscSFDuplicateOption *opt,PetscSF *newsf, int *__ierr ){
*__ierr = PetscSFDuplicate(
	(PetscSF)PetscToPointer((sf) ),*opt,newsf);
}
#if defined(__cplusplus)
}
#endif
