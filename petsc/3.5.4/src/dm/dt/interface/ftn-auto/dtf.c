#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dt.c */
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

#include "petscdt.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdtlegendreeval_ PETSCDTLEGENDREEVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdtlegendreeval_ petscdtlegendreeval
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdtgaussquadrature_ PETSCDTGAUSSQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdtgaussquadrature_ petscdtgaussquadrature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdtgausstensorquadrature_ PETSCDTGAUSSTENSORQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdtgausstensorquadrature_ petscdtgausstensorquadrature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdtreconstructpoly_ PETSCDTRECONSTRUCTPOLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdtreconstructpoly_ petscdtreconstructpoly
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  petscdtlegendreeval_(PetscInt *npoints, PetscReal *points,PetscInt *ndegree, PetscInt *degrees,PetscReal *B,PetscReal *D,PetscReal *D2, int *__ierr ){
*__ierr = PetscDTLegendreEval(*npoints,points,*ndegree,degrees,B,D,D2);
}
PETSC_EXTERN void PETSC_STDCALL  petscdtgaussquadrature_(PetscInt *npoints,PetscReal *a,PetscReal *b,PetscReal *x,PetscReal *w, int *__ierr ){
*__ierr = PetscDTGaussQuadrature(*npoints,*a,*b,x,w);
}
PETSC_EXTERN void PETSC_STDCALL  petscdtgausstensorquadrature_(PetscInt *dim,PetscInt *npoints,PetscReal *a,PetscReal *b,PetscQuadrature *q, int *__ierr ){
*__ierr = PetscDTGaussTensorQuadrature(*dim,*npoints,*a,*b,q);
}
PETSC_EXTERN void PETSC_STDCALL  petscdtreconstructpoly_(PetscInt *degree,PetscInt *nsource, PetscReal *sourcex,PetscInt *ntarget, PetscReal *targetx,PetscReal *R, int *__ierr ){
*__ierr = PetscDTReconstructPoly(*degree,*nsource,sourcex,*ntarget,targetx,R);
}
#if defined(__cplusplus)
}
#endif
