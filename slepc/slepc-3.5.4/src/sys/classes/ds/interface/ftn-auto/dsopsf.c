#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dsops.c */
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

#include "slepcds.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetleadingdimension_ DSGETLEADINGDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetleadingdimension_ dsgetleadingdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetstate_ DSSETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetstate_ dssetstate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetstate_ DSGETSTATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetstate_ dsgetstate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetdimensions_ DSSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetdimensions_ dssetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetdimensions_ DSGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetdimensions_ dsgetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dstruncate_ DSTRUNCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dstruncate_ dstruncate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetmat_ DSGETMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetmat_ dsgetmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsrestoremat_ DSRESTOREMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsrestoremat_ dsrestoremat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssolve_ DSSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssolve_ dssolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dscomputefunction_ DSCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dscomputefunction_ dscomputefunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnormalize_ DSNORMALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnormalize_ dsnormalize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dsgetleadingdimension_(DS *ds,PetscInt *ld, int *__ierr ){
*__ierr = DSGetLeadingDimension(*ds,ld);
}
PETSC_EXTERN void PETSC_STDCALL  dssetstate_(DS *ds,DSStateType *state, int *__ierr ){
*__ierr = DSSetState(*ds,*state);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetstate_(DS *ds,DSStateType *state, int *__ierr ){
*__ierr = DSGetState(*ds,
	(DSStateType* )PetscToPointer((state) ));
}
PETSC_EXTERN void PETSC_STDCALL  dssetdimensions_(DS *ds,PetscInt *n,PetscInt *m,PetscInt *l,PetscInt *k, int *__ierr ){
*__ierr = DSSetDimensions(*ds,*n,*m,*l,*k);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetdimensions_(DS *ds,PetscInt *n,PetscInt *m,PetscInt *l,PetscInt *k,PetscInt *t, int *__ierr ){
*__ierr = DSGetDimensions(*ds,n,m,l,k,t);
}
PETSC_EXTERN void PETSC_STDCALL  dstruncate_(DS *ds,PetscInt *n, int *__ierr ){
*__ierr = DSTruncate(*ds,*n);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetmat_(DS *ds,DSMatType *m,Mat *A, int *__ierr ){
*__ierr = DSGetMat(*ds,*m,A);
}
PETSC_EXTERN void PETSC_STDCALL  dsrestoremat_(DS *ds,DSMatType *m,Mat *A, int *__ierr ){
*__ierr = DSRestoreMat(*ds,*m,A);
}
PETSC_EXTERN void PETSC_STDCALL  dssolve_(DS *ds,PetscScalar *eigr,PetscScalar *eigi, int *__ierr ){
*__ierr = DSSolve(*ds,eigr,eigi);
}
PETSC_EXTERN void PETSC_STDCALL  dscomputefunction_(DS *ds,SlepcFunction *f, int *__ierr ){
*__ierr = DSComputeFunction(*ds,*f);
}
PETSC_EXTERN void PETSC_STDCALL  dsnormalize_(DS *ds,DSMatType *mat,PetscInt *col, int *__ierr ){
*__ierr = DSNormalize(*ds,*mat,*col);
}
#if defined(__cplusplus)
}
#endif
