#include "petscsys.h"
#include "petscfix.h"
/* bag.c */
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

#include "petscbag.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscbagcreate_ PETSCBAGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscbagcreate_ petscbagcreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL  petscbagcreate_(MPI_Fint * comm,size_t *bagsize,PetscBag *bag, int *__ierr ){
*__ierr = PetscBagCreate(
	MPI_Comm_f2c( *(comm) ),*bagsize,bag);
}
#if defined(__cplusplus)
}
#endif
