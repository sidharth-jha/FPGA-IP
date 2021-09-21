#include "matmul.h"


void matMulsw(T A[dim][dim], T B[dim][dim], T mulOut[dim]){
	loop2: for(int j=0;j<dim;j++){
		T res=0;
		loop3: for(int k=0;k<dim;k++){
			res += A[j][k] * B[k][j];
		}
		mulOut[j] = res;
	}
}

int main(){
	hls::stream<intSdCh> inputStream;
	hls::stream<intSdCh> outputStream;

	T A[dim][dim];
	T B[dim][dim];
	T hwOut[dim];
	T swOut[dim];

	int i,j;
	conv data;
	intSdCh valIn;

	// Initialize arrays
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			A[i][j] = (float)(i+j);
			B[i][j] = (float)(i*j);
		}
	}

	// Stream input A
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			data.f = A[i][j];
			valIn.data = (ap_uint<32>)data.i;
			valIn.last=0;
			inputStream.write(valIn);
		}
	}

	// stream input B
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			data.f = B[i][j];
			valIn.data = (ap_uint<32>)data.i;
			valIn.last=((i==dim-1)&&(j==dim-1))?1:0;
			inputStream.write(valIn);
		}
	}

// Function calling
	matmul(inputStream,outputStream);
	matMulsw(A,B,swOut);

	// assign output stream to hwout
	for(i=0;i<dim;i++){
		intSdCh valOut;
		outputStream.read(valOut);
		int str = (int)valOut.strb;
		int las = (int)valOut.last;
		data.i = valOut.data;
		hwOut[i] = data.f;
		if(i==dim-1){
			std::cout<<"Last signal: "<<valOut.last<<std::endl;
		}
	}

	// Result check
	for(i=0;i<dim;i++){
		if(swOut[i] != hwOut[i]){
			printf("Error at position [%d]: Hardware Output = %f , Actual output = %f",i, hwOut[i], swOut[i]);
			return -1;
		}
	}

	printf("Success!\n");
	return 0;
}
