#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* plexdistribute.c */
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
#define dmplexsetadjacencyusecone_ DMPLEXSETADJACENCYUSECONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexsetadjacencyusecone_ dmplexsetadjacencyusecone
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexgetadjacencyusecone_ DMPLEXGETADJACENCYUSECONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexgetadjacencyusecone_ dmplexgetadjacencyusecone
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexsetadjacencyuseclosure_ DMPLEXSETADJACENCYUSECLOSURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexsetadjacencyuseclosure_ dmplexsetadjacencyuseclosure
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexgetadjacencyuseclosure_ DMPLEXGETADJACENCYUSECLOSURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexgetadjacencyuseclosure_ dmplexgetadjacencyuseclosure
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexgetadjacency_ DMPLEXGETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexgetadjacency_ dmplexgetadjacency
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexdistributefield_ DMPLEXDISTRIBUTEFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexdistributefield_ dmplexdistributefield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexdistributedata_ DMPLEXDISTRIBUTEDATA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexdistributedata_ dmplexdistributedata
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmplexsetadjacencyusecone_(DM dm,PetscBool *useCone, int *__ierr ){
*__ierr = DMPlexSetAdjacencyUseCone(
	(DM)PetscToPointer((dm) ),*useCone);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexgetadjacencyusecone_(DM dm,PetscBool *useCone, int *__ierr ){
*__ierr = DMPlexGetAdjacencyUseCone(
	(DM)PetscToPointer((dm) ),useCone);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexsetadjacencyuseclosure_(DM dm,PetscBool *useClosure, int *__ierr ){
*__ierr = DMPlexSetAdjacencyUseClosure(
	(DM)PetscToPointer((dm) ),*useClosure);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexgetadjacencyuseclosure_(DM dm,PetscBool *useClosure, int *__ierr ){
*__ierr = DMPlexGetAdjacencyUseClosure(
	(DM)PetscToPointer((dm) ),useClosure);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexgetadjacency_(DM dm,PetscInt *p,PetscInt *adjSize,PetscInt *adj[], int *__ierr ){
*__ierr = DMPlexGetAdjacency(
	(DM)PetscToPointer((dm) ),*p,adjSize,adj);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexdistributefield_(DM dm,PetscSF pointSF,PetscSection originalSection,Vec originalVec,PetscSection newSection,Vec newVec, int *__ierr ){
*__ierr = DMPlexDistributeField(
	(DM)PetscToPointer((dm) ),
	(PetscSF)PetscToPointer((pointSF) ),
	(PetscSection)PetscToPointer((originalSection) ),
	(Vec)PetscToPointer((originalVec) ),
	(PetscSection)PetscToPointer((newSection) ),
	(Vec)PetscToPointer((newVec) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexdistributedata_(DM dm,PetscSF pointSF,PetscSection originalSection,MPI_Fint * datatype,void*originalData,PetscSection newSection,void**newData, int *__ierr ){
*__ierr = DMPlexDistributeData(
	(DM)PetscToPointer((dm) ),
	(PetscSF)PetscToPointer((pointSF) ),
	(PetscSection)PetscToPointer((originalSection) ),
	MPI_Type_f2c( *(datatype) ),originalData,
	(PetscSection)PetscToPointer((newSection) ),newData);
}
#if defined(__cplusplus)
}
#endif
