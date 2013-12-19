#include "petscsys.h"
#include "petscfix.h"
/* dacreate.c */
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

#include "petscda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daviewfromoptions_ DAVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daviewfromoptions_ daviewfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetfromoptions_ DASETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetfromoptions_ dasetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacreate_ DACREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacreate_ dacreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   daviewfromoptions_(DA da, char title[], int *__ierr ){
*__ierr = DAViewFromOptions(
	(DA)PetscToPointer((da) ),title);
}
void PETSC_STDCALL   dasetfromoptions_(DA da, int *__ierr ){
*__ierr = DASetFromOptions(
	(DA)PetscToPointer((da) ));
}
void PETSC_STDCALL   dacreate_(MPI_Fint * comm,DA *da, int *__ierr ){
*__ierr = DACreate(
	MPI_Comm_f2c( *(comm) ),da);
}
#if defined(__cplusplus)
}
#endif
