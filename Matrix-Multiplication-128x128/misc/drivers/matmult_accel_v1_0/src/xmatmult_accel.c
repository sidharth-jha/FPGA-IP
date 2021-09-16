// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xmatmult_accel.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMatmult_accel_CfgInitialize(XMatmult_accel *InstancePtr, XMatmult_accel_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XMatmult_accel_Start(XMatmult_accel *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL) & 0x80;
    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XMatmult_accel_IsDone(XMatmult_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XMatmult_accel_IsIdle(XMatmult_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XMatmult_accel_IsReady(XMatmult_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XMatmult_accel_EnableAutoRestart(XMatmult_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XMatmult_accel_DisableAutoRestart(XMatmult_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_AP_CTRL, 0);
}

void XMatmult_accel_InterruptGlobalEnable(XMatmult_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_GIE, 1);
}

void XMatmult_accel_InterruptGlobalDisable(XMatmult_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_GIE, 0);
}

void XMatmult_accel_InterruptEnable(XMatmult_accel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_IER);
    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_IER, Register | Mask);
}

void XMatmult_accel_InterruptDisable(XMatmult_accel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_IER);
    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_IER, Register & (~Mask));
}

void XMatmult_accel_InterruptClear(XMatmult_accel *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatmult_accel_WriteReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_ISR, Mask);
}

u32 XMatmult_accel_InterruptGetEnabled(XMatmult_accel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_IER);
}

u32 XMatmult_accel_InterruptGetStatus(XMatmult_accel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMatmult_accel_ReadReg(InstancePtr->Control_BaseAddress, XMATMULT_ACCEL_CONTROL_ADDR_ISR);
}

