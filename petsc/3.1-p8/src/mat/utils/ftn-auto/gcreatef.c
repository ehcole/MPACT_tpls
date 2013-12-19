#include "petscsys.h"
#include "petscfix.h"
/* gcreate.c */
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
#define matcreate_ MATCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreate_ matcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetsizes_ MATSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetsizes_ matsetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetfromoptions_ MATSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetfromoptions_ matsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetuppreallocation_ MATSETUPPREALLOCATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetuppreallocation_ matsetuppreallocation
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matcreate_(MPI_Fint * comm,Mat *A, int *__ierr ){
*__ierr = MatCreate(
	MPI_Comm_f2c( *(comm) ),A);
}
void PETSC_STDCALL   matsetsizes_(Mat A,PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N, int *__ierr ){
*__ierr = MatSetSizes(
	(Mat)PetscToPointer((A) ),*m,*n,*M,*N);
}
void PETSC_STDCALL   matsetfromoptions_(Mat B, int *__ierr ){
*__ierr = MatSetFromOptions(
	(Mat)PetscToPointer((B) ));
}
void PETSC_STDCALL   matsetuppreallocation_(Mat B, int *__ierr ){
*__ierr = MatSetUpPreallocation(
	(Mat)PetscToPointer((B) ));
}
#if defined(__cplusplus)
}
#endif
