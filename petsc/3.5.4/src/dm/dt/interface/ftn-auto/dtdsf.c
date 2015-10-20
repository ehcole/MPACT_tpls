#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dtds.c */
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

#include "petscds.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdssetfromoptions_ PETSCDSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdssetfromoptions_ petscdssetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdsdestroy_ PETSCDSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdsdestroy_ petscdsdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdscreate_ PETSCDSCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdscreate_ petscdscreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  petscdssetfromoptions_(PetscDS prob, int *__ierr ){
*__ierr = PetscDSSetFromOptions(
	(PetscDS)PetscToPointer((prob) ));
}
PETSC_EXTERN void PETSC_STDCALL  petscdsdestroy_(PetscDS *prob, int *__ierr ){
*__ierr = PetscDSDestroy(prob);
}
PETSC_EXTERN void PETSC_STDCALL  petscdscreate_(MPI_Fint * comm,PetscDS *prob, int *__ierr ){
*__ierr = PetscDSCreate(
	MPI_Comm_f2c( *(comm) ),prob);
}
#if defined(__cplusplus)
}
#endif
