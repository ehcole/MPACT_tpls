#include "petscsys.h"
#include "petscfix.h"
/* da.c */
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

#include "petscda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetdim_ DASETDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetdim_ dasetdim
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetsizes_ DASETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetsizes_ dasetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetnumprocs_ DASETNUMPROCS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetnumprocs_ dasetnumprocs
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetperiodicity_ DASETPERIODICITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetperiodicity_ dasetperiodicity
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetdof_ DASETDOF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetdof_ dasetdof
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetstenciltype_ DASETSTENCILTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetstenciltype_ dasetstenciltype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetstencilwidth_ DASETSTENCILWIDTH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetstencilwidth_ dasetstencilwidth
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetvertexdivision_ DASETVERTEXDIVISION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetvertexdivision_ dasetvertexdivision
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetinterpolationtype_ DASETINTERPOLATIONTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetinterpolationtype_ dasetinterpolationtype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dasetrefinementfactor_ DASETREFINEMENTFACTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetrefinementfactor_ dasetrefinementfactor
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define darefine_ DAREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define darefine_ darefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacoarsen_ DACOARSEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacoarsen_ dacoarsen
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define darefinehierarchy_ DAREFINEHIERARCHY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define darefinehierarchy_ darefinehierarchy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dacoarsenhierarchy_ DACOARSENHIERARCHY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dacoarsenhierarchy_ dacoarsenhierarchy
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dasetdim_(DA da,PetscInt *dim, int *__ierr ){
*__ierr = DASetDim(
	(DA)PetscToPointer((da) ),*dim);
}
void PETSC_STDCALL   dasetsizes_(DA da,PetscInt *M,PetscInt *N,PetscInt *P, int *__ierr ){
*__ierr = DASetSizes(
	(DA)PetscToPointer((da) ),*M,*N,*P);
}
void PETSC_STDCALL   dasetnumprocs_(DA da,PetscInt *m,PetscInt *n,PetscInt *p, int *__ierr ){
*__ierr = DASetNumProcs(
	(DA)PetscToPointer((da) ),*m,*n,*p);
}
void PETSC_STDCALL   dasetperiodicity_(DA da,DAPeriodicType *ptype, int *__ierr ){
*__ierr = DASetPeriodicity(
	(DA)PetscToPointer((da) ),*ptype);
}
void PETSC_STDCALL   dasetdof_(DA da,int *dof, int *__ierr ){
*__ierr = DASetDof(
	(DA)PetscToPointer((da) ),*dof);
}
void PETSC_STDCALL   dasetstenciltype_(DA da,DAStencilType *stype, int *__ierr ){
*__ierr = DASetStencilType(
	(DA)PetscToPointer((da) ),*stype);
}
void PETSC_STDCALL   dasetstencilwidth_(DA da,int *width, int *__ierr ){
*__ierr = DASetStencilWidth(
	(DA)PetscToPointer((da) ),*width);
}
void PETSC_STDCALL   dasetvertexdivision_(DA da, PetscInt lx[], PetscInt ly[], PetscInt lz[], int *__ierr ){
*__ierr = DASetVertexDivision(
	(DA)PetscToPointer((da) ),lx,ly,lz);
}
void PETSC_STDCALL   dasetinterpolationtype_(DA da,DAInterpolationType *ctype, int *__ierr ){
*__ierr = DASetInterpolationType(
	(DA)PetscToPointer((da) ),*ctype);
}
void PETSC_STDCALL   dasetrefinementfactor_(DA da,PetscInt *refine_x,PetscInt *refine_y,PetscInt *refine_z, int *__ierr ){
*__ierr = DASetRefinementFactor(
	(DA)PetscToPointer((da) ),*refine_x,*refine_y,*refine_z);
}
void PETSC_STDCALL   darefine_(DA da,MPI_Fint * comm,DA *daref, int *__ierr ){
*__ierr = DARefine(
	(DA)PetscToPointer((da) ),
	MPI_Comm_f2c( *(comm) ),daref);
}
void PETSC_STDCALL   dacoarsen_(DA da,MPI_Fint * comm,DA *daref, int *__ierr ){
*__ierr = DACoarsen(
	(DA)PetscToPointer((da) ),
	MPI_Comm_f2c( *(comm) ),daref);
}
void PETSC_STDCALL   darefinehierarchy_(DA da,PetscInt *nlevels,DA daf[], int *__ierr ){
*__ierr = DARefineHierarchy(
	(DA)PetscToPointer((da) ),*nlevels,daf);
}
void PETSC_STDCALL   dacoarsenhierarchy_(DA da,PetscInt *nlevels,DA dac[], int *__ierr ){
*__ierr = DACoarsenHierarchy(
	(DA)PetscToPointer((da) ),*nlevels,dac);
}
#if defined(__cplusplus)
}
#endif
