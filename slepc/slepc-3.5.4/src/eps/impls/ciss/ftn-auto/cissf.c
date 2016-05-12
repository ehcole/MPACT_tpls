#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* ciss.c */
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
#define epscisssetsizes_ EPSCISSSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscisssetsizes_ epscisssetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscissgetsizes_ EPSCISSGETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscissgetsizes_ epscissgetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscisssetthreshold_ EPSCISSSETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscisssetthreshold_ epscisssetthreshold
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscissgetthreshold_ EPSCISSGETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscissgetthreshold_ epscissgetthreshold
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscisssetrefinement_ EPSCISSSETREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscisssetrefinement_ epscisssetrefinement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscissgetrefinement_ EPSCISSGETREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscissgetrefinement_ epscissgetrefinement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscisssetusest_ EPSCISSSETUSEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscisssetusest_ epscisssetusest
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epscissgetusest_ EPSCISSGETUSEST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epscissgetusest_ epscissgetusest
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  epscisssetsizes_(EPS *eps,PetscInt *ip,PetscInt *bs,PetscInt *ms,PetscInt *npart,PetscInt *bsmax,PetscBool *isreal, int *__ierr ){
*__ierr = EPSCISSSetSizes(*eps,*ip,*bs,*ms,*npart,*bsmax,*isreal);
}
PETSC_EXTERN void PETSC_STDCALL  epscissgetsizes_(EPS *eps,PetscInt *ip,PetscInt *bs,PetscInt *ms,PetscInt *npart,PetscInt *bsmax,PetscBool *isreal, int *__ierr ){
*__ierr = EPSCISSGetSizes(*eps,ip,bs,ms,npart,bsmax,isreal);
}
PETSC_EXTERN void PETSC_STDCALL  epscisssetthreshold_(EPS *eps,PetscReal *delta,PetscReal *spur, int *__ierr ){
*__ierr = EPSCISSSetThreshold(*eps,*delta,*spur);
}
PETSC_EXTERN void PETSC_STDCALL  epscissgetthreshold_(EPS *eps,PetscReal *delta,PetscReal *spur, int *__ierr ){
*__ierr = EPSCISSGetThreshold(*eps,delta,spur);
}
PETSC_EXTERN void PETSC_STDCALL  epscisssetrefinement_(EPS *eps,PetscInt *inner,PetscInt *outer,PetscInt *blsize, int *__ierr ){
*__ierr = EPSCISSSetRefinement(*eps,*inner,*outer,*blsize);
}
PETSC_EXTERN void PETSC_STDCALL  epscissgetrefinement_(EPS *eps,PetscInt *inner,PetscInt *outer,PetscInt *blsize, int *__ierr ){
*__ierr = EPSCISSGetRefinement(*eps,inner,outer,blsize);
}
PETSC_EXTERN void PETSC_STDCALL  epscisssetusest_(EPS *eps,PetscBool *usest, int *__ierr ){
*__ierr = EPSCISSSetUseST(*eps,*usest);
}
PETSC_EXTERN void PETSC_STDCALL  epscissgetusest_(EPS *eps,PetscBool *usest, int *__ierr ){
*__ierr = EPSCISSGetUseST(*eps,usest);
}
#if defined(__cplusplus)
}
#endif
