#include "petscsys.h"
#include "petscfix.h"
/* pack.c */
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
#define dmcompositesetcontext_ DMCOMPOSITESETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositesetcontext_ dmcompositesetcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcompositegetcontext_ DMCOMPOSITEGETCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositegetcontext_ dmcompositegetcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcompositeview_ DMCOMPOSITEVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositeview_ dmcompositeview
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcompositegetcoloring_ DMCOMPOSITEGETCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcompositegetcoloring_ dmcompositegetcoloring
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   dmcompositesetcontext_(DMComposite *dmcomposite,void*ctx, int *__ierr ){
*__ierr = DMCompositeSetContext(*dmcomposite,ctx);
}
void PETSC_STDCALL   dmcompositegetcontext_(DMComposite *dmcomposite,void**ctx, int *__ierr ){
*__ierr = DMCompositeGetContext(*dmcomposite,ctx);
}
void PETSC_STDCALL   dmcompositeview_(DMComposite *packer,PetscViewer v, int *__ierr ){
*__ierr = DMCompositeView(*packer,
	(PetscViewer)PetscToPointer((v) ));
}
void PETSC_STDCALL   dmcompositegetcoloring_(DMComposite *dmcomposite,ISColoringType *ctype, MatType *mtype,ISColoring *coloring, int *__ierr ){
*__ierr = DMCompositeGetColoring(*dmcomposite,*ctype,*mtype,coloring);
}
#if defined(__cplusplus)
}
#endif
