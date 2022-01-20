// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xmatchedfilteringp1.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMatchedfilteringp1_CfgInitialize(XMatchedfilteringp1 *InstancePtr, XMatchedfilteringp1_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XMatchedfilteringp1_Start(XMatchedfilteringp1 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL) & 0x80;
    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XMatchedfilteringp1_IsDone(XMatchedfilteringp1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XMatchedfilteringp1_IsIdle(XMatchedfilteringp1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XMatchedfilteringp1_IsReady(XMatchedfilteringp1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XMatchedfilteringp1_EnableAutoRestart(XMatchedfilteringp1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XMatchedfilteringp1_DisableAutoRestart(XMatchedfilteringp1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_AP_CTRL, 0);
}

void XMatchedfilteringp1_InterruptGlobalEnable(XMatchedfilteringp1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_GIE, 1);
}

void XMatchedfilteringp1_InterruptGlobalDisable(XMatchedfilteringp1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_GIE, 0);
}

void XMatchedfilteringp1_InterruptEnable(XMatchedfilteringp1 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_IER);
    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_IER, Register | Mask);
}

void XMatchedfilteringp1_InterruptDisable(XMatchedfilteringp1 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_IER);
    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_IER, Register & (~Mask));
}

void XMatchedfilteringp1_InterruptClear(XMatchedfilteringp1 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatchedfilteringp1_WriteReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_ISR, Mask);
}

u32 XMatchedfilteringp1_InterruptGetEnabled(XMatchedfilteringp1 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_IER);
}

u32 XMatchedfilteringp1_InterruptGetStatus(XMatchedfilteringp1 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMatchedfilteringp1_ReadReg(InstancePtr->Control_BaseAddress, XMATCHEDFILTERINGP1_CONTROL_ADDR_ISR);
}

