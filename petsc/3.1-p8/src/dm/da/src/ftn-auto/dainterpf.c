#include "petscsys.h"
#include "petscfix.h"
/* dainterp.c */
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
#define dmgetinterpolationscale_ DMGETINTERPOLATIONSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetinterpolationscale_ dmgetinterpolationscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetinjection_ DAGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetinjection_ dagetinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetaggregates_ DAGETAGGREGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetaggregates_ dagetaggregates
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dmgetinterpolationscale_(DM dac,DM daf,Mat mat,Vec *scale, int *__ierr ){
*__ierr = DMGetInterpolationScale(
	(DM)PetscToPointer((dac) ),
	(DM)PetscToPointer((daf) ),
	(Mat)PetscToPointer((mat) ),scale);
}
void PETSC_STDCALL   dagetinjection_(DA dac,DA daf,VecScatter *inject, int *__ierr ){
*__ierr = DAGetInjection(
	(DA)PetscToPointer((dac) ),
	(DA)PetscToPointer((daf) ),inject);
}
void PETSC_STDCALL   dagetaggregates_(DA dac,DA daf,Mat *rest, int *__ierr ){
*__ierr = DAGetAggregates(
	(DA)PetscToPointer((dac) ),
	(DA)PetscToPointer((daf) ),rest);
}
#if defined(__cplusplus)
}
#endif
