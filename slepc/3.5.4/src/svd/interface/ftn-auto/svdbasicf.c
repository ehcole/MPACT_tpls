#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* svdbasic.c */
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
#define svdprintsolution_ SVDPRINTSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdprintsolution_ svdprintsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdreset_ SVDRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdreset_ svdreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetbv_ SVDSETBV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetbv_ svdsetbv
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetds_ SVDSETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetds_ svdsetds
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdprintsolution_(SVD *svd,PetscViewer viewer, int *__ierr ){
*__ierr = SVDPrintSolution(*svd,
	(PetscViewer)PetscToPointer((viewer) ));
}
PETSC_EXTERN void PETSC_STDCALL  svdreset_(SVD *svd, int *__ierr ){
*__ierr = SVDReset(*svd);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetbv_(SVD *svd,BV *V,BV *U, int *__ierr ){
*__ierr = SVDSetBV(*svd,*V,*U);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetds_(SVD *svd,DS *ds, int *__ierr ){
*__ierr = SVDSetDS(*svd,*ds);
}
#if defined(__cplusplus)
}
#endif
