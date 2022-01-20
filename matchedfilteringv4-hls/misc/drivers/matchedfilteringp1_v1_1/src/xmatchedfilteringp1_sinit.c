// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmatchedfilteringp1.h"

extern XMatchedfilteringp1_Config XMatchedfilteringp1_ConfigTable[];

XMatchedfilteringp1_Config *XMatchedfilteringp1_LookupConfig(u16 DeviceId) {
	XMatchedfilteringp1_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMATCHEDFILTERINGP1_NUM_INSTANCES; Index++) {
		if (XMatchedfilteringp1_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMatchedfilteringp1_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMatchedfilteringp1_Initialize(XMatchedfilteringp1 *InstancePtr, u16 DeviceId) {
	XMatchedfilteringp1_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMatchedfilteringp1_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMatchedfilteringp1_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

