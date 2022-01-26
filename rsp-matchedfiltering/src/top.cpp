#include "matchedfiltering.h"
#include "hls_stream.h"

//template <typename T, typename F> void kernel_mmult(T a[dim_r][dim_c], T b[dim_c][dim_r], T out[dim_r]) {
//int factor = 128;
//	L1:
//	for (int m = 0; m < dim_r; m++) {
//		cdt sum = 0;
//		L2:
//		for (int n = 0; n < dim_c/factor; n++) {
//#pragma HLS PIPELINE
//			cdt temp = 0;
//			for(int i=0; i < factor; i++){
//				temp += a[m][n*factor+i] * b[n*factor+i][m];
//			}
//			sum+=temp;
//		}
//		out[m] = sum;
//	}
//	return;
//}


void print_matrix_rxmat(cdt matrix_in[dim_r][dim_c]){
	std::cout<<"RXMAT"<<std::endl;
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			std::cout<<matrix_in[i][j].real()<<"+1j("<<matrix_in[i][j].imag()<<")"<<"\t\t";
		}
		std::cout<<""<<std::endl;
	}
	return;
}

void print_matrix_xmat(cdt matrix_in[dim_c][dim_r]){
	std::cout<<"XMAT"<<std::endl;
	for(int i=0; i<dim_c; i++){
		for(int j=0; j<dim_r; j++){
			std::cout<<matrix_in[i][j].real()<<"+1j("<<matrix_in[i][j].imag()<<")"<<"\t\t";
		}
		std::cout<<""<<std::endl;
	}
	return;
}

template <typename T, typename F> void kernel_mmult(T a[dim_r][dim_c], T b[dim_c][dim_r], T out[dim_r]) {
L1:
  for(int m = 0; m < dim_r; m++) {
#pragma HLS PIPELINE
	  cdt sum = 0;
  L2:
  	  for(int n = 0; n < dim_c; n++) {
		sum+= a[m][n] * b[n][m];
  	  }
  	  out[m] = sum;
  }
  return;
}


//template <typename T, typename F> void kernel_vector_mmult(T a[dim_c], T b[dim_c], T out) {
//	T out_temp = 0;
//	int factor = 64; //unrolling factor
//	for(int i=0; i<dim_c/factor; i++){
//#pragma HLS PIPELINE
//		T temp = 0;
//		for(int j=0; j<factor; j++){
//			temp += a[i*factor + j] * b[i*factor + j];
//		}
//		out_temp += temp;
//	}
//	out = out_temp;
//	return;
//}

// The output has to be 64 bit for FFT IP!!!! -- done
void matchedfilteringp1(hls::stream<inSdCh> &in_stream, hls::stream<outSdCh> &out_stream){
#pragma HLS INTERFACE axis off port=out_stream
#pragma HLS INTERFACE axis off port=in_stream
#pragma HLS INTERFACE s_axilite port=return bundle=control
	//#pragma HLS DATAFLOW

    cdt rxmat[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=rxmat cyclic factor=5 dim=2

    cdt xmat[dim_c][dim_r];
#pragma HLS ARRAY_PARTITION variable=xmat cyclic factor=5 dim=1

	cdt out_vector[dim_r];
#pragma HLS ARRAY_PARTITION variable=out_vector block factor=128 dim=1

    conv w,x,y,z,o;

   load_rxmat_real:
	for(int i = 0; i < dim_r; i++){
		for(int j = 0; j < dim_c; j++){
#pragma HLS PIPELINE
		   inSdCh temp = in_stream.read();
		   x.i = (unsigned int)temp.data;
		   rxmat[i][j].real(x.f);
		}
	}

   load_rxmat_imag:
	for(int i = 0; i < dim_r; i++){
		for(int j = 0; j < dim_c; j++){
#pragma HLS PIPELINE
   		   inSdCh temp = in_stream.read();
   		   y.i = (unsigned int)temp.data;
   		   rxmat[i][j].imag(y.f);

		}
	}

//	print_matrix_rxmat(rxmat);

  load_xmat_real:
	for(int i = 0; i < dim_c; i++){
		for(int j = 0; j < dim_r; j++){
#pragma HLS PIPELINE
		  inSdCh temp = in_stream.read();
   		  z.i = (unsigned int)temp.data;
   		  xmat[i][j].real(z.f);
		}
	}

  load_xmat_imag:
	for(int i = 0; i < dim_c; i++){
		for(int j = 0; j < dim_r; j++){
#pragma HLS PIPELINE
		  inSdCh temp = in_stream.read();
		  w.i = (unsigned int)temp.data;
		  xmat[i][j].imag(w.f);
		}
	}

//	print_matrix_xmat(xmat);

	kernel_mmult<cdt, F>(rxmat, xmat, out_vector);

	write_output:
	for(int i=0; i<dim_r; i++){
		outSdCh temp;
		o.f = out_vector[i].imag();
		temp.data.range(63,32) = (ap_uint<32>)o.i;

		o.f = out_vector[i].real();
		temp.data.range(31,0) = (ap_uint<32>)o.i;

		temp.strb = -1;
		temp.keep = -1;
		temp.last = (i == dim_r - 1)?1:0;

		out_stream.write(temp);
	}
}
