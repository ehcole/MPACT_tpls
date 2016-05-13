#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* pepbasic.c */
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

#include "slepcpep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepprintsolution_ PEPPRINTSOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepprintsolution_ pepprintsolution
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepreset_ PEPRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepreset_ pepreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetbv_ PEPSETBV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetbv_ pepsetbv
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetrg_ PEPSETRG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetrg_ pepsetrg
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetds_ PEPSETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetds_ pepsetds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsetst_ PEPSETST
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsetst_ pepsetst
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepsettarget_ PEPSETTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepsettarget_ pepsettarget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepgettarget_ PEPGETTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepgettarget_ pepgettarget
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  pepprintsolution_(PEP *pep,PetscViewer viewer, int *__ierr ){
*__ierr = PEPPrintSolution(*pep,
	(PetscViewer)PetscToPointer((viewer) ));
}
PETSC_EXTERN void PETSC_STDCALL  pepreset_(PEP *pep, int *__ierr ){
*__ierr = PEPReset(*pep);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetbv_(PEP *pep,BV *bv, int *__ierr ){
*__ierr = PEPSetBV(*pep,*bv);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetrg_(PEP *pep,RG *rg, int *__ierr ){
*__ierr = PEPSetRG(*pep,*rg);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetds_(PEP *pep,DS *ds, int *__ierr ){
*__ierr = PEPSetDS(*pep,*ds);
}
PETSC_EXTERN void PETSC_STDCALL  pepsetst_(PEP *pep,ST *st, int *__ierr ){
*__ierr = PEPSetST(*pep,*st);
}
PETSC_EXTERN void PETSC_STDCALL  pepsettarget_(PEP *pep,PetscScalar *target, int *__ierr ){
*__ierr = PEPSetTarget(*pep,*target);
}
PETSC_EXTERN void PETSC_STDCALL  pepgettarget_(PEP *pep,PetscScalar* target, int *__ierr ){
*__ierr = PEPGetTarget(*pep,target);
}
#if defined(__cplusplus)
}
#endif
