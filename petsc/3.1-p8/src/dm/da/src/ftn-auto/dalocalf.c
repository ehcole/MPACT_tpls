#include "petscsys.h"
#include "petscfix.h"
/* dalocal.c */
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

#include "petscda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacreatelocalvector_ DACREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacreatelocalvector_ dacreatelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetlocalvector_ DMGETLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetlocalvector_ dmgetlocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmrestorelocalvector_ DMRESTORELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmrestorelocalvector_ dmrestorelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetglobalvector_ DMGETGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetglobalvector_ dmgetglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmrestoreglobalvector_ DMRESTOREGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmrestoreglobalvector_ dmrestoreglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetlocalvector_ DAGETLOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetlocalvector_ dagetlocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define darestorelocalvector_ DARESTORELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define darestorelocalvector_ darestorelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetglobalvector_ DAGETGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetglobalvector_ dagetglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define darestoreglobalvector_ DARESTOREGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define darestoreglobalvector_ darestoreglobalvector
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dacreatelocalvector_(DA da,Vec* g, int *__ierr ){
*__ierr = DACreateLocalVector(
	(DA)PetscToPointer((da) ),g);
}
void PETSC_STDCALL   dmgetlocalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DMGetLocalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL   dmrestorelocalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DMRestoreLocalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL   dmgetglobalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DMGetGlobalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL   dmrestoreglobalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DMRestoreGlobalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL  dagetlocalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DAGetLocalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL  darestorelocalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DARestoreLocalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL  dagetglobalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DAGetGlobalVector(
	(DM)PetscToPointer((dm) ),g);
}
void PETSC_STDCALL  darestoreglobalvector_(DM dm,Vec* g, int *__ierr ){
*__ierr = DARestoreGlobalVector(
	(DM)PetscToPointer((dm) ),g);
}
#if defined(__cplusplus)
}
#endif
