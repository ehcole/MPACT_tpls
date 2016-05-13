#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* nepsolve.c */
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
#define nepsolve_ NEPSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsolve_ nepsolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepprojectoperator_ NEPPROJECTOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepprojectoperator_ nepprojectoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepapplyfunction_ NEPAPPLYFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepapplyfunction_ nepapplyfunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepapplyjacobian_ NEPAPPLYJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepapplyjacobian_ nepapplyjacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetiterationnumber_ NEPGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetiterationnumber_ nepgetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetconverged_ NEPGETCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetconverged_ nepgetconverged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgeteigenpair_ NEPGETEIGENPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgeteigenpair_ nepgeteigenpair
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgeterrorestimate_ NEPGETERRORESTIMATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgeterrorestimate_ nepgeterrorestimate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepcomputeresidualnorm_ NEPCOMPUTERESIDUALNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepcomputeresidualnorm_ nepcomputeresidualnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepcomputerelativeerror_ NEPCOMPUTERELATIVEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepcomputerelativeerror_ nepcomputerelativeerror
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepcomputefunction_ NEPCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepcomputefunction_ nepcomputefunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepcomputejacobian_ NEPCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepcomputejacobian_ nepcomputejacobian
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  nepsolve_(NEP *nep, int *__ierr ){
*__ierr = NEPSolve(*nep);
}
PETSC_EXTERN void PETSC_STDCALL  nepprojectoperator_(NEP *nep,PetscInt *j0,PetscInt *j1, int *__ierr ){
*__ierr = NEPProjectOperator(*nep,*j0,*j1);
}
PETSC_EXTERN void PETSC_STDCALL  nepapplyfunction_(NEP *nep,PetscScalar *lambda,Vec x,Vec v,Vec y,Mat A,Mat B, int *__ierr ){
*__ierr = NEPApplyFunction(*nep,*lambda,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((v) ),
	(Vec)PetscToPointer((y) ),
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ));
}
PETSC_EXTERN void PETSC_STDCALL  nepapplyjacobian_(NEP *nep,PetscScalar *lambda,Vec x,Vec v,Vec y,Mat A, int *__ierr ){
*__ierr = NEPApplyJacobian(*nep,*lambda,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((v) ),
	(Vec)PetscToPointer((y) ),
	(Mat)PetscToPointer((A) ));
}
PETSC_EXTERN void PETSC_STDCALL  nepgetiterationnumber_(NEP *nep,PetscInt *its, int *__ierr ){
*__ierr = NEPGetIterationNumber(*nep,its);
}
PETSC_EXTERN void PETSC_STDCALL  nepgetconverged_(NEP *nep,PetscInt *nconv, int *__ierr ){
*__ierr = NEPGetConverged(*nep,nconv);
}
PETSC_EXTERN void PETSC_STDCALL  nepgeteigenpair_(NEP *nep,PetscInt *i,PetscScalar *eigr,PetscScalar *eigi,Vec Vr,Vec Vi, int *__ierr ){
*__ierr = NEPGetEigenpair(*nep,*i,eigr,eigi,
	(Vec)PetscToPointer((Vr) ),
	(Vec)PetscToPointer((Vi) ));
}
PETSC_EXTERN void PETSC_STDCALL  nepgeterrorestimate_(NEP *nep,PetscInt *i,PetscReal *errest, int *__ierr ){
*__ierr = NEPGetErrorEstimate(*nep,*i,errest);
}
PETSC_EXTERN void PETSC_STDCALL  nepcomputeresidualnorm_(NEP *nep,PetscInt *i,PetscReal *norm, int *__ierr ){
*__ierr = NEPComputeResidualNorm(*nep,*i,norm);
}
PETSC_EXTERN void PETSC_STDCALL  nepcomputerelativeerror_(NEP *nep,PetscInt *i,PetscReal *error, int *__ierr ){
*__ierr = NEPComputeRelativeError(*nep,*i,error);
}
PETSC_EXTERN void PETSC_STDCALL  nepcomputefunction_(NEP *nep,PetscScalar *lambda,Mat A,Mat B, int *__ierr ){
*__ierr = NEPComputeFunction(*nep,*lambda,
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ));
}
PETSC_EXTERN void PETSC_STDCALL  nepcomputejacobian_(NEP *nep,PetscScalar *lambda,Mat A, int *__ierr ){
*__ierr = NEPComputeJacobian(*nep,*lambda,
	(Mat)PetscToPointer((A) ));
}
#if defined(__cplusplus)
}
#endif
