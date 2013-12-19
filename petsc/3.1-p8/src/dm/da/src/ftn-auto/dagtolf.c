#include "petscsys.h"
#include "petscfix.h"
/* dagtol.c */
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
#define daglobaltolocalbegin_ DAGLOBALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daglobaltolocalbegin_ daglobaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dalocaltoglobalbegin_ DALOCALTOGLOBALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dalocaltoglobalbegin_ dalocaltoglobalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dalocaltoglobalend_ DALOCALTOGLOBALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dalocaltoglobalend_ dalocaltoglobalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daglobaltolocalend_ DAGLOBALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daglobaltolocalend_ daglobaltolocalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daglobaltonaturalbegin_ DAGLOBALTONATURALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daglobaltonaturalbegin_ daglobaltonaturalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daglobaltonaturalend_ DAGLOBALTONATURALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daglobaltonaturalend_ daglobaltonaturalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define danaturaltoglobalbegin_ DANATURALTOGLOBALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define danaturaltoglobalbegin_ danaturaltoglobalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define danaturaltoglobalend_ DANATURALTOGLOBALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define danaturaltoglobalend_ danaturaltoglobalend
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   daglobaltolocalbegin_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DAGlobalToLocalBegin(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   dalocaltoglobalbegin_(DA da,Vec l,Vec g, int *__ierr ){
*__ierr = DALocalToGlobalBegin(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((l) ),
	(Vec)PetscToPointer((g) ));
}
void PETSC_STDCALL   dalocaltoglobalend_(DA da,Vec l,Vec g, int *__ierr ){
*__ierr = DALocalToGlobalEnd(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((l) ),
	(Vec)PetscToPointer((g) ));
}
void PETSC_STDCALL   daglobaltolocalend_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DAGlobalToLocalEnd(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   daglobaltonaturalbegin_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DAGlobalToNaturalBegin(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   daglobaltonaturalend_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DAGlobalToNaturalEnd(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   danaturaltoglobalbegin_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DANaturalToGlobalBegin(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
void PETSC_STDCALL   danaturaltoglobalend_(DA da,Vec g,InsertMode *mode,Vec l, int *__ierr ){
*__ierr = DANaturalToGlobalEnd(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
#if defined(__cplusplus)
}
#endif
