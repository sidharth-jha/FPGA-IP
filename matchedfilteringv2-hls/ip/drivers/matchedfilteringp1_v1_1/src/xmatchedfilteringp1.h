// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XMATCHEDFILTERINGP1_H
#define XMATCHEDFILTERINGP1_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xmatchedfilteringp1_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XMatchedfilteringp1_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XMatchedfilteringp1;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XMatchedfilteringp1_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XMatchedfilteringp1_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XMatchedfilteringp1_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XMatchedfilteringp1_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XMatchedfilteringp1_Initialize(XMatchedfilteringp1 *InstancePtr, u16 DeviceId);
XMatchedfilteringp1_Config* XMatchedfilteringp1_LookupConfig(u16 DeviceId);
int XMatchedfilteringp1_CfgInitialize(XMatchedfilteringp1 *InstancePtr, XMatchedfilteringp1_Config *ConfigPtr);
#else
int XMatchedfilteringp1_Initialize(XMatchedfilteringp1 *InstancePtr, const char* InstanceName);
int XMatchedfilteringp1_Release(XMatchedfilteringp1 *InstancePtr);
#endif

void XMatchedfilteringp1_Start(XMatchedfilteringp1 *InstancePtr);
u32 XMatchedfilteringp1_IsDone(XMatchedfilteringp1 *InstancePtr);
u32 XMatchedfilteringp1_IsIdle(XMatchedfilteringp1 *InstancePtr);
u32 XMatchedfilteringp1_IsReady(XMatchedfilteringp1 *InstancePtr);
void XMatchedfilteringp1_EnableAutoRestart(XMatchedfilteringp1 *InstancePtr);
void XMatchedfilteringp1_DisableAutoRestart(XMatchedfilteringp1 *InstancePtr);

void XMatchedfilteringp1_Set_transaction_number(XMatchedfilteringp1 *InstancePtr, u32 Data);
u32 XMatchedfilteringp1_Get_transaction_number(XMatchedfilteringp1 *InstancePtr);

void XMatchedfilteringp1_InterruptGlobalEnable(XMatchedfilteringp1 *InstancePtr);
void XMatchedfilteringp1_InterruptGlobalDisable(XMatchedfilteringp1 *InstancePtr);
void XMatchedfilteringp1_InterruptEnable(XMatchedfilteringp1 *InstancePtr, u32 Mask);
void XMatchedfilteringp1_InterruptDisable(XMatchedfilteringp1 *InstancePtr, u32 Mask);
void XMatchedfilteringp1_InterruptClear(XMatchedfilteringp1 *InstancePtr, u32 Mask);
u32 XMatchedfilteringp1_InterruptGetEnabled(XMatchedfilteringp1 *InstancePtr);
u32 XMatchedfilteringp1_InterruptGetStatus(XMatchedfilteringp1 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
