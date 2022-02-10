#include "matchedfiltering.h"
#include "doppler_delay.h"

int main(){
	hls::stream<inSdCh> inputStream;
	hls::stream<outSdCh> outputStream;

	conv data;
	inSdCh valIn;

	FILE *readfile;
	F temp_read;
	F matrix_input_stream[dim_r][dim_c];
//	F xmat_matrix_input_stream[dim_c][dim_r];

	readfile = fopen("rxmat_fft_1.txt", "r");
	if(readfile == 0){
		std::cout<<"ERROR Reading File"<<std::endl;
		exit(999);
	}

	input_A_real_loop:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			fscanf(readfile, "%f", &temp_read);
			matrix_input_stream[i][j] = temp_read;
		}
	}

	A_stream_write_real:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			data.f = matrix_input_stream[i][j];
			valIn.data = data.i;
			valIn.last = 0;
			inputStream.write(valIn);
		}
	}

	input_A_imag_loop:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			fscanf(readfile, "%f", &temp_read);
			matrix_input_stream[i][j] = temp_read;
		}
	}

	A_stream_write_imag:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			data.f = matrix_input_stream[i][j];
			valIn.data = data.i;
			valIn.last = (i == dim_r-1 && j == dim_c-1)?1:0;
			inputStream.write(valIn);
		}
	}

	std::cout<<"Writing to RXMAT Stream Done! Starting XMAT Stream...."<<std::endl;

	fclose(readfile);
	F matrix_input_stream_1 [dim_c][dim_r];
	// B input
	readfile = fopen("xmat_fft_1.txt", "r");
	if(readfile == 0){
		std::cout<<"ERROR Reading File"<<std::endl;
		exit(999);
	}

	input_B_real_loop:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			fscanf(readfile, "%f", &temp_read);
			matrix_input_stream_1[j][i] = temp_read;
		}
	}

	B_stream_write_real:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			data.f = matrix_input_stream_1[j][i];
			valIn.data = data.i;
			valIn.last = 0;
			inputStream.write(valIn);
		}
	}

	input_B_imag_loop:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			fscanf(readfile, "%f", &temp_read);
			matrix_input_stream_1[j][i] = temp_read;
		}
	}

	B_stream_write_imag:
	for(int i=0; i<dim_r; i++){
		for(int j=0; j<dim_c; j++){
			data.f = matrix_input_stream_1[j][i];
			valIn.data = data.i;
			valIn.last = (i == dim_r-1 && j == dim_c-1)?1:0;
			inputStream.write(valIn);
		}
	}
	fclose(readfile);

	std::cout<<"Writing to Stream Done! Starting Data transfer...."<<std::endl;
	matchedfilteringp1(inputStream, outputStream);
	std::cout<<"Data transfer done..."<<std::endl;

	// TODO: Add 181 checking loop, generate 181x1024 matrix -- Done
	readfile  = fopen("y_result_1.txt", "r");
	if(readfile == 0){
			std::cout<<"ERROR Reading File"<<std::endl;
			exit(999);
	}

//	for(int i=0; i<no_of_angles; i++){
//		outstream_loop:
//		for(int j=0; j<2*dim_r; j++){
//			outSdCh temp;
//			outputStream.read(temp);
//			data.i = temp.data;
//			hw_output_vec[j] = data.f;
////			data.i = temp.data.range(63,32);
////			hw_output_vec[j+dim_r] = data.f;
//		}
//		for(int j=0; j<2*dim_r; j++){
//			fscanf(readfile, "%f", &temp_read);
//			if(abs(temp_read - hw_output_vec[j]) > 0.1){
//				std::cout<<"Error @ "<<i<<std::endl;
//				std::cout<<temp_read<<"\t\t"<<hw_output_vec[j]<<std::endl;
//				return -1;
//			}
//		}
//	}
	F hw_output_real[no_of_angles][dim_r];
	F hw_output_imag[no_of_angles][dim_r];

	// reading output_stream

	for(int i=0; i<no_of_angles; i++){
		for(int j=0; j<dim_r; j++){
			outSdCh temp;
			outputStream.read(temp);
			data.i = temp.data;
			hw_output_real[i][j] = data.f;
		}
	}

	for(int i=0; i<no_of_angles; i++){
		for(int j=0; j<dim_r; j++){
			outSdCh temp;
			outputStream.read(temp);
			data.i = temp.data;
			hw_output_imag[i][j] = data.f;
		}
	}

	// Checking the output

	for(int i=0; i<no_of_angles; i++){
		for(int j=0; j<dim_r; j++){
			fscanf(readfile, "%f", &temp_read);
			if(abs(temp_read - hw_output_real[i][j]) > 0.1){
				std::cout<<"Error @ "<<j<<std::endl;
				std::cout<<temp_read<<"\t\t"<<hw_output_real[j]<<std::endl;
				return -1;
			}
		}

		for(int j=0; j<dim_r; j++){
			fscanf(readfile, "%f", &temp_read);
			if(abs(temp_read - hw_output_imag[i][j]) > 0.1){
				std::cout<<"Error @ "<<j<<std::endl;
				std::cout<<temp_read<<"\t\t"<<hw_output_imag[j]<<std::endl;
				return -1;
			}
		}
	}


//	F output_array[2*dim_r];
//	// Loading output OutputStream
//	OutStream_loop:
//	for(int i=0; i<dim_r; i++){
//		outSdCh temp;
//		outputStream.read(temp);
//		data.i = temp.data.range(31,0);
//		output_array[i] = data.f;
//		data.i = temp.data.range(63,32);
//		output_array[i+dim_r] = data.f;
//		if(i == dim_r-1){
//			if(temp.last == 1){
//				std::cout<<"Last Signal Detected"<<std::endl;
//			}
//		}
//	}
//
//	readfile = fopen("input-c.txt", "r");
//	if(readfile == 0){
//		std::cout<<"ERROR Reading File"<<std::endl;
//		exit(999);
//	}
//
//	for(int i=0; i<2*dim_r; i++){
//		fscanf(readfile, "%f", &temp_read);
//		if(abs(temp_read - output_array[i]) > 0.1){
//			std::cout<<"Error @ "<<i<<std::endl;
//			std::cout<<temp_read<<"\t\t"<<output_array[i]<<std::endl;
//			return -1;
//		}
//	}

//	// reading doppler_delay elements
//	for(int i=0; i<no_of_antenna; i++){
//		for(int j=0; j<no_of_angles; j++){
//			cdt x = cdt(dd_real[i][j], dd_imag[i][j]);
//		}
//	}

	std::cout<<"Operation Successful"<<std::endl;
	return 0;
}
