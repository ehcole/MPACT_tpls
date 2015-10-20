#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* xmon.c */
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

#include "petscksp.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define kspmonitorlgresidualnormdestroy_ KSPMONITORLGRESIDUALNORMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define kspmonitorlgresidualnormdestroy_ kspmonitorlgresidualnormdestroy
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  kspmonitorlgresidualnormdestroy_(PetscDrawLG *drawlg, int *__ierr ){
*__ierr = KSPMonitorLGResidualNormDestroy(drawlg);
}
#if defined(__cplusplus)
}
#endif
