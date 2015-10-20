#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dacorn.c */
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

#include "petscdmda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetcorners_ DMDAGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetcorners_ dmdagetcorners
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetlocalboundingbox_ DMDAGETLOCALBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetlocalboundingbox_ dmdagetlocalboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetboundingbox_ DMDAGETBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetboundingbox_ dmdagetboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdagetreduceddmda_ DMDAGETREDUCEDDMDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdagetreduceddmda_ dmdagetreduceddmda
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmdagetcorners_(DM da,PetscInt *x,PetscInt *y,PetscInt *z,PetscInt *m,PetscInt *n,PetscInt *p, int *__ierr ){
*__ierr = DMDAGetCorners(
	(DM)PetscToPointer((da) ),x,y,z,m,n,p);
}
PETSC_EXTERN void PETSC_STDCALL  dmdagetlocalboundingbox_(DM da,PetscReal lmin[],PetscReal lmax[], int *__ierr ){
*__ierr = DMDAGetLocalBoundingBox(
	(DM)PetscToPointer((da) ),lmin,lmax);
}
PETSC_EXTERN void PETSC_STDCALL  dmdagetboundingbox_(DM da,PetscReal gmin[],PetscReal gmax[], int *__ierr ){
*__ierr = DMDAGetBoundingBox(
	(DM)PetscToPointer((da) ),gmin,gmax);
}
PETSC_EXTERN void PETSC_STDCALL  dmdagetreduceddmda_(DM da,PetscInt *nfields,DM *nda, int *__ierr ){
*__ierr = DMDAGetReducedDMDA(
	(DM)PetscToPointer((da) ),*nfields,nda);
}
#if defined(__cplusplus)
}
#endif
