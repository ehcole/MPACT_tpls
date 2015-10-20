#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* plexcreate.c */
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
#define dmplexcreatedoublet_ DMPLEXCREATEDOUBLET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatedoublet_ dmplexcreatedoublet
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatesquareboundary_ DMPLEXCREATESQUAREBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatesquareboundary_ dmplexcreatesquareboundary
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatecubeboundary_ DMPLEXCREATECUBEBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatecubeboundary_ dmplexcreatecubeboundary
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatesquaremesh_ DMPLEXCREATESQUAREMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatesquaremesh_ dmplexcreatesquaremesh
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreateboxmesh_ DMPLEXCREATEBOXMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreateboxmesh_ dmplexcreateboxmesh
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatehexboxmesh_ DMPLEXCREATEHEXBOXMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatehexboxmesh_ dmplexcreatehexboxmesh
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreate_ DMPLEXCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreate_ dmplexcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatefromdag_ DMPLEXCREATEFROMDAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatefromdag_ dmplexcreatefromdag
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatedoublet_(MPI_Fint * comm,PetscInt *dim,PetscBool *simplex,PetscBool *interpolate,PetscBool *refinementUniform,PetscReal *refinementLimit,DM *newdm, int *__ierr ){
*__ierr = DMPlexCreateDoublet(
	MPI_Comm_f2c( *(comm) ),*dim,*simplex,*interpolate,*refinementUniform,*refinementLimit,newdm);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatesquareboundary_(DM dm, PetscReal lower[], PetscReal upper[], PetscInt edges[], int *__ierr ){
*__ierr = DMPlexCreateSquareBoundary(
	(DM)PetscToPointer((dm) ),lower,upper,edges);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatecubeboundary_(DM dm, PetscReal lower[], PetscReal upper[], PetscInt faces[], int *__ierr ){
*__ierr = DMPlexCreateCubeBoundary(
	(DM)PetscToPointer((dm) ),lower,upper,faces);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatesquaremesh_(DM dm, PetscReal lower[], PetscReal upper[], PetscInt edges[],DMBoundaryType *bdX,DMBoundaryType *bdY, int *__ierr ){
*__ierr = DMPlexCreateSquareMesh(
	(DM)PetscToPointer((dm) ),lower,upper,edges,*bdX,*bdY);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreateboxmesh_(MPI_Fint * comm,PetscInt *dim,PetscBool *interpolate,DM *dm, int *__ierr ){
*__ierr = DMPlexCreateBoxMesh(
	MPI_Comm_f2c( *(comm) ),*dim,*interpolate,dm);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatehexboxmesh_(MPI_Fint * comm,PetscInt *dim, PetscInt cells[],DMBoundaryType *periodicX,DMBoundaryType *periodicY,DMBoundaryType *periodicZ,DM *dm, int *__ierr ){
*__ierr = DMPlexCreateHexBoxMesh(
	MPI_Comm_f2c( *(comm) ),*dim,cells,*periodicX,*periodicY,*periodicZ,dm);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreate_(MPI_Fint * comm,DM *mesh, int *__ierr ){
*__ierr = DMPlexCreate(
	MPI_Comm_f2c( *(comm) ),mesh);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatefromdag_(DM dm,PetscInt *depth, PetscInt numPoints[], PetscInt coneSize[], PetscInt cones[], PetscInt coneOrientations[], PetscScalar vertexCoords[], int *__ierr ){
*__ierr = DMPlexCreateFromDAG(
	(DM)PetscToPointer((dm) ),*depth,numPoints,coneSize,cones,coneOrientations,vertexCoords);
}
#if defined(__cplusplus)
}
#endif
