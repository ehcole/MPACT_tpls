#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bvorthog.c */
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
#define bvorthogonalizevec_ BVORTHOGONALIZEVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvorthogonalizevec_ bvorthogonalizevec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvorthogonalizecolumn_ BVORTHOGONALIZECOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvorthogonalizecolumn_ bvorthogonalizecolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvorthogonalizesomecolumn_ BVORTHOGONALIZESOMECOLUMN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvorthogonalizesomecolumn_ bvorthogonalizesomecolumn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvorthogonalize_ BVORTHOGONALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvorthogonalize_ bvorthogonalize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  bvorthogonalizevec_(BV *bv,Vec v,PetscScalar *H,PetscReal *norm,PetscBool *lindep, int *__ierr ){
*__ierr = BVOrthogonalizeVec(*bv,
	(Vec)PetscToPointer((v) ),H,norm,lindep);
}
PETSC_EXTERN void PETSC_STDCALL  bvorthogonalizecolumn_(BV *bv,PetscInt *j,PetscScalar *H,PetscReal *norm,PetscBool *lindep, int *__ierr ){
*__ierr = BVOrthogonalizeColumn(*bv,*j,H,norm,lindep);
}
PETSC_EXTERN void PETSC_STDCALL  bvorthogonalizesomecolumn_(BV *bv,PetscInt *j,PetscBool *which,PetscScalar *H,PetscReal *norm,PetscBool *lindep, int *__ierr ){
*__ierr = BVOrthogonalizeSomeColumn(*bv,*j,which,H,norm,lindep);
}
PETSC_EXTERN void PETSC_STDCALL  bvorthogonalize_(BV *V,Mat R, int *__ierr ){
*__ierr = BVOrthogonalize(*V,
	(Mat)PetscToPointer((R) ));
}
#if defined(__cplusplus)
}
#endif
