// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xdmatmult.h"

extern XDmatmult_Config XDmatmult_ConfigTable[];

XDmatmult_Config *XDmatmult_LookupConfig(u16 DeviceId) {
	XDmatmult_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XDMATMULT_NUM_INSTANCES; Index++) {
		if (XDmatmult_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XDmatmult_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XDmatmult_Initialize(XDmatmult *InstancePtr, u16 DeviceId) {
	XDmatmult_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XDmatmult_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XDmatmult_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

