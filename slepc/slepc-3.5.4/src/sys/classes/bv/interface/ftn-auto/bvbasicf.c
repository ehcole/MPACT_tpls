#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bvbasic.c */
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
#define bvsetsizes_ BVSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetsizes_ bvsetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetsizesfromvec_ BVSETSIZESFROMVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetsizesfromvec_ bvsetsizesfromvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvgetsizes_ BVGETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvgetsizes_ bvgetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetnumconstraints_ BVSETNUMCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetnumconstraints_ bvsetnumconstraints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvgetnumconstraints_ BVGETNUMCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvgetnumconstraints_ bvgetnumconstraints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvresize_ BVRESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvresize_ bvresize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetactivecolumns_ BVSETACTIVECOLUMNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetactivecolumns_ bvsetactivecolumns
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvgetactivecolumns_ BVGETACTIVECOLUMNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvgetactivecolumns_ bvgetactivecolumns
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetmatrix_ BVSETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetmatrix_ bvsetmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetsignature_ BVSETSIGNATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetsignature_ bvsetsignature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvgetsignature_ BVGETSIGNATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvgetsignature_ bvgetsignature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetfromoptions_ BVSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetfromoptions_ bvsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsetorthogonalization_ BVSETORTHOGONALIZATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsetorthogonalization_ bvsetorthogonalization
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvgetcolumn_ BVGETCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvgetcolumn_ bvgetcolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvrestorecolumn_ BVRESTORECOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvrestorecolumn_ bvrestorecolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvgetvec_ BVGETVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvgetvec_ bvgetvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvduplicate_ BVDUPLICATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvduplicate_ bvduplicate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvduplicateresize_ BVDUPLICATERESIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvduplicateresize_ bvduplicateresize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvcopy_ BVCOPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvcopy_ bvcopy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvcopyvec_ BVCOPYVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvcopyvec_ bvcopyvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvcopycolumn_ BVCOPYCOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvcopycolumn_ bvcopycolumn
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  bvsetsizes_(BV *bv,PetscInt *n,PetscInt *N,PetscInt *m, int *__ierr ){
*__ierr = BVSetSizes(*bv,*n,*N,*m);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetsizesfromvec_(BV *bv,Vec t,PetscInt *m, int *__ierr ){
*__ierr = BVSetSizesFromVec(*bv,
	(Vec)PetscToPointer((t) ),*m);
}
PETSC_EXTERN void PETSC_STDCALL  bvgetsizes_(BV *bv,PetscInt *n,PetscInt *N,PetscInt *m, int *__ierr ){
*__ierr = BVGetSizes(*bv,n,N,m);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetnumconstraints_(BV *V,PetscInt *nc, int *__ierr ){
*__ierr = BVSetNumConstraints(*V,*nc);
}
PETSC_EXTERN void PETSC_STDCALL  bvgetnumconstraints_(BV *bv,PetscInt *nc, int *__ierr ){
*__ierr = BVGetNumConstraints(*bv,nc);
}
PETSC_EXTERN void PETSC_STDCALL  bvresize_(BV *bv,PetscInt *m,PetscBool *copy, int *__ierr ){
*__ierr = BVResize(*bv,*m,*copy);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetactivecolumns_(BV *bv,PetscInt *l,PetscInt *k, int *__ierr ){
*__ierr = BVSetActiveColumns(*bv,*l,*k);
}
PETSC_EXTERN void PETSC_STDCALL  bvgetactivecolumns_(BV *bv,PetscInt *l,PetscInt *k, int *__ierr ){
*__ierr = BVGetActiveColumns(*bv,l,k);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetmatrix_(BV *bv,Mat B,PetscBool *indef, int *__ierr ){
*__ierr = BVSetMatrix(*bv,
	(Mat)PetscToPointer((B) ),*indef);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetsignature_(BV *bv,Vec omega, int *__ierr ){
*__ierr = BVSetSignature(*bv,
	(Vec)PetscToPointer((omega) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvgetsignature_(BV *bv,Vec omega, int *__ierr ){
*__ierr = BVGetSignature(*bv,
	(Vec)PetscToPointer((omega) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvsetfromoptions_(BV *bv, int *__ierr ){
*__ierr = BVSetFromOptions(*bv);
}
PETSC_EXTERN void PETSC_STDCALL  bvsetorthogonalization_(BV *bv,BVOrthogType *type,BVOrthogRefineType *refine,PetscReal *eta, int *__ierr ){
*__ierr = BVSetOrthogonalization(*bv,*type,*refine,*eta);
}
PETSC_EXTERN void PETSC_STDCALL  bvgetcolumn_(BV *bv,PetscInt *j,Vec *v, int *__ierr ){
*__ierr = BVGetColumn(*bv,*j,v);
}
PETSC_EXTERN void PETSC_STDCALL  bvrestorecolumn_(BV *bv,PetscInt *j,Vec *v, int *__ierr ){
*__ierr = BVRestoreColumn(*bv,*j,v);
}
PETSC_EXTERN void PETSC_STDCALL  bvgetvec_(BV *bv,Vec *v, int *__ierr ){
*__ierr = BVGetVec(*bv,v);
}
PETSC_EXTERN void PETSC_STDCALL  bvduplicate_(BV *V,BV *W, int *__ierr ){
*__ierr = BVDuplicate(*V,
	(BV* )PetscToPointer((W) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvduplicateresize_(BV *V,PetscInt *m,BV *W, int *__ierr ){
*__ierr = BVDuplicateResize(*V,*m,
	(BV* )PetscToPointer((W) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvcopy_(BV *V,BV *W, int *__ierr ){
*__ierr = BVCopy(*V,*W);
}
PETSC_EXTERN void PETSC_STDCALL  bvcopyvec_(BV *V,PetscInt *j,Vec w, int *__ierr ){
*__ierr = BVCopyVec(*V,*j,
	(Vec)PetscToPointer((w) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvcopycolumn_(BV *V,PetscInt *j,PetscInt *i, int *__ierr ){
*__ierr = BVCopyColumn(*V,*j,*i);
}
#if defined(__cplusplus)
}
#endif
