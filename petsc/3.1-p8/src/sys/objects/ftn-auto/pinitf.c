#include "petscsys.h"
#include "petscfix.h"
/* pinit.c */
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
#define petscinitialized_ PETSCINITIALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscinitialized_ petscinitialized
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscfinalized_ PETSCFINALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscfinalized_ petscfinalized
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscglobalmax_ PETSCGLOBALMAX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscglobalmax_ petscglobalmax
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscglobalmin_ PETSCGLOBALMIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscglobalmin_ petscglobalmin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscglobalsum_ PETSCGLOBALSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscglobalsum_ petscglobalsum
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscinitialized_(PetscTruth *isInitialized, int *__ierr ){
*__ierr = PetscInitialized(isInitialized);
}
void PETSC_STDCALL   petscfinalized_(PetscTruth *isFinalized, int *__ierr ){
*__ierr = PetscFinalized(isFinalized);
}
void PETSC_STDCALL   petscglobalmax_(PetscReal* local,PetscReal* result,MPI_Fint * comm, int *__ierr ){
*__ierr = PetscGlobalMax(local,result,
	MPI_Comm_f2c( *(comm) ));
}
void PETSC_STDCALL   petscglobalmin_(PetscReal* local,PetscReal* result,MPI_Fint * comm, int *__ierr ){
*__ierr = PetscGlobalMin(local,result,
	MPI_Comm_f2c( *(comm) ));
}
void PETSC_STDCALL   petscglobalsum_(PetscScalar* local,PetscScalar* result,MPI_Fint * comm, int *__ierr ){
*__ierr = PetscGlobalSum(local,result,
	MPI_Comm_f2c( *(comm) ));
}
#if defined(__cplusplus)
}
#endif
