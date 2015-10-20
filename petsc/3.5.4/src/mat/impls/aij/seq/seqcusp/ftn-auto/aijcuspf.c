#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* aijcusp.cu */
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
#define matcuspsetformat_ MATCUSPSETFORMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcuspsetformat_ matcuspsetformat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matcreateseqaijcusp_ MATCREATESEQAIJCUSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matcreateseqaijcusp_ matcreateseqaijcusp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matseqaijcusp_ MATSEQAIJCUSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matseqaijcusp_ matseqaijcusp
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
#undef __FUNCT__
#define __FUNCT__ ""
PETSC_EXTERN void PETSC_STDCALL  matcuspsetformat_(Mat A,MatCUSPFormatOperation *op,MatCUSPStorageFormat *format, int *__ierr ){
*__ierr = MatCUSPSetFormat(
	(Mat)PetscToPointer((A) ),*op,*format);
}
PETSC_EXTERN void PETSC_STDCALL  matcreateseqaijcusp_(MPI_Fint * comm,PetscInt *m,PetscInt *n,PetscInt *nz, PetscInt nnz[],Mat *A, int *__ierr ){
*__ierr = MatCreateSeqAIJCUSP(
	MPI_Comm_f2c( *(comm) ),*m,*n,*nz,nnz,A);
}
#if defined(__cplusplus)
}
#endif
