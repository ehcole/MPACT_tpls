#include "petscsys.h"
#include "petscfix.h"
/* axis.c */
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
#define petscdrawaxiscreate_ PETSCDRAWAXISCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxiscreate_ petscdrawaxiscreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawaxisdestroy_ PETSCDRAWAXISDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxisdestroy_ petscdrawaxisdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawaxissetcolors_ PETSCDRAWAXISSETCOLORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxissetcolors_ petscdrawaxissetcolors
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawaxissetholdlimits_ PETSCDRAWAXISSETHOLDLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxissetholdlimits_ petscdrawaxissetholdlimits
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawaxissetlimits_ PETSCDRAWAXISSETLIMITS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxissetlimits_ petscdrawaxissetlimits
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscdrawaxisdraw_ PETSCDRAWAXISDRAW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscdrawaxisdraw_ petscdrawaxisdraw
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscdrawaxiscreate_(PetscDraw draw,PetscDrawAxis *axis, int *__ierr ){
*__ierr = PetscDrawAxisCreate(
	(PetscDraw)PetscToPointer((draw) ),axis);
}
void PETSC_STDCALL   petscdrawaxisdestroy_(PetscDrawAxis axis, int *__ierr ){
*__ierr = PetscDrawAxisDestroy(
	(PetscDrawAxis)PetscToPointer((axis) ));
}
void PETSC_STDCALL   petscdrawaxissetcolors_(PetscDrawAxis axis,int *ac,int *tc,int *cc, int *__ierr ){
*__ierr = PetscDrawAxisSetColors(
	(PetscDrawAxis)PetscToPointer((axis) ),*ac,*tc,*cc);
}
void PETSC_STDCALL   petscdrawaxissetholdlimits_(PetscDrawAxis axis,PetscTruth *hold, int *__ierr ){
*__ierr = PetscDrawAxisSetHoldLimits(
	(PetscDrawAxis)PetscToPointer((axis) ),*hold);
}
void PETSC_STDCALL   petscdrawaxissetlimits_(PetscDrawAxis axis,PetscReal *xmin,PetscReal *xmax,PetscReal *ymin,PetscReal *ymax, int *__ierr ){
*__ierr = PetscDrawAxisSetLimits(
	(PetscDrawAxis)PetscToPointer((axis) ),*xmin,*xmax,*ymin,*ymax);
}
void PETSC_STDCALL   petscdrawaxisdraw_(PetscDrawAxis axis, int *__ierr ){
*__ierr = PetscDrawAxisDraw(
	(PetscDrawAxis)PetscToPointer((axis) ));
}
#if defined(__cplusplus)
}
#endif
