#ifndef __MATMUL_H__
#define __MATMUL_H__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include <complex.h>
#include "ap_int.h"

#define dim_r 16
#define dim_c 16
#define DataWidth 64

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
void matmul(hls::stream<intSdCh> &In, hls::stream<outSdCh> &Out);

#endif
