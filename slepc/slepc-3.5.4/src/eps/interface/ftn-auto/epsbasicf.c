#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* epsbasic.c */
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
#define epsprintsolution_ EPSPRINTSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsprintsolution_ epsprintsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsreset_ EPSRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsreset_ epsreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssettarget_ EPSSETTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssettarget_ epssettarget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgettarget_ EPSGETTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgettarget_ epsgettarget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetinterval_ EPSSETINTERVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetinterval_ epssetinterval
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgetinterval_ EPSGETINTERVAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgetinterval_ epsgetinterval
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetst_ EPSSETST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetst_ epssetst
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetbv_ EPSSETBV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetbv_ epssetbv
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetrg_ EPSSETRG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetrg_ epssetrg
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epssetds_ EPSSETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epssetds_ epssetds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsisgeneralized_ EPSISGENERALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsisgeneralized_ epsisgeneralized
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsishermitian_ EPSISHERMITIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsishermitian_ epsishermitian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsispositive_ EPSISPOSITIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsispositive_ epsispositive
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsprintsolution_(EPS *eps,PetscViewer viewer, int *__ierr ){
*__ierr = EPSPrintSolution(*eps,
	(PetscViewer)PetscToPointer((viewer) ));
}
PETSC_EXTERN void PETSC_STDCALL  epsreset_(EPS *eps, int *__ierr ){
*__ierr = EPSReset(*eps);
}
PETSC_EXTERN void PETSC_STDCALL  epssettarget_(EPS *eps,PetscScalar *target, int *__ierr ){
*__ierr = EPSSetTarget(*eps,*target);
}
PETSC_EXTERN void PETSC_STDCALL  epsgettarget_(EPS *eps,PetscScalar* target, int *__ierr ){
*__ierr = EPSGetTarget(*eps,target);
}
PETSC_EXTERN void PETSC_STDCALL  epssetinterval_(EPS *eps,PetscReal *inta,PetscReal *intb, int *__ierr ){
*__ierr = EPSSetInterval(*eps,*inta,*intb);
}
PETSC_EXTERN void PETSC_STDCALL  epsgetinterval_(EPS *eps,PetscReal* inta,PetscReal* intb, int *__ierr ){
*__ierr = EPSGetInterval(*eps,inta,intb);
}
PETSC_EXTERN void PETSC_STDCALL  epssetst_(EPS *eps,ST *st, int *__ierr ){
*__ierr = EPSSetST(*eps,*st);
}
PETSC_EXTERN void PETSC_STDCALL  epssetbv_(EPS *eps,BV *V, int *__ierr ){
*__ierr = EPSSetBV(*eps,*V);
}
PETSC_EXTERN void PETSC_STDCALL  epssetrg_(EPS *eps,RG *rg, int *__ierr ){
*__ierr = EPSSetRG(*eps,*rg);
}
PETSC_EXTERN void PETSC_STDCALL  epssetds_(EPS *eps,DS *ds, int *__ierr ){
*__ierr = EPSSetDS(*eps,*ds);
}
PETSC_EXTERN void PETSC_STDCALL  epsisgeneralized_(EPS *eps,PetscBool* is, int *__ierr ){
*__ierr = EPSIsGeneralized(*eps,is);
}
PETSC_EXTERN void PETSC_STDCALL  epsishermitian_(EPS *eps,PetscBool* is, int *__ierr ){
*__ierr = EPSIsHermitian(*eps,is);
}
PETSC_EXTERN void PETSC_STDCALL  epsispositive_(EPS *eps,PetscBool* is, int *__ierr ){
*__ierr = EPSIsPositive(*eps,is);
}
#if defined(__cplusplus)
}
#endif
