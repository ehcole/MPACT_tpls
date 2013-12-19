#include "petscsys.h"
#include "petscfix.h"
/* wb.c */
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

#include "petscpc.h"
#include "petscmg.h"
#include "petscda.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcexoticsettype_ PCEXOTICSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcexoticsettype_ pcexoticsettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcsetda_ PCSETDA
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcsetda_ pcsetda
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   pcexoticsettype_(PC pc,PCExoticType *type, int *__ierr ){
*__ierr = PCExoticSetType(
	(PC)PetscToPointer((pc) ),*type);
}
void PETSC_STDCALL   pcsetda_(PC pc,DA da, int *__ierr ){
*__ierr = PCSetDA(
	(PC)PetscToPointer((pc) ),
	(DA)PetscToPointer((da) ));
}
#if defined(__cplusplus)
}
#endif
