#include "petscsys.h"
#include "petscfix.h"
/* ts.c */
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
#define tssetfromoptions_ TSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssetfromoptions_ tssetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsviewfromoptions_ TSVIEWFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsviewfromoptions_ tsviewfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tscomputerhsjacobian_ TSCOMPUTERHSJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tscomputerhsjacobian_ tscomputerhsjacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tscomputerhsfunction_ TSCOMPUTERHSFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tscomputerhsfunction_ tscomputerhsfunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tscomputeifunction_ TSCOMPUTEIFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tscomputeifunction_ tscomputeifunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tscomputeijacobian_ TSCOMPUTEIJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tscomputeijacobian_ tscomputeijacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgettimestepnumber_ TSGETTIMESTEPNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgettimestepnumber_ tsgettimestepnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssetinitialtimestep_ TSSETINITIALTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssetinitialtimestep_ tssetinitialtimestep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssettimestep_ TSSETTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssettimestep_ tssettimestep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgettimestep_ TSGETTIMESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgettimestep_ tsgettimestep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgetsolution_ TSGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgetsolution_ tsgetsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssetproblemtype_ TSSETPROBLEMTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssetproblemtype_ tssetproblemtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssetup_ TSSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssetup_ tssetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsdestroy_ TSDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsdestroy_ tsdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgetsnes_ TSGETSNES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgetsnes_ tsgetsnes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgetksp_ TSGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgetksp_ tsgetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgetduration_ TSGETDURATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgetduration_ tsgetduration
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssetduration_ TSSETDURATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssetduration_ tssetduration
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssetsolution_ TSSETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssetsolution_ tssetsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsdefaultprestep_ TSDEFAULTPRESTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsdefaultprestep_ tsdefaultprestep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsdefaultpoststep_ TSDEFAULTPOSTSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsdefaultpoststep_ tsdefaultpoststep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsmonitordefault_ TSMONITORDEFAULT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsmonitordefault_ tsmonitordefault
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsstep_ TSSTEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsstep_ tsstep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssolve_ TSSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssolve_ tssolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tsgettime_ TSGETTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tsgettime_ tsgettime
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define tssettime_ TSSETTIME
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define tssettime_ tssettime
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   tssetfromoptions_(TS ts, int *__ierr ){
*__ierr = TSSetFromOptions(
	(TS)PetscToPointer((ts) ));
}
void PETSC_STDCALL   tsviewfromoptions_(TS ts, char title[], int *__ierr ){
*__ierr = TSViewFromOptions(
	(TS)PetscToPointer((ts) ),title);
}
void PETSC_STDCALL   tscomputerhsjacobian_(TS ts,PetscReal *t,Vec X,Mat *A,Mat *B,MatStructure *flg, int *__ierr ){
*__ierr = TSComputeRHSJacobian(
	(TS)PetscToPointer((ts) ),*t,
	(Vec)PetscToPointer((X) ),A,B,flg);
}
void PETSC_STDCALL  tscomputerhsfunction_(TS ts,PetscReal *t,Vec x,Vec y, int *__ierr ){
*__ierr = TSComputeRHSFunction(
	(TS)PetscToPointer((ts) ),*t,
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL  tscomputeifunction_(TS ts,PetscReal *t,Vec X,Vec Xdot,Vec Y, int *__ierr ){
*__ierr = TSComputeIFunction(
	(TS)PetscToPointer((ts) ),*t,
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((Xdot) ),
	(Vec)PetscToPointer((Y) ));
}
void PETSC_STDCALL   tscomputeijacobian_(TS ts,PetscReal *t,Vec X,Vec Xdot,PetscReal *shift,Mat *A,Mat *B,MatStructure *flg, int *__ierr ){
*__ierr = TSComputeIJacobian(
	(TS)PetscToPointer((ts) ),*t,
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((Xdot) ),*shift,A,B,flg);
}
void PETSC_STDCALL   tsgettimestepnumber_(TS ts,PetscInt* iter, int *__ierr ){
*__ierr = TSGetTimeStepNumber(
	(TS)PetscToPointer((ts) ),iter);
}
void PETSC_STDCALL   tssetinitialtimestep_(TS ts,PetscReal *initial_time,PetscReal *time_step, int *__ierr ){
*__ierr = TSSetInitialTimeStep(
	(TS)PetscToPointer((ts) ),*initial_time,*time_step);
}
void PETSC_STDCALL   tssettimestep_(TS ts,PetscReal *time_step, int *__ierr ){
*__ierr = TSSetTimeStep(
	(TS)PetscToPointer((ts) ),*time_step);
}
void PETSC_STDCALL   tsgettimestep_(TS ts,PetscReal* dt, int *__ierr ){
*__ierr = TSGetTimeStep(
	(TS)PetscToPointer((ts) ),dt);
}
void PETSC_STDCALL   tsgetsolution_(TS ts,Vec *v, int *__ierr ){
*__ierr = TSGetSolution(
	(TS)PetscToPointer((ts) ),v);
}
void PETSC_STDCALL   tssetproblemtype_(TS ts,TSProblemType *type, int *__ierr ){
*__ierr = TSSetProblemType(
	(TS)PetscToPointer((ts) ),*type);
}
void PETSC_STDCALL   tssetup_(TS ts, int *__ierr ){
*__ierr = TSSetUp(
	(TS)PetscToPointer((ts) ));
}
void PETSC_STDCALL   tsdestroy_(TS ts, int *__ierr ){
*__ierr = TSDestroy(
	(TS)PetscToPointer((ts) ));
}
void PETSC_STDCALL   tsgetsnes_(TS ts,SNES *snes, int *__ierr ){
*__ierr = TSGetSNES(
	(TS)PetscToPointer((ts) ),snes);
}
void PETSC_STDCALL   tsgetksp_(TS ts,KSP *ksp, int *__ierr ){
*__ierr = TSGetKSP(
	(TS)PetscToPointer((ts) ),ksp);
}
void PETSC_STDCALL   tsgetduration_(TS ts,PetscInt *maxsteps,PetscReal *maxtime, int *__ierr ){
*__ierr = TSGetDuration(
	(TS)PetscToPointer((ts) ),maxsteps,maxtime);
}
void PETSC_STDCALL   tssetduration_(TS ts,PetscInt *maxsteps,PetscReal *maxtime, int *__ierr ){
*__ierr = TSSetDuration(
	(TS)PetscToPointer((ts) ),*maxsteps,*maxtime);
}
void PETSC_STDCALL   tssetsolution_(TS ts,Vec x, int *__ierr ){
*__ierr = TSSetSolution(
	(TS)PetscToPointer((ts) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL   tsdefaultprestep_(TS ts, int *__ierr ){
*__ierr = TSDefaultPreStep(
	(TS)PetscToPointer((ts) ));
}
void PETSC_STDCALL   tsdefaultpoststep_(TS ts, int *__ierr ){
*__ierr = TSDefaultPostStep(
	(TS)PetscToPointer((ts) ));
}
void PETSC_STDCALL  tsmonitordefault_(TS ts,PetscInt *step,PetscReal *ptime,Vec v,void*ctx, int *__ierr ){
*__ierr = TSMonitorDefault(
	(TS)PetscToPointer((ts) ),*step,*ptime,
	(Vec)PetscToPointer((v) ),ctx);
}
void PETSC_STDCALL   tsstep_(TS ts,PetscInt *steps,PetscReal *ptime, int *__ierr ){
*__ierr = TSStep(
	(TS)PetscToPointer((ts) ),steps,ptime);
}
void PETSC_STDCALL   tssolve_(TS ts,Vec x, int *__ierr ){
*__ierr = TSSolve(
	(TS)PetscToPointer((ts) ),
	(Vec)PetscToPointer((x) ));
}
void PETSC_STDCALL   tsgettime_(TS ts,PetscReal* t, int *__ierr ){
*__ierr = TSGetTime(
	(TS)PetscToPointer((ts) ),t);
}
void PETSC_STDCALL   tssettime_(TS ts,PetscReal *t, int *__ierr ){
*__ierr = TSSetTime(
	(TS)PetscToPointer((ts) ),*t);
}
#if defined(__cplusplus)
}
#endif
