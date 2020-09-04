//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: brazo_2dof.h
//
// Code generated for Simulink model 'brazo_2dof'.
//
// Model version                  : 1.7
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Thu Sep  3 08:52:08 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_brazo_2dof_h_
#define RTW_HEADER_brazo_2dof_h_
#include <math.h>
#include <stdlib.h>
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
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
  SL_Bus_brazo_2dof_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T b_I[36];
  real_T Xtree[36];
  real_T R[36];
  real_T X[36];
  real_T T[16];
  real_T Tinv[16];
  real_T TJ[16];
  real_T a[16];
  real_T b[16];
  real_T a_m[16];
  real_T T_c[16];
  real_T dv[16];
  real_T TJ_k[16];
  real_T a_c[16];
  real_T b_b[16];
  real_T a_p[16];
  real_T dv1[12];
  real_T TmpSignalConversionAtMATLAB[12];
  real_T R_c[9];
  real_T R_f[9];
  real_T dv2[9];
  real_T dv3[9];
  real_T dv4[9];
  real_T R_g[9];
  real_T tempR[9];
  real_T R_g1[9];
  real_T tempR_m[9];
  real_T dv5[9];
  real_T dv6[9];
  real_T R_n[9];
  real_T R_p[9];
  real_T dv7[8];
  real_T a0[6];
  real_T y[6];
  real_T vJ[6];
  real_T b_I_l[6];
  real_T b_I_j[6];
  real_T R_d[6];
  NeParameterBundle expl_temp;
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_g;
  int8_T msubspace_data[36];
  real_T STATE_1[4];                   // '<S15>/STATE_1'
  real_T INPUT_1_1_1[4];               // '<S15>/INPUT_1_1_1'
  real_T INPUT_2_1_1[4];               // '<S15>/INPUT_2_1_1'
  real_T result_data[4];
  real_T v[3];
  real_T v_l[3];
  real_T v_d[3];
  int_T iv[4];
  real_T JointVel_FD[2];               // '<Root>/JointVel_FD'
  real_T MATLABSystem[2];              // '<S1>/MATLAB System'
  real_T b_varargout_2_Data[2];
  real_T OUTPUT_1_0[2];                // '<S15>/OUTPUT_1_0'
  real_T q_data[2];
  real_T q_data_d[2];
  int_T iv1[3];
  char_T b_l[9];
  char_T b_o[9];
  char_T b_bj[8];
  char_T b_n[8];
  int32_T nonFixedIndices_data[2];
  int32_T ii_data[2];
  char_T b_bs[8];
  char_T cv[8];
  char_T b_ln[8];
  real_T time;
  real_T time_h;
  real_T vNum;
  real_T k;
  real_T j;
  real_T time_tmp;
  real_T nb;
  real_T a_idx_1;
  real_T a_idx_0;
  real_T b_idx_0;
  real_T b_idx_1;
  real_T cth;
  real_T sth;
  real_T tempR_tmp;
  real_T tempR_tmp_b;
  real_T tempR_tmp_d;
  real_T tempR_tmp_e;
  real_T tempR_tmp_bj;
  real_T nb_j;
  real_T vNum_f;
  real_T pid;
  real_T temp;
  real_T p_idx_1;
  real_T b_idx_0_a;
  real_T b_idx_1_j;
  real_T tempR_tmp_j;
  real_T tempR_tmp_o;
  real_T tempR_tmp_n;
  real_T d;
  real_T time_i;
  real_T time_o;
  real_T time_tmp_n;
  int8_T iv2[6];
  char_T b_m[5];
  char_T b_c[5];
  char_T b_md[5];
  char_T b_m3[5];
  int32_T n;
  int32_T iend;
  int32_T j_j;
  int32_T u0;
  int32_T loop_ub;
  int32_T i;
  int32_T MATLABSystem_tmp;
  int32_T b_k;
  int32_T b_k_h;
  int32_T m;
  int32_T inner;
  int32_T aoffset;
  int32_T c_i;
  int32_T q_size;
  int32_T unnamed_idx_1;
  int32_T loop_ub_tmp;
  int32_T p_tmp;
  int32_T o_tmp;
  int32_T b_kstr;
  int32_T loop_ub_c;
  int32_T a_tmp;
  int32_T a_tmp_tmp;
  int32_T b_kstr_c;
  int32_T loop_ub_p;
  int32_T newNumel;
  int32_T i_p;
  int32_T b_i;
  int32_T cb;
  int32_T idx;
  int32_T n_a;
  int32_T aoffset_e;
  int32_T i_a;
  int32_T b_j;
  int32_T c_i_a;
  int32_T nm1d2;
  int32_T m_i;
  int32_T coffset;
  int32_T boffset;
  int32_T q_size_l;
  int32_T unnamed_idx_1_o;
  int32_T pid_tmp;
  int32_T q_size_tmp;
  int32_T b_kstr_o;
  int32_T loop_ub_i;
  int32_T a_tmp_f;
  int32_T a_tmp_tmp_i;
  int32_T i_f;
  int32_T i1;
  int32_T b_kstr_g;
  int32_T loop_ub_co;
  int32_T newNumel_o;
  int32_T i2;
  int32_T i3;
  int32_T X_tmp;
  int32_T X_tmp_l;
  int32_T i4;
  int32_T Tinv_tmp;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  uint32_T b_varargout_2_Layout_Dim_SL_I_f;
  boolean_T mask[2];
  boolean_T b_p;
  boolean_T b_varargout_1;
  boolean_T b_bool;
  boolean_T b_bool_e;
  boolean_T b_bool_o;
  boolean_T b_bool_h;
  boolean_T b_bool_l;
} B_brazo_2dof_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  g_robotics_manip_internal_Rig_T gobj_0;// '<S1>/MATLAB System'
  g_robotics_manip_internal_Rig_T gobj_1;// '<S1>/MATLAB System'
  g_robotics_manip_internal_Rig_T gobj_2;// '<S1>/MATLAB System'
  g_robotics_manip_internal_Rig_T gobj_3;// '<S1>/MATLAB System'
  robotics_slmanip_internal_blo_T obj; // '<S1>/MATLAB System'
  ros_slros_internal_block_Subs_T obj_g;// '<S7>/SourceBlock'
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
  real_T JointPos_FD_CSTATE[2];        // '<Root>/JointPos_FD'
  real_T JointVel_FD_CSTATE[2];        // '<Root>/JointVel_FD'
} X_brazo_2dof_T;

// State derivatives (default storage)
typedef struct {
  real_T brazo_2dofjoint_ARzq[4];      // '<S15>/STATE_1'
  real_T JointPos_FD_CSTATE[2];        // '<Root>/JointPos_FD'
  real_T JointVel_FD_CSTATE[2];        // '<Root>/JointVel_FD'
} XDot_brazo_2dof_T;

// State disabled
typedef struct {
  boolean_T brazo_2dofjoint_ARzq[4];   // '<S15>/STATE_1'
  boolean_T JointPos_FD_CSTATE[2];     // '<Root>/JointPos_FD'
  boolean_T JointVel_FD_CSTATE[2];     // '<Root>/JointVel_FD'
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
                                                                 //  Referenced by: '<S7>/Constant'

  real_T JointPos_FD_IC[2];            // Expression: [1.57 0]
                                          //  Referenced by: '<Root>/JointPos_FD'

  real_T JointVel_FD_IC;               // Expression: 0
                                          //  Referenced by: '<Root>/JointVel_FD'

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
  real_T odeY[8];
  real_T odeF[3][8];
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
//  Block '<Root>/Scope2' : Unused code path elimination
//  Block '<S1>/Reshape' : Reshape block reduction


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
//  '<S1>'   : 'brazo_2dof/Forward Dynamics1'
//  '<S2>'   : 'brazo_2dof/JointPosT_1'
//  '<S3>'   : 'brazo_2dof/JointPosT_2'
//  '<S4>'   : 'brazo_2dof/Simulink-PS Converter'
//  '<S5>'   : 'brazo_2dof/Simulink-PS Converter1'
//  '<S6>'   : 'brazo_2dof/Solver Configuration'
//  '<S7>'   : 'brazo_2dof/Subscribe'
//  '<S8>'   : 'brazo_2dof/link_A'
//  '<S9>'   : 'brazo_2dof/link_B'
//  '<S10>'  : 'brazo_2dof/link_C'
//  '<S11>'  : 'brazo_2dof/JointPosT_1/EVAL_KEY'
//  '<S12>'  : 'brazo_2dof/JointPosT_2/EVAL_KEY'
//  '<S13>'  : 'brazo_2dof/Simulink-PS Converter/EVAL_KEY'
//  '<S14>'  : 'brazo_2dof/Simulink-PS Converter1/EVAL_KEY'
//  '<S15>'  : 'brazo_2dof/Solver Configuration/EVAL_KEY'
//  '<S16>'  : 'brazo_2dof/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_brazo_2dof_h_

//
// File trailer for generated code.
//
// [EOF]
//
