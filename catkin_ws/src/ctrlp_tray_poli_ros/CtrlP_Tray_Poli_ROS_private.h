//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: CtrlP_Tray_Poli_ROS_private.h
//
// Code generated for Simulink model 'CtrlP_Tray_Poli_ROS'.
//
// Model version                  : 1.67
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Thu Sep 17 13:47:28 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_CtrlP_Tray_Poli_ROS_private_h_
#define RTW_HEADER_CtrlP_Tray_Poli_ROS_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

// private model entry point functions
extern void CtrlP_Tray_Poli_ROS_derivatives(void);

#endif                             // RTW_HEADER_CtrlP_Tray_Poli_ROS_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
