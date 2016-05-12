#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* rgbasic.c */
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

#include "slepcrg.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgsetfromoptions_ RGSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgsetfromoptions_ rgsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgistrivial_ RGISTRIVIAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgistrivial_ rgistrivial
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgcheckinside_ RGCHECKINSIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgcheckinside_ rgcheckinside
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgcomputecontour_ RGCOMPUTECONTOUR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgcomputecontour_ rgcomputecontour
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rgsetcomplement_ RGSETCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rgsetcomplement_ rgsetcomplement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define rggetcomplement_ RGGETCOMPLEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define rggetcomplement_ rggetcomplement
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  rgsetfromoptions_(RG *rg, int *__ierr ){
*__ierr = RGSetFromOptions(*rg);
}
PETSC_EXTERN void PETSC_STDCALL  rgistrivial_(RG *rg,PetscBool *trivial, int *__ierr ){
*__ierr = RGIsTrivial(*rg,trivial);
}
PETSC_EXTERN void PETSC_STDCALL  rgcheckinside_(RG *rg,PetscInt *n,PetscScalar *ar,PetscScalar *ai,PetscInt *inside, int *__ierr ){
*__ierr = RGCheckInside(*rg,*n,ar,ai,inside);
}
PETSC_EXTERN void PETSC_STDCALL  rgcomputecontour_(RG *rg,PetscInt *n,PetscScalar *cr,PetscScalar *ci, int *__ierr ){
*__ierr = RGComputeContour(*rg,*n,cr,ci);
}
PETSC_EXTERN void PETSC_STDCALL  rgsetcomplement_(RG *rg,PetscBool *flg, int *__ierr ){
*__ierr = RGSetComplement(*rg,*flg);
}
PETSC_EXTERN void PETSC_STDCALL  rggetcomplement_(RG *rg,PetscBool *flg, int *__ierr ){
*__ierr = RGGetComplement(*rg,flg);
}
#if defined(__cplusplus)
}
#endif
