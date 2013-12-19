#include "petscsys.h"
#include "petscfix.h"
/* dadestroy.c */
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
#define dadestroy_ DADESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dadestroy_ dadestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetislocaltoglobalmapping_ DAGETISLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetislocaltoglobalmapping_ dagetislocaltoglobalmapping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetislocaltoglobalmappingblck_ DAGETISLOCALTOGLOBALMAPPINGBLCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetislocaltoglobalmappingblck_ dagetislocaltoglobalmappingblck
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dadestroy_(DA da, int *__ierr ){
*__ierr = DADestroy(
	(DA)PetscToPointer((da) ));
}
void PETSC_STDCALL   dagetislocaltoglobalmapping_(DA da,ISLocalToGlobalMapping *map, int *__ierr ){
*__ierr = DAGetISLocalToGlobalMapping(
	(DA)PetscToPointer((da) ),map);
}
void PETSC_STDCALL   dagetislocaltoglobalmappingblck_(DA da,ISLocalToGlobalMapping *map, int *__ierr ){
*__ierr = DAGetISLocalToGlobalMappingBlck(
	(DA)PetscToPointer((da) ),map);
}
#if defined(__cplusplus)
}
#endif
