#include "petscsys.h"
#include "petscfix.h"
/* general.c */
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

#include "petscis.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define iscreategeneral_ ISCREATEGENERAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define iscreategeneral_ iscreategeneral
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   iscreategeneral_(MPI_Fint * comm,PetscInt *n, PetscInt idx[],IS *is, int *__ierr ){
*__ierr = ISCreateGeneral(
	MPI_Comm_f2c( *(comm) ),*n,idx,is);
}
#if defined(__cplusplus)
}
#endif
