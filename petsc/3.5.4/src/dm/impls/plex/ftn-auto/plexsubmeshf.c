#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* plexsubmesh.c */
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
#define dmplexmarkboundaryfaces_ DMPLEXMARKBOUNDARYFACES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexmarkboundaryfaces_ dmplexmarkboundaryfaces
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexlabelcomplete_ DMPLEXLABELCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexlabelcomplete_ dmplexlabelcomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexlabeladdcells_ DMPLEXLABELADDCELLS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexlabeladdcells_ dmplexlabeladdcells
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexlabelcohesivecomplete_ DMPLEXLABELCOHESIVECOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexlabelcohesivecomplete_ dmplexlabelcohesivecomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatesubmesh_ DMPLEXCREATESUBMESH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatesubmesh_ dmplexcreatesubmesh
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexgetsubpointmap_ DMPLEXGETSUBPOINTMAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexgetsubpointmap_ dmplexgetsubpointmap
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcreatesubpointis_ DMPLEXCREATESUBPOINTIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcreatesubpointis_ dmplexcreatesubpointis
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmplexmarkboundaryfaces_(DM dm,DMLabel label, int *__ierr ){
*__ierr = DMPlexMarkBoundaryFaces(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexlabelcomplete_(DM dm,DMLabel label, int *__ierr ){
*__ierr = DMPlexLabelComplete(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexlabeladdcells_(DM dm,DMLabel label, int *__ierr ){
*__ierr = DMPlexLabelAddCells(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexlabelcohesivecomplete_(DM dm,DMLabel label,DMLabel blabel,PetscBool *flip,DM subdm, int *__ierr ){
*__ierr = DMPlexLabelCohesiveComplete(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ),
	(DMLabel)PetscToPointer((blabel) ),*flip,
	(DM)PetscToPointer((subdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatesubmesh_(DM dm,DMLabel vertexLabel,PetscInt *value,DM *subdm, int *__ierr ){
*__ierr = DMPlexCreateSubmesh(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((vertexLabel) ),*value,subdm);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexgetsubpointmap_(DM dm,DMLabel *subpointMap, int *__ierr ){
*__ierr = DMPlexGetSubpointMap(
	(DM)PetscToPointer((dm) ),subpointMap);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcreatesubpointis_(DM dm,IS *subpointIS, int *__ierr ){
*__ierr = DMPlexCreateSubpointIS(
	(DM)PetscToPointer((dm) ),subpointIS);
}
#if defined(__cplusplus)
}
#endif
