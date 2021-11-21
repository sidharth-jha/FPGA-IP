#include "matmult.h"
#include "hls_stream.h"

// T --> Cmpx || F --> Float
template <typename T, typename F> T cmpx_mult (T i_a, T i_b){
#pragma HLS INLINE
// HLS INLINE
	T C;
	F a,b,c,d,ac,ad,bd,bc;
	
	a = i_a.real();
	b = i_a.imag();
	
	c = i_b.real();
	d = i_b.imag();
	
	ac = a*b;
	ad = a*d;
	
	bd = b*d;
	bc = b*c;
	
	C.real(ac-bd);
	C.imag(bc+ad);
	
	return C;
}

template <typename T, typename F> T cmpx_add (T i_a, T i_b){
#pragma HLS INLINE
	T C;
	C.real(i_a.real() + i_b.real());
	C.imag(i_a.imag() + i_b.imag());
	
	return C;
} 

template <typename T, typename F> void kernel_mmult(T a[dim_r][dim_c], T b[dim_c][dim_r], T out[dim_r]) {
L1:
  for (int m = 0; m < dim_r; m++) {
#pragma HLS PIPELINE
  cdt sum = 0;
  L2:
    for (int n = 0; n < dim_c; n++) {
		T mul_temp = cmpx_mult<T, F> (a[m][n], b[n][m]);
		T sum_temp = cmpx_add <T, F> (mul_temp, sum);
		sum = sum_temp;
    }
	out[m] = sum;
  }
  return;
}

void dmatmult(hls::stream<inSdCh> &in_stream, hls::stream<outSdCh> &out_stream){
#pragma HLS INTERFACE axis off port=out_stream
#pragma HLS INTERFACE axis off port=in_stream
#pragma HLS INTERFACE s_axilite port=return bundle=control

    cdt rxmat[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=rxmat block factor=32 dim=2

    cdt xmat[dim_c][dim_r];
#pragma HLS ARRAY_PARTITION variable=xmat block factor=32 dim=1
	
	cdt out_vector[dim_r];
#pragma HLS ARRAY_PARTITION variable=out_vector block factor=8 dim=1
	
    conv data;

    conv data_r;
    conv data_i;

   load_rxmat:
   for (int i = 0; i < dim_r; i++){
       for (int j = 0; j < dim_c; j++){
    	   inSdCh temp = in_stream.read();
    	   data.i = (unsigned int)temp.data.range(31,0);
    	   rxmat[i][j].real(data.f);

    	   data.i = (unsigned int)temp.data.range(63,32);
    	   rxmat[i][j].imag(data.f);
       }
   }

   load_xmat:
   for (int i = 0; i < dim_r; i++){
       for (int j = 0; j < dim_c; j++){
    	   inSdCh temp = in_stream.read();
           data.i = (unsigned int)temp.data.range(31,0);
           xmat[j][i].real(data.f);

           data.i = (unsigned int)temp.data.range(63,32);
           xmat[j][i].imag(data.f);
       }
   }


    kernel_mmult<cdt, F>(rxmat, xmat, out_vector);
	
	for(int i = 0; i < dim_r; i++){
		outSdCh temp;
		data.f = out_vector[i].imag();
		temp.data.range(63, 32) = (ap_uint<32>)data.i;
		
		data.f = out_vector[i].real();
		temp.data.range(31, 0) = (ap_uint<32>)data.i;
		
		// Additional Control Signals
		temp.last = (i == dim_r - 1)? 1:0;
		temp.strb = -1;
		temp.keep = -1;
		
		out_stream.write(temp);
	}
}
