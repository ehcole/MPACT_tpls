#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* stsles.c */
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
#define stmatmult_ STMATMULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatmult_ stmatmult
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stmatmulttranspose_ STMATMULTTRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatmulttranspose_ stmatmulttranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stmatsolve_ STMATSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatsolve_ stmatsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stmatsolvetranspose_ STMATSOLVETRANSPOSE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stmatsolvetranspose_ stmatsolvetranspose
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stsetksp_ STSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stsetksp_ stsetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetksp_ STGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetksp_ stgetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stgetoperationcounters_ STGETOPERATIONCOUNTERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stgetoperationcounters_ stgetoperationcounters
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stresetoperationcounters_ STRESETOPERATIONCOUNTERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stresetoperationcounters_ stresetoperationcounters
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stchecknullspace_ STCHECKNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stchecknullspace_ stchecknullspace
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  stmatmult_(ST *st,PetscInt *k,Vec x,Vec y, int *__ierr ){
*__ierr = STMatMult(*st,*k,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
PETSC_EXTERN void PETSC_STDCALL  stmatmulttranspose_(ST *st,PetscInt *k,Vec x,Vec y, int *__ierr ){
*__ierr = STMatMultTranspose(*st,*k,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
PETSC_EXTERN void PETSC_STDCALL  stmatsolve_(ST *st,Vec b,Vec x, int *__ierr ){
*__ierr = STMatSolve(*st,
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
PETSC_EXTERN void PETSC_STDCALL  stmatsolvetranspose_(ST *st,Vec b,Vec x, int *__ierr ){
*__ierr = STMatSolveTranspose(*st,
	(Vec)PetscToPointer((b) ),
	(Vec)PetscToPointer((x) ));
}
PETSC_EXTERN void PETSC_STDCALL  stsetksp_(ST *st,KSP ksp, int *__ierr ){
*__ierr = STSetKSP(*st,
	(KSP)PetscToPointer((ksp) ));
}
PETSC_EXTERN void PETSC_STDCALL  stgetksp_(ST *st,KSP* ksp, int *__ierr ){
*__ierr = STGetKSP(*st,ksp);
}
PETSC_EXTERN void PETSC_STDCALL  stgetoperationcounters_(ST *st,PetscInt* ops,PetscInt* lits, int *__ierr ){
*__ierr = STGetOperationCounters(*st,ops,lits);
}
PETSC_EXTERN void PETSC_STDCALL  stresetoperationcounters_(ST *st, int *__ierr ){
*__ierr = STResetOperationCounters(*st);
}
PETSC_EXTERN void PETSC_STDCALL  stchecknullspace_(ST *st,BV *V, int *__ierr ){
*__ierr = STCheckNullSpace(*st,*V);
}
#if defined(__cplusplus)
}
#endif
