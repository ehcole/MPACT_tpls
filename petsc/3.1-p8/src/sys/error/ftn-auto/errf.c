#include "petscsys.h"
#include "petscfix.h"
/* err.c */
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
#define petscpoperrorhandler_ PETSCPOPERRORHANDLER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscpoperrorhandler_ petscpoperrorhandler
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscerrorsetcatchable_ PETSCERRORSETCATCHABLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscerrorsetcatchable_ petscerrorsetcatchable
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscexceptionpush_ PETSCEXCEPTIONPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscexceptionpush_ petscexceptionpush
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscexceptionpop_ PETSCEXCEPTIONPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscexceptionpop_ petscexceptionpop
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscpoperrorhandler_(int *__ierr ){
*__ierr = PetscPopErrorHandler();
}
void PETSC_STDCALL   petscerrorsetcatchable_(PetscErrorCode *err,PetscTruth *flg, int *__ierr ){
*__ierr = PetscErrorSetCatchable(*err,*flg);
}
void PETSC_STDCALL   petscexceptionpush_(PetscErrorCode *err, int *__ierr ){
*__ierr = PetscExceptionPush(*err);
}
void PETSC_STDCALL   petscexceptionpop_(PetscErrorCode *err, int *__ierr ){
*__ierr = PetscExceptionPop(*err);
}
#if defined(__cplusplus)
}
#endif
