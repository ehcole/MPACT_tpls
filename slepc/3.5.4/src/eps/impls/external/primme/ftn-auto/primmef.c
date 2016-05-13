#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* primme.c */
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

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsprimmesetblocksize_ EPSPRIMMESETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsprimmesetblocksize_ epsprimmesetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsprimmegetblocksize_ EPSPRIMMEGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsprimmegetblocksize_ epsprimmegetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsprimmesetmethod_ EPSPRIMMESETMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsprimmesetmethod_ epsprimmesetmethod
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsprimmesetblocksize_(EPS *eps,PetscInt *bs, int *__ierr ){
*__ierr = EPSPRIMMESetBlockSize(*eps,*bs);
}
PETSC_EXTERN void PETSC_STDCALL  epsprimmegetblocksize_(EPS *eps,PetscInt *bs, int *__ierr ){
*__ierr = EPSPRIMMEGetBlockSize(*eps,bs);
}
PETSC_EXTERN void PETSC_STDCALL  epsprimmesetmethod_(EPS *eps,EPSPRIMMEMethod *method, int *__ierr ){
*__ierr = EPSPRIMMESetMethod(*eps,*method);
}
#if defined(__cplusplus)
}
#endif
