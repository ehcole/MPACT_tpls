#include "petscsys.h"
#include "petscfix.h"
/* snes.c */
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

#include "petscsnes.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetfunctiondomainerror_ SNESSETFUNCTIONDOMAINERROR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetfunctiondomainerror_ snessetfunctiondomainerror
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetfromoptions_ SNESSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetfromoptions_ snessetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetapplicationcontext_ SNESSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetapplicationcontext_ snessetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetiterationnumber_ SNESGETITERATIONNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetiterationnumber_ snesgetiterationnumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetfunctionnorm_ SNESGETFUNCTIONNORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetfunctionnorm_ snesgetfunctionnorm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetnonlinearstepfailures_ SNESGETNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetnonlinearstepfailures_ snesgetnonlinearstepfailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetmaxnonlinearstepfailures_ SNESSETMAXNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetmaxnonlinearstepfailures_ snessetmaxnonlinearstepfailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetmaxnonlinearstepfailures_ SNESGETMAXNONLINEARSTEPFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetmaxnonlinearstepfailures_ snesgetmaxnonlinearstepfailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetnumberfunctionevals_ SNESGETNUMBERFUNCTIONEVALS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetnumberfunctionevals_ snesgetnumberfunctionevals
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlinearsolvefailures_ SNESGETLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlinearsolvefailures_ snesgetlinearsolvefailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetmaxlinearsolvefailures_ SNESSETMAXLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetmaxlinearsolvefailures_ snessetmaxlinearsolvefailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetmaxlinearsolvefailures_ SNESGETMAXLINEARSOLVEFAILURES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetmaxlinearsolvefailures_ snesgetmaxlinearsolvefailures
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlinearsolveiterations_ SNESGETLINEARSOLVEITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlinearsolveiterations_ snesgetlinearsolveiterations
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetksp_ SNESGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetksp_ snesgetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetksp_ SNESSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetksp_ snessetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescreate_ SNESCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescreate_ snescreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescomputefunction_ SNESCOMPUTEFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescomputefunction_ snescomputefunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snescomputejacobian_ SNESCOMPUTEJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snescomputejacobian_ snescomputejacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetup_ SNESSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetup_ snessetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesdestroy_ SNESDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesdestroy_ snesdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetlagpreconditioner_ SNESSETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetlagpreconditioner_ snessetlagpreconditioner
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlagpreconditioner_ SNESGETLAGPRECONDITIONER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlagpreconditioner_ snesgetlagpreconditioner
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetlagjacobian_ SNESSETLAGJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetlagjacobian_ snessetlagjacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetlagjacobian_ SNESGETLAGJACOBIAN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetlagjacobian_ snesgetlagjacobian
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessettolerances_ SNESSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessettolerances_ snessettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgettolerances_ SNESGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgettolerances_ snesgettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessettrustregiontolerance_ SNESSETTRUSTREGIONTOLERANCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessettrustregiontolerance_ snessettrustregiontolerance
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetconvergedreason_ SNESGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetconvergedreason_ snesgetconvergedreason
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snessetconvergencehistory_ SNESSETCONVERGENCEHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snessetconvergencehistory_ snessetconvergencehistory
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesdefaultupdate_ SNESDEFAULTUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesdefaultupdate_ snesdefaultupdate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesregisterdestroy_ SNESREGISTERDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesregisterdestroy_ snesregisterdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetsolution_ SNESGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetsolution_ snesgetsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define snesgetsolutionupdate_ SNESGETSOLUTIONUPDATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define snesgetsolutionupdate_ snesgetsolutionupdate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspsetuseew_ SNESKSPSETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspsetuseew_ sneskspsetuseew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspgetuseew_ SNESKSPGETUSEEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspgetuseew_ sneskspgetuseew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspsetparametersew_ SNESKSPSETPARAMETERSEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspsetparametersew_ sneskspsetparametersew
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sneskspgetparametersew_ SNESKSPGETPARAMETERSEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sneskspgetparametersew_ sneskspgetparametersew
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   snessetfunctiondomainerror_(SNES snes, int *__ierr ){
*__ierr = SNESSetFunctionDomainError(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL   snessetfromoptions_(SNES snes, int *__ierr ){
*__ierr = SNESSetFromOptions(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL   snessetapplicationcontext_(SNES snes,void*usrP, int *__ierr ){
*__ierr = SNESSetApplicationContext(
	(SNES)PetscToPointer((snes) ),usrP);
}
void PETSC_STDCALL   snesgetiterationnumber_(SNES snes,PetscInt* iter, int *__ierr ){
*__ierr = SNESGetIterationNumber(
	(SNES)PetscToPointer((snes) ),iter);
}
void PETSC_STDCALL   snesgetfunctionnorm_(SNES snes,PetscReal *fnorm, int *__ierr ){
*__ierr = SNESGetFunctionNorm(
	(SNES)PetscToPointer((snes) ),fnorm);
}
void PETSC_STDCALL   snesgetnonlinearstepfailures_(SNES snes,PetscInt* nfails, int *__ierr ){
*__ierr = SNESGetNonlinearStepFailures(
	(SNES)PetscToPointer((snes) ),nfails);
}
void PETSC_STDCALL   snessetmaxnonlinearstepfailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESSetMaxNonlinearStepFailures(
	(SNES)PetscToPointer((snes) ),*maxFails);
}
void PETSC_STDCALL   snesgetmaxnonlinearstepfailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESGetMaxNonlinearStepFailures(
	(SNES)PetscToPointer((snes) ),maxFails);
}
void PETSC_STDCALL   snesgetnumberfunctionevals_(SNES snes,PetscInt *nfuncs, int *__ierr ){
*__ierr = SNESGetNumberFunctionEvals(
	(SNES)PetscToPointer((snes) ),nfuncs);
}
void PETSC_STDCALL   snesgetlinearsolvefailures_(SNES snes,PetscInt* nfails, int *__ierr ){
*__ierr = SNESGetLinearSolveFailures(
	(SNES)PetscToPointer((snes) ),nfails);
}
void PETSC_STDCALL   snessetmaxlinearsolvefailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESSetMaxLinearSolveFailures(
	(SNES)PetscToPointer((snes) ),*maxFails);
}
void PETSC_STDCALL   snesgetmaxlinearsolvefailures_(SNES snes,PetscInt *maxFails, int *__ierr ){
*__ierr = SNESGetMaxLinearSolveFailures(
	(SNES)PetscToPointer((snes) ),maxFails);
}
void PETSC_STDCALL   snesgetlinearsolveiterations_(SNES snes,PetscInt* lits, int *__ierr ){
*__ierr = SNESGetLinearSolveIterations(
	(SNES)PetscToPointer((snes) ),lits);
}
void PETSC_STDCALL   snesgetksp_(SNES snes,KSP *ksp, int *__ierr ){
*__ierr = SNESGetKSP(
	(SNES)PetscToPointer((snes) ),ksp);
}
void PETSC_STDCALL   snessetksp_(SNES snes,KSP ksp, int *__ierr ){
*__ierr = SNESSetKSP(
	(SNES)PetscToPointer((snes) ),
	(KSP)PetscToPointer((ksp) ));
}
void PETSC_STDCALL   snescreate_(MPI_Fint * comm,SNES *outsnes, int *__ierr ){
*__ierr = SNESCreate(
	MPI_Comm_f2c( *(comm) ),outsnes);
}
void PETSC_STDCALL   snescomputefunction_(SNES snes,Vec x,Vec y, int *__ierr ){
*__ierr = SNESComputeFunction(
	(SNES)PetscToPointer((snes) ),
	(Vec)PetscToPointer((x) ),
	(Vec)PetscToPointer((y) ));
}
void PETSC_STDCALL   snescomputejacobian_(SNES snes,Vec X,Mat *A,Mat *B,MatStructure *flg, int *__ierr ){
*__ierr = SNESComputeJacobian(
	(SNES)PetscToPointer((snes) ),
	(Vec)PetscToPointer((X) ),A,B,flg);
}
void PETSC_STDCALL   snessetup_(SNES snes, int *__ierr ){
*__ierr = SNESSetUp(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL   snesdestroy_(SNES snes, int *__ierr ){
*__ierr = SNESDestroy(
	(SNES)PetscToPointer((snes) ));
}
void PETSC_STDCALL   snessetlagpreconditioner_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESSetLagPreconditioner(
	(SNES)PetscToPointer((snes) ),*lag);
}
void PETSC_STDCALL   snesgetlagpreconditioner_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESGetLagPreconditioner(
	(SNES)PetscToPointer((snes) ),lag);
}
void PETSC_STDCALL   snessetlagjacobian_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESSetLagJacobian(
	(SNES)PetscToPointer((snes) ),*lag);
}
void PETSC_STDCALL   snesgetlagjacobian_(SNES snes,PetscInt *lag, int *__ierr ){
*__ierr = SNESGetLagJacobian(
	(SNES)PetscToPointer((snes) ),lag);
}
void PETSC_STDCALL   snessettolerances_(SNES snes,PetscReal *abstol,PetscReal *rtol,PetscReal *stol,PetscInt *maxit,PetscInt *maxf, int *__ierr ){
*__ierr = SNESSetTolerances(
	(SNES)PetscToPointer((snes) ),*abstol,*rtol,*stol,*maxit,*maxf);
}
void PETSC_STDCALL   snesgettolerances_(SNES snes,PetscReal *atol,PetscReal *rtol,PetscReal *stol,PetscInt *maxit,PetscInt *maxf, int *__ierr ){
*__ierr = SNESGetTolerances(
	(SNES)PetscToPointer((snes) ),atol,rtol,stol,maxit,maxf);
}
void PETSC_STDCALL   snessettrustregiontolerance_(SNES snes,PetscReal *tol, int *__ierr ){
*__ierr = SNESSetTrustRegionTolerance(
	(SNES)PetscToPointer((snes) ),*tol);
}
void PETSC_STDCALL   snesgetconvergedreason_(SNES snes,SNESConvergedReason *reason, int *__ierr ){
*__ierr = SNESGetConvergedReason(
	(SNES)PetscToPointer((snes) ),reason);
}
void PETSC_STDCALL   snessetconvergencehistory_(SNES snes,PetscReal a[],PetscInt its[],PetscInt *na,PetscTruth *reset, int *__ierr ){
*__ierr = SNESSetConvergenceHistory(
	(SNES)PetscToPointer((snes) ),a,its,*na,*reset);
}
void PETSC_STDCALL   snesdefaultupdate_(SNES snes,PetscInt *step, int *__ierr ){
*__ierr = SNESDefaultUpdate(
	(SNES)PetscToPointer((snes) ),*step);
}
void PETSC_STDCALL   snesregisterdestroy_(int *__ierr ){
*__ierr = SNESRegisterDestroy();
}
void PETSC_STDCALL   snesgetsolution_(SNES snes,Vec *x, int *__ierr ){
*__ierr = SNESGetSolution(
	(SNES)PetscToPointer((snes) ),x);
}
void PETSC_STDCALL   snesgetsolutionupdate_(SNES snes,Vec *x, int *__ierr ){
*__ierr = SNESGetSolutionUpdate(
	(SNES)PetscToPointer((snes) ),x);
}
void PETSC_STDCALL   sneskspsetuseew_(SNES snes,PetscTruth *flag, int *__ierr ){
*__ierr = SNESKSPSetUseEW(
	(SNES)PetscToPointer((snes) ),*flag);
}
void PETSC_STDCALL   sneskspgetuseew_(SNES snes,PetscTruth *flag, int *__ierr ){
*__ierr = SNESKSPGetUseEW(
	(SNES)PetscToPointer((snes) ),flag);
}
void PETSC_STDCALL   sneskspsetparametersew_(SNES snes,PetscInt *version,PetscReal *rtol_0,PetscReal *rtol_max,
           PetscReal *gamma,PetscReal *alpha,PetscReal *alpha2,PetscReal *threshold, int *__ierr ){
*__ierr = SNESKSPSetParametersEW(
	(SNES)PetscToPointer((snes) ),*version,*rtol_0,*rtol_max,*gamma,*alpha,*alpha2,*threshold);
}
void PETSC_STDCALL   sneskspgetparametersew_(SNES snes,PetscInt *version,PetscReal *rtol_0,PetscReal *rtol_max,
           PetscReal *gamma,PetscReal *alpha,PetscReal *alpha2,PetscReal *threshold, int *__ierr ){
*__ierr = SNESKSPGetParametersEW(
	(SNES)PetscToPointer((snes) ),version,rtol_0,rtol_max,gamma,alpha,alpha2,threshold);
}
#if defined(__cplusplus)
}
#endif
