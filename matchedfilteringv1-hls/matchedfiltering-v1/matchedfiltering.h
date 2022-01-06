#ifndef __MATCHEDFILTERING_H__
#define __MATCHEDFILTERING_H__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//  For stream interface
#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include <complex>
#include "ap_int.h"

#define dim_r 256 // Add different dimension for rows and cols, update testbench acc.
#define dim_c 256
#define DataWidth 32 // Make this 64 bit.

typedef float F;

typedef ap_axiu<DataWidth,0,0,0> inSdCh; // Stream Interface only
typedef ap_axiu<DataWidth,0,0,0> outSdCh; // Out stream interface only

typedef std::complex<F> in_cdt; // Intermediate complex values // @suppress("Type cannot be resolved")
typedef std::complex<F> out_cdt;
typedef std::complex<F> cdt;
// HLS Complex Data typedef hls::x_complex<type> HLS_COMPLEX;

typedef union{
	unsigned int i;
	float f;
}conv;

void matmul(hls::stream<inSdCh> &rxmat, hls::stream<inSdCh> &xmat, hls::stream<outSdCh> &out);

template <typename T> void kernel_mmult(T a[dim_r][dim_c], T b[dim_c][dim_r], T out[dim_r]);

#endif
