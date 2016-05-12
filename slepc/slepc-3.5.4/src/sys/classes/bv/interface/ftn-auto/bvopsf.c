#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bvops.c */
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
#define bvmult_ BVMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmult_ bvmult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmultvec_ BVMULTVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmultvec_ bvmultvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmultcolumn_ BVMULTCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmultcolumn_ bvmultcolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmultinplace_ BVMULTINPLACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmultinplace_ bvmultinplace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmultinplacetranspose_ BVMULTINPLACETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmultinplacetranspose_ bvmultinplacetranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvscale_ BVSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvscale_ bvscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvscalecolumn_ BVSCALECOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvscalecolumn_ bvscalecolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetrandom_ BVSETRANDOM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetrandom_ bvsetrandom
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetrandomcolumn_ BVSETRANDOMCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetrandomcolumn_ bvsetrandomcolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmatmult_ BVMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmatmult_ bvmatmult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvmatmultcolumn_ BVMATMULTCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvmatmultcolumn_ bvmatmultcolumn
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  bvmult_(BV *Y,PetscScalar *alpha,PetscScalar *beta,BV *X,Mat Q, int *__ierr ){
*__ierr = BVMult(*Y,*alpha,*beta,*X,
	(Mat)PetscToPointer((Q) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvmultvec_(BV *X,PetscScalar *alpha,PetscScalar *beta,Vec y,PetscScalar *q, int *__ierr ){
*__ierr = BVMultVec(*X,*alpha,*beta,
	(Vec)PetscToPointer((y) ),q);
}
PETSC_EXTERN void PETSC_STDCALL  bvmultcolumn_(BV *X,PetscScalar *alpha,PetscScalar *beta,PetscInt *j,PetscScalar *q, int *__ierr ){
*__ierr = BVMultColumn(*X,*alpha,*beta,*j,q);
}
PETSC_EXTERN void PETSC_STDCALL  bvmultinplace_(BV *V,Mat Q,PetscInt *s,PetscInt *e, int *__ierr ){
*__ierr = BVMultInPlace(*V,
	(Mat)PetscToPointer((Q) ),*s,*e);
}
PETSC_EXTERN void PETSC_STDCALL  bvmultinplacetranspose_(BV *V,Mat Q,PetscInt *s,PetscInt *e, int *__ierr ){
*__ierr = BVMultInPlaceTranspose(*V,
	(Mat)PetscToPointer((Q) ),*s,*e);
}
PETSC_EXTERN void PETSC_STDCALL  bvscale_(BV *bv,PetscScalar *alpha, int *__ierr ){
*__ierr = BVScale(*bv,*alpha);
}
PETSC_EXTERN void PETSC_STDCALL  bvscalecolumn_(BV *bv,PetscInt *j,PetscScalar *alpha, int *__ierr ){
*__ierr = BVScaleColumn(*bv,*j,*alpha);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetrandom_(BV *bv,PetscRandom rctx, int *__ierr ){
*__ierr = BVSetRandom(*bv,
	(PetscRandom)PetscToPointer((rctx) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvsetrandomcolumn_(BV *bv,PetscInt *j,PetscRandom rctx, int *__ierr ){
*__ierr = BVSetRandomColumn(*bv,*j,
	(PetscRandom)PetscToPointer((rctx) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvmatmult_(BV *V,Mat A,BV *Y, int *__ierr ){
*__ierr = BVMatMult(*V,
	(Mat)PetscToPointer((A) ),*Y);
}
PETSC_EXTERN void PETSC_STDCALL  bvmatmultcolumn_(BV *V,Mat A,PetscInt *j, int *__ierr ){
*__ierr = BVMatMultColumn(*V,
	(Mat)PetscToPointer((A) ),*j);
}
#if defined(__cplusplus)
}
#endif
