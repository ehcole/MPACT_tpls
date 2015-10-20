#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* plexfem.c */
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
#define dmplexcomputeintegralfem_ DMPLEXCOMPUTEINTEGRALFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcomputeintegralfem_ dmplexcomputeintegralfem
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexsnescomputeresidualfem_ DMPLEXSNESCOMPUTERESIDUALFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexsnescomputeresidualfem_ dmplexsnescomputeresidualfem
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplextscomputeifunctionfem_ DMPLEXTSCOMPUTEIFUNCTIONFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplextscomputeifunctionfem_ dmplextscomputeifunctionfem
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexsnescomputejacobianfem_ DMPLEXSNESCOMPUTEJACOBIANFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexsnescomputejacobianfem_ dmplexsnescomputejacobianfem
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcomputeinterpolatorfem_ DMPLEXCOMPUTEINTERPOLATORFEM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcomputeinterpolatorfem_ dmplexcomputeinterpolatorfem
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmplexcomputeintegralfem_(DM dm,Vec X,PetscReal *integral,void*user, int *__ierr ){
*__ierr = DMPlexComputeIntegralFEM(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((X) ),integral,user);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexsnescomputeresidualfem_(DM dm,Vec X,Vec F,void*user, int *__ierr ){
*__ierr = DMPlexSNESComputeResidualFEM(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((F) ),user);
}
PETSC_EXTERN void PETSC_STDCALL  dmplextscomputeifunctionfem_(DM dm,PetscReal *time,Vec X,Vec X_t,Vec F,void*user, int *__ierr ){
*__ierr = DMPlexTSComputeIFunctionFEM(
	(DM)PetscToPointer((dm) ),*time,
	(Vec)PetscToPointer((X) ),
	(Vec)PetscToPointer((X_t) ),
	(Vec)PetscToPointer((F) ),user);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexsnescomputejacobianfem_(DM dm,Vec X,Mat Jac,Mat JacP,void*user, int *__ierr ){
*__ierr = DMPlexSNESComputeJacobianFEM(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((X) ),
	(Mat)PetscToPointer((Jac) ),
	(Mat)PetscToPointer((JacP) ),user);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcomputeinterpolatorfem_(DM dmc,DM dmf,Mat In,void*user, int *__ierr ){
*__ierr = DMPlexComputeInterpolatorFEM(
	(DM)PetscToPointer((dmc) ),
	(DM)PetscToPointer((dmf) ),
	(Mat)PetscToPointer((In) ),user);
}
#if defined(__cplusplus)
}
#endif
