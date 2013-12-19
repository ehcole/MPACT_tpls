#include "petscsys.h"
#include "petscfix.h"
/* matis.c */
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
#define matisgetlocalmat_ MATISGETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matisgetlocalmat_ matisgetlocalmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreateis_ MATCREATEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreateis_ matcreateis
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matisgetlocalmat_(Mat mat,Mat *local, int *__ierr ){
*__ierr = MatISGetLocalMat(
	(Mat)PetscToPointer((mat) ),local);
}
void PETSC_STDCALL   matcreateis_(MPI_Fint * comm,PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N,ISLocalToGlobalMapping map,Mat *A, int *__ierr ){
*__ierr = MatCreateIS(
	MPI_Comm_f2c( *(comm) ),*m,*n,*M,*N,
	(ISLocalToGlobalMapping)PetscToPointer((map) ),A);
}
#if defined(__cplusplus)
}
#endif
