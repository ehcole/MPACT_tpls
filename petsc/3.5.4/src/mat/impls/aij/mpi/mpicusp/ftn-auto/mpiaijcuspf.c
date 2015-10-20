#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* mpiaijcusp.cu */
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

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreateaijcusp_ MATCREATEAIJCUSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreateaijcusp_ matcreateaijcusp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define mataijcusp_ MATAIJCUSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define mataijcusp_ mataijcusp
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
#undef __FUNCT__
#define __FUNCT__ ""
PETSC_EXTERN void PETSC_STDCALL  matcreateaijcusp_(MPI_Fint * comm,PetscInt *m,PetscInt *n,PetscInt *M,PetscInt *N,PetscInt *d_nz, PetscInt d_nnz[],PetscInt *o_nz, PetscInt o_nnz[],Mat *A, int *__ierr ){
*__ierr = MatCreateAIJCUSP(
	MPI_Comm_f2c( *(comm) ),*m,*n,*M,*N,*d_nz,d_nnz,*o_nz,o_nnz,A);
}
#if defined(__cplusplus)
}
#endif
