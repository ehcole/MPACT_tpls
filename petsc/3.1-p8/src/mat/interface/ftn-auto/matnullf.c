#include "petscsys.h"
#include "petscfix.h"
/* matnull.c */
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

#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacecreate_ MATNULLSPACECREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacecreate_ matnullspacecreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacedestroy_ MATNULLSPACEDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacedestroy_ matnullspacedestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matnullspacetest_ MATNULLSPACETEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matnullspacetest_ matnullspacetest
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matnullspacecreate_(MPI_Fint * comm,PetscTruth *has_cnst,PetscInt *n, Vec vecs[],MatNullSpace *SP, int *__ierr ){
*__ierr = MatNullSpaceCreate(
	MPI_Comm_f2c( *(comm) ),*has_cnst,*n,vecs,SP);
}
void PETSC_STDCALL   matnullspacedestroy_(MatNullSpace sp, int *__ierr ){
*__ierr = MatNullSpaceDestroy(
	(MatNullSpace)PetscToPointer((sp) ));
}
void PETSC_STDCALL   matnullspacetest_(MatNullSpace sp,Mat mat,PetscTruth *isNull, int *__ierr ){
*__ierr = MatNullSpaceTest(
	(MatNullSpace)PetscToPointer((sp) ),
	(Mat)PetscToPointer((mat) ),isNull);
}
#if defined(__cplusplus)
}
#endif
