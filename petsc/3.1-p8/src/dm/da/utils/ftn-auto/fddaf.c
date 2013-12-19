#include "petscsys.h"
#include "petscfix.h"
/* fdda.c */
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
#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetmatpreallocateonly_ DASETMATPREALLOCATEONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetmatpreallocateonly_ dasetmatpreallocateonly
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetblockfills_ DASETBLOCKFILLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetblockfills_ dasetblockfills
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetcoloring_ DAGETCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetcoloring_ dagetcoloring
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetda_ MATSETDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetda_ matsetda
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dasetmatpreallocateonly_(DA da,PetscTruth *only, int *__ierr ){
*__ierr = DASetMatPreallocateOnly(
	(DA)PetscToPointer((da) ),*only);
}
void PETSC_STDCALL   dasetblockfills_(DA da,PetscInt *dfill,PetscInt *ofill, int *__ierr ){
*__ierr = DASetBlockFills(
	(DA)PetscToPointer((da) ),dfill,ofill);
}
void PETSC_STDCALL   dagetcoloring_(DA da,ISColoringType *ctype, MatType *mtype,ISColoring *coloring, int *__ierr ){
*__ierr = DAGetColoring(
	(DA)PetscToPointer((da) ),*ctype,*mtype,coloring);
}
void PETSC_STDCALL   matsetda_(Mat mat,DA da, int *__ierr ){
*__ierr = MatSetDA(
	(Mat)PetscToPointer((mat) ),
	(DA)PetscToPointer((da) ));
}
#if defined(__cplusplus)
}
#endif
