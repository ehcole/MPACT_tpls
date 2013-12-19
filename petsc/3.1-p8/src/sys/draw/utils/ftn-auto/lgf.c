#include "petscsys.h"
#include "petscfix.h"
/* lg.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgcreate_ PETSCDRAWLGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgcreate_ petscdrawlgcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgsetdimension_ PETSCDRAWLGSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgsetdimension_ petscdrawlgsetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgreset_ PETSCDRAWLGRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgreset_ petscdrawlgreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgdestroy_ PETSCDRAWLGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgdestroy_ petscdrawlgdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgaddpoint_ PETSCDRAWLGADDPOINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgaddpoint_ petscdrawlgaddpoint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgindicatedatapoints_ PETSCDRAWLGINDICATEDATAPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgindicatedatapoints_ petscdrawlgindicatedatapoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgdraw_ PETSCDRAWLGDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgdraw_ petscdrawlgdraw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgprint_ PETSCDRAWLGPRINT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgprint_ petscdrawlgprint
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgsetlimits_ PETSCDRAWLGSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgsetlimits_ petscdrawlgsetlimits
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlggetaxis_ PETSCDRAWLGGETAXIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlggetaxis_ petscdrawlggetaxis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlggetdraw_ PETSCDRAWLGGETDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlggetdraw_ petscdrawlggetdraw
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawlgspdraw_ PETSCDRAWLGSPDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawlgspdraw_ petscdrawlgspdraw
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscdrawlgcreate_(PetscDraw draw,int *dim,PetscDrawLG *outctx, int *__ierr ){
*__ierr = PetscDrawLGCreate(
	(PetscDraw)PetscToPointer((draw) ),*dim,outctx);
}
void PETSC_STDCALL   petscdrawlgsetdimension_(PetscDrawLG lg,int *dim, int *__ierr ){
*__ierr = PetscDrawLGSetDimension(
	(PetscDrawLG)PetscToPointer((lg) ),*dim);
}
void PETSC_STDCALL   petscdrawlgreset_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGReset(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL   petscdrawlgdestroy_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGDestroy(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL   petscdrawlgaddpoint_(PetscDrawLG lg,PetscReal *x,PetscReal *y, int *__ierr ){
*__ierr = PetscDrawLGAddPoint(
	(PetscDrawLG)PetscToPointer((lg) ),x,y);
}
void PETSC_STDCALL   petscdrawlgindicatedatapoints_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGIndicateDataPoints(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL   petscdrawlgdraw_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGDraw(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL   petscdrawlgprint_(PetscDrawLG lg, int *__ierr ){
*__ierr = PetscDrawLGPrint(
	(PetscDrawLG)PetscToPointer((lg) ));
}
void PETSC_STDCALL   petscdrawlgsetlimits_(PetscDrawLG lg,PetscReal *x_min,PetscReal *x_max,PetscReal *y_min,PetscReal *y_max, int *__ierr ){
*__ierr = PetscDrawLGSetLimits(
	(PetscDrawLG)PetscToPointer((lg) ),*x_min,*x_max,*y_min,*y_max);
}
void PETSC_STDCALL   petscdrawlggetaxis_(PetscDrawLG lg,PetscDrawAxis *axis, int *__ierr ){
*__ierr = PetscDrawLGGetAxis(
	(PetscDrawLG)PetscToPointer((lg) ),axis);
}
void PETSC_STDCALL   petscdrawlggetdraw_(PetscDrawLG lg,PetscDraw *draw, int *__ierr ){
*__ierr = PetscDrawLGGetDraw(
	(PetscDrawLG)PetscToPointer((lg) ),draw);
}
void PETSC_STDCALL   petscdrawlgspdraw_(PetscDrawLG lg,PetscDrawSP spin, int *__ierr ){
*__ierr = PetscDrawLGSPDraw(
	(PetscDrawLG)PetscToPointer((lg) ),
	(PetscDrawSP)PetscToPointer((spin) ));
}
#if defined(__cplusplus)
}
#endif
