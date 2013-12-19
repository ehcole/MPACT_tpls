#include "petscsys.h"
#include "petscfix.h"
/* stageLog.c */
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
#define stagelogdestroy_ STAGELOGDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogdestroy_ stagelogdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stagelogregister_ STAGELOGREGISTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogregister_ stagelogregister
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stagelogpush_ STAGELOGPUSH
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogpush_ stagelogpush
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stagelogpop_ STAGELOGPOP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogpop_ stagelogpop
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stageloggetcurrent_ STAGELOGGETCURRENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stageloggetcurrent_ stageloggetcurrent
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stagelogsetactive_ STAGELOGSETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogsetactive_ stagelogsetactive
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stageloggetactive_ STAGELOGGETACTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stageloggetactive_ stageloggetactive
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stagelogsetvisible_ STAGELOGSETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogsetvisible_ stagelogsetvisible
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stageloggetvisible_ STAGELOGGETVISIBLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stageloggetvisible_ stageloggetvisible
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stageloggetstage_ STAGELOGGETSTAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stageloggetstage_ stageloggetstage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define stagelogcreate_ STAGELOGCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define stagelogcreate_ stagelogcreate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
void PETSC_STDCALL   stagelogdestroy_(StageLog stageLog, int *__ierr ){
*__ierr = StageLogDestroy(
	(StageLog)PetscToPointer((stageLog) ));
}
void PETSC_STDCALL   stagelogregister_(StageLog stageLog, char sname[],int *stage, int *__ierr ){
*__ierr = StageLogRegister(
	(StageLog)PetscToPointer((stageLog) ),sname,stage);
}
void PETSC_STDCALL   stagelogpush_(StageLog stageLog,int *stage, int *__ierr ){
*__ierr = StageLogPush(
	(StageLog)PetscToPointer((stageLog) ),*stage);
}
void PETSC_STDCALL   stagelogpop_(StageLog stageLog, int *__ierr ){
*__ierr = StageLogPop(
	(StageLog)PetscToPointer((stageLog) ));
}
void PETSC_STDCALL   stageloggetcurrent_(StageLog stageLog,int *stage, int *__ierr ){
*__ierr = StageLogGetCurrent(
	(StageLog)PetscToPointer((stageLog) ),stage);
}
void PETSC_STDCALL   stagelogsetactive_(StageLog stageLog,int *stage,PetscTruth *isActive, int *__ierr ){
*__ierr = StageLogSetActive(
	(StageLog)PetscToPointer((stageLog) ),*stage,*isActive);
}
void PETSC_STDCALL   stageloggetactive_(StageLog stageLog,int *stage,PetscTruth *isActive, int *__ierr ){
*__ierr = StageLogGetActive(
	(StageLog)PetscToPointer((stageLog) ),*stage,isActive);
}
void PETSC_STDCALL   stagelogsetvisible_(StageLog stageLog,int *stage,PetscTruth *isVisible, int *__ierr ){
*__ierr = StageLogSetVisible(
	(StageLog)PetscToPointer((stageLog) ),*stage,*isVisible);
}
void PETSC_STDCALL   stageloggetvisible_(StageLog stageLog,int *stage,PetscTruth *isVisible, int *__ierr ){
*__ierr = StageLogGetVisible(
	(StageLog)PetscToPointer((stageLog) ),*stage,isVisible);
}
void PETSC_STDCALL   stageloggetstage_(StageLog stageLog, char name[],int *stage, int *__ierr ){
*__ierr = StageLogGetStage(
	(StageLog)PetscToPointer((stageLog) ),name,stage);
}
void PETSC_STDCALL   stagelogcreate_(StageLog *stageLog, int *__ierr ){
*__ierr = StageLogCreate(stageLog);
}
#if defined(__cplusplus)
}
#endif
