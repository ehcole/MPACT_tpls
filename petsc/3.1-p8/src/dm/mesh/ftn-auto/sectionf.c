#include "petscsys.h"
#include "petscfix.h"
/* section.c */
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

#include "petscmesh.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealdestroy_ SECTIONREALDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealdestroy_ sectionrealdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealcomplete_ SECTIONREALCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealcomplete_ sectionrealcomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealzero_ SECTIONREALZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealzero_ sectionrealzero
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealgetfiberdimension_ SECTIONREALGETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealgetfiberdimension_ sectionrealgetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealsetfiberdimension_ SECTIONREALSETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealsetfiberdimension_ sectionrealsetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealsetfiberdimensionfield_ SECTIONREALSETFIBERDIMENSIONFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealsetfiberdimensionfield_ sectionrealsetfiberdimensionfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealgetsize_ SECTIONREALGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealgetsize_ sectionrealgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealallocate_ SECTIONREALALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealallocate_ sectionrealallocate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealcreatelocalvector_ SECTIONREALCREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealcreatelocalvector_ sectionrealcreatelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealaddspace_ SECTIONREALADDSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealaddspace_ sectionrealaddspace
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealtovec_ SECTIONREALTOVEC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealtovec_ sectionrealtovec
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealclear_ SECTIONREALCLEAR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealclear_ sectionrealclear
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealset_ SECTIONREALSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealset_ sectionrealset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionrealaxpy_ SECTIONREALAXPY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionrealaxpy_ sectionrealaxpy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintdestroy_ SECTIONINTDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintdestroy_ sectionintdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintcomplete_ SECTIONINTCOMPLETE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintcomplete_ sectionintcomplete
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintzero_ SECTIONINTZERO
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintzero_ sectionintzero
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintgetfiberdimension_ SECTIONINTGETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintgetfiberdimension_ sectionintgetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintsetfiberdimension_ SECTIONINTSETFIBERDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintsetfiberdimension_ sectionintsetfiberdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintsetfiberdimensionfield_ SECTIONINTSETFIBERDIMENSIONFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintsetfiberdimensionfield_ sectionintsetfiberdimensionfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintgetsize_ SECTIONINTGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintgetsize_ sectionintgetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintallocate_ SECTIONINTALLOCATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintallocate_ sectionintallocate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintset_ SECTIONINTSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintset_ sectionintset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define sectionintaddspace_ SECTIONINTADDSPACE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define sectionintaddspace_ sectionintaddspace
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   sectionrealdestroy_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealDestroy(*section);
}
void PETSC_STDCALL  sectionrealcomplete_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealComplete(*section);
}
void PETSC_STDCALL  sectionrealzero_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealZero(*section);
}
void PETSC_STDCALL   sectionrealgetfiberdimension_(SectionReal *section,PetscInt *point,PetscInt *size, int *__ierr ){
*__ierr = SectionRealGetFiberDimension(*section,*point,size);
}
void PETSC_STDCALL   sectionrealsetfiberdimension_(SectionReal *section,PetscInt *point, PetscInt *size, int *__ierr ){
*__ierr = SectionRealSetFiberDimension(*section,*point,*size);
}
void PETSC_STDCALL   sectionrealsetfiberdimensionfield_(SectionReal *section,PetscInt *point, PetscInt *size, PetscInt *field, int *__ierr ){
*__ierr = SectionRealSetFiberDimensionField(*section,*point,*size,*field);
}
void PETSC_STDCALL  sectionrealgetsize_(SectionReal *section,PetscInt *size, int *__ierr ){
*__ierr = SectionRealGetSize(*section,size);
}
void PETSC_STDCALL   sectionrealallocate_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealAllocate(*section);
}
void PETSC_STDCALL   sectionrealcreatelocalvector_(SectionReal *section,Vec *localVec, int *__ierr ){
*__ierr = SectionRealCreateLocalVector(*section,localVec);
}
void PETSC_STDCALL   sectionrealaddspace_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealAddSpace(*section);
}
void PETSC_STDCALL   sectionrealtovec_(SectionReal *section,VecScatter scatter,ScatterMode *mode,Vec vec, int *__ierr ){
*__ierr = SectionRealToVec(*section,
	(VecScatter)PetscToPointer((scatter) ),*mode,
	(Vec)PetscToPointer((vec) ));
}
void PETSC_STDCALL   sectionrealclear_(SectionReal *section, int *__ierr ){
*__ierr = SectionRealClear(*section);
}
void PETSC_STDCALL   sectionrealset_(SectionReal *section,PetscReal *val, int *__ierr ){
*__ierr = SectionRealSet(*section,*val);
}
void PETSC_STDCALL   sectionrealaxpy_(SectionReal *section,Mesh mesh,PetscScalar *alpha,SectionReal *X, int *__ierr ){
*__ierr = SectionRealAXPY(*section,
	(Mesh)PetscToPointer((mesh) ),*alpha,*X);
}
void PETSC_STDCALL   sectionintdestroy_(SectionInt *section, int *__ierr ){
*__ierr = SectionIntDestroy(*section);
}
void PETSC_STDCALL  sectionintcomplete_(SectionInt *section, int *__ierr ){
*__ierr = SectionIntComplete(*section);
}
void PETSC_STDCALL  sectionintzero_(SectionInt *section, int *__ierr ){
*__ierr = SectionIntZero(*section);
}
void PETSC_STDCALL   sectionintgetfiberdimension_(SectionInt *section,PetscInt *point,PetscInt *size, int *__ierr ){
*__ierr = SectionIntGetFiberDimension(*section,*point,size);
}
void PETSC_STDCALL   sectionintsetfiberdimension_(SectionInt *section,PetscInt *point, PetscInt *size, int *__ierr ){
*__ierr = SectionIntSetFiberDimension(*section,*point,*size);
}
void PETSC_STDCALL   sectionintsetfiberdimensionfield_(SectionInt *section,PetscInt *point, PetscInt *size, PetscInt *field, int *__ierr ){
*__ierr = SectionIntSetFiberDimensionField(*section,*point,*size,*field);
}
void PETSC_STDCALL  sectionintgetsize_(SectionInt *section,PetscInt *size, int *__ierr ){
*__ierr = SectionIntGetSize(*section,size);
}
void PETSC_STDCALL   sectionintallocate_(SectionInt *section, int *__ierr ){
*__ierr = SectionIntAllocate(*section);
}
void PETSC_STDCALL   sectionintset_(SectionInt *section,PetscInt *val, int *__ierr ){
*__ierr = SectionIntSet(*section,*val);
}
void PETSC_STDCALL   sectionintaddspace_(SectionInt *section, int *__ierr ){
*__ierr = SectionIntAddSpace(*section);
}
#if defined(__cplusplus)
}
#endif
