// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xdmatmult.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XDmatmult_CfgInitialize(XDmatmult *InstancePtr, XDmatmult_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XDmatmult_Start(XDmatmult *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL) & 0x80;
    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XDmatmult_IsDone(XDmatmult *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XDmatmult_IsIdle(XDmatmult *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XDmatmult_IsReady(XDmatmult *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XDmatmult_EnableAutoRestart(XDmatmult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XDmatmult_DisableAutoRestart(XDmatmult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_AP_CTRL, 0);
}

void XDmatmult_InterruptGlobalEnable(XDmatmult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_GIE, 1);
}

void XDmatmult_InterruptGlobalDisable(XDmatmult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_GIE, 0);
}

void XDmatmult_InterruptEnable(XDmatmult *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_IER);
    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_IER, Register | Mask);
}

void XDmatmult_InterruptDisable(XDmatmult *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_IER);
    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_IER, Register & (~Mask));
}

void XDmatmult_InterruptClear(XDmatmult *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDmatmult_WriteReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_ISR, Mask);
}

u32 XDmatmult_InterruptGetEnabled(XDmatmult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_IER);
}

u32 XDmatmult_InterruptGetStatus(XDmatmult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDmatmult_ReadReg(InstancePtr->Control_BaseAddress, XDMATMULT_CONTROL_ADDR_ISR);
}

