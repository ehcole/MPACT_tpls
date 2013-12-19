#include "petscsys.h"
#include "petscfix.h"
/* random.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomdestroy_ PETSCRANDOMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomdestroy_ petscrandomdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomsetinterval_ PETSCRANDOMSETINTERVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomsetinterval_ petscrandomsetinterval
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomsetfromoptions_ PETSCRANDOMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomsetfromoptions_ petscrandomsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomviewfromoptions_ PETSCRANDOMVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomviewfromoptions_ petscrandomviewfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomcreate_ PETSCRANDOMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomcreate_ petscrandomcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomgetvalue_ PETSCRANDOMGETVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomgetvalue_ petscrandomgetvalue
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscrandomgetvaluereal_ PETSCRANDOMGETVALUEREAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscrandomgetvaluereal_ petscrandomgetvaluereal
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscrandomdestroy_(PetscRandom r, int *__ierr ){
*__ierr = PetscRandomDestroy(
	(PetscRandom)PetscToPointer((r) ));
}
void PETSC_STDCALL   petscrandomsetinterval_(PetscRandom r,PetscScalar *low,PetscScalar *high, int *__ierr ){
*__ierr = PetscRandomSetInterval(
	(PetscRandom)PetscToPointer((r) ),*low,*high);
}
void PETSC_STDCALL   petscrandomsetfromoptions_(PetscRandom rnd, int *__ierr ){
*__ierr = PetscRandomSetFromOptions(
	(PetscRandom)PetscToPointer((rnd) ));
}
void PETSC_STDCALL   petscrandomviewfromoptions_(PetscRandom rnd,char *title, int *__ierr ){
*__ierr = PetscRandomViewFromOptions(
	(PetscRandom)PetscToPointer((rnd) ),title);
}

void PETSC_STDCALL   petscrandomcreate_(MPI_Fint * comm,PetscRandom *r, int *__ierr ){
*__ierr = PetscRandomCreate(
	MPI_Comm_f2c( *(comm) ),r);
}
void PETSC_STDCALL   petscrandomgetvalue_(PetscRandom r,PetscScalar *val, int *__ierr ){
*__ierr = PetscRandomGetValue(
	(PetscRandom)PetscToPointer((r) ),val);
}
void PETSC_STDCALL   petscrandomgetvaluereal_(PetscRandom r,PetscReal *val, int *__ierr ){
*__ierr = PetscRandomGetValueReal(
	(PetscRandom)PetscToPointer((r) ),val);
}
#if defined(__cplusplus)
}
#endif
