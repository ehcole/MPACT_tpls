#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* taosolver.c */
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

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petsctao.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taocreate_ TAOCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taocreate_ taocreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosolve_ TAOSOLVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosolve_ taosolve
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetup_ TAOSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetup_ taosetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taodestroy_ TAODESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taodestroy_ taodestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetfromoptions_ TAOSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetfromoptions_ taosetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosettolerances_ TAOSETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosettolerances_ taosettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetconstrainttolerances_ TAOSETCONSTRAINTTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetconstrainttolerances_ taosetconstrainttolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetconstrainttolerances_ TAOGETCONSTRAINTTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetconstrainttolerances_ taogetconstrainttolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetfunctionlowerbound_ TAOSETFUNCTIONLOWERBOUND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetfunctionlowerbound_ taosetfunctionlowerbound
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetfunctionlowerbound_ TAOGETFUNCTIONLOWERBOUND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetfunctionlowerbound_ taogetfunctionlowerbound
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetmaximumfunctionevaluations_ TAOSETMAXIMUMFUNCTIONEVALUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetmaximumfunctionevaluations_ taosetmaximumfunctionevaluations
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetmaximumfunctionevaluations_ TAOGETMAXIMUMFUNCTIONEVALUATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetmaximumfunctionevaluations_ taogetmaximumfunctionevaluations
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetmaximumiterations_ TAOSETMAXIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetmaximumiterations_ taosetmaximumiterations
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetmaximumiterations_ TAOGETMAXIMUMITERATIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetmaximumiterations_ taogetmaximumiterations
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetinitialtrustregionradius_ TAOSETINITIALTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetinitialtrustregionradius_ taosetinitialtrustregionradius
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetinitialtrustregionradius_ TAOGETINITIALTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetinitialtrustregionradius_ taogetinitialtrustregionradius
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetcurrenttrustregionradius_ TAOGETCURRENTTRUSTREGIONRADIUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetcurrenttrustregionradius_ taogetcurrenttrustregionradius
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogettolerances_ TAOGETTOLERANCES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogettolerances_ taogettolerances
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetksp_ TAOGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetksp_ taogetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetlinesearch_ TAOGETLINESEARCH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetlinesearch_ taogetlinesearch
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taoaddlinesearchcounts_ TAOADDLINESEARCHCOUNTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taoaddlinesearchcounts_ taoaddlinesearchcounts
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetsolutionvector_ TAOGETSOLUTIONVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetsolutionvector_ taogetsolutionvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetgradientvector_ TAOGETGRADIENTVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetgradientvector_ taogetgradientvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taoresetstatistics_ TAORESETSTATISTICS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taoresetstatistics_ taoresetstatistics
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taocancelmonitors_ TAOCANCELMONITORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taocancelmonitors_ taocancelmonitors
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetconvergedreason_ TAOSETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetconvergedreason_ taosetconvergedreason
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetconvergedreason_ TAOGETCONVERGEDREASON
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetconvergedreason_ taogetconvergedreason
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetsolutionstatus_ TAOGETSOLUTIONSTATUS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetsolutionstatus_ taogetsolutionstatus
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosethistory_ TAOSETHISTORY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosethistory_ taosethistory
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taosetapplicationcontext_ TAOSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taosetapplicationcontext_ taosetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define taogetapplicationcontext_ TAOGETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define taogetapplicationcontext_ taogetapplicationcontext
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  taocreate_(MPI_Fint * comm,Tao *newtao, int *__ierr ){
*__ierr = TaoCreate(
	MPI_Comm_f2c( *(comm) ),newtao);
}
PETSC_EXTERN void PETSC_STDCALL  taosolve_(Tao tao, int *__ierr ){
*__ierr = TaoSolve(
	(Tao)PetscToPointer((tao) ));
}
PETSC_EXTERN void PETSC_STDCALL  taosetup_(Tao tao, int *__ierr ){
*__ierr = TaoSetUp(
	(Tao)PetscToPointer((tao) ));
}
PETSC_EXTERN void PETSC_STDCALL  taodestroy_(Tao *tao, int *__ierr ){
*__ierr = TaoDestroy(tao);
}
PETSC_EXTERN void PETSC_STDCALL  taosetfromoptions_(Tao tao, int *__ierr ){
*__ierr = TaoSetFromOptions(
	(Tao)PetscToPointer((tao) ));
}
PETSC_EXTERN void PETSC_STDCALL  taosettolerances_(Tao tao,PetscReal *fatol,PetscReal *frtol,PetscReal *gatol,PetscReal *grtol,PetscReal *gttol, int *__ierr ){
*__ierr = TaoSetTolerances(
	(Tao)PetscToPointer((tao) ),*fatol,*frtol,*gatol,*grtol,*gttol);
}
PETSC_EXTERN void PETSC_STDCALL  taosetconstrainttolerances_(Tao tao,PetscReal *catol,PetscReal *crtol, int *__ierr ){
*__ierr = TaoSetConstraintTolerances(
	(Tao)PetscToPointer((tao) ),*catol,*crtol);
}
PETSC_EXTERN void PETSC_STDCALL  taogetconstrainttolerances_(Tao tao,PetscReal *catol,PetscReal *crtol, int *__ierr ){
*__ierr = TaoGetConstraintTolerances(
	(Tao)PetscToPointer((tao) ),catol,crtol);
}
PETSC_EXTERN void PETSC_STDCALL  taosetfunctionlowerbound_(Tao tao,PetscReal *fmin, int *__ierr ){
*__ierr = TaoSetFunctionLowerBound(
	(Tao)PetscToPointer((tao) ),*fmin);
}
PETSC_EXTERN void PETSC_STDCALL  taogetfunctionlowerbound_(Tao tao,PetscReal *fmin, int *__ierr ){
*__ierr = TaoGetFunctionLowerBound(
	(Tao)PetscToPointer((tao) ),fmin);
}

PETSC_EXTERN void PETSC_STDCALL  taosetmaximumfunctionevaluations_(Tao tao,PetscInt *nfcn, int *__ierr ){
*__ierr = TaoSetMaximumFunctionEvaluations(
	(Tao)PetscToPointer((tao) ),*nfcn);
}

PETSC_EXTERN void PETSC_STDCALL  taogetmaximumfunctionevaluations_(Tao tao,PetscInt *nfcn, int *__ierr ){
*__ierr = TaoGetMaximumFunctionEvaluations(
	(Tao)PetscToPointer((tao) ),nfcn);
}
PETSC_EXTERN void PETSC_STDCALL  taosetmaximumiterations_(Tao tao,PetscInt *maxits, int *__ierr ){
*__ierr = TaoSetMaximumIterations(
	(Tao)PetscToPointer((tao) ),*maxits);
}
PETSC_EXTERN void PETSC_STDCALL  taogetmaximumiterations_(Tao tao,PetscInt *maxits, int *__ierr ){
*__ierr = TaoGetMaximumIterations(
	(Tao)PetscToPointer((tao) ),maxits);
}
PETSC_EXTERN void PETSC_STDCALL  taosetinitialtrustregionradius_(Tao tao,PetscReal *radius, int *__ierr ){
*__ierr = TaoSetInitialTrustRegionRadius(
	(Tao)PetscToPointer((tao) ),*radius);
}
PETSC_EXTERN void PETSC_STDCALL  taogetinitialtrustregionradius_(Tao tao,PetscReal *radius, int *__ierr ){
*__ierr = TaoGetInitialTrustRegionRadius(
	(Tao)PetscToPointer((tao) ),radius);
}
PETSC_EXTERN void PETSC_STDCALL  taogetcurrenttrustregionradius_(Tao tao,PetscReal *radius, int *__ierr ){
*__ierr = TaoGetCurrentTrustRegionRadius(
	(Tao)PetscToPointer((tao) ),radius);
}
PETSC_EXTERN void PETSC_STDCALL  taogettolerances_(Tao tao,PetscReal *fatol,PetscReal *frtol,PetscReal *gatol,PetscReal *grtol,PetscReal *gttol, int *__ierr ){
*__ierr = TaoGetTolerances(
	(Tao)PetscToPointer((tao) ),fatol,frtol,gatol,grtol,gttol);
}
PETSC_EXTERN void PETSC_STDCALL  taogetksp_(Tao tao,KSP *ksp, int *__ierr ){
*__ierr = TaoGetKSP(
	(Tao)PetscToPointer((tao) ),ksp);
}
PETSC_EXTERN void PETSC_STDCALL  taogetlinesearch_(Tao tao,TaoLineSearch *ls, int *__ierr ){
*__ierr = TaoGetLineSearch(
	(Tao)PetscToPointer((tao) ),ls);
}
PETSC_EXTERN void PETSC_STDCALL  taoaddlinesearchcounts_(Tao tao, int *__ierr ){
*__ierr = TaoAddLineSearchCounts(
	(Tao)PetscToPointer((tao) ));
}
PETSC_EXTERN void PETSC_STDCALL  taogetsolutionvector_(Tao tao,Vec *X, int *__ierr ){
*__ierr = TaoGetSolutionVector(
	(Tao)PetscToPointer((tao) ),X);
}
PETSC_EXTERN void PETSC_STDCALL  taogetgradientvector_(Tao tao,Vec *G, int *__ierr ){
*__ierr = TaoGetGradientVector(
	(Tao)PetscToPointer((tao) ),G);
}
PETSC_EXTERN void PETSC_STDCALL  taoresetstatistics_(Tao tao, int *__ierr ){
*__ierr = TaoResetStatistics(
	(Tao)PetscToPointer((tao) ));
}
PETSC_EXTERN void PETSC_STDCALL  taocancelmonitors_(Tao tao, int *__ierr ){
*__ierr = TaoCancelMonitors(
	(Tao)PetscToPointer((tao) ));
}
PETSC_EXTERN void PETSC_STDCALL  taosetconvergedreason_(Tao tao,TaoConvergedReason *reason, int *__ierr ){
*__ierr = TaoSetConvergedReason(
	(Tao)PetscToPointer((tao) ),*reason);
}
PETSC_EXTERN void PETSC_STDCALL  taogetconvergedreason_(Tao tao,TaoConvergedReason *reason, int *__ierr ){
*__ierr = TaoGetConvergedReason(
	(Tao)PetscToPointer((tao) ),
	((reason) ));
}
PETSC_EXTERN void PETSC_STDCALL  taogetsolutionstatus_(Tao tao,PetscInt *its,PetscReal *f,PetscReal *gnorm,PetscReal *cnorm,PetscReal *xdiff,TaoConvergedReason *reason, int *__ierr ){
*__ierr = TaoGetSolutionStatus(
	(Tao)PetscToPointer((tao) ),its,f,gnorm,cnorm,xdiff,
	((reason) ));
}
PETSC_EXTERN void PETSC_STDCALL  taosethistory_(Tao tao,PetscReal *obj,PetscReal *resid,PetscReal *cnorm,PetscInt *na,PetscBool *reset, int *__ierr ){
*__ierr = TaoSetHistory(
	(Tao)PetscToPointer((tao) ),obj,resid,cnorm,*na,*reset);
}
PETSC_EXTERN void PETSC_STDCALL  taosetapplicationcontext_(Tao tao,void*usrP, int *__ierr ){
*__ierr = TaoSetApplicationContext(
	(Tao)PetscToPointer((tao) ),usrP);
}
PETSC_EXTERN void PETSC_STDCALL  taogetapplicationcontext_(Tao tao,void*usrP, int *__ierr ){
*__ierr = TaoGetApplicationContext(
	(Tao)PetscToPointer((tao) ),usrP);
}
#if defined(__cplusplus)
}
#endif
