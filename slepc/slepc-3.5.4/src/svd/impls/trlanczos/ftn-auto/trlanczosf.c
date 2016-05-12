#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* trlanczos.c */
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

#include "slepcsvd.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetoneside_ SVDTRLANCZOSSETONESIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetoneside_ svdtrlanczossetoneside
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetoneside_ SVDTRLANCZOSGETONESIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetoneside_ svdtrlanczosgetoneside
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdtrlanczossetoneside_(SVD *svd,PetscBool *oneside, int *__ierr ){
*__ierr = SVDTRLanczosSetOneSide(*svd,*oneside);
}
PETSC_EXTERN void PETSC_STDCALL  svdtrlanczosgetoneside_(SVD *svd,PetscBool *oneside, int *__ierr ){
*__ierr = SVDTRLanczosGetOneSide(*svd,oneside);
}
#if defined(__cplusplus)
}
#endif
