#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* gd.c */
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
#define epsgdsetkrylovstart_ EPSGDSETKRYLOVSTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetkrylovstart_ epsgdsetkrylovstart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetkrylovstart_ EPSGDGETKRYLOVSTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetkrylovstart_ epsgdgetkrylovstart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdsetblocksize_ EPSGDSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetblocksize_ epsgdsetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetblocksize_ EPSGDGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetblocksize_ epsgdgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetrestart_ EPSGDGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetrestart_ epsgdgetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdsetrestart_ EPSGDSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetrestart_ epsgdsetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetinitialsize_ EPSGDGETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetinitialsize_ epsgdgetinitialsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdsetinitialsize_ EPSGDSETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetinitialsize_ epsgdsetinitialsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdsetborth_ EPSGDSETBORTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetborth_ epsgdsetborth
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetborth_ EPSGDGETBORTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetborth_ epsgdgetborth
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetwindowsizes_ EPSGDGETWINDOWSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetwindowsizes_ epsgdgetwindowsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdsetwindowsizes_ EPSGDSETWINDOWSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetwindowsizes_ epsgdsetwindowsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdgetdoubleexpansion_ EPSGDGETDOUBLEEXPANSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdgetdoubleexpansion_ epsgdgetdoubleexpansion
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsgdsetdoubleexpansion_ EPSGDSETDOUBLEEXPANSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsgdsetdoubleexpansion_ epsgdsetdoubleexpansion
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsgdsetkrylovstart_(EPS *eps,PetscBool *krylovstart, int *__ierr ){
*__ierr = EPSGDSetKrylovStart(*eps,*krylovstart);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetkrylovstart_(EPS *eps,PetscBool *krylovstart, int *__ierr ){
*__ierr = EPSGDGetKrylovStart(*eps,krylovstart);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdsetblocksize_(EPS *eps,PetscInt *blocksize, int *__ierr ){
*__ierr = EPSGDSetBlockSize(*eps,*blocksize);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetblocksize_(EPS *eps,PetscInt *blocksize, int *__ierr ){
*__ierr = EPSGDGetBlockSize(*eps,blocksize);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetrestart_(EPS *eps,PetscInt *minv,PetscInt *plusk, int *__ierr ){
*__ierr = EPSGDGetRestart(*eps,minv,plusk);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdsetrestart_(EPS *eps,PetscInt *minv,PetscInt *plusk, int *__ierr ){
*__ierr = EPSGDSetRestart(*eps,*minv,*plusk);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetinitialsize_(EPS *eps,PetscInt *initialsize, int *__ierr ){
*__ierr = EPSGDGetInitialSize(*eps,initialsize);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdsetinitialsize_(EPS *eps,PetscInt *initialsize, int *__ierr ){
*__ierr = EPSGDSetInitialSize(*eps,*initialsize);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdsetborth_(EPS *eps,PetscBool *borth, int *__ierr ){
*__ierr = EPSGDSetBOrth(*eps,*borth);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetborth_(EPS *eps,PetscBool *borth, int *__ierr ){
*__ierr = EPSGDGetBOrth(*eps,borth);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetwindowsizes_(EPS *eps,PetscInt *pwindow,PetscInt *qwindow, int *__ierr ){
*__ierr = EPSGDGetWindowSizes(*eps,pwindow,qwindow);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdsetwindowsizes_(EPS *eps,PetscInt *pwindow,PetscInt *qwindow, int *__ierr ){
*__ierr = EPSGDSetWindowSizes(*eps,*pwindow,*qwindow);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdgetdoubleexpansion_(EPS *eps,PetscBool *flg, int *__ierr ){
*__ierr = EPSGDGetDoubleExpansion(*eps,flg);
}
PETSC_EXTERN void PETSC_STDCALL  epsgdsetdoubleexpansion_(EPS *eps,PetscBool *use_gd2, int *__ierr ){
*__ierr = EPSGDSetDoubleExpansion(*eps,*use_gd2);
}
#if defined(__cplusplus)
}
#endif
