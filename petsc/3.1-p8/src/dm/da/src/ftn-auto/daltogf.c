#include "petscsys.h"
#include "petscfix.h"
/* daltog.c */
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
#define dalocaltoglobal_ DALOCALTOGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dalocaltoglobal_ dalocaltoglobal
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dalocaltoglobal_(DA da,Vec l,InsertMode *mode,Vec g, int *__ierr ){
*__ierr = DALocalToGlobal(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((l) ),*mode,
	(Vec)PetscToPointer((g) ));
}
#if defined(__cplusplus)
}
#endif
