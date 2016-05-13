#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* dsbasic.c */
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

#include "slepcds.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetmethod_ DSSETMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetmethod_ dssetmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetmethod_ DSGETMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetmethod_ dsgetmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetfunctionmethod_ DSSETFUNCTIONMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetfunctionmethod_ dssetfunctionmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetfunctionmethod_ DSGETFUNCTIONMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetfunctionmethod_ dsgetfunctionmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetcompact_ DSSETCOMPACT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetcompact_ dssetcompact
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetcompact_ DSGETCOMPACT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetcompact_ dsgetcompact
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetextrarow_ DSSETEXTRAROW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetextrarow_ dssetextrarow
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetextrarow_ DSGETEXTRAROW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetextrarow_ dsgetextrarow
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetrefined_ DSSETREFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetrefined_ dssetrefined
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetrefined_ DSGETREFINED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetrefined_ dsgetrefined
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetblocksize_ DSSETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetblocksize_ dssetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetblocksize_ DSGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetblocksize_ dsgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetfn_ DSSETFN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetfn_ dssetfn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetfn_ DSGETFN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetfn_ dsgetfn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgetnumfn_ DSGETNUMFN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgetnumfn_ dsgetnumfn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dssetfromoptions_ DSSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dssetfromoptions_ dssetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsallocate_ DSALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsallocate_ dsallocate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsreset_ DSRESET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsreset_ dsreset
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dssetmethod_(DS *ds,PetscInt *meth, int *__ierr ){
*__ierr = DSSetMethod(*ds,*meth);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetmethod_(DS *ds,PetscInt *meth, int *__ierr ){
*__ierr = DSGetMethod(*ds,meth);
}
PETSC_EXTERN void PETSC_STDCALL  dssetfunctionmethod_(DS *ds,PetscInt *meth, int *__ierr ){
*__ierr = DSSetFunctionMethod(*ds,*meth);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetfunctionmethod_(DS *ds,PetscInt *meth, int *__ierr ){
*__ierr = DSGetFunctionMethod(*ds,meth);
}
PETSC_EXTERN void PETSC_STDCALL  dssetcompact_(DS *ds,PetscBool *comp, int *__ierr ){
*__ierr = DSSetCompact(*ds,*comp);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetcompact_(DS *ds,PetscBool *comp, int *__ierr ){
*__ierr = DSGetCompact(*ds,comp);
}
PETSC_EXTERN void PETSC_STDCALL  dssetextrarow_(DS *ds,PetscBool *ext, int *__ierr ){
*__ierr = DSSetExtraRow(*ds,*ext);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetextrarow_(DS *ds,PetscBool *ext, int *__ierr ){
*__ierr = DSGetExtraRow(*ds,ext);
}
PETSC_EXTERN void PETSC_STDCALL  dssetrefined_(DS *ds,PetscBool *ref, int *__ierr ){
*__ierr = DSSetRefined(*ds,*ref);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetrefined_(DS *ds,PetscBool *ref, int *__ierr ){
*__ierr = DSGetRefined(*ds,ref);
}
PETSC_EXTERN void PETSC_STDCALL  dssetblocksize_(DS *ds,PetscInt *bs, int *__ierr ){
*__ierr = DSSetBlockSize(*ds,*bs);
}
PETSC_EXTERN void PETSC_STDCALL  dsgetblocksize_(DS *ds,PetscInt *bs, int *__ierr ){
*__ierr = DSGetBlockSize(*ds,bs);
}
PETSC_EXTERN void PETSC_STDCALL  dssetfn_(DS *ds,PetscInt *n,FN f[], int *__ierr ){
*__ierr = DSSetFN(*ds,*n,
	(FN* )PetscToPointer((f) ));
}
PETSC_EXTERN void PETSC_STDCALL  dsgetfn_(DS *ds,PetscInt *k,FN *f, int *__ierr ){
*__ierr = DSGetFN(*ds,*k,
	(FN* )PetscToPointer((f) ));
}
PETSC_EXTERN void PETSC_STDCALL  dsgetnumfn_(DS *ds,PetscInt *n, int *__ierr ){
*__ierr = DSGetNumFN(*ds,n);
}
PETSC_EXTERN void PETSC_STDCALL  dssetfromoptions_(DS *ds, int *__ierr ){
*__ierr = DSSetFromOptions(*ds);
}
PETSC_EXTERN void PETSC_STDCALL  dsallocate_(DS *ds,PetscInt *ld, int *__ierr ){
*__ierr = DSAllocate(*ds,*ld);
}
PETSC_EXTERN void PETSC_STDCALL  dsreset_(DS *ds, int *__ierr ){
*__ierr = DSReset(*ds);
}
#if defined(__cplusplus)
}
#endif
