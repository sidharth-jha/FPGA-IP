#include "matchedfiltering.h"
#include "hls_stream.h"
#include "doppler_delay.h"

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
	for(int i=0; i<1; i++){
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
		for(int j=0; j<1; j++){
			std::cout<<matrix_in[i][j].real()<<"+1j("<<matrix_in[i][j].imag()<<")"<<"\t\t";
		}
		std::cout<<""<<std::endl;
	}
	return;
}

void print_y_doppler(cdt y_doppler[no_of_angles][dim_r]){
	std::cout<<"y doppler"<<std::endl;
	for(int i=0; i<1; i++){
		for(int j=0; j<dim_r; j++){
			std::cout<<y_doppler[i][j].real()<<"+1j("<<y_doppler[i][j].imag()<<")"<<"\t\t";
		}
		std::cout<<""<<std::endl;
	}
	return;
}

void print_y_single(cdt y[dim_r]){
	for(int j=0; j<dim_r; j++){
		std::cout<<y[j].real()<<"+1j("<<y[j].imag()<<")"<<"\t\t";
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

//void dmm(cdt rxmat_dd[dim_r][dim_c], cdt xmat[dim_c][dim_r], cdt out[dim_r]){
//	print_matrix_rxmat(rxmat_dd);
//	print_matrix_xmat(xmat);
//	dL1:
//	for(int i=0; i<dim_r; i++){
//		cdt sum = 0;
//		for(int j=0; j<dim_c; j++){
//			sum += rxmat_dd[i][j] * xmat[j][i];
//		}
//		out[i] = sum;
//	}
//	print_y_single(out);
//	return;
//}

void doppler_delay(cdt rxmat[dim_r][dim_c], cdt rxmat_dd[dim_r][dim_c], int angle){
	dd_L1:
	for(int i=0; i<dim_r; i++){
#pragma HLS PIPELINE II=1
		dd_L2:
		for(int j=0; j<dim_c; j++){
			rxmat_dd[i][j] = rxmat[i][j] * cdt(dd_real[angle][j], dd_imag[angle][j]);
		}
	}
	return;
}

void single_doppler(cdt rxmat[dim_r][dim_c], cdt xmat[dim_c][dim_r], cdt y_doppler[no_of_angles][dim_r]){
	for(int i=0; i<no_of_angles; i++){
#pragma HLS PIPELINE
		cdt rxmat_dd[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=rxmat_dd cyclic factor=5 dim=2
		doppler_delay(rxmat, rxmat_dd, i);
		kernel_mmult<cdt, F>(rxmat_dd, xmat, y_doppler[i]);
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

	cdt y_doppler[no_of_angles][dim_r];
#pragma HLS ARRAY_PARTITION variable=y_doppler block factor=10 dim=2

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

	single_doppler(rxmat, xmat, y_doppler);

//	print_y_doppler(y_doppler);

//	for(int i=0; i<dim_r; i++){
//		outSdCh temp;
//		o.f = out_vector[i].imag();
//		temp.data.range(63,32) = (ap_uint<32>)o.i;
//
//		o.f = out_vector[i].real();
//		temp.data.range(31,0) = (ap_uint<32>)o.i;
//
//		temp.strb = -1;
//		temp.keep = -1;
//		temp.last = (i == dim_r - 1)?1:0;
//
//		out_stream.write(temp);
//	}
	write_output:
	for(int i=0; i<no_of_angles; i++){
		for(int j=0; j<dim_r; j++){
			outSdCh temp;
			o.f = y_doppler[i][j].imag();
			temp.data.range(63,32) = (ap_uint<32>)o.i;

			o.f = y_doppler[i][j].real();
			temp.data.range(31,0) = (ap_uint<32>)o.i;

			temp.strb = -1;
			temp.keep = -1;
			temp.last = ((i == no_of_angles - 1) && (j == dim_r - 1))?1:0;

			out_stream.write(temp);

		}
	}
}
