#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* epssolve.c */
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

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssolve_ EPSSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssolve_ epssolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgetiterationnumber_ EPSGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgetiterationnumber_ epsgetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgetconverged_ EPSGETCONVERGED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgetconverged_ epsgetconverged
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgetinvariantsubspace_ EPSGETINVARIANTSUBSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgetinvariantsubspace_ epsgetinvariantsubspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgeteigenpair_ EPSGETEIGENPAIR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgeteigenpair_ epsgeteigenpair
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgeteigenvalue_ EPSGETEIGENVALUE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgeteigenvalue_ epsgeteigenvalue
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgeteigenvector_ EPSGETEIGENVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgeteigenvector_ epsgeteigenvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgeterrorestimate_ EPSGETERRORESTIMATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgeterrorestimate_ epsgeterrorestimate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscomputeresidualnorm_ EPSCOMPUTERESIDUALNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscomputeresidualnorm_ epscomputeresidualnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscomputerelativeerror_ EPSCOMPUTERELATIVEERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscomputerelativeerror_ epscomputerelativeerror
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epssolve_(EPS *eps, int *__ierr ){
*__ierr = EPSSolve(*eps);
}
PETSC_EXTERN void PETSC_STDCALL  epsgetiterationnumber_(EPS *eps,PetscInt *its, int *__ierr ){
*__ierr = EPSGetIterationNumber(*eps,its);
}
PETSC_EXTERN void PETSC_STDCALL  epsgetconverged_(EPS *eps,PetscInt *nconv, int *__ierr ){
*__ierr = EPSGetConverged(*eps,nconv);
}
PETSC_EXTERN void PETSC_STDCALL  epsgetinvariantsubspace_(EPS *eps,Vec *v, int *__ierr ){
*__ierr = EPSGetInvariantSubspace(*eps,v);
}
PETSC_EXTERN void PETSC_STDCALL  epsgeteigenpair_(EPS *eps,PetscInt *i,PetscScalar *eigr,PetscScalar *eigi,Vec Vr,Vec Vi, int *__ierr ){
*__ierr = EPSGetEigenpair(*eps,*i,eigr,eigi,
	(Vec)PetscToPointer((Vr) ),
	(Vec)PetscToPointer((Vi) ));
}
PETSC_EXTERN void PETSC_STDCALL  epsgeteigenvalue_(EPS *eps,PetscInt *i,PetscScalar *eigr,PetscScalar *eigi, int *__ierr ){
*__ierr = EPSGetEigenvalue(*eps,*i,eigr,eigi);
}
PETSC_EXTERN void PETSC_STDCALL  epsgeteigenvector_(EPS *eps,PetscInt *i,Vec Vr,Vec Vi, int *__ierr ){
*__ierr = EPSGetEigenvector(*eps,*i,
	(Vec)PetscToPointer((Vr) ),
	(Vec)PetscToPointer((Vi) ));
}
PETSC_EXTERN void PETSC_STDCALL  epsgeterrorestimate_(EPS *eps,PetscInt *i,PetscReal *errest, int *__ierr ){
*__ierr = EPSGetErrorEstimate(*eps,*i,errest);
}
PETSC_EXTERN void PETSC_STDCALL  epscomputeresidualnorm_(EPS *eps,PetscInt *i,PetscReal *norm, int *__ierr ){
*__ierr = EPSComputeResidualNorm(*eps,*i,norm);
}
PETSC_EXTERN void PETSC_STDCALL  epscomputerelativeerror_(EPS *eps,PetscInt *i,PetscReal *error, int *__ierr ){
*__ierr = EPSComputeRelativeError(*eps,*i,error);
}
#if defined(__cplusplus)
}
#endif
