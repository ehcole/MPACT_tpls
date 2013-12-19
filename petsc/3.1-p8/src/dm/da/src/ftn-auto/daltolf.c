#include "petscsys.h"
#include "petscfix.h"
/* daltol.c */
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
#define dalocaltolocalbegin_ DALOCALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dalocaltolocalbegin_ dalocaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dalocaltolocalend_ DALOCALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dalocaltolocalend_ dalocaltolocalend
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dalocaltolocalbegin_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DALocalToLocalBegin(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   dalocaltolocalend_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DALocalToLocalEnd(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
#if defined(__cplusplus)
}
#endif
