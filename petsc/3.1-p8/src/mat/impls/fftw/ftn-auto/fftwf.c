#include "petscsys.h"
#include "petscfix.h"
/* fftw.c */
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
#define matcreateseqfftw_ MATCREATESEQFFTW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreateseqfftw_ matcreateseqfftw
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matcreateseqfftw_(MPI_Fint * comm,PetscInt *ndim, PetscInt dim[],Mat* A, int *__ierr ){
*__ierr = MatCreateSeqFFTW(
	MPI_Comm_f2c( *(comm) ),*ndim,dim,A);
}
#if defined(__cplusplus)
}
#endif
