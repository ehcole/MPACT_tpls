#include "petscsys.h"
#include "petscfix.h"
/* adda.c */
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
#define addadestroy_ ADDADESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addadestroy_ addadestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addaview_ ADDAVIEW
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addaview_ addaview
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addacreateglobalvector_ ADDACREATEGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addacreateglobalvector_ addacreateglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetcoloring_ ADDAGETCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetcoloring_ addagetcoloring
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetmatrix_ ADDAGETMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetmatrix_ addagetmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetmatrixns_ ADDAGETMATRIXNS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetmatrixns_ addagetmatrixns
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetinterpolation_ ADDAGETINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetinterpolation_ addagetinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addarefine_ ADDAREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addarefine_ addarefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addacoarsen_ ADDACOARSEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addacoarsen_ addacoarsen
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetinjection_ ADDAGETINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetinjection_ addagetinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addasetrefinement_ ADDASETREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addasetrefinement_ addasetrefinement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetcorners_ ADDAGETCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetcorners_ addagetcorners
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define addagetghostcorners_ ADDAGETGHOSTCORNERS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define addagetghostcorners_ addagetghostcorners
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   addadestroy_(ADDA *adda, int *__ierr ){
*__ierr = ADDADestroy(*adda);
}
void PETSC_STDCALL   addaview_(ADDA *adda,PetscViewer v, int *__ierr ){
*__ierr = ADDAView(*adda,
	(PetscViewer)PetscToPointer((v) ));
}
void PETSC_STDCALL   addacreateglobalvector_(ADDA *adda,Vec *vec, int *__ierr ){
*__ierr = ADDACreateGlobalVector(*adda,vec);
}
void PETSC_STDCALL   addagetcoloring_(ADDA *adda,ISColoringType *ctype, MatType *mtype,ISColoring *coloring, int *__ierr ){
*__ierr = ADDAGetColoring(*adda,*ctype,*mtype,coloring);
}
void PETSC_STDCALL   addagetmatrix_(ADDA *adda, MatType *mtype,Mat *mat, int *__ierr ){
*__ierr = ADDAGetMatrix(*adda,*mtype,mat);
}
void PETSC_STDCALL   addagetmatrixns_(ADDA *addar,ADDA *addac, MatType *mtype,Mat *mat, int *__ierr ){
*__ierr = ADDAGetMatrixNS(*addar,*addac,*mtype,mat);
}
void PETSC_STDCALL   addagetinterpolation_(ADDA *adda1,ADDA *adda2,Mat *mat,Vec *vec, int *__ierr ){
*__ierr = ADDAGetInterpolation(*adda1,*adda2,mat,vec);
}
void PETSC_STDCALL   addarefine_(ADDA *adda,MPI_Fint * comm,ADDA *addaf, int *__ierr ){
*__ierr = ADDARefine(*adda,
	MPI_Comm_f2c( *(comm) ),
	(ADDA* )PetscToPointer((addaf) ));
}
void PETSC_STDCALL   addacoarsen_(ADDA *adda,MPI_Fint * comm,ADDA *addac, int *__ierr ){
*__ierr = ADDACoarsen(*adda,
	MPI_Comm_f2c( *(comm) ),
	(ADDA* )PetscToPointer((addac) ));
}
void PETSC_STDCALL   addagetinjection_(ADDA *adda1,ADDA *adda2,VecScatter *ctx, int *__ierr ){
*__ierr = ADDAGetInjection(*adda1,*adda2,ctx);
}
void PETSC_STDCALL   addasetrefinement_(ADDA *adda,PetscInt *refine,PetscInt *dofrefine, int *__ierr ){
*__ierr = ADDASetRefinement(*adda,refine,*dofrefine);
}
void PETSC_STDCALL   addagetcorners_(ADDA *adda,PetscInt **lcorner,PetscInt **ucorner, int *__ierr ){
*__ierr = ADDAGetCorners(*adda,lcorner,ucorner);
}
void PETSC_STDCALL   addagetghostcorners_(ADDA *adda,PetscInt **lcorner,PetscInt **ucorner, int *__ierr ){
*__ierr = ADDAGetGhostCorners(*adda,lcorner,ucorner);
}
#if defined(__cplusplus)
}
#endif
