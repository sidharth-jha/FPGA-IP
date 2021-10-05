#include "matmul.h"

void DiagMatMul(cdt A[dim_r][dim_c], cdt B[dim_r][dim_c], cdt C[dim_r]){
	cdt res = 0;
	loop_1: for(int i=0; i<dim_r; i++){
#pragma HLS PIPELINE
		res = 0;
		loop_2: for(int j=0; j<dim_c; j++){
			res += A[i][j] * B[j][i];
		}
		C[i] = res;
	}
}

void matmul(hls::stream<intSdCh> &in_stream, hls::stream<outSdCh> &out_stream){
#pragma HLS INTERFACE axis register both port=out_stream
#pragma HLS INTERFACE axis register both port=in_stream
#pragma HLS INTERFACE s_axilite port=return bundle=control

	cdt A[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=A block factor=4 dim=2
	cdt B[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=4 dim=1

	cdt mulOut[dim_r]; // Calculating output for Complex Data type
#pragma HLS ARRAY_PARTITION variable=mulOut block factor=4 dim=1

	intSdCh valIn; // Used to read/write 64-bit data
	conv data;
	int i,j,k;


//saving streaming data to respective variables
	loop_input_A1: for(i=0;i<dim_r;i++){
		loop_input_A2: for(j=0;j<dim_c;j++){
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data.range(63,32);
			A[i][j].real(data.f);

			data.i = (unsigned int)valIn.data.range(31,0);
			A[i][j].imag(data.f);

		}
	}

	loop_input_B1: for(i=0;i<dim_r;i++){
		loop_input_B2: for(j=0;j<dim_c;j++){
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data.range(63,32);
			B[i][j].real(data.f);

			data.i = (unsigned int)valIn.data.range(31,0);
			B[i][j].imag(data.f);

		}
	}

	DiagMatMul(A, B, mulOut);

	intSdCh valOut;

	loop_out1: for(i=0;i<dim_r;i++){
#pragma HLS PIPELINE
		data.f = mulOut[i].real();
		valOut.data.range(63,32) = (ap_uint<32>)data.i;

		data.f = mulOut[i].imag();
		valOut.data.range(31,0) = (ap_uint<32>)data.i;

		// generating the last signal and strobe signal
		valOut.last = ((i==dim_r-1))?1:0;
		valOut.strb = -1;
		valOut.keep = 15;
		out_stream.write(valOut);
	}
}
