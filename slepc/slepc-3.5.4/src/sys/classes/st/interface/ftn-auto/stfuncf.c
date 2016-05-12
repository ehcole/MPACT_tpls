#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* stfunc.c */
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

#include "slepcst.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define streset_ STRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define streset_ streset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stsetoperators_ STSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stsetoperators_ stsetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetoperators_ STGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetoperators_ stgetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgettoperators_ STGETTOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgettoperators_ stgettoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetnummatrices_ STGETNUMMATRICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetnummatrices_ stgetnummatrices
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stsetshift_ STSETSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stsetshift_ stsetshift
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetshift_ STGETSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetshift_ stgetshift
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stsetdefaultshift_ STSETDEFAULTSHIFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stsetdefaultshift_ stsetdefaultshift
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stsetbalancematrix_ STSETBALANCEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stsetbalancematrix_ stsetbalancematrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetbalancematrix_ STGETBALANCEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetbalancematrix_ stgetbalancematrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stmatgetsize_ STMATGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatgetsize_ stmatgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stmatgetlocalsize_ STMATGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatgetlocalsize_ stmatgetlocalsize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  streset_(ST *st, int *__ierr ){
*__ierr = STReset(*st);
}
PETSC_EXTERN void PETSC_STDCALL  stsetoperators_(ST *st,PetscInt *n,Mat A[], int *__ierr ){
*__ierr = STSetOperators(*st,*n,A);
}
PETSC_EXTERN void PETSC_STDCALL  stgetoperators_(ST *st,PetscInt *k,Mat *A, int *__ierr ){
*__ierr = STGetOperators(*st,*k,A);
}
PETSC_EXTERN void PETSC_STDCALL  stgettoperators_(ST *st,PetscInt *k,Mat *T, int *__ierr ){
*__ierr = STGetTOperators(*st,*k,T);
}
PETSC_EXTERN void PETSC_STDCALL  stgetnummatrices_(ST *st,PetscInt *n, int *__ierr ){
*__ierr = STGetNumMatrices(*st,n);
}
PETSC_EXTERN void PETSC_STDCALL  stsetshift_(ST *st,PetscScalar *shift, int *__ierr ){
*__ierr = STSetShift(*st,*shift);
}
PETSC_EXTERN void PETSC_STDCALL  stgetshift_(ST *st,PetscScalar* shift, int *__ierr ){
*__ierr = STGetShift(*st,shift);
}
PETSC_EXTERN void PETSC_STDCALL  stsetdefaultshift_(ST *st,PetscScalar *defaultshift, int *__ierr ){
*__ierr = STSetDefaultShift(*st,*defaultshift);
}
PETSC_EXTERN void PETSC_STDCALL  stsetbalancematrix_(ST *st,Vec D, int *__ierr ){
*__ierr = STSetBalanceMatrix(*st,
	(Vec)PetscToPointer((D) ));
}
PETSC_EXTERN void PETSC_STDCALL  stgetbalancematrix_(ST *st,Vec *D, int *__ierr ){
*__ierr = STGetBalanceMatrix(*st,D);
}
PETSC_EXTERN void PETSC_STDCALL  stmatgetsize_(ST *st,PetscInt *m,PetscInt *n, int *__ierr ){
*__ierr = STMatGetSize(*st,m,n);
}
PETSC_EXTERN void PETSC_STDCALL  stmatgetlocalsize_(ST *st,PetscInt *m,PetscInt *n, int *__ierr ){
*__ierr = STMatGetLocalSize(*st,m,n);
}
#if defined(__cplusplus)
}
#endif
