#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* pepopts.c */
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

#include "slepcpep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetfromoptions_ PEPSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetfromoptions_ pepsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgettolerances_ PEPGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgettolerances_ pepgettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsettolerances_ PEPSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsettolerances_ pepsettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetdimensions_ PEPGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetdimensions_ pepgetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetdimensions_ PEPSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetdimensions_ pepsetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetwhicheigenpairs_ PEPSETWHICHEIGENPAIRS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetwhicheigenpairs_ pepsetwhicheigenpairs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetproblemtype_ PEPSETPROBLEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetproblemtype_ pepsetproblemtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetbasis_ PEPSETBASIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetbasis_ pepsetbasis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsettrackall_ PEPSETTRACKALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsettrackall_ pepsettrackall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgettrackall_ PEPGETTRACKALL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgettrackall_ pepgettrackall
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetconvergencetest_ PEPSETCONVERGENCETEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetconvergencetest_ pepsetconvergencetest
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetconvergencetest_ PEPGETCONVERGENCETEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetconvergencetest_ pepgetconvergencetest
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetscale_ PEPSETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetscale_ pepsetscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetscale_ PEPGETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetscale_ pepgetscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetextract_ PEPSETEXTRACT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetextract_ pepsetextract
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetextract_ PEPGETEXTRACT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetextract_ pepgetextract
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetrefine_ PEPSETREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetrefine_ pepsetrefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgetrefine_ PEPGETREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgetrefine_ pepgetrefine
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  pepsetfromoptions_(PEP *pep, int *__ierr ){
*__ierr = PEPSetFromOptions(*pep);
}
PETSC_EXTERN void PETSC_STDCALL  pepgettolerances_(PEP *pep,PetscReal *tol,PetscInt *maxits, int *__ierr ){
*__ierr = PEPGetTolerances(*pep,tol,maxits);
}
PETSC_EXTERN void PETSC_STDCALL  pepsettolerances_(PEP *pep,PetscReal *tol,PetscInt *maxits, int *__ierr ){
*__ierr = PEPSetTolerances(*pep,*tol,*maxits);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetdimensions_(PEP *pep,PetscInt *nev,PetscInt *ncv,PetscInt *mpd, int *__ierr ){
*__ierr = PEPGetDimensions(*pep,nev,ncv,mpd);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetdimensions_(PEP *pep,PetscInt *nev,PetscInt *ncv,PetscInt *mpd, int *__ierr ){
*__ierr = PEPSetDimensions(*pep,*nev,*ncv,*mpd);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetwhicheigenpairs_(PEP *pep,PEPWhich *which, int *__ierr ){
*__ierr = PEPSetWhichEigenpairs(*pep,*which);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetproblemtype_(PEP *pep,PEPProblemType *type, int *__ierr ){
*__ierr = PEPSetProblemType(*pep,*type);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetbasis_(PEP *pep,PEPBasis *basis, int *__ierr ){
*__ierr = PEPSetBasis(*pep,*basis);
}
PETSC_EXTERN void PETSC_STDCALL  pepsettrackall_(PEP *pep,PetscBool *trackall, int *__ierr ){
*__ierr = PEPSetTrackAll(*pep,*trackall);
}
PETSC_EXTERN void PETSC_STDCALL  pepgettrackall_(PEP *pep,PetscBool *trackall, int *__ierr ){
*__ierr = PEPGetTrackAll(*pep,trackall);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetconvergencetest_(PEP *pep,PEPConv *conv, int *__ierr ){
*__ierr = PEPSetConvergenceTest(*pep,*conv);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetconvergencetest_(PEP *pep,PEPConv *conv, int *__ierr ){
*__ierr = PEPGetConvergenceTest(*pep,
	(PEPConv* )PetscToPointer((conv) ));
}
PETSC_EXTERN void PETSC_STDCALL  pepsetscale_(PEP *pep,PEPScale *scale,PetscReal *alpha,PetscInt *its,PetscReal *lambda, int *__ierr ){
*__ierr = PEPSetScale(*pep,*scale,*alpha,*its,*lambda);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetscale_(PEP *pep,PEPScale *scale,PetscReal *alpha,PetscInt *its,PetscReal *lambda, int *__ierr ){
*__ierr = PEPGetScale(*pep,
	(PEPScale* )PetscToPointer((scale) ),alpha,its,lambda);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetextract_(PEP *pep,PEPExtract *extract, int *__ierr ){
*__ierr = PEPSetExtract(*pep,*extract);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetextract_(PEP *pep,PEPExtract *extract, int *__ierr ){
*__ierr = PEPGetExtract(*pep,
	(PEPExtract* )PetscToPointer((extract) ));
}
PETSC_EXTERN void PETSC_STDCALL  pepsetrefine_(PEP *pep,PEPRefine *refine,PetscInt *npart,PetscReal *tol,PetscInt *its,PetscBool *schur, int *__ierr ){
*__ierr = PEPSetRefine(*pep,*refine,*npart,*tol,*its,*schur);
}
PETSC_EXTERN void PETSC_STDCALL  pepgetrefine_(PEP *pep,PEPRefine *refine,PetscInt *npart,PetscReal *tol,PetscInt *its,PetscBool *schur, int *__ierr ){
*__ierr = PEPGetRefine(*pep,
	(PEPRefine* )PetscToPointer((refine) ),npart,tol,its,schur);
}
#if defined(__cplusplus)
}
#endif
