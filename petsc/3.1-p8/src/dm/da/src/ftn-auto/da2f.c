#include "petscsys.h"
#include "petscfix.h"
/* da2.c */
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
#define daformfunction_ DAFORMFUNCTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daformfunction_ daformfunction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daformfunction1_ DAFORMFUNCTION1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daformfunction1_ daformfunction1
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daformfunctioni1_ DAFORMFUNCTIONI1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daformfunctioni1_ daformfunctioni1
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define daformfunctionib1_ DAFORMFUNCTIONIB1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define daformfunctionib1_ daformfunctionib1
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacomputejacobian1_ DACOMPUTEJACOBIAN1
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacomputejacobian1_ dacomputejacobian1
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   daformfunction_(DA da,PetscErrorCode (*lf)(void),Vec vu,Vec vfu,void*w, int *__ierr ){
*__ierr = DAFormFunction(
	(DA)PetscToPointer((da) ),lf,
	(Vec)PetscToPointer((vu) ),
	(Vec)PetscToPointer((vfu) ),w);
}
void PETSC_STDCALL   daformfunction1_(DA da,Vec vu,Vec vfu,void*w, int *__ierr ){
*__ierr = DAFormFunction1(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((vu) ),
	(Vec)PetscToPointer((vfu) ),w);
}
void PETSC_STDCALL   daformfunctioni1_(DA da,PetscInt *i,Vec vu,PetscScalar *vfu,void*w, int *__ierr ){
*__ierr = DAFormFunctioni1(
	(DA)PetscToPointer((da) ),*i,
	(Vec)PetscToPointer((vu) ),vfu,w);
}
void PETSC_STDCALL   daformfunctionib1_(DA da,PetscInt *i,Vec vu,PetscScalar *vfu,void*w, int *__ierr ){
*__ierr = DAFormFunctionib1(
	(DA)PetscToPointer((da) ),*i,
	(Vec)PetscToPointer((vu) ),vfu,w);
}
void PETSC_STDCALL   dacomputejacobian1_(DA da,Vec vu,Mat J,void*w, int *__ierr ){
*__ierr = DAComputeJacobian1(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((vu) ),
	(Mat)PetscToPointer((J) ),w);
}
#if defined(__cplusplus)
}
#endif
