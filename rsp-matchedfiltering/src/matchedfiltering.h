#ifndef __MATCHEDFILTERING_H__
#define __MATCHEDFILTERING_H__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//  For stream interface
#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include <complex>
#include "ap_int.h"

#define dim_r 1024  // Add different dimension for rows and cols, update testbench acc.
#define dim_c 10
#define DataWidth_input 32
#define DataWidth_output 64

typedef float F;

typedef ap_axiu<DataWidth_input,0,0,0> inSdCh; // Stream Interface only
typedef ap_axiu<DataWidth_output,0,0,0> outSdCh; // Out stream interface only

typedef std::complex<F> in_cdt; // Intermediate complex values // @suppress("Type cannot be resolved")
typedef std::complex<F> out_cdt;
typedef std::complex<F> cdt;
// HLS Complex Data typedef hls::x_complex<type> HLS_COMPLEX;

typedef union{
	unsigned int i;
	float f;
}conv;

//void matchedfilteringp1(hls::stream<inSdCh> &rxmat, hls::stream<inSdCh> &xmat, hls::stream<outSdCh> &out);
void matchedfilteringp1(hls::stream<inSdCh> &in_stream, hls::stream<outSdCh> &out_stream);

template <typename T> void kernel_mmult(T a[dim_r][dim_c], T b[dim_c][dim_r], T out[dim_r]);

#endif
