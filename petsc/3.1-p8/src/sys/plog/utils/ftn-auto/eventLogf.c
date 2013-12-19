#include "petscsys.h"
#include "petscfix.h"
/* eventLog.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define eventregloggetevent_ EVENTREGLOGGETEVENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define eventregloggetevent_ eventregloggetevent
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   eventregloggetevent_(EventRegLog eventLog, char name[],PetscLogEvent *event, int *__ierr ){
*__ierr = EventRegLogGetEvent(
	(EventRegLog)PetscToPointer((eventLog) ),name,
	(PetscLogEvent* )PetscToPointer((event) ));
}
#if defined(__cplusplus)
}
#endif
