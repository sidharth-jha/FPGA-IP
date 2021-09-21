#include "matmul.h"

void DiagMatMul(T A[dim][dim], T B[dim][dim], T C[dim]){
	T res = 0;
	loop_1: for(int i=0; i<dim; i++){
#pragma HLS PIPELINE
		res = 0;
		loop_2: for(int j=0; j<dim; j++){
			res += A[i][j] * B[j][i];
		}
		C[i] = res;
	}
}

void matmul(hls::stream<intSdCh> &in_stream, hls::stream<intSdCh> &out_stream){
#pragma HLS INTERFACE axis register both port=out_stream
#pragma HLS INTERFACE axis register both port=in_stream
#pragma HLS INTERFACE s_axilite port=return bundle=control

	T A[dim][dim];
#pragma HLS ARRAY_PARTITION variable=A dim=1 complete
	T B[dim][dim];
#pragma HLS ARRAY_PARTITION variable=B dim=1 complete

	T mulOut[dim];
#pragma HLS ARRAY_PARTITION variable=A dim=1 complete
	intSdCh valIn;
	conv data;
	int i,j,k;


//saving streaming data to respective variables
	loop_input_A1: for(i=0;i<dim;i++){
		loop_input_A2: for(j=0;j<dim;j++){
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data;
			A[i][j] = data.f;
		}
	}

	loop_input_B1: for(i=0;i<dim;i++){
		loop_input_B2: for(j=0;j<dim;j++){
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data;
			B[i][j] = data.f;
		}
	}

	DiagMatMul(A, B, mulOut);

	loop_out1: for(i=0;i<dim;i++){
#pragma HLS PIPELINE
		intSdCh valOut;
		data.f = mulOut[i];
		valOut.data = (ap_uint<32>)data.i;
		// generating the last signal and strobe signal
		valOut.last = ((i==dim-1))?1:0;
		valOut.strb = -1;
		valOut.keep = 15;
		out_stream.write(valOut);
	}
}
