#include "petscsys.h"
#include "petscfix.h"
/* sundials.c */
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

#include "petscts.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialssettype_ TSSUNDIALSSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialssettype_ tssundialssettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialssetgmresrestart_ TSSUNDIALSSETGMRESRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialssetgmresrestart_ tssundialssetgmresrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialssetlineartolerance_ TSSUNDIALSSETLINEARTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialssetlineartolerance_ tssundialssetlineartolerance
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialssetgramschmidttype_ TSSUNDIALSSETGRAMSCHMIDTTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialssetgramschmidttype_ tssundialssetgramschmidttype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialssettolerance_ TSSUNDIALSSETTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialssettolerance_ tssundialssettolerance
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialsgetpc_ TSSUNDIALSGETPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialsgetpc_ tssundialsgetpc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialssetexactfinaltime_ TSSUNDIALSSETEXACTFINALTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialssetexactfinaltime_ tssundialssetexactfinaltime
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssundialsmonitorinternalsteps_ TSSUNDIALSMONITORINTERNALSTEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssundialsmonitorinternalsteps_ tssundialsmonitorinternalsteps
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   tssundialssettype_(TS ts,TSSundialsLmmType *type, int *__ierr ){
*__ierr = TSSundialsSetType(
	(TS)PetscToPointer((ts) ),*type);
}
void PETSC_STDCALL   tssundialssetgmresrestart_(TS ts,int *restart, int *__ierr ){
*__ierr = TSSundialsSetGMRESRestart(
	(TS)PetscToPointer((ts) ),*restart);
}
void PETSC_STDCALL   tssundialssetlineartolerance_(TS ts,double *tol, int *__ierr ){
*__ierr = TSSundialsSetLinearTolerance(
	(TS)PetscToPointer((ts) ),*tol);
}
void PETSC_STDCALL   tssundialssetgramschmidttype_(TS ts,TSSundialsGramSchmidtType *type, int *__ierr ){
*__ierr = TSSundialsSetGramSchmidtType(
	(TS)PetscToPointer((ts) ),*type);
}
void PETSC_STDCALL   tssundialssettolerance_(TS ts,double *aabs,double *rel, int *__ierr ){
*__ierr = TSSundialsSetTolerance(
	(TS)PetscToPointer((ts) ),*aabs,*rel);
}
void PETSC_STDCALL   tssundialsgetpc_(TS ts,PC *pc, int *__ierr ){
*__ierr = TSSundialsGetPC(
	(TS)PetscToPointer((ts) ),pc);
}
void PETSC_STDCALL   tssundialssetexactfinaltime_(TS ts,PetscTruth *ft, int *__ierr ){
*__ierr = TSSundialsSetExactFinalTime(
	(TS)PetscToPointer((ts) ),*ft);
}
void PETSC_STDCALL   tssundialsmonitorinternalsteps_(TS ts,PetscTruth *ft, int *__ierr ){
*__ierr = TSSundialsMonitorInternalSteps(
	(TS)PetscToPointer((ts) ),*ft);
}
#if defined(__cplusplus)
}
#endif
