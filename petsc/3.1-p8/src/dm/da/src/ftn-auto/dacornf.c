#include "petscsys.h"
#include "petscfix.h"
/* dacorn.c */
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
#define dasetcoordinates_ DASETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dasetcoordinates_ dasetcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetcoordinates_ DAGETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetcoordinates_ dagetcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetcoordinateda_ DAGETCOORDINATEDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetcoordinateda_ dagetcoordinateda
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetghostedcoordinates_ DAGETGHOSTEDCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetghostedcoordinates_ dagetghostedcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetcorners_ DAGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetcorners_ dagetcorners
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetlocalboundingbox_ DAGETLOCALBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetlocalboundingbox_ dagetlocalboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dagetboundingbox_ DAGETBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dagetboundingbox_ dagetboundingbox
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dasetcoordinates_(DA da,Vec c, int *__ierr ){
*__ierr = DASetCoordinates(
	(DA)PetscToPointer((da) ),
	(Vec)PetscToPointer((c) ));
}
void PETSC_STDCALL   dagetcoordinates_(DA da,Vec *c, int *__ierr ){
*__ierr = DAGetCoordinates(
	(DA)PetscToPointer((da) ),c);
}
void PETSC_STDCALL   dagetcoordinateda_(DA da,DA *cda, int *__ierr ){
*__ierr = DAGetCoordinateDA(
	(DA)PetscToPointer((da) ),cda);
}
void PETSC_STDCALL   dagetghostedcoordinates_(DA da,Vec *c, int *__ierr ){
*__ierr = DAGetGhostedCoordinates(
	(DA)PetscToPointer((da) ),c);
}
void PETSC_STDCALL   dagetcorners_(DA da,PetscInt *x,PetscInt *y,PetscInt *z,PetscInt *m,PetscInt *n,PetscInt *p, int *__ierr ){
*__ierr = DAGetCorners(
	(DA)PetscToPointer((da) ),x,y,z,m,n,p);
}
void PETSC_STDCALL   dagetlocalboundingbox_(DA da,PetscReal lmin[],PetscReal lmax[], int *__ierr ){
*__ierr = DAGetLocalBoundingBox(
	(DA)PetscToPointer((da) ),lmin,lmax);
}
void PETSC_STDCALL   dagetboundingbox_(DA da,PetscReal gmin[],PetscReal gmax[], int *__ierr ){
*__ierr = DAGetBoundingBox(
	(DA)PetscToPointer((da) ),gmin,gmax);
}
#if defined(__cplusplus)
}
#endif
