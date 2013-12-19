#include "petscsys.h"
#include "petscfix.h"
/* dm.c */
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

#include "petscda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdestroy_ DMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdestroy_ dmdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmview_ DMVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmview_ dmview
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreateglobalvector_ DMCREATEGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreateglobalvector_ dmcreateglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreatelocalvector_ DMCREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreatelocalvector_ dmcreatelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetinterpolation_ DMGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetinterpolation_ dmgetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetinjection_ DMGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetinjection_ dmgetinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoloring_ DMGETCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoloring_ dmgetcoloring
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmrefine_ DMREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmrefine_ dmrefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmglobaltolocalbegin_ DMGLOBALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmglobaltolocalbegin_ dmglobaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmglobaltolocalend_ DMGLOBALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmglobaltolocalend_ dmglobaltolocalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocaltoglobal_ DMLOCALTOGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocaltoglobal_ dmlocaltoglobal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcoarsen_ DMCOARSEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcoarsen_ dmcoarsen
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetaggregates_ DMGETAGGREGATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetaggregates_ dmgetaggregates
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dmdestroy_(DM dm, int *__ierr ){
*__ierr = DMDestroy(
	(DM)PetscToPointer((dm) ));
}
void PETSC_STDCALL   dmview_(DM dm,PetscViewer v, int *__ierr ){
*__ierr = DMView(
	(DM)PetscToPointer((dm) ),
	(PetscViewer)PetscToPointer((v) ));
}
void PETSC_STDCALL   dmcreateglobalvector_(DM dm,Vec *vec, int *__ierr ){
*__ierr = DMCreateGlobalVector(
	(DM)PetscToPointer((dm) ),vec);
}
void PETSC_STDCALL   dmcreatelocalvector_(DM dm,Vec *vec, int *__ierr ){
*__ierr = DMCreateLocalVector(
	(DM)PetscToPointer((dm) ),vec);
}
void PETSC_STDCALL   dmgetinterpolation_(DM dm1,DM dm2,Mat *mat,Vec *vec, int *__ierr ){
*__ierr = DMGetInterpolation(
	(DM)PetscToPointer((dm1) ),
	(DM)PetscToPointer((dm2) ),mat,vec);
}
void PETSC_STDCALL   dmgetinjection_(DM dm1,DM dm2,VecScatter *ctx, int *__ierr ){
*__ierr = DMGetInjection(
	(DM)PetscToPointer((dm1) ),
	(DM)PetscToPointer((dm2) ),ctx);
}
void PETSC_STDCALL   dmgetcoloring_(DM dm,ISColoringType *ctype, MatType *mtype,ISColoring *coloring, int *__ierr ){
*__ierr = DMGetColoring(
	(DM)PetscToPointer((dm) ),*ctype,*mtype,coloring);
}
void PETSC_STDCALL   dmrefine_(DM dm,MPI_Fint * comm,DM *dmf, int *__ierr ){
*__ierr = DMRefine(
	(DM)PetscToPointer((dm) ),
	MPI_Comm_f2c( *(comm) ),dmf);
}
void PETSC_STDCALL   dmglobaltolocalbegin_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DMGlobalToLocalBegin(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   dmglobaltolocalend_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DMGlobalToLocalEnd(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   dmlocaltoglobal_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DMLocalToGlobal(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   dmcoarsen_(DM dm,MPI_Fint * comm,DM *dmc, int *__ierr ){
*__ierr = DMCoarsen(
	(DM)PetscToPointer((dm) ),
	MPI_Comm_f2c( *(comm) ),dmc);
}
void PETSC_STDCALL   dmgetaggregates_(DM dmc,DM dmf,Mat *rest, int *__ierr ){
*__ierr = DMGetAggregates(
	(DM)PetscToPointer((dmc) ),
	(DM)PetscToPointer((dmf) ),rest);
}
#if defined(__cplusplus)
}
#endif
