/*
   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
   SLEPc - Scalable Library for Eigenvalue Problem Computations
   Copyright (c) 2002-2014, Universitat Politecnica de Valencia, Spain

   This file is part of SLEPc.

   SLEPc is free software: you can redistribute it and/or modify it under  the
   terms of version 3 of the GNU Lesser General Public License as published by
   the Free Software Foundation.

   SLEPc  is  distributed in the hope that it will be useful, but WITHOUT  ANY
   WARRANTY;  without even the implied warranty of MERCHANTABILITY or  FITNESS
   FOR  A  PARTICULAR PURPOSE. See the GNU Lesser General Public  License  for
   more details.

   You  should have received a copy of the GNU Lesser General  Public  License
   along with SLEPc. If not, see <http://www.gnu.org/licenses/>.
   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <slepc-private/slepcimpl.h>     /*I "slepcsys.h" I*/
#include <slepcrg.h>
#include <slepcst.h>

#undef __FUNCT__
#define __FUNCT__ "SlepcSCCompare"
/*@
   SlepcSCCompare - Compares two (possibly complex) values according
   to a certain criterion.

   Not Collective

   Input Parameters:
+  sc  - the sorting criterion context
.  ar  - real part of the 1st value
.  ai  - imaginary part of the 1st value
.  br  - real part of the 2nd value
-  bi  - imaginary part of the 2nd value

   Output Parameter:
.  res - result of comparison

   Notes:
   Returns an integer less than, equal to, or greater than zero if the first
   value is considered to be respectively less than, equal to, or greater
   than the second one.

   Level: developer

.seealso: SlepcSortEigenvalues(), SlepcSC
@*/
PetscErrorCode SlepcSCCompare(SlepcSC sc,PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *res)
{
  PetscErrorCode ierr;
  PetscScalar    re[2],im[2];
  PetscInt       cin[2];
  PetscBool      inside[2];

  PetscFunctionBegin;
  PetscValidIntPointer(res,6);
#if defined(PETSC_USE_DEBUG)
  if (!sc->comparison) SETERRQ(PETSC_COMM_SELF,1,"Undefined comparison function");
#endif
  re[0] = ar; re[1] = br;
  im[0] = ai; im[1] = bi;
  if (sc->map) {
    ierr = (*sc->map)(sc->mapobj,2,re,im);CHKERRQ(ierr);
  }
  if (sc->rg) {
    ierr = RGCheckInside(sc->rg,2,re,im,cin);CHKERRQ(ierr);
    inside[0] = (cin[0]>0)? PETSC_TRUE: PETSC_FALSE;
    inside[1] = (cin[1]>0)? PETSC_TRUE: PETSC_FALSE;
    if (inside[0] && !inside[1]) *res = -1;
    else if (!inside[0] && inside[1]) *res = 1;
    else {
      ierr = (*sc->comparison)(re[0],im[0],re[1],im[1],res,sc->comparisonctx);CHKERRQ(ierr);
    }
  } else {
    ierr = (*sc->comparison)(re[0],im[0],re[1],im[1],res,sc->comparisonctx);CHKERRQ(ierr);
  }
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcSortEigenvalues"
/*@
   SlepcSortEigenvalues - Sorts a list of eigenvalues according to the 
   sorting criterion specified in a SlepcSC context.

   Not Collective

   Input Parameters:
+  sc   - the sorting criterion context
.  n    - number of eigenvalues in the list
.  eigr - pointer to the array containing the eigenvalues
-  eigi - imaginary part of the eigenvalues (only when using real numbers)

   Output Parameter:
.  perm - resulting permutation

   Note:
   The result is a list of indices in the original eigenvalue array
   corresponding to the first nev eigenvalues sorted in the specified
   criterion.

   Level: developer

.seealso: SlepcSCCompare(), SlepcSC
@*/
PetscErrorCode SlepcSortEigenvalues(SlepcSC sc,PetscInt n,PetscScalar *eigr,PetscScalar *eigi,PetscInt *perm)
{
  PetscErrorCode ierr;
  PetscScalar    re,im;
  PetscInt       i,j,result,tmp;

  PetscFunctionBegin;
  PetscValidPointer(sc,1);
  PetscValidScalarPointer(eigr,3);
  PetscValidScalarPointer(eigi,4);
  PetscValidIntPointer(perm,5);
  for (i=0;i<n;i++) perm[i] = i;
  /* insertion sort */
  for (i=n-1;i>=0;i--) {
    re = eigr[perm[i]];
    im = eigi[perm[i]];
    j = i+1;
#if !defined(PETSC_USE_COMPLEX)
    if (im!=0) {
      /* complex eigenvalue */
      i--;
      im = eigi[perm[i]];
    }
#endif
    while (j<n) {
      ierr = SlepcSCCompare(sc,re,im,eigr[perm[j]],eigi[perm[j]],&result);CHKERRQ(ierr);
      if (result<0) break;
#if !defined(PETSC_USE_COMPLEX)
      /* keep together every complex conjugated eigenpair */
      if (!im) {
        if (eigi[perm[j]] == 0.0) {
#endif
          tmp = perm[j-1]; perm[j-1] = perm[j]; perm[j] = tmp;
          j++;
#if !defined(PETSC_USE_COMPLEX)
        } else {
          tmp = perm[j-1]; perm[j-1] = perm[j]; perm[j] = perm[j+1]; perm[j+1] = tmp;
          j+=2;
        }
      } else {
        if (eigi[perm[j]] == 0.0) {
          tmp = perm[j-2]; perm[j-2] = perm[j]; perm[j] = perm[j-1]; perm[j-1] = tmp;
          j++;
        } else {
          tmp = perm[j-2]; perm[j-2] = perm[j]; perm[j] = tmp;
          tmp = perm[j-1]; perm[j-1] = perm[j+1]; perm[j+1] = tmp;
          j+=2;
        }
      }
#endif
    }
  }
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcMap_ST"
/*
   SlepcMap_ST - Gateway function to call STBackTransform from outside ST.
*/
PetscErrorCode SlepcMap_ST(PetscObject obj,PetscInt n,PetscScalar* eigr,PetscScalar* eigi)
{
  PetscErrorCode ierr;

  PetscFunctionBegin;
  ierr = STBackTransform((ST)obj,n,eigr,eigi);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareLargestMagnitude"
PetscErrorCode SlepcCompareLargestMagnitude(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;

  PetscFunctionBegin;
  a = SlepcAbsEigenvalue(ar,ai);
  b = SlepcAbsEigenvalue(br,bi);
  if (a<b) *result = 1;
  else if (a>b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareSmallestMagnitude"
PetscErrorCode SlepcCompareSmallestMagnitude(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;

  PetscFunctionBegin;
  a = SlepcAbsEigenvalue(ar,ai);
  b = SlepcAbsEigenvalue(br,bi);
  if (a>b) *result = 1;
  else if (a<b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareLargestReal"
PetscErrorCode SlepcCompareLargestReal(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;

  PetscFunctionBegin;
  a = PetscRealPart(ar);
  b = PetscRealPart(br);
  if (a<b) *result = 1;
  else if (a>b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareSmallestReal"
PetscErrorCode SlepcCompareSmallestReal(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;

  PetscFunctionBegin;
  a = PetscRealPart(ar);
  b = PetscRealPart(br);
  if (a>b) *result = 1;
  else if (a<b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareLargestImaginary"
PetscErrorCode SlepcCompareLargestImaginary(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;

  PetscFunctionBegin;
#if defined(PETSC_USE_COMPLEX)
  a = PetscImaginaryPart(ar);
  b = PetscImaginaryPart(br);
#else
  a = PetscAbsReal(ai);
  b = PetscAbsReal(bi);
#endif
  if (a<b) *result = 1;
  else if (a>b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareSmallestImaginary"
PetscErrorCode SlepcCompareSmallestImaginary(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;

  PetscFunctionBegin;
#if defined(PETSC_USE_COMPLEX)
  a = PetscImaginaryPart(ar);
  b = PetscImaginaryPart(br);
#else
  a = PetscAbsReal(ai);
  b = PetscAbsReal(bi);
#endif
  if (a>b) *result = 1;
  else if (a<b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareTargetMagnitude"
PetscErrorCode SlepcCompareTargetMagnitude(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal   a,b;
  PetscScalar *target = (PetscScalar*)ctx;

  PetscFunctionBegin;
  /* complex target only allowed if scalartype=complex */
  a = SlepcAbsEigenvalue(ar-(*target),ai);
  b = SlepcAbsEigenvalue(br-(*target),bi);
  if (a>b) *result = 1;
  else if (a<b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareTargetReal"
PetscErrorCode SlepcCompareTargetReal(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal   a,b;
  PetscScalar *target = (PetscScalar*)ctx;

  PetscFunctionBegin;
  a = PetscAbsReal(PetscRealPart(ar-(*target)));
  b = PetscAbsReal(PetscRealPart(br-(*target)));
  if (a>b) *result = 1;
  else if (a<b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareTargetImaginary"
PetscErrorCode SlepcCompareTargetImaginary(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal   a,b;
#if defined(PETSC_USE_COMPLEX)
  PetscScalar *target = (PetscScalar*)ctx;
#endif

  PetscFunctionBegin;
#if !defined(PETSC_USE_COMPLEX)
  /* complex target only allowed if scalartype=complex */
  a = PetscAbsReal(ai);
  b = PetscAbsReal(bi);
#else
  a = PetscAbsReal(PetscImaginaryPart(ar-(*target)));
  b = PetscAbsReal(PetscImaginaryPart(br-(*target)));
#endif
  if (a>b) *result = 1;
  else if (a<b) *result = -1;
  else *result = 0;
  PetscFunctionReturn(0);
}

#undef __FUNCT__
#define __FUNCT__ "SlepcCompareSmallestPosReal"
/*
   Used in the SVD for computing smallest singular values
   from the cyclic matrix.
*/
PetscErrorCode SlepcCompareSmallestPosReal(PetscScalar ar,PetscScalar ai,PetscScalar br,PetscScalar bi,PetscInt *result,void *ctx)
{
  PetscReal a,b;
  PetscBool aisright,bisright;

  PetscFunctionBegin;
  if (PetscRealPart(ar)>0.0) aisright = PETSC_TRUE;
  else aisright = PETSC_FALSE;
  if (PetscRealPart(br)>0.0) bisright = PETSC_TRUE;
  else bisright = PETSC_FALSE;
  if (aisright == bisright) { /* same sign */
    a = SlepcAbsEigenvalue(ar,ai);
    b = SlepcAbsEigenvalue(br,bi);
    if (a>b) *result = 1;
    else if (a<b) *result = -1;
    else *result = 0;
  } else if (aisright && !bisright) *result = -1; /* 'a' is on the right */
  else *result = 1;  /* 'b' is on the right */
  PetscFunctionReturn(0);
}

