#include "matchedfilter.h"
#include <malloc.h>

void matMulsw(cdt *A, cdt *B, cdt *mulOut){
	loop2: for(int j=0;j<dim_r;j++){
		cdt res=0;
		loop3: for(int k=0;k<dim_c;k++){
			res += A[j*dim_r + k] * B[k*dim_r + j];
		}
		mulOut[j] = res;
	}
}

void DopplerDelay_sw(cdt A[dim_r][dim_c], cdt out[dim_r][dim_c]){
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			out[i][j] = A[i][j] * dd[j];
		}
	}
}

int main(){
	hls::stream<intSdCh> inputStream;
	hls::stream<intSdCh> outputStream;

	T* A_re = (T *)malloc(dim_r*dim_c*sizeof(T));
	T* B_re = (T *)malloc(dim_r*dim_c*sizeof(T));;

	T* A_im = (T *)malloc(dim_r*dim_c*sizeof(T));
	T* B_im = (T *)malloc(dim_r*dim_c*sizeof(T));

//	T A_re[dim_r][dim_c] = (T *)malloc(dim_r*dim_c*sizeof(T));
//	T B_re[dim_c][dim_r] = (T *)malloc(dim_r*dim_c*sizeof(T));;

//	T A_im[dim_r][dim_c];
//	T B_im[dim_c][dim_r];



	cdt* A_cmpx = (cdt *)malloc(dim_r*dim_c*sizeof(cdt));
	cdt* B_cmpx = (cdt *)malloc(dim_r*dim_c*sizeof(cdt));
	cdt A_cmpx_dd[dim_r][dim_c];
	cdt* hwOut = (cdt *)malloc(dim_r*sizeof(cdt));
	cdt* swOut = (cdt *)malloc(dim_r*sizeof(cdt));

	int i,j;
	conv data;
	intSdCh valIn;

	// Initialize arrays
	for(i=0;i<dim_r;i++){
		for(j=0;j<dim_c;j++){
			A_re[i*dim_r + j] = (float)(i+j);
			B_re[j*dim_r + i] = (float)(i*j);

			A_im[i*dim_r + j] = (float)(i-j);
			B_im[j*dim_r + i] = (float)(i-j);

			A_cmpx[i*dim_r + j].real(A_re[i*dim_r + j]);
			A_cmpx[i*dim_r + j].imag(A_im[i*dim_r + j]);

//			A_cmpx[i][j].real(A_re[i*dim_r + j]);
//			A_cmpx[i][j].imag(A_im[i*dim_r + j]);

			B_cmpx[j*dim_r + i].real(B_re[j*dim_r + i]);
			B_cmpx[j*dim_r + i].imag(B_im[j*dim_r + i]);

		}
	}

	// Stream input A
	for(i=0;i<dim_r;i++){
		for(j=0;j<dim_c;j++){
			data.f = A_im[i*dim_r + j];
			valIn.data.range(63,32) = (ap_uint<32>)data.i;

			data.f = A_re[i*dim_r + j];
			valIn.data.range(31,0) = (ap_uint<32>)data.i;
			valIn.last=0;
			inputStream.write(valIn);
		}
	}

	// stream input B
	for(i=0;i<dim_c;i++){
		for(j=0;j<dim_r;j++){
			data.f = B_im[i*dim_c + j];
			valIn.data.range(63,32) = (ap_uint<32>)data.i;

			data.f = B_re[i*dim_c + j];
			valIn.data.range(31,0) = (ap_uint<32>)data.i;

			valIn.last=((i==dim_r-1)&&(j==dim_c-1))?1:0;
			inputStream.write(valIn);
		}
	}

//	Print_A:
//	for(i=0; i<dim_r;i++){
//		for(j=0; j<dim_c; j++){
//			std::cout<<A_cmpx[i][j].real()<<"+j"<<A_cmpx[i][j].imag()<<"\t";
//		}
//		printf("\n");
//	}

// Function calling
	matmul(inputStream,outputStream);
//	DopplerDelay_sw(A_cmpx, A_cmpx_dd);
	matMulsw(A_cmpx,B_cmpx,swOut);

	// assign output stream to hwout
	for(i=0;i<dim_r;i++){
		intSdCh valOut;
		outputStream.read(valOut);
		int str = (int)valOut.strb;
		int las = (int)valOut.last;
		data.i = valOut.data.range(63,32);
		hwOut[i].imag(data.f);

		data.i = valOut.data.range(31,0);
		hwOut[i].real(data.f);

		if(i==dim_r-1){
			std::cout<<"Last signal: "<<valOut.last<<std::endl;
		}
	}

	Print_MulOut:
	for(i=0; i<dim_r;i++){
			std::cout<<hwOut[i].real()<<hwOut[i].imag()<<"j"<<"\t";
		}
		printf("\n");
	Print_SwOut:
		for(i=0; i<dim_r;i++){
			std::cout<<swOut[i].real()<<swOut[i].imag()<<"j"<<"\t";
		}
		printf("\n");

	// Result check
	for(i=0;i<dim_r;i++){
		if(swOut[i].real() != hwOut[i].real() || swOut[i].imag() != hwOut[i].imag()){
			printf("Error at position [%d]: Hardware Output = %f , Actual output = %f\n",i, hwOut[i].real(), swOut[i].real());
			printf("Error at position [%d]: Hardware Output = %f , Actual output = %f\n",i, hwOut[i].imag(), swOut[i].imag());
			return -1;
		}
	}

	printf("Success!\n");
	return 0;
}
