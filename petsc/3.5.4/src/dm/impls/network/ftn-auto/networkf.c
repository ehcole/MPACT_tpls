#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* network.c */
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

#include "petscdmnetwork.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworksetsizes_ DMNETWORKSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworksetsizes_ dmnetworksetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworksetedgelist_ DMNETWORKSETEDGELIST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworksetedgelist_ dmnetworksetedgelist
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworklayoutsetup_ DMNETWORKLAYOUTSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworklayoutsetup_ dmnetworklayoutsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkregistercomponent_ DMNETWORKREGISTERCOMPONENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkregistercomponent_ dmnetworkregistercomponent
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkgetvertexrange_ DMNETWORKGETVERTEXRANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkgetvertexrange_ dmnetworkgetvertexrange
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkgetedgerange_ DMNETWORKGETEDGERANGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkgetedgerange_ dmnetworkgetedgerange
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkaddcomponent_ DMNETWORKADDCOMPONENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkaddcomponent_ dmnetworkaddcomponent
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkgetnumcomponents_ DMNETWORKGETNUMCOMPONENTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkgetnumcomponents_ dmnetworkgetnumcomponents
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkgetcomponenttypeoffset_ DMNETWORKGETCOMPONENTTYPEOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkgetcomponenttypeoffset_ dmnetworkgetcomponenttypeoffset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkgetvariableoffset_ DMNETWORKGETVARIABLEOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkgetvariableoffset_ dmnetworkgetvariableoffset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkgetvariableglobaloffset_ DMNETWORKGETVARIABLEGLOBALOFFSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkgetvariableglobaloffset_ dmnetworkgetvariableglobaloffset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkaddnumvariables_ DMNETWORKADDNUMVARIABLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkaddnumvariables_ dmnetworkaddnumvariables
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworksetnumvariables_ DMNETWORKSETNUMVARIABLES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworksetnumvariables_ dmnetworksetnumvariables
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkdistribute_ DMNETWORKDISTRIBUTE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkdistribute_ dmnetworkdistribute
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmnetworkisghostvertex_ DMNETWORKISGHOSTVERTEX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmnetworkisghostvertex_ dmnetworkisghostvertex
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmnetworksetsizes_(DM dm,PetscInt *nV,PetscInt *nE,PetscInt *NV,PetscInt *NE, int *__ierr ){
*__ierr = DMNetworkSetSizes(
	(DM)PetscToPointer((dm) ),*nV,*nE,*NV,*NE);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworksetedgelist_(DM dm,int edgelist[], int *__ierr ){
*__ierr = DMNetworkSetEdgeList(
	(DM)PetscToPointer((dm) ),edgelist);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworklayoutsetup_(DM dm, int *__ierr ){
*__ierr = DMNetworkLayoutSetUp(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkregistercomponent_(DM dm, char *name,PetscInt *size,PetscInt *key, int *__ierr ){
*__ierr = DMNetworkRegisterComponent(
	(DM)PetscToPointer((dm) ),name,*size,key);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkgetvertexrange_(DM dm,PetscInt *vStart,PetscInt *vEnd, int *__ierr ){
*__ierr = DMNetworkGetVertexRange(
	(DM)PetscToPointer((dm) ),vStart,vEnd);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkgetedgerange_(DM dm,PetscInt *eStart,PetscInt *eEnd, int *__ierr ){
*__ierr = DMNetworkGetEdgeRange(
	(DM)PetscToPointer((dm) ),eStart,eEnd);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkaddcomponent_(DM dm,PetscInt *p,PetscInt *componentkey,void* compvalue, int *__ierr ){
*__ierr = DMNetworkAddComponent(
	(DM)PetscToPointer((dm) ),*p,*componentkey,compvalue);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkgetnumcomponents_(DM dm,PetscInt *p,PetscInt *numcomponents, int *__ierr ){
*__ierr = DMNetworkGetNumComponents(
	(DM)PetscToPointer((dm) ),*p,numcomponents);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkgetcomponenttypeoffset_(DM dm,PetscInt *p,PetscInt *compnum,PetscInt *compkey,PetscInt *offset, int *__ierr ){
*__ierr = DMNetworkGetComponentTypeOffset(
	(DM)PetscToPointer((dm) ),*p,*compnum,compkey,offset);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkgetvariableoffset_(DM dm,PetscInt *p,PetscInt *offset, int *__ierr ){
*__ierr = DMNetworkGetVariableOffset(
	(DM)PetscToPointer((dm) ),*p,offset);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkgetvariableglobaloffset_(DM dm,PetscInt *p,PetscInt *offsetg, int *__ierr ){
*__ierr = DMNetworkGetVariableGlobalOffset(
	(DM)PetscToPointer((dm) ),*p,offsetg);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkaddnumvariables_(DM dm,PetscInt *p,PetscInt *nvar, int *__ierr ){
*__ierr = DMNetworkAddNumVariables(
	(DM)PetscToPointer((dm) ),*p,*nvar);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworksetnumvariables_(DM dm,PetscInt *p,PetscInt *nvar, int *__ierr ){
*__ierr = DMNetworkSetNumVariables(
	(DM)PetscToPointer((dm) ),*p,*nvar);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkdistribute_(DM oldDM, char partitioner[],PetscInt *overlap,DM *distDM, int *__ierr ){
*__ierr = DMNetworkDistribute(
	(DM)PetscToPointer((oldDM) ),partitioner,*overlap,distDM);
}
PETSC_EXTERN void PETSC_STDCALL  dmnetworkisghostvertex_(DM dm,PetscInt *p,PetscBool *isghost, int *__ierr ){
*__ierr = DMNetworkIsGhostVertex(
	(DM)PetscToPointer((dm) ),*p,isghost);
}
#if defined(__cplusplus)
}
#endif
