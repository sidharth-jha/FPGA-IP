#ifndef __MATMUL_H__
#define __MATMUL_H__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//  For stream interface
#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include <complex>
#include "ap_int.h"

#define dim_r 256 // Add different dimension for rows and cols, update testbench acc.
#define dim_c 64
#define DataWidth 64 // Make this 64 bit.

typedef float T;

typedef ap_axiu<DataWidth,0,0,0> intSdCh;
typedef ap_axiu<DataWidth,0,0,0> outSdCh;

typedef std::complex<T> in_cdt;
typedef std::complex<T> out_cdt;
typedef std::complex<T> cdt;

typedef union{
	unsigned int i;
	float f;
}conv;

const float dd[8] = {3.1 , 5.23, 6.11, 9.98, 8.21 , 0.13, 7.11, 3.98};

void matmul(hls::stream<intSdCh> &In, hls::stream<outSdCh> &Out);

#endif
