#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* rqcg.c */
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

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsrqcgsetreset_ EPSRQCGSETRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsrqcgsetreset_ epsrqcgsetreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsrqcggetreset_ EPSRQCGGETRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsrqcggetreset_ epsrqcggetreset
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsrqcgsetreset_(EPS *eps,PetscInt *nrest, int *__ierr ){
*__ierr = EPSRQCGSetReset(*eps,*nrest);
}
PETSC_EXTERN void PETSC_STDCALL  epsrqcggetreset_(EPS *eps,PetscInt *nrest, int *__ierr ){
*__ierr = EPSRQCGGetReset(*eps,nrest);
}
#if defined(__cplusplus)
}
#endif
