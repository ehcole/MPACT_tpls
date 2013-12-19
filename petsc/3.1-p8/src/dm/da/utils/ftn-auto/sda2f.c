#include "petscsys.h"
#include "petscfix.h"
/* sda2.c */
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
#define sdadestroy_ SDADESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sdadestroy_ sdadestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sdalocaltolocalbegin_ SDALOCALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sdalocaltolocalbegin_ sdalocaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sdalocaltolocalend_ SDALOCALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sdalocaltolocalend_ sdalocaltolocalend
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   sdadestroy_(SDA sda, int *__ierr ){
*__ierr = SDADestroy(
	(SDA)PetscToPointer((sda) ));
}
void PETSC_STDCALL   sdalocaltolocalbegin_(SDA sda,PetscScalar *g,InsertMode *mode,PetscScalar *l, int *__ierr ){
*__ierr = SDALocalToLocalBegin(
	(SDA)PetscToPointer((sda) ),g,*mode,l);
}
void PETSC_STDCALL   sdalocaltolocalend_(SDA sda,PetscScalar *g,InsertMode *mode,PetscScalar *l, int *__ierr ){
*__ierr = SDALocalToLocalEnd(
	(SDA)PetscToPointer((sda) ),g,*mode,l);
}
#if defined(__cplusplus)
}
#endif
