#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* bddc.c */
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

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetchangeofbasislocalmat_ PCBDDCSETCHANGEOFBASISLOCALMAT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetchangeofbasislocalmat_ pcbddcsetchangeofbasislocalmat
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetprimalverticeslocalis_ PCBDDCSETPRIMALVERTICESLOCALIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetprimalverticeslocalis_ pcbddcsetprimalverticeslocalis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetcoarseningratio_ PCBDDCSETCOARSENINGRATIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetcoarseningratio_ pcbddcsetcoarseningratio
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetlevels_ PCBDDCSETLEVELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetlevels_ pcbddcsetlevels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetnullspace_ PCBDDCSETNULLSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetnullspace_ pcbddcsetnullspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetdirichletboundaries_ PCBDDCSETDIRICHLETBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetdirichletboundaries_ pcbddcsetdirichletboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetdirichletboundarieslocal_ PCBDDCSETDIRICHLETBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetdirichletboundarieslocal_ pcbddcsetdirichletboundarieslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetneumannboundaries_ PCBDDCSETNEUMANNBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetneumannboundaries_ pcbddcsetneumannboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetneumannboundarieslocal_ PCBDDCSETNEUMANNBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetneumannboundarieslocal_ pcbddcsetneumannboundarieslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcgetdirichletboundaries_ PCBDDCGETDIRICHLETBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcgetdirichletboundaries_ pcbddcgetdirichletboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcgetdirichletboundarieslocal_ PCBDDCGETDIRICHLETBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcgetdirichletboundarieslocal_ pcbddcgetdirichletboundarieslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcgetneumannboundaries_ PCBDDCGETNEUMANNBOUNDARIES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcgetneumannboundaries_ pcbddcgetneumannboundaries
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcgetneumannboundarieslocal_ PCBDDCGETNEUMANNBOUNDARIESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcgetneumannboundarieslocal_ pcbddcgetneumannboundarieslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetlocaladjacencygraph_ PCBDDCSETLOCALADJACENCYGRAPH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetlocaladjacencygraph_ pcbddcsetlocaladjacencygraph
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetdofssplittinglocal_ PCBDDCSETDOFSSPLITTINGLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetdofssplittinglocal_ pcbddcsetdofssplittinglocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcsetdofssplitting_ PCBDDCSETDOFSSPLITTING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcsetdofssplitting_ pcbddcsetdofssplitting
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcmatfetidpgetrhs_ PCBDDCMATFETIDPGETRHS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcmatfetidpgetrhs_ pcbddcmatfetidpgetrhs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddcmatfetidpgetsolution_ PCBDDCMATFETIDPGETSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddcmatfetidpgetsolution_ pcbddcmatfetidpgetsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcbddccreatefetidpoperators_ PCBDDCCREATEFETIDPOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcbddccreatefetidpoperators_ pcbddccreatefetidpoperators
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetchangeofbasislocalmat_(PC pc,Mat change, int *__ierr ){
*__ierr = PCBDDCSetChangeOfBasisLocalMat(
	(PC)PetscToPointer((pc) ),
	(Mat)PetscToPointer((change) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetprimalverticeslocalis_(PC pc,IS PrimalVertices, int *__ierr ){
*__ierr = PCBDDCSetPrimalVerticesLocalIS(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((PrimalVertices) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetcoarseningratio_(PC pc,PetscInt *k, int *__ierr ){
*__ierr = PCBDDCSetCoarseningRatio(
	(PC)PetscToPointer((pc) ),*k);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetlevels_(PC pc,PetscInt *levels, int *__ierr ){
*__ierr = PCBDDCSetLevels(
	(PC)PetscToPointer((pc) ),*levels);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetnullspace_(PC pc,MatNullSpace NullSpace, int *__ierr ){
*__ierr = PCBDDCSetNullSpace(
	(PC)PetscToPointer((pc) ),
	(MatNullSpace)PetscToPointer((NullSpace) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetdirichletboundaries_(PC pc,IS DirichletBoundaries, int *__ierr ){
*__ierr = PCBDDCSetDirichletBoundaries(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((DirichletBoundaries) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetdirichletboundarieslocal_(PC pc,IS DirichletBoundaries, int *__ierr ){
*__ierr = PCBDDCSetDirichletBoundariesLocal(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((DirichletBoundaries) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetneumannboundaries_(PC pc,IS NeumannBoundaries, int *__ierr ){
*__ierr = PCBDDCSetNeumannBoundaries(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((NeumannBoundaries) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetneumannboundarieslocal_(PC pc,IS NeumannBoundaries, int *__ierr ){
*__ierr = PCBDDCSetNeumannBoundariesLocal(
	(PC)PetscToPointer((pc) ),
	(IS)PetscToPointer((NeumannBoundaries) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcgetdirichletboundaries_(PC pc,IS *DirichletBoundaries, int *__ierr ){
*__ierr = PCBDDCGetDirichletBoundaries(
	(PC)PetscToPointer((pc) ),DirichletBoundaries);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcgetdirichletboundarieslocal_(PC pc,IS *DirichletBoundaries, int *__ierr ){
*__ierr = PCBDDCGetDirichletBoundariesLocal(
	(PC)PetscToPointer((pc) ),DirichletBoundaries);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcgetneumannboundaries_(PC pc,IS *NeumannBoundaries, int *__ierr ){
*__ierr = PCBDDCGetNeumannBoundaries(
	(PC)PetscToPointer((pc) ),NeumannBoundaries);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcgetneumannboundarieslocal_(PC pc,IS *NeumannBoundaries, int *__ierr ){
*__ierr = PCBDDCGetNeumannBoundariesLocal(
	(PC)PetscToPointer((pc) ),NeumannBoundaries);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetlocaladjacencygraph_(PC pc,PetscInt *nvtxs, PetscInt xadj[], PetscInt adjncy[],PetscCopyMode *copymode, int *__ierr ){
*__ierr = PCBDDCSetLocalAdjacencyGraph(
	(PC)PetscToPointer((pc) ),*nvtxs,xadj,adjncy,*copymode);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetdofssplittinglocal_(PC pc,PetscInt *n_is,IS ISForDofs[], int *__ierr ){
*__ierr = PCBDDCSetDofsSplittingLocal(
	(PC)PetscToPointer((pc) ),*n_is,ISForDofs);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcsetdofssplitting_(PC pc,PetscInt *n_is,IS ISForDofs[], int *__ierr ){
*__ierr = PCBDDCSetDofsSplitting(
	(PC)PetscToPointer((pc) ),*n_is,ISForDofs);
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcmatfetidpgetrhs_(Mat fetidp_mat,Vec standard_rhs,Vec fetidp_flux_rhs, int *__ierr ){
*__ierr = PCBDDCMatFETIDPGetRHS(
	(Mat)PetscToPointer((fetidp_mat) ),
	(Vec)PetscToPointer((standard_rhs) ),
	(Vec)PetscToPointer((fetidp_flux_rhs) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddcmatfetidpgetsolution_(Mat fetidp_mat,Vec fetidp_flux_sol,Vec standard_sol, int *__ierr ){
*__ierr = PCBDDCMatFETIDPGetSolution(
	(Mat)PetscToPointer((fetidp_mat) ),
	(Vec)PetscToPointer((fetidp_flux_sol) ),
	(Vec)PetscToPointer((standard_sol) ));
}
PETSC_EXTERN void PETSC_STDCALL  pcbddccreatefetidpoperators_(PC pc,Mat *fetidp_mat,PC *fetidp_pc, int *__ierr ){
*__ierr = PCBDDCCreateFETIDPOperators(
	(PC)PetscToPointer((pc) ),fetidp_mat,fetidp_pc);
}
#if defined(__cplusplus)
}
#endif
