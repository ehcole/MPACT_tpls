#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* plexrefine.c */
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

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscdmplex.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatecoarsepointis_ DMPLEXCREATECOARSEPOINTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatecoarsepointis_ dmplexcreatecoarsepointis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexsetrefinementuniform_ DMPLEXSETREFINEMENTUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexsetrefinementuniform_ dmplexsetrefinementuniform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexgetrefinementuniform_ DMPLEXGETREFINEMENTUNIFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexgetrefinementuniform_ dmplexgetrefinementuniform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexsetrefinementlimit_ DMPLEXSETREFINEMENTLIMIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexsetrefinementlimit_ dmplexsetrefinementlimit
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexgetrefinementlimit_ DMPLEXGETREFINEMENTLIMIT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexgetrefinementlimit_ dmplexgetrefinementlimit
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatecoarsepointis_(DM dm,IS *fpointIS, int *__ierr ){
*__ierr = DMPlexCreateCoarsePointIS(
	(DM)PetscToPointer((dm) ),fpointIS);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexsetrefinementuniform_(DM dm,PetscBool *refinementUniform, int *__ierr ){
*__ierr = DMPlexSetRefinementUniform(
	(DM)PetscToPointer((dm) ),*refinementUniform);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexgetrefinementuniform_(DM dm,PetscBool *refinementUniform, int *__ierr ){
*__ierr = DMPlexGetRefinementUniform(
	(DM)PetscToPointer((dm) ),refinementUniform);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexsetrefinementlimit_(DM dm,PetscReal *refinementLimit, int *__ierr ){
*__ierr = DMPlexSetRefinementLimit(
	(DM)PetscToPointer((dm) ),*refinementLimit);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexgetrefinementlimit_(DM dm,PetscReal *refinementLimit, int *__ierr ){
*__ierr = DMPlexGetRefinementLimit(
	(DM)PetscToPointer((dm) ),refinementLimit);
}
#if defined(__cplusplus)
}
#endif
