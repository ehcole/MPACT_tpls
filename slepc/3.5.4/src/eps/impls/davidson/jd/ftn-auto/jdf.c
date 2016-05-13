#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* jd.c */
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
#define epsjdsetkrylovstart_ EPSJDSETKRYLOVSTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetkrylovstart_ epsjdsetkrylovstart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetkrylovstart_ EPSJDGETKRYLOVSTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetkrylovstart_ epsjdgetkrylovstart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetblocksize_ EPSJDSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetblocksize_ epsjdsetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetblocksize_ EPSJDGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetblocksize_ epsjdgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetrestart_ EPSJDGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetrestart_ epsjdgetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetrestart_ EPSJDSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetrestart_ epsjdsetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetinitialsize_ EPSJDGETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetinitialsize_ epsjdgetinitialsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetinitialsize_ EPSJDSETINITIALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetinitialsize_ epsjdsetinitialsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetfix_ EPSJDGETFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetfix_ epsjdgetfix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetfix_ EPSJDSETFIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetfix_ epsjdsetfix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetconstcorrectiontol_ EPSJDSETCONSTCORRECTIONTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetconstcorrectiontol_ epsjdsetconstcorrectiontol
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetconstcorrectiontol_ EPSJDGETCONSTCORRECTIONTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetconstcorrectiontol_ epsjdgetconstcorrectiontol
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetwindowsizes_ EPSJDGETWINDOWSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetwindowsizes_ epsjdgetwindowsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetwindowsizes_ EPSJDSETWINDOWSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetwindowsizes_ epsjdsetwindowsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdsetborth_ EPSJDSETBORTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdsetborth_ epsjdsetborth
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsjdgetborth_ EPSJDGETBORTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsjdgetborth_ epsjdgetborth
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epsjdsetkrylovstart_(EPS *eps,PetscBool *krylovstart, int *__ierr ){
*__ierr = EPSJDSetKrylovStart(*eps,*krylovstart);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetkrylovstart_(EPS *eps,PetscBool *krylovstart, int *__ierr ){
*__ierr = EPSJDGetKrylovStart(*eps,krylovstart);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetblocksize_(EPS *eps,PetscInt *blocksize, int *__ierr ){
*__ierr = EPSJDSetBlockSize(*eps,*blocksize);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetblocksize_(EPS *eps,PetscInt *blocksize, int *__ierr ){
*__ierr = EPSJDGetBlockSize(*eps,blocksize);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetrestart_(EPS *eps,PetscInt *minv,PetscInt *plusk, int *__ierr ){
*__ierr = EPSJDGetRestart(*eps,minv,plusk);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetrestart_(EPS *eps,PetscInt *minv,PetscInt *plusk, int *__ierr ){
*__ierr = EPSJDSetRestart(*eps,*minv,*plusk);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetinitialsize_(EPS *eps,PetscInt *initialsize, int *__ierr ){
*__ierr = EPSJDGetInitialSize(*eps,initialsize);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetinitialsize_(EPS *eps,PetscInt *initialsize, int *__ierr ){
*__ierr = EPSJDSetInitialSize(*eps,*initialsize);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetfix_(EPS *eps,PetscReal *fix, int *__ierr ){
*__ierr = EPSJDGetFix(*eps,fix);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetfix_(EPS *eps,PetscReal *fix, int *__ierr ){
*__ierr = EPSJDSetFix(*eps,*fix);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetconstcorrectiontol_(EPS *eps,PetscBool *constant, int *__ierr ){
*__ierr = EPSJDSetConstCorrectionTol(*eps,*constant);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetconstcorrectiontol_(EPS *eps,PetscBool *constant, int *__ierr ){
*__ierr = EPSJDGetConstCorrectionTol(*eps,constant);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetwindowsizes_(EPS *eps,PetscInt *pwindow,PetscInt *qwindow, int *__ierr ){
*__ierr = EPSJDGetWindowSizes(*eps,pwindow,qwindow);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetwindowsizes_(EPS *eps,PetscInt *pwindow,PetscInt *qwindow, int *__ierr ){
*__ierr = EPSJDSetWindowSizes(*eps,*pwindow,*qwindow);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdsetborth_(EPS *eps,PetscBool *borth, int *__ierr ){
*__ierr = EPSJDSetBOrth(*eps,*borth);
}
PETSC_EXTERN void PETSC_STDCALL  epsjdgetborth_(EPS *eps,PetscBool *borth, int *__ierr ){
*__ierr = EPSJDGetBOrth(*eps,borth);
}
#if defined(__cplusplus)
}
#endif
