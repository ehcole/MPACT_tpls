#include "petscsys.h"
#include "petscfix.h"
/* dagetarray.c */
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
#define davecrestorearray_ DAVECRESTOREARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define davecrestorearray_ davecrestorearray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define davecrestorearraydof_ DAVECRESTOREARRAYDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define davecrestorearraydof_ davecrestorearraydof
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   davecrestorearray_(DA da,Vec vec,void*array, int *__ierr ){
*__ierr = DAVecRestoreArray(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((vec) ),array);
}
void PETSC_STDCALL   davecrestorearraydof_(DA da,Vec vec,void*array, int *__ierr ){
*__ierr = DAVecRestoreArrayDOF(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((vec) ),array);
}
#if defined(__cplusplus)
}
#endif
