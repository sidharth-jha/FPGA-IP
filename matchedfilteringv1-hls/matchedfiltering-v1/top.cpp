#include "matchedfiltering.h"
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

void dmatmult(hls::stream<inSdCh> &rxmat_stream, hls::stream<inSdCh> &xmat_stream, hls::stream<outSdCh> &out_stream){
#pragma HLS INTERFACE axis off port=out_stream
#pragma HLS INTERFACE axis off port=rxmat_stream
#pragma HLS INTERFACE axis off port=xmat_stream
#pragma HLS INTERFACE s_axilite port=return bundle=control

    cdt rxmat[dim_r][dim_c];
#pragma HLS ARRAY_PARTITION variable=rxmat cyclic factor=128 dim=2

    cdt xmat[dim_c][dim_r];
#pragma HLS ARRAY_PARTITION variable=xmat cyclic factor=128 dim=1

	cdt out_vector[dim_r];
#pragma HLS ARRAY_PARTITION variable=out_vector block factor=64 dim=1

    conv w,x,y,z,o;

   load_rxmat_real:
	for(int i = 0; i < dim_r; i++){
		for(int j = 0; j < dim_c; j++){
		   inSdCh temp = rxmat_stream.read();
		   x.i = (unsigned int)temp.data;
		   rxmat[i][j].real(x.f);
//		   rxmat[i][j] = x.f;
		}
	}

   load_rxmat_imag:
	for(int i = 0; i < dim_r; i++){
		for(int j = 0; j < dim_c; j++){
   		   inSdCh temp = rxmat_stream.read();
   		   y.i = (unsigned int)temp.data;
   		   rxmat[i][j].imag(y.f);
//		   rxmat_v[i][j] = x.f;

		}
	}

  load_xmat_real:
	for(int i = 0; i < dim_r; i++){
		for(int j = 0; j < dim_c; j++){
		  inSdCh temp = xmat_stream.read();
   		  z.i = (unsigned int)temp.data;
   		  xmat[i][j].real(z.f);
		}
	}

  load_xmat_imag:
	for(int i = 0; i < dim_r; i++){
		for(int j = 0; j < dim_c; j++){
		  inSdCh temp = xmat_stream.read();
		  w.i = (unsigned int)temp.data;
		  xmat[i][j].imag(w.f);
		}
	}


    kernel_mmult<cdt, F>(rxmat, xmat, out_vector);

	for(int i = 0; i < dim_r; i++){
		outSdCh temp;
		o.f = out_vector[i].imag();
		temp.data.range(63, 32) = (ap_uint<32>)o.i;

		o.f = out_vector[i].real();
		temp.data.range(31, 0) = (ap_uint<32>)o.i;

		// Additional Control Signals
		temp.last = (i == dim_r - 1)? 1:0;
		temp.strb = -1;
		temp.keep = -1;

		out_stream.write(temp);
	}
}
