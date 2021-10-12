#include "matmul.h"

void DiagMatMul(cdt A[dim_r][dim_c], cdt B[dim_c][dim_r], cdt C[dim_r]){
	cdt res = 0;
	loop_dmm1:
	for(int i=0; i<dim_r; i++){
#pragma HLS PIPELINE II=1
		res = 0;
		loop_dmm2:
		for(int j=0; i<dim_c; j++){
			res += A[i][j] * B[j][i];
		}
		C[i] = res;
	}
}

void matmul(hls::stream<intSdCh> &in_stream, hls::stream<intSdCh> &out_stream){
#pragma HLS INTERFACE axis register both port=out_stream
#pragma HLS INTERFACE axis register both port=in_stream

	cdt A[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=A block factor=4 dim=2
	cdt B[dim_c][dim_r];
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=4 dim=1
	cdt mulout[dim_r];
#pragma HLS ARRAY_PARTITION variable=mulout block factor=4 dim=1

	intSdCh valIn;
	conv data;
	int i,j,k;

	input_A1:
	for(i=0; i<dim_r; i++){
		for(j=0; j<dim_c; j++){
#pragma HLS PIPELINE II=1
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data.range(63,32);
			A[i][j].imag(data.f);

			data.i = (unsigned int)valIn.data.range(31,0);
			A[i][j].real(data.f);
		}
	}

	input_B1:
	for(i=0; i<dim_c; i++){
		for(j=0; j<dim_r; j++){
#pragma HLS PIPELINE II=1
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data.range(63,32);
			B[i][j].imag(data.f);

			data.i = (unsigned int)valIn.data.range(31,0);
			B[i][j].real(data.f);
		}
	}

	DiagMatMul(A,B,mulout);

	output_mulout1:
	for(i=0; i<dim_r; i++){
#pragma HLS PIPELINE II=1
		outSdCh valOut;
		data.f = mulout[i].real();
		valOut.data.range(31,0) = (ap_uint<32>)data.i;

		data.f = mulout[i].imag();
		valOut.data.range(63,32) = (ap_uint<32>)data.i;

		valOut.last = (i==dim_r-1)?1:0;
		valOut.keep = -1;
		valOut.strb = -1;
		out_stream.write(valOut);
	}
}
