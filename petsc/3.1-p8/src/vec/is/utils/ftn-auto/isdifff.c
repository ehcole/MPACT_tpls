#include "petscsys.h"
#include "petscfix.h"
/* isdiff.c */
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

#include "petscis.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isdifference_ ISDIFFERENCE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isdifference_ isdifference
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define issum_ ISSUM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define issum_ issum
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isexpand_ ISEXPAND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isexpand_ isexpand
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   isdifference_(IS is1,IS is2,IS *isout, int *__ierr ){
*__ierr = ISDifference(
	(IS)PetscToPointer((is1) ),
	(IS)PetscToPointer((is2) ),isout);
}
void PETSC_STDCALL   issum_(IS is1,IS is2,IS *is3, int *__ierr ){
*__ierr = ISSum(
	(IS)PetscToPointer((is1) ),
	(IS)PetscToPointer((is2) ),is3);
}
void PETSC_STDCALL  isexpand_(IS is1,IS is2,IS *isout, int *__ierr ){
*__ierr = ISExpand(
	(IS)PetscToPointer((is1) ),
	(IS)PetscToPointer((is2) ),isout);
}
#if defined(__cplusplus)
}
#endif
