#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* svdsetup.c */
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

#include "slepcsvd.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetoperator_ SVDSETOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetoperator_ svdsetoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetoperator_ SVDGETOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetoperator_ svdgetoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetup_ SVDSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetup_ svdsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetinitialspace_ SVDSETINITIALSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetinitialspace_ svdsetinitialspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetinitialspaceleft_ SVDSETINITIALSPACELEFT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetinitialspaceleft_ svdsetinitialspaceleft
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdallocatesolution_ SVDALLOCATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdallocatesolution_ svdallocatesolution
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  svdsetoperator_(SVD *svd,Mat mat, int *__ierr ){
*__ierr = SVDSetOperator(*svd,
	(Mat)PetscToPointer((mat) ));
}
PETSC_EXTERN void PETSC_STDCALL  svdgetoperator_(SVD *svd,Mat *A, int *__ierr ){
*__ierr = SVDGetOperator(*svd,A);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetup_(SVD *svd, int *__ierr ){
*__ierr = SVDSetUp(*svd);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetinitialspace_(SVD *svd,PetscInt *n,Vec *is, int *__ierr ){
*__ierr = SVDSetInitialSpace(*svd,*n,is);
}
PETSC_EXTERN void PETSC_STDCALL  svdsetinitialspaceleft_(SVD *svd,PetscInt *n,Vec *is, int *__ierr ){
*__ierr = SVDSetInitialSpaceLeft(*svd,*n,is);
}
PETSC_EXTERN void PETSC_STDCALL  svdallocatesolution_(SVD *svd,PetscInt *extra, int *__ierr ){
*__ierr = SVDAllocateSolution(*svd,*extra);
}
#if defined(__cplusplus)
}
#endif
