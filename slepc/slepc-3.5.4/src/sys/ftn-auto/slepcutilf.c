#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* slepcutil.c */
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

#include "slepcsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define slepcmattile_ SLEPCMATTILE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define slepcmattile_ slepcmattile
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define slepccheckorthogonality_ SLEPCCHECKORTHOGONALITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define slepccheckorthogonality_ slepccheckorthogonality
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  slepcmattile_(PetscScalar *a,Mat A,PetscScalar *b,Mat B,PetscScalar *c,Mat C,PetscScalar *d,Mat D,Mat *G, int *__ierr ){
*__ierr = SlepcMatTile(*a,
	(Mat)PetscToPointer((A) ),*b,
	(Mat)PetscToPointer((B) ),*c,
	(Mat)PetscToPointer((C) ),*d,
	(Mat)PetscToPointer((D) ),G);
}
PETSC_EXTERN void PETSC_STDCALL  slepccheckorthogonality_(Vec *V,PetscInt *nv,Vec *W,PetscInt *nw,Mat B,PetscViewer viewer,PetscReal *lev, int *__ierr ){
*__ierr = SlepcCheckOrthogonality(V,*nv,W,*nw,
	(Mat)PetscToPointer((B) ),
	(PetscViewer)PetscToPointer((viewer) ),lev);
}
#if defined(__cplusplus)
}
#endif
