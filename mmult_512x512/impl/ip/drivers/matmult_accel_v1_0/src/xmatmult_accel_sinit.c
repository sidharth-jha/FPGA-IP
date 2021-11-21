// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmatmult_accel.h"

extern XMatmult_accel_Config XMatmult_accel_ConfigTable[];

XMatmult_accel_Config *XMatmult_accel_LookupConfig(u16 DeviceId) {
	XMatmult_accel_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMATMULT_ACCEL_NUM_INSTANCES; Index++) {
		if (XMatmult_accel_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMatmult_accel_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMatmult_accel_Initialize(XMatmult_accel *InstancePtr, u16 DeviceId) {
	XMatmult_accel_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMatmult_accel_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMatmult_accel_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

