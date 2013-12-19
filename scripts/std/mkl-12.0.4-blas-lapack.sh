# Just set INTEL_12_0_4_ROOT in env then source this file!

export LAPACK_DIR=${INTEL_12_0_4_ROOT}/mkl/lib/intel64

export BLAS_LIBS="${LAPACK_DIR}/libmkl_intel_lp64.a;${LAPACK_DIR}/libmkl_blas95_lp64.a;/opt/intel/Compiler/composerxe-2011.4.191/mkl/lib/intel64/libmkl_core.a;${LAPACK_DIR}/libmkl_sequential.a"
export LAPACK_LIBS="${LAPACK_DIR}/libmkl_lapack95_lp64.a"
