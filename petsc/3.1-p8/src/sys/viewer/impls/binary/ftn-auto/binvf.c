#include "petscsys.h"
#include "petscfix.h"
/* binv.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinaryskipinfo_ PETSCVIEWERBINARYSKIPINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinaryskipinfo_ petscviewerbinaryskipinfo
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarysetskipoptions_ PETSCVIEWERBINARYSETSKIPOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarysetskipoptions_ petscviewerbinarysetskipoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarygetskipoptions_ PETSCVIEWERBINARYGETSKIPOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarygetskipoptions_ petscviewerbinarygetskipoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarycreate_ PETSCVIEWERBINARYCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarycreate_ petscviewerbinarycreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscviewerbinarysetmpiio_ PETSCVIEWERBINARYSETMPIIO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscviewerbinarysetmpiio_ petscviewerbinarysetmpiio
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   petscviewerbinaryskipinfo_(PetscViewer viewer, int *__ierr ){
*__ierr = PetscViewerBinarySkipInfo(
	(PetscViewer)PetscToPointer((viewer) ));
}
void PETSC_STDCALL   petscviewerbinarysetskipoptions_(PetscViewer viewer,PetscTruth *skip, int *__ierr ){
*__ierr = PetscViewerBinarySetSkipOptions(
	(PetscViewer)PetscToPointer((viewer) ),*skip);
}
void PETSC_STDCALL   petscviewerbinarygetskipoptions_(PetscViewer viewer,PetscTruth *skip, int *__ierr ){
*__ierr = PetscViewerBinaryGetSkipOptions(
	(PetscViewer)PetscToPointer((viewer) ),skip);
}
void PETSC_STDCALL   petscviewerbinarycreate_(MPI_Fint * comm,PetscViewer *binv, int *__ierr ){
*__ierr = PetscViewerBinaryCreate(
	MPI_Comm_f2c( *(comm) ),binv);
}
void PETSC_STDCALL   petscviewerbinarysetmpiio_(PetscViewer viewer, int *__ierr ){
*__ierr = PetscViewerBinarySetMPIIO(
	(PetscViewer)PetscToPointer((viewer) ));
}
#if defined(__cplusplus)
}
#endif
