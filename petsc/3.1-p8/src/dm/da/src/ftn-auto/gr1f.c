#include "petscsys.h"
#include "petscfix.h"
/* gr1.c */
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
#define dasetuniformcoordinates_ DASETUNIFORMCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetuniformcoordinates_ dasetuniformcoordinates
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dasetuniformcoordinates_(DA da,PetscReal *xmin,PetscReal *xmax,PetscReal *ymin,PetscReal *ymax,PetscReal *zmin,PetscReal *zmax, int *__ierr ){
*__ierr = DASetUniformCoordinates(
	(DA)PetscToPointer((da) ),*xmin,*xmax,*ymin,*ymax,*zmin,*zmax);
}
#if defined(__cplusplus)
}
#endif
