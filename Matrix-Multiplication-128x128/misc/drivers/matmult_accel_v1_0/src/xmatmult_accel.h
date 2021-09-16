// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XMATMULT_ACCEL_H
#define XMATMULT_ACCEL_H

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
#include "xmatmult_accel_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XMatmult_accel_Config;
#endif

typedef struct {
    u64 Control_BaseAddress;
    u32 IsReady;
} XMatmult_accel;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XMatmult_accel_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XMatmult_accel_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XMatmult_accel_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XMatmult_accel_ReadReg(BaseAddress, RegOffset) \
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
int XMatmult_accel_Initialize(XMatmult_accel *InstancePtr, u16 DeviceId);
XMatmult_accel_Config* XMatmult_accel_LookupConfig(u16 DeviceId);
int XMatmult_accel_CfgInitialize(XMatmult_accel *InstancePtr, XMatmult_accel_Config *ConfigPtr);
#else
int XMatmult_accel_Initialize(XMatmult_accel *InstancePtr, const char* InstanceName);
int XMatmult_accel_Release(XMatmult_accel *InstancePtr);
#endif

void XMatmult_accel_Start(XMatmult_accel *InstancePtr);
u32 XMatmult_accel_IsDone(XMatmult_accel *InstancePtr);
u32 XMatmult_accel_IsIdle(XMatmult_accel *InstancePtr);
u32 XMatmult_accel_IsReady(XMatmult_accel *InstancePtr);
void XMatmult_accel_EnableAutoRestart(XMatmult_accel *InstancePtr);
void XMatmult_accel_DisableAutoRestart(XMatmult_accel *InstancePtr);


void XMatmult_accel_InterruptGlobalEnable(XMatmult_accel *InstancePtr);
void XMatmult_accel_InterruptGlobalDisable(XMatmult_accel *InstancePtr);
void XMatmult_accel_InterruptEnable(XMatmult_accel *InstancePtr, u32 Mask);
void XMatmult_accel_InterruptDisable(XMatmult_accel *InstancePtr, u32 Mask);
void XMatmult_accel_InterruptClear(XMatmult_accel *InstancePtr, u32 Mask);
u32 XMatmult_accel_InterruptGetEnabled(XMatmult_accel *InstancePtr);
u32 XMatmult_accel_InterruptGetStatus(XMatmult_accel *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
