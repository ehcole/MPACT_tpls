#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* ptype.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdatatypegetsize_ PETSCDATATYPEGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdatatypegetsize_ petscdatatypegetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdatatypefromstring_ PETSCDATATYPEFROMSTRING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdatatypefromstring_ petscdatatypefromstring
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  petscdatatypegetsize_(PetscDataType *ptype,size_t *size, int *__ierr ){
*__ierr = PetscDataTypeGetSize(*ptype,size);
}
PETSC_EXTERN void PETSC_STDCALL  petscdatatypefromstring_( char*name,PetscDataType *ptype,PetscBool *found, int *__ierr ){
*__ierr = PetscDataTypeFromString(name,
	(PetscDataType* )PetscToPointer((ptype) ),found);
}
#if defined(__cplusplus)
}
#endif
