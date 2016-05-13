#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* interpol.c */
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

#include "slepcnep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepinterpolsetdegree_ NEPINTERPOLSETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepinterpolsetdegree_ nepinterpolsetdegree
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepinterpolgetdegree_ NEPINTERPOLGETDEGREE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepinterpolgetdegree_ nepinterpolgetdegree
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepinterpolsetpep_ NEPINTERPOLSETPEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepinterpolsetpep_ nepinterpolsetpep
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepinterpolgetpep_ NEPINTERPOLGETPEP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepinterpolgetpep_ nepinterpolgetpep
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  nepinterpolsetdegree_(NEP *nep,PetscInt *deg, int *__ierr ){
*__ierr = NEPInterpolSetDegree(*nep,*deg);
}
PETSC_EXTERN void PETSC_STDCALL  nepinterpolgetdegree_(NEP *nep,PetscInt *deg, int *__ierr ){
*__ierr = NEPInterpolGetDegree(*nep,deg);
}
PETSC_EXTERN void PETSC_STDCALL  nepinterpolsetpep_(NEP *nep,PEP *pep, int *__ierr ){
*__ierr = NEPInterpolSetPEP(*nep,*pep);
}
PETSC_EXTERN void PETSC_STDCALL  nepinterpolgetpep_(NEP *nep,PEP *pep, int *__ierr ){
*__ierr = NEPInterpolGetPEP(*nep,
	(PEP* )PetscToPointer((pep) ));
}
#if defined(__cplusplus)
}
#endif
