#include "petscsys.h"
#include "petscfix.h"
/* block.c */
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
#define iscreateblock_ ISCREATEBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define iscreateblock_ iscreateblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isblockgetblocksize_ ISBLOCKGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isblockgetblocksize_ isblockgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isblock_ ISBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isblock_ isblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isblockgetlocalsize_ ISBLOCKGETLOCALSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isblockgetlocalsize_ isblockgetlocalsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isblockgetsize_ ISBLOCKGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isblockgetsize_ isblockgetsize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   iscreateblock_(MPI_Fint * comm,PetscInt *bs,PetscInt *n, PetscInt idx[],IS *is, int *__ierr ){
*__ierr = ISCreateBlock(
	MPI_Comm_f2c( *(comm) ),*bs,*n,idx,is);
}
void PETSC_STDCALL   isblockgetblocksize_(IS is,PetscInt *size, int *__ierr ){
*__ierr = ISBlockGetBlockSize(
	(IS)PetscToPointer((is) ),size);
}
void PETSC_STDCALL   isblock_(IS is,PetscTruth *flag, int *__ierr ){
*__ierr = ISBlock(
	(IS)PetscToPointer((is) ),flag);
}
void PETSC_STDCALL   isblockgetlocalsize_(IS is,PetscInt *size, int *__ierr ){
*__ierr = ISBlockGetLocalSize(
	(IS)PetscToPointer((is) ),size);
}
void PETSC_STDCALL   isblockgetsize_(IS is,PetscInt *size, int *__ierr ){
*__ierr = ISBlockGetSize(
	(IS)PetscToPointer((is) ),size);
}
#if defined(__cplusplus)
}
#endif
