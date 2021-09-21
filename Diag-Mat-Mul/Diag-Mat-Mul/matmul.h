#ifndef __MATMUL_H__
#define __MATMUL_H__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//  For stream interface
#include <hls_stream.h>
#include <ap_axi_sdata.h>

#define dim 16
typedef float T;
typedef ap_axiu<32,0,0,0> intSdCh;

typedef union{
	unsigned int i;
	float f;
}conv;

void matmul(hls::stream<intSdCh> &In, hls::stream<intSdCh> &Out);

#endif
