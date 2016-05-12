#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bvfunc.c */
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

#include "slepcbv.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvinsertvec_ BVINSERTVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvinsertvec_ bvinsertvec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvinsertvecs_ BVINSERTVECS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvinsertvecs_ bvinsertvecs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvinsertconstraints_ BVINSERTCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvinsertconstraints_ bvinsertconstraints
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  bvinsertvec_(BV *V,PetscInt *j,Vec w, int *__ierr ){
*__ierr = BVInsertVec(*V,*j,
	(Vec)PetscToPointer((w) ));
}
PETSC_EXTERN void PETSC_STDCALL  bvinsertvecs_(BV *V,PetscInt *s,PetscInt *m,Vec *W,PetscBool *orth, int *__ierr ){
*__ierr = BVInsertVecs(*V,*s,m,W,*orth);
}
PETSC_EXTERN void PETSC_STDCALL  bvinsertconstraints_(BV *V,PetscInt *nc,Vec *C, int *__ierr ){
*__ierr = BVInsertConstraints(*V,nc,C);
}
#if defined(__cplusplus)
}
#endif
