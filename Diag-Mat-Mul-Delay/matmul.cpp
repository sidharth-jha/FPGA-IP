#include "matmul.h"

void DiagMatMul(cdt A[dim_r][dim_c], cdt B[dim_c][dim_r], cdt C[dim_r]){
	cdt res = 0;
	matmul_loop_1: for(int i=0; i<dim_r; i++){
#pragma HLS PIPELINE II=1
		res = 0;
		matmul_loop_2: for(int j=0; j<dim_c; j++){
			res += A[i][j] * B[j][i];
		}
		C[i] = res;
	}
}

void DopplerDelay(cdt rxmat[dim_r][dim_c], cdt rxmat_delay[dim_r][dim_c]){
	for(int i=0; i<dim_r; i++){
#pragma HLS PIPELINE II=1
		for(int j=0; j<dim_c;j++){
			rxmat_delay[i][j] = rxmat[i][j] * dd[j];
		}
	}
}

void matmul(hls::stream<intSdCh> &in_stream, hls::stream<outSdCh> &out_stream){
#pragma HLS INTERFACE axis register both port=out_stream
#pragma HLS INTERFACE axis register both port=in_stream
#pragma HLS INTERFACE s_axilite port=return bundle=control

	cdt static rxmat[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=rxmat block factor=4 dim=2
	cdt static rxmat_delay[dim_r][dim_c];

	cdt static xmat[dim_c][dim_r];
#pragma HLS ARRAY_PARTITION variable=xmat cyclic factor=4 dim=1

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
			rxmat[i][j].imag(data.f);

			data.i = (unsigned int)valIn.data.range(31,0);
			rxmat[i][j].real(data.f);
		}
	}

	loop_input_B1: for(i=0;i<dim_c;i++){
		loop_input_B2: for(j=0;j<dim_r;j++){
			valIn = in_stream.read();
			data.i = (unsigned int)valIn.data.range(63,32);
			xmat[i][j].imag(data.f);

			data.i = (unsigned int)valIn.data.range(31,0);
			xmat[i][j].real(data.f);
		}
	}


	DopplerDelay(rxmat, rxmat_delay);
	DiagMatMul(rxmat_delay, xmat, mulOut);

	loop_out1: for(i=0;i<dim_r;i++){
#pragma HLS PIPELINE
		intSdCh valOut;
		data.f = mulOut[i].imag();
		valOut.data.range(63,32) = (ap_uint<32>)data.i;

		data.f = mulOut[i].real();
		valOut.data.range(31,0) = (ap_uint<32>)data.i;

		// generating the last signal and strobe signal
		valOut.last = ((i==dim_r-1))?1:0;
		valOut.strb = -1;
		valOut.keep = -1;
		out_stream.write(valOut);
	}
}
