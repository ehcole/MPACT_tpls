#include "petscsys.h"
#include "petscfix.h"
/* mpiaij.c */
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
#define matmpiaijsetpreallocationcsr_ MATMPIAIJSETPREALLOCATIONCSR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmpiaijsetpreallocationcsr_ matmpiaijsetpreallocationcsr
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreatempiaijwitharrays_ MATCREATEMPIAIJWITHARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreatempiaijwitharrays_ matcreatempiaijwitharrays
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matmerge_ MATMERGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmerge_ matmerge
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetlocalmat_ MATGETLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetlocalmat_ matgetlocalmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreatempiaijwithsplitarrays_ MATCREATEMPIAIJWITHSPLITARRAYS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreatempiaijwithsplitarrays_ matcreatempiaijwithsplitarrays
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matmpiaijsetpreallocationcsr_(Mat B, PetscInt i[], PetscInt j[], PetscScalar v[], int *__ierr ){
*__ierr = MatMPIAIJSetPreallocationCSR(
	(Mat)PetscToPointer((B) ),i,j,v);
}
void PETSC_STDCALL   matcreatempiaijwitharrays_(MPI_Fint * comm,PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N, PetscInt i[], PetscInt j[], PetscScalar a[],Mat *mat, int *__ierr ){
*__ierr = MatCreateMPIAIJWithArrays(
	MPI_Comm_f2c( *(comm) ),*m,*n,*M,*N,i,j,a,mat);
}
void PETSC_STDCALL   matmerge_(MPI_Fint * comm,Mat inmat,PetscInt *n,MatReuse *scall,Mat *outmat, int *__ierr ){
*__ierr = MatMerge(
	MPI_Comm_f2c( *(comm) ),
	(Mat)PetscToPointer((inmat) ),*n,*scall,outmat);
}
void PETSC_STDCALL   matgetlocalmat_(Mat A,MatReuse *scall,Mat *A_loc, int *__ierr ){
*__ierr = MatGetLocalMat(
	(Mat)PetscToPointer((A) ),*scall,A_loc);
}
void PETSC_STDCALL   matcreatempiaijwithsplitarrays_(MPI_Fint * comm,PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N,PetscInt i[],PetscInt j[],PetscScalar a[],
        PetscInt oi[],PetscInt oj[],PetscScalar oa[],Mat *mat, int *__ierr ){
*__ierr = MatCreateMPIAIJWithSplitArrays(
	MPI_Comm_f2c( *(comm) ),*m,*n,*M,*N,i,j,a,oi,oj,oa,mat);
}
#if defined(__cplusplus)
}
#endif
