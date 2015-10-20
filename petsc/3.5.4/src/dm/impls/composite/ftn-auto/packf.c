#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* pack.c */
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

#include "petscdmcomposite.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcompositegetnumberdm_ DMCOMPOSITEGETNUMBERDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositegetnumberdm_ dmcompositegetnumberdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcompositescatterarray_ DMCOMPOSITESCATTERARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositescatterarray_ dmcompositescatterarray
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcompositegatherarray_ DMCOMPOSITEGATHERARRAY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositegatherarray_ dmcompositegatherarray
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmcompositegetnumberdm_(DM dm,PetscInt *nDM, int *__ierr ){
*__ierr = DMCompositeGetNumberDM(
	(DM)PetscToPointer((dm) ),nDM);
}
PETSC_EXTERN void PETSC_STDCALL  dmcompositescatterarray_(DM dm,Vec gvec,Vec *lvecs, int *__ierr ){
*__ierr = DMCompositeScatterArray(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((gvec) ),lvecs);
}
PETSC_EXTERN void PETSC_STDCALL  dmcompositegatherarray_(DM dm,Vec gvec,InsertMode *imode,Vec *lvecs, int *__ierr ){
*__ierr = DMCompositeGatherArray(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((gvec) ),*imode,lvecs);
}
#if defined(__cplusplus)
}
#endif
