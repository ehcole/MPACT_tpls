#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* nepopts.c */
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

#include "slepcnep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetfromoptions_ NEPSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetfromoptions_ nepsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgettolerances_ NEPGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgettolerances_ nepgettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsettolerances_ NEPSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsettolerances_ nepsettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetdimensions_ NEPGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetdimensions_ nepgetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetdimensions_ NEPSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetdimensions_ nepsetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetwhicheigenpairs_ NEPSETWHICHEIGENPAIRS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetwhicheigenpairs_ nepsetwhicheigenpairs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetlagpreconditioner_ NEPSETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetlagpreconditioner_ nepsetlagpreconditioner
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetlagpreconditioner_ NEPGETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetlagpreconditioner_ nepgetlagpreconditioner
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetconstcorrectiontol_ NEPSETCONSTCORRECTIONTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetconstcorrectiontol_ nepsetconstcorrectiontol
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetconstcorrectiontol_ NEPGETCONSTCORRECTIONTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetconstcorrectiontol_ nepgetconstcorrectiontol
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsettrackall_ NEPSETTRACKALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsettrackall_ nepsettrackall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgettrackall_ NEPGETTRACKALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgettrackall_ nepgettrackall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetrefine_ NEPSETREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetrefine_ nepsetrefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetrefine_ NEPGETREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetrefine_ nepgetrefine
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  nepsetfromoptions_(NEP *nep, int *__ierr ){
*__ierr = NEPSetFromOptions(*nep);
}
PETSC_EXTERN void PETSC_STDCALL  nepgettolerances_(NEP *nep,PetscReal *abstol,PetscReal *rtol,PetscReal *stol,PetscInt *maxit,PetscInt *maxf, int *__ierr ){
*__ierr = NEPGetTolerances(*nep,abstol,rtol,stol,maxit,maxf);
}
PETSC_EXTERN void PETSC_STDCALL  nepsettolerances_(NEP *nep,PetscReal *abstol,PetscReal *rtol,PetscReal *stol,PetscInt *maxit,PetscInt *maxf, int *__ierr ){
*__ierr = NEPSetTolerances(*nep,*abstol,*rtol,*stol,*maxit,*maxf);
}
PETSC_EXTERN void PETSC_STDCALL  nepgetdimensions_(NEP *nep,PetscInt *nev,PetscInt *ncv,PetscInt *mpd, int *__ierr ){
*__ierr = NEPGetDimensions(*nep,nev,ncv,mpd);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetdimensions_(NEP *nep,PetscInt *nev,PetscInt *ncv,PetscInt *mpd, int *__ierr ){
*__ierr = NEPSetDimensions(*nep,*nev,*ncv,*mpd);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetwhicheigenpairs_(NEP *nep,NEPWhich *which, int *__ierr ){
*__ierr = NEPSetWhichEigenpairs(*nep,*which);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetlagpreconditioner_(NEP *nep,PetscInt *lag, int *__ierr ){
*__ierr = NEPSetLagPreconditioner(*nep,*lag);
}
PETSC_EXTERN void PETSC_STDCALL  nepgetlagpreconditioner_(NEP *nep,PetscInt *lag, int *__ierr ){
*__ierr = NEPGetLagPreconditioner(*nep,lag);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetconstcorrectiontol_(NEP *nep,PetscBool *cct, int *__ierr ){
*__ierr = NEPSetConstCorrectionTol(*nep,*cct);
}
PETSC_EXTERN void PETSC_STDCALL  nepgetconstcorrectiontol_(NEP *nep,PetscBool *cct, int *__ierr ){
*__ierr = NEPGetConstCorrectionTol(*nep,cct);
}
PETSC_EXTERN void PETSC_STDCALL  nepsettrackall_(NEP *nep,PetscBool *trackall, int *__ierr ){
*__ierr = NEPSetTrackAll(*nep,*trackall);
}
PETSC_EXTERN void PETSC_STDCALL  nepgettrackall_(NEP *nep,PetscBool *trackall, int *__ierr ){
*__ierr = NEPGetTrackAll(*nep,trackall);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetrefine_(NEP *nep,NEPRefine *refine,PetscReal *tol,PetscInt *its, int *__ierr ){
*__ierr = NEPSetRefine(*nep,*refine,*tol,*its);
}
PETSC_EXTERN void PETSC_STDCALL  nepgetrefine_(NEP *nep,NEPRefine *refine,PetscReal *tol,PetscInt *its, int *__ierr ){
*__ierr = NEPGetRefine(*nep,
	(NEPRefine* )PetscToPointer((refine) ),tol,its);
}
#if defined(__cplusplus)
}
#endif
