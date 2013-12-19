#include "petscsys.h"
#include "petscfix.h"
/* mesh.c */
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

#include "petscmesh.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define meshdestroy_ MESHDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define meshdestroy_ meshdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define meshcreatevector_ MESHCREATEVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define meshcreatevector_ meshcreatevector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define meshcreateglobalscatter_ MESHCREATEGLOBALSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define meshcreateglobalscatter_ meshcreateglobalscatter
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define meshsetmaxdof_ MESHSETMAXDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define meshsetmaxdof_ meshsetmaxdof
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define assemblematrix_ ASSEMBLEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define assemblematrix_ assemblematrix
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   meshdestroy_(Mesh mesh, int *__ierr ){
*__ierr = MeshDestroy(
	(Mesh)PetscToPointer((mesh) ));
}
void PETSC_STDCALL   meshcreatevector_(Mesh mesh,SectionReal *section,Vec *vec, int *__ierr ){
*__ierr = MeshCreateVector(
	(Mesh)PetscToPointer((mesh) ),*section,vec);
}
void PETSC_STDCALL   meshcreateglobalscatter_(Mesh mesh,SectionReal *section,VecScatter *scatter, int *__ierr ){
*__ierr = MeshCreateGlobalScatter(
	(Mesh)PetscToPointer((mesh) ),*section,scatter);
}
void PETSC_STDCALL  meshsetmaxdof_(Mesh mesh,PetscInt *maxDof, int *__ierr ){
*__ierr = MeshSetMaxDof(
	(Mesh)PetscToPointer((mesh) ),*maxDof);
}
void PETSC_STDCALL  assemblematrix_(Mat A,Mesh mesh,SectionReal *section,PetscInt *e,PetscScalar v[],InsertMode *mode, int *__ierr ){
*__ierr = assembleMatrix(
	(Mat)PetscToPointer((A) ),
	(Mesh)PetscToPointer((mesh) ),*section,*e,v,*mode);
}
#if defined(__cplusplus)
}
#endif
