#include "petscsys.h"
#include "petscfix.h"
/* mpibaij.c */
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
#define matmpibaijsethashtablefactor_ MATMPIBAIJSETHASHTABLEFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matmpibaijsethashtablefactor_ matmpibaijsethashtablefactor
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matmpibaijsethashtablefactor_(Mat mat,PetscReal *fact, int *__ierr ){
*__ierr = MatMPIBAIJSetHashTableFactor(
	(Mat)PetscToPointer((mat) ),*fact);
}
#if defined(__cplusplus)
}
#endif
