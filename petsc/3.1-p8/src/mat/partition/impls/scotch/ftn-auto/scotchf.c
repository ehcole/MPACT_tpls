#include "petscsys.h"
#include "petscfix.h"
/* scotch.c */
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
#define matpartitioningscotchsetglobal_ MATPARTITIONINGSCOTCHSETGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningscotchsetglobal_ matpartitioningscotchsetglobal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningscotchsetcoarselevel_ MATPARTITIONINGSCOTCHSETCOARSELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningscotchsetcoarselevel_ matpartitioningscotchsetcoarselevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningscotchsetlocal_ MATPARTITIONINGSCOTCHSETLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningscotchsetlocal_ matpartitioningscotchsetlocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningscotchsetmultilevel_ MATPARTITIONINGSCOTCHSETMULTILEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningscotchsetmultilevel_ matpartitioningscotchsetmultilevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matpartitioningscotchsetmapping_ MATPARTITIONINGSCOTCHSETMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matpartitioningscotchsetmapping_ matpartitioningscotchsetmapping
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   matpartitioningscotchsetglobal_(MatPartitioning part,
    MPScotchGlobalType *global, int *__ierr ){
*__ierr = MatPartitioningScotchSetGlobal(
	(MatPartitioning)PetscToPointer((part) ),*global);
}
void PETSC_STDCALL   matpartitioningscotchsetcoarselevel_(MatPartitioning part,PetscReal *level, int *__ierr ){
*__ierr = MatPartitioningScotchSetCoarseLevel(
	(MatPartitioning)PetscToPointer((part) ),*level);
}
void PETSC_STDCALL   matpartitioningscotchsetlocal_(MatPartitioning part,MPScotchLocalType *local, int *__ierr ){
*__ierr = MatPartitioningScotchSetLocal(
	(MatPartitioning)PetscToPointer((part) ),*local);
}
void PETSC_STDCALL   matpartitioningscotchsetmultilevel_(MatPartitioning part, int *__ierr ){
*__ierr = MatPartitioningScotchSetMultilevel(
	(MatPartitioning)PetscToPointer((part) ));
}
void PETSC_STDCALL   matpartitioningscotchsetmapping_(MatPartitioning part, int *__ierr ){
*__ierr = MatPartitioningScotchSetMapping(
	(MatPartitioning)PetscToPointer((part) ));
}
#if defined(__cplusplus)
}
#endif
