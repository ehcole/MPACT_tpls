#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* svdopts.c */
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
#define svdsetimplicittranspose_ SVDSETIMPLICITTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetimplicittranspose_ svdsetimplicittranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetimplicittranspose_ SVDGETIMPLICITTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetimplicittranspose_ svdgetimplicittranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsettolerances_ SVDSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsettolerances_ svdsettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgettolerances_ SVDGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgettolerances_ svdgettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetdimensions_ SVDSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetdimensions_ svdsetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetdimensions_ SVDGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetdimensions_ svdgetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetwhichsingulartriplets_ SVDSETWHICHSINGULARTRIPLETS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetwhichsingulartriplets_ svdsetwhichsingulartriplets
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetfromoptions_ SVDSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetfromoptions_ svdsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsettrackall_ SVDSETTRACKALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsettrackall_ svdsettrackall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgettrackall_ SVDGETTRACKALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgettrackall_ svdgettrackall
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdsetimplicittranspose_(SVD *svd,PetscBool *impl, int *__ierr ){
*__ierr = SVDSetImplicitTranspose(*svd,*impl);
}
PETSC_EXTERN void PETSC_STDCALL  svdgetimplicittranspose_(SVD *svd,PetscBool *impl, int *__ierr ){
*__ierr = SVDGetImplicitTranspose(*svd,impl);
}
PETSC_EXTERN void PETSC_STDCALL  svdsettolerances_(SVD *svd,PetscReal *tol,PetscInt *maxits, int *__ierr ){
*__ierr = SVDSetTolerances(*svd,*tol,*maxits);
}
PETSC_EXTERN void PETSC_STDCALL  svdgettolerances_(SVD *svd,PetscReal *tol,PetscInt *maxits, int *__ierr ){
*__ierr = SVDGetTolerances(*svd,tol,maxits);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetdimensions_(SVD *svd,PetscInt *nsv,PetscInt *ncv,PetscInt *mpd, int *__ierr ){
*__ierr = SVDSetDimensions(*svd,*nsv,*ncv,*mpd);
}
PETSC_EXTERN void PETSC_STDCALL  svdgetdimensions_(SVD *svd,PetscInt *nsv,PetscInt *ncv,PetscInt *mpd, int *__ierr ){
*__ierr = SVDGetDimensions(*svd,nsv,ncv,mpd);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetwhichsingulartriplets_(SVD *svd,SVDWhich *which, int *__ierr ){
*__ierr = SVDSetWhichSingularTriplets(*svd,*which);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetfromoptions_(SVD *svd, int *__ierr ){
*__ierr = SVDSetFromOptions(*svd);
}
PETSC_EXTERN void PETSC_STDCALL  svdsettrackall_(SVD *svd,PetscBool *trackall, int *__ierr ){
*__ierr = SVDSetTrackAll(*svd,*trackall);
}
PETSC_EXTERN void PETSC_STDCALL  svdgettrackall_(SVD *svd,PetscBool *trackall, int *__ierr ){
*__ierr = SVDGetTrackAll(*svd,trackall);
}
#if defined(__cplusplus)
}
#endif
