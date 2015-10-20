#include "petscsys.h"
#include "petscfix.h"
#include "petsc-private/fortranimpl.h"
/* isltog.c */
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

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscis.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappinggetsize_ ISLOCALTOGLOBALMAPPINGGETSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappinggetsize_ islocaltoglobalmappinggetsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingcreateis_ ISLOCALTOGLOBALMAPPINGCREATEIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingcreateis_ islocaltoglobalmappingcreateis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappinggetblocksize_ ISLOCALTOGLOBALMAPPINGGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappinggetblocksize_ islocaltoglobalmappinggetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingcreate_ ISLOCALTOGLOBALMAPPINGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingcreate_ islocaltoglobalmappingcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingdestroy_ ISLOCALTOGLOBALMAPPINGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingdestroy_ islocaltoglobalmappingdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingapplyis_ ISLOCALTOGLOBALMAPPINGAPPLYIS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingapplyis_ islocaltoglobalmappingapplyis
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingapply_ ISLOCALTOGLOBALMAPPINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingapply_ islocaltoglobalmappingapply
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define islocaltoglobalmappingapplyblock_ ISLOCALTOGLOBALMAPPINGAPPLYBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define islocaltoglobalmappingapplyblock_ islocaltoglobalmappingapplyblock
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isglobaltolocalmappingapply_ ISGLOBALTOLOCALMAPPINGAPPLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isglobaltolocalmappingapply_ isglobaltolocalmappingapply
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define isglobaltolocalmappingapplyblock_ ISGLOBALTOLOCALMAPPINGAPPLYBLOCK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define isglobaltolocalmappingapplyblock_ isglobaltolocalmappingapplyblock
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappinggetsize_(ISLocalToGlobalMapping mapping,PetscInt *n, int *__ierr ){
*__ierr = ISLocalToGlobalMappingGetSize(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),n);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappingcreateis_(IS is,ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = ISLocalToGlobalMappingCreateIS(
	(IS)PetscToPointer((is) ),mapping);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappinggetblocksize_(ISLocalToGlobalMapping mapping,PetscInt *bs, int *__ierr ){
*__ierr = ISLocalToGlobalMappingGetBlockSize(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),bs);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappingcreate_(MPI_Fint * cm,PetscInt *bs,PetscInt *n, PetscInt indices[],PetscCopyMode *mode,ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = ISLocalToGlobalMappingCreate(
	MPI_Comm_f2c( *(cm) ),*bs,*n,indices,*mode,mapping);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappingdestroy_(ISLocalToGlobalMapping *mapping, int *__ierr ){
*__ierr = ISLocalToGlobalMappingDestroy(mapping);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappingapplyis_(ISLocalToGlobalMapping mapping,IS is,IS *newis, int *__ierr ){
*__ierr = ISLocalToGlobalMappingApplyIS(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),
	(IS)PetscToPointer((is) ),newis);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappingapply_(ISLocalToGlobalMapping mapping,PetscInt *N, PetscInt in[],PetscInt out[], int *__ierr ){
*__ierr = ISLocalToGlobalMappingApply(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),*N,in,out);
}
PETSC_EXTERN void PETSC_STDCALL  islocaltoglobalmappingapplyblock_(ISLocalToGlobalMapping mapping,PetscInt *N, PetscInt in[],PetscInt out[], int *__ierr ){
*__ierr = ISLocalToGlobalMappingApplyBlock(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),*N,in,out);
}
PETSC_EXTERN void PETSC_STDCALL  isglobaltolocalmappingapply_(ISLocalToGlobalMapping mapping,ISGlobalToLocalMappingType *type,
                                            PetscInt *n, PetscInt idx[],PetscInt *nout,PetscInt idxout[], int *__ierr ){
*__ierr = ISGlobalToLocalMappingApply(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),*type,*n,idx,nout,idxout);
}
PETSC_EXTERN void PETSC_STDCALL  isglobaltolocalmappingapplyblock_(ISLocalToGlobalMapping mapping,ISGlobalToLocalMappingType *type,
                                  PetscInt *n, PetscInt idx[],PetscInt *nout,PetscInt idxout[], int *__ierr ){
*__ierr = ISGlobalToLocalMappingApplyBlock(
	(ISLocalToGlobalMapping)PetscToPointer((mapping) ),*type,*n,idx,nout,idxout);
}
#if defined(__cplusplus)
}
#endif
