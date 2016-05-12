#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* nepbasic.c */
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
#define nepreset_ NEPRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepreset_ nepreset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetbv_ NEPSETBV
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetbv_ nepsetbv
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetrg_ NEPSETRG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetrg_ nepsetrg
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetds_ NEPSETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetds_ nepsetds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetksp_ NEPSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetksp_ nepsetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsettarget_ NEPSETTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsettarget_ nepsettarget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgettarget_ NEPGETTARGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgettarget_ nepgettarget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepsetsplitoperator_ NEPSETSPLITOPERATOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepsetsplitoperator_ nepsetsplitoperator
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetsplitoperatorterm_ NEPGETSPLITOPERATORTERM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetsplitoperatorterm_ nepgetsplitoperatorterm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepgetsplitoperatorinfo_ NEPGETSPLITOPERATORINFO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepgetsplitoperatorinfo_ nepgetsplitoperatorinfo
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  nepreset_(NEP *nep, int *__ierr ){
*__ierr = NEPReset(*nep);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetbv_(NEP *nep,BV *bv, int *__ierr ){
*__ierr = NEPSetBV(*nep,*bv);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetrg_(NEP *nep,RG *rg, int *__ierr ){
*__ierr = NEPSetRG(*nep,*rg);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetds_(NEP *nep,DS *ds, int *__ierr ){
*__ierr = NEPSetDS(*nep,*ds);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetksp_(NEP *nep,KSP ksp, int *__ierr ){
*__ierr = NEPSetKSP(*nep,
	(KSP)PetscToPointer((ksp) ));
}
PETSC_EXTERN void PETSC_STDCALL  nepsettarget_(NEP *nep,PetscScalar *target, int *__ierr ){
*__ierr = NEPSetTarget(*nep,*target);
}
PETSC_EXTERN void PETSC_STDCALL  nepgettarget_(NEP *nep,PetscScalar* target, int *__ierr ){
*__ierr = NEPGetTarget(*nep,target);
}
PETSC_EXTERN void PETSC_STDCALL  nepsetsplitoperator_(NEP *nep,PetscInt *n,Mat A[],FN f[],MatStructure *str, int *__ierr ){
*__ierr = NEPSetSplitOperator(*nep,*n,A,
	(FN* )PetscToPointer((f) ),*str);
}
PETSC_EXTERN void PETSC_STDCALL  nepgetsplitoperatorterm_(NEP *nep,PetscInt *k,Mat *A,FN *f, int *__ierr ){
*__ierr = NEPGetSplitOperatorTerm(*nep,*k,A,
	(FN* )PetscToPointer((f) ));
}
PETSC_EXTERN void PETSC_STDCALL  nepgetsplitoperatorinfo_(NEP *nep,PetscInt *n,MatStructure *str, int *__ierr ){
*__ierr = NEPGetSplitOperatorInfo(*nep,n,str);
}
#if defined(__cplusplus)
}
#endif
