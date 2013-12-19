#include "petscsys.h"
#include "petscfix.h"
/* jostle.c */
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
#define matpartitioningjostlesetcoarselevel_ MATPARTITIONINGJOSTLESETCOARSELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningjostlesetcoarselevel_ matpartitioningjostlesetcoarselevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningjostlesetcoarsesequential_ MATPARTITIONINGJOSTLESETCOARSESEQUENTIAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningjostlesetcoarsesequential_ matpartitioningjostlesetcoarsesequential
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matpartitioningjostlesetcoarselevel_(MatPartitioning part,PetscReal *level, int *__ierr ){
*__ierr = MatPartitioningJostleSetCoarseLevel(
	(MatPartitioning)PetscToPointer((part) ),*level);
}
void PETSC_STDCALL   matpartitioningjostlesetcoarsesequential_(MatPartitioning part, int *__ierr ){
*__ierr = MatPartitioningJostleSetCoarseSequential(
	(MatPartitioning)PetscToPointer((part) ));
}
#if defined(__cplusplus)
}
#endif
