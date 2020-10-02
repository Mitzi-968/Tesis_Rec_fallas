//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: brazo_2dof.h
//
// Code generated for Simulink model 'brazo_2dof'.
//
// Model version                  : 1.36
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Fri Oct  2 11:08:30 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_brazo_2dof_h_
#define RTW_HEADER_brazo_2dof_h_
#include <string.h>
#include <stddef.h>
#ifndef brazo_2dof_COMMON_INCLUDES_
# define brazo_2dof_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "nesl_rtw.h"
#include "brazo_2dof_a093840a_1_gateway.h"
#endif                                 // brazo_2dof_COMMON_INCLUDES_

#include "brazo_2dof_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray In1;// '<S16>/In1'
  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray BusAssignment1;// '<S7>/Bus Assignment1' 
  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T dv[12];
  real_T dv1[8];
  real_T dv2[8];
  real_T dv3[8];
  real_T dv4[8];
  real_T dv5[8];
  NeParameterBundle expl_temp;
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_m;
  real_T STATE_1[4];                   // '<S15>/STATE_1'
  real_T INPUT_1_1_1[4];               // '<S15>/INPUT_1_1_1'
  real_T INPUT_2_1_1[4];               // '<S15>/INPUT_2_1_1'
  real_T OUTPUT_1_0[4];                // '<S15>/OUTPUT_1_0'
  int_T iv[4];
  real_T b_varargout_2_Data[2];
  int_T iv1[3];
  real_T time;
  real_T time_c;
  real_T time_tmp;
  real_T d;
  real_T time_k;
  real_T time_cx;
  real_T time_tmp_b;
} B_brazo_2dof_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Subs_T obj; // '<S6>/SourceBlock'
  ros_slros_internal_block_Publ_T obj_n;// '<S18>/SinkBlock'
  real_T INPUT_1_1_1_Discrete[2];      // '<S15>/INPUT_1_1_1'
  real_T INPUT_2_1_1_Discrete[2];      // '<S15>/INPUT_2_1_1'
  real_T STATE_1_Discrete;             // '<S15>/STATE_1'
  real_T OUTPUT_1_0_Discrete;          // '<S15>/OUTPUT_1_0'
  void* STATE_1_Simulator;             // '<S15>/STATE_1'
  void* STATE_1_SimData;               // '<S15>/STATE_1'
  void* STATE_1_DiagMgr;               // '<S15>/STATE_1'
  void* STATE_1_ZcLogger;              // '<S15>/STATE_1'
  void* STATE_1_TsIndex;               // '<S15>/STATE_1'
  void* OUTPUT_1_0_Simulator;          // '<S15>/OUTPUT_1_0'
  void* OUTPUT_1_0_SimData;            // '<S15>/OUTPUT_1_0'
  void* OUTPUT_1_0_DiagMgr;            // '<S15>/OUTPUT_1_0'
  void* OUTPUT_1_0_ZcLogger;           // '<S15>/OUTPUT_1_0'
  void* OUTPUT_1_0_TsIndex;            // '<S15>/OUTPUT_1_0'
  int_T STATE_1_Modes;                 // '<S15>/STATE_1'
  int_T OUTPUT_1_0_Modes;              // '<S15>/OUTPUT_1_0'
  boolean_T STATE_1_FirstOutput;       // '<S15>/STATE_1'
  boolean_T OUTPUT_1_0_FirstOutput;    // '<S15>/OUTPUT_1_0'
} DW_brazo_2dof_T;

// Continuous states (default storage)
typedef struct {
  real_T brazo_2dofjoint_ARzq[4];      // '<S15>/STATE_1'
} X_brazo_2dof_T;

// State derivatives (default storage)
typedef struct {
  real_T brazo_2dofjoint_ARzq[4];      // '<S15>/STATE_1'
} XDot_brazo_2dof_T;

// State disabled
typedef struct {
  boolean_T brazo_2dofjoint_ARzq[4];   // '<S15>/STATE_1'
} XDis_brazo_2dof_T;

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
} ODE3_IntgData;

#endif

// Parameters (default storage)
struct P_brazo_2dof_T_ {
  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                          //  Referenced by: '<S16>/Out1'

  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S6>/Constant'

  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                   //  Referenced by: '<S17>/Constant'

  uint32_T Constant_Value_n;           // Computed Parameter: Constant_Value_n
                                          //  Referenced by: '<S7>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_brazo_2dof_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_brazo_2dof_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[4];
  real_T odeF[3][4];
  ODE3_IntgData intgData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_brazo_2dof_T brazo_2dof_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_brazo_2dof_T brazo_2dof_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_brazo_2dof_T brazo_2dof_X;

// Block states (default storage)
extern DW_brazo_2dof_T brazo_2dof_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void brazo_2dof_initialize(void);
  extern void brazo_2dof_step(void);
  extern void brazo_2dof_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_brazo_2dof_T *const brazo_2dof_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S7>/Rate Transition1' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'brazo_2dof'
//  '<S1>'   : 'brazo_2dof/JointPosT_1'
//  '<S2>'   : 'brazo_2dof/JointPosT_2'
//  '<S3>'   : 'brazo_2dof/Simulink-PS Converter'
//  '<S4>'   : 'brazo_2dof/Simulink-PS Converter1'
//  '<S5>'   : 'brazo_2dof/Solver Configuration'
//  '<S6>'   : 'brazo_2dof/Subs_Torque'
//  '<S7>'   : 'brazo_2dof/Subsystem'
//  '<S8>'   : 'brazo_2dof/link_A'
//  '<S9>'   : 'brazo_2dof/link_B'
//  '<S10>'  : 'brazo_2dof/link_C'
//  '<S11>'  : 'brazo_2dof/JointPosT_1/EVAL_KEY'
//  '<S12>'  : 'brazo_2dof/JointPosT_2/EVAL_KEY'
//  '<S13>'  : 'brazo_2dof/Simulink-PS Converter/EVAL_KEY'
//  '<S14>'  : 'brazo_2dof/Simulink-PS Converter1/EVAL_KEY'
//  '<S15>'  : 'brazo_2dof/Solver Configuration/EVAL_KEY'
//  '<S16>'  : 'brazo_2dof/Subs_Torque/Enabled Subsystem'
//  '<S17>'  : 'brazo_2dof/Subsystem/Blank Message1'
//  '<S18>'  : 'brazo_2dof/Subsystem/Pub_Pos'

#endif                                 // RTW_HEADER_brazo_2dof_h_

//
// File trailer for generated code.
//
// [EOF]
//
