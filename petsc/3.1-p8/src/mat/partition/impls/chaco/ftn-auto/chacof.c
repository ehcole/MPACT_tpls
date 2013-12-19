#include "petscsys.h"
#include "petscfix.h"
/* chaco.c */
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

#include "petscmat.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningchacosetglobal_ MATPARTITIONINGCHACOSETGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningchacosetglobal_ matpartitioningchacosetglobal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningchacosetlocal_ MATPARTITIONINGCHACOSETLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningchacosetlocal_ matpartitioningchacosetlocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningchacosetcoarselevel_ MATPARTITIONINGCHACOSETCOARSELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningchacosetcoarselevel_ matpartitioningchacosetcoarselevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningchacoseteigensolver_ MATPARTITIONINGCHACOSETEIGENSOLVER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningchacoseteigensolver_ matpartitioningchacoseteigensolver
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningchacoseteigentol_ MATPARTITIONINGCHACOSETEIGENTOL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningchacoseteigentol_ matpartitioningchacoseteigentol
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningchacoseteigennumber_ MATPARTITIONINGCHACOSETEIGENNUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningchacoseteigennumber_ matpartitioningchacoseteigennumber
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matpartitioningchacosetglobal_(MatPartitioning part,MPChacoGlobalType *method, int *__ierr ){
*__ierr = MatPartitioningChacoSetGlobal(
	(MatPartitioning)PetscToPointer((part) ),*method);
}
void PETSC_STDCALL   matpartitioningchacosetlocal_(MatPartitioning part,MPChacoLocalType *method, int *__ierr ){
*__ierr = MatPartitioningChacoSetLocal(
	(MatPartitioning)PetscToPointer((part) ),*method);
}
void PETSC_STDCALL   matpartitioningchacosetcoarselevel_(MatPartitioning part,PetscReal *level, int *__ierr ){
*__ierr = MatPartitioningChacoSetCoarseLevel(
	(MatPartitioning)PetscToPointer((part) ),*level);
}
void PETSC_STDCALL   matpartitioningchacoseteigensolver_(MatPartitioning part,
    MPChacoEigenType *method, int *__ierr ){
*__ierr = MatPartitioningChacoSetEigenSolver(
	(MatPartitioning)PetscToPointer((part) ),*method);
}
void PETSC_STDCALL   matpartitioningchacoseteigentol_(MatPartitioning part,PetscReal *tol, int *__ierr ){
*__ierr = MatPartitioningChacoSetEigenTol(
	(MatPartitioning)PetscToPointer((part) ),*tol);
}
void PETSC_STDCALL   matpartitioningchacoseteigennumber_(MatPartitioning part,int *num, int *__ierr ){
*__ierr = MatPartitioningChacoSetEigenNumber(
	(MatPartitioning)PetscToPointer((part) ),*num);
}
#if defined(__cplusplus)
}
#endif
