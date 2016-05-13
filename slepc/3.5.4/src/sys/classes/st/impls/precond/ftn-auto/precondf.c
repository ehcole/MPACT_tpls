#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* precond.c */
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

#include "slepcst.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stprecondgetmatforpc_ STPRECONDGETMATFORPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stprecondgetmatforpc_ stprecondgetmatforpc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stprecondsetmatforpc_ STPRECONDSETMATFORPC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stprecondsetmatforpc_ stprecondsetmatforpc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stprecondsetksphasmat_ STPRECONDSETKSPHASMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stprecondsetksphasmat_ stprecondsetksphasmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stprecondgetksphasmat_ STPRECONDGETKSPHASMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stprecondgetksphasmat_ stprecondgetksphasmat
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  stprecondgetmatforpc_(ST *st,Mat *mat, int *__ierr ){
*__ierr = STPrecondGetMatForPC(*st,mat);
}
PETSC_EXTERN void PETSC_STDCALL  stprecondsetmatforpc_(ST *st,Mat mat, int *__ierr ){
*__ierr = STPrecondSetMatForPC(*st,
	(Mat)PetscToPointer((mat) ));
}
PETSC_EXTERN void PETSC_STDCALL  stprecondsetksphasmat_(ST *st,PetscBool *setmat, int *__ierr ){
*__ierr = STPrecondSetKSPHasMat(*st,*setmat);
}
PETSC_EXTERN void PETSC_STDCALL  stprecondgetksphasmat_(ST *st,PetscBool *setmat, int *__ierr ){
*__ierr = STPrecondGetKSPHasMat(*st,setmat);
}
#if defined(__cplusplus)
}
#endif
