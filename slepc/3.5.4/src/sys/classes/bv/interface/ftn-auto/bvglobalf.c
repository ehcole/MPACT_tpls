#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bvglobal.c */
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

#include "slepcbv.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvdot_ BVDOT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvdot_ bvdot
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvdotvec_ BVDOTVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvdotvec_ bvdotvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvdotcolumn_ BVDOTCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvdotcolumn_ bvdotcolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvnorm_ BVNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvnorm_ bvnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvnormvec_ BVNORMVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvnormvec_ bvnormvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvnormcolumn_ BVNORMCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvnormcolumn_ bvnormcolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmatproject_ BVMATPROJECT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmatproject_ bvmatproject
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  bvdot_(BV *X,BV *Y,Mat M, int *__ierr ){
*__ierr = BVDot(*X,*Y,
	(Mat)PetscToPointer((M) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvdotvec_(BV *X,Vec y,PetscScalar *m, int *__ierr ){
*__ierr = BVDotVec(*X,
	(Vec)PetscToPointer((y) ),m);
}
PETSC_EXTERN void PETSC_STDCALL  bvdotcolumn_(BV *X,PetscInt *j,PetscScalar *m, int *__ierr ){
*__ierr = BVDotColumn(*X,*j,m);
}
PETSC_EXTERN void PETSC_STDCALL  bvnorm_(BV *bv,NormType *type,PetscReal *val, int *__ierr ){
*__ierr = BVNorm(*bv,*type,val);
}
PETSC_EXTERN void PETSC_STDCALL  bvnormvec_(BV *bv,Vec v,NormType *type,PetscReal *val, int *__ierr ){
*__ierr = BVNormVec(*bv,
	(Vec)PetscToPointer((v) ),*type,val);
}
PETSC_EXTERN void PETSC_STDCALL  bvnormcolumn_(BV *bv,PetscInt *j,NormType *type,PetscReal *val, int *__ierr ){
*__ierr = BVNormColumn(*bv,*j,*type,val);
}
PETSC_EXTERN void PETSC_STDCALL  bvmatproject_(BV *X,Mat A,BV *Y,Mat M, int *__ierr ){
*__ierr = BVMatProject(*X,
	(Mat)PetscToPointer((A) ),*Y,
	(Mat)PetscToPointer((M) ));
}
#if defined(__cplusplus)
}
#endif
