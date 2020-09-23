//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: CtrlP_Tray_Poli_ROS.h
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
#ifndef RTW_HEADER_CtrlP_Tray_Poli_ROS_h_
#define RTW_HEADER_CtrlP_Tray_Poli_ROS_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#ifndef CtrlP_Tray_Poli_ROS_COMMON_INCLUDES_
# define CtrlP_Tray_Poli_ROS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "nesl_rtw.h"
#include "CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway.h"
#endif                                 // CtrlP_Tray_Poli_ROS_COMMON_INCLUDES_

#include "CtrlP_Tray_Poli_ROS_types.h"
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
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray In1;// '<S21>/In1'
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray BusAssignment2;// '<Root>/Bus Assignment2' 
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension
    b_varargout_2_Layout_Dim[16];
  real_T pp_coefs[56];
  real_T dCoefs[56];
  real_T ddCoefs[56];
  real_T dCoeffs[56];
  real_T ddCoeffs[56];
  real_T coefsWithFlatStart[48];
  real_T coefMat[40];
  real_T b_I[36];
  real_T tempR[36];
  real_T T[16];
  real_T TJ[16];
  real_T a[16];
  real_T b[16];
  real_T a_m[16];
  real_T TJ_c[16];
  real_T a_k[16];
  real_T b_c[16];
  real_T a_b[16];
  real_T dv[12];
  real_T velBounds[12];
  real_T unusedU1[12];
  real_T unusedU2[12];
  real_T unusedU3[12];
  real_T waypoints[12];
  real_T R[9];
  real_T tempR_p[9];
  real_T dv1[9];
  real_T R_c[9];
  real_T tempR_f[9];
  real_T dv2[9];
  real_T dv3[9];
  real_T R_g[9];
  real_T R_g1[9];
  real_T dv4[8];
  real_T pp_breaks[8];
  real_T newBreaks[8];
  real_T coeffMat[8];
  real_T newSegmentCoeffs[8];
  real_T breaksWithFlatStart[7];
  NeParameterBundle expl_temp;
  real_T Tpoints[6];
  real_T a0[6];
  real_T y[6];
  real_T X[6];
  real_T b_I_m[6];
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_n;
  int8_T msubspace_data[36];
  real_T STATE_1[4];                   // '<S20>/STATE_1'
  real_T INPUT_1_1_1[4];               // '<S20>/INPUT_1_1_1'
  real_T INPUT_2_1_1[4];               // '<S20>/INPUT_2_1_1'
  real_T OUTPUT_1_0[4];                // '<S20>/OUTPUT_1_0'
  real_T result_data[4];
  real_T v[3];
  real_T v_p[3];
  real_T v_l[3];
  int_T iv[4];
  real_T E[2];
  real_T b_varargout_3[2];
  real_T PAR[2];                       // '<S2>/Control PD+G'
  real_T qddoti_data[2];
  int_T iv1[3];
  char_T b_j[9];
  char_T b_d[9];
  char_T b_g[8];
  int32_T l_data[2];
  char_T b_l[8];
  char_T b_dh[8];
  char_T cv[8];
  char_T b_dy[8];
  real_T time;
  real_T time_l;
  real_T time_tmp;
  real_T E_o;
  real_T dt;
  real_T u0;
  real_T finalTime;
  real_T wayPoints_idx_0;
  real_T wayPoints_idx_1;
  real_T coefMat_tmp;
  real_T holdPoint;
  real_T evalPointVector_idx_0;
  real_T evalPointVector_idx_1;
  real_T evalPointVector_idx_2;
  real_T d;
  real_T d1;
  real_T nb;
  real_T sth;
  real_T a_idx_1;
  real_T a_idx_0;
  real_T b_idx_0;
  real_T b_idx_1;
  real_T tempR_tmp;
  real_T tempR_tmp_b;
  real_T tempR_tmp_n;
  real_T tempR_tmp_bs;
  real_T tempR_tmp_l;
  real_T d2;
  real_T time_h;
  real_T time_b;
  real_T time_tmp_d;
  boolean_T x[6];
  int8_T iv2[6];
  char_T b_e[5];
  char_T b_b[5];
  char_T cv1[5];
  int32_T b_k;
  int32_T b_i;
  int32_T i;
  int32_T ii_size_idx_0;
  int32_T ii_size_idx_1;
  int32_T b_j_j;
  int32_T b_k_f;
  int32_T j;
  int32_T t;
  int32_T u;
  int32_T m;
  int32_T inner;
  int32_T aoffset;
  int32_T c_i;
  int32_T unnamed_idx_1;
  int32_T c_tmp;
  int32_T b_kstr;
  int32_T loop_ub;
  int32_T a_tmp;
  int32_T a_tmp_tmp;
  int32_T b_kstr_a;
  int32_T loop_ub_j;
  int32_T newNumel;
  int32_T i_j;
  int32_T i1;
  int32_T b_kstr_o;
  int32_T loop_ub_n;
  int32_T newNumel_i;
  int32_T i2;
  int32_T i3;
  int32_T X_tmp;
  int32_T X_tmp_o;
  int32_T i4;
  int32_T Tinv_tmp;
  int32_T i_n;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  uint32_T b_varargout_2_Layout_Dim_SL_I_m;
  boolean_T b_ja;
  boolean_T p;
  boolean_T b_varargout_1;
  boolean_T b_bool;
  boolean_T b_bool_h;
  boolean_T b_bool_c;
} B_CtrlP_Tray_Poli_ROS_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  g_robotics_manip_internal_Rig_T gobj_0;// '<S4>/MATLAB System'
  g_robotics_manip_internal_Rig_T gobj_1;// '<S4>/MATLAB System'
  g_robotics_manip_internal_Rig_T gobj_2;// '<S4>/MATLAB System'
  g_robotics_manip_internal_Rig_T gobj_3;// '<S4>/MATLAB System'
  robotics_slmanip_internal_blo_T obj; // '<S4>/MATLAB System'
  robotics_slcore_internal_bloc_T obj_h;// '<Root>/Polynomial Trajectory'
  ros_slros_internal_block_Publ_T obj_hh;// '<S5>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_f;// '<S6>/SourceBlock'
  real_T INPUT_1_1_1_Discrete[2];      // '<S20>/INPUT_1_1_1'
  real_T INPUT_2_1_1_Discrete[2];      // '<S20>/INPUT_2_1_1'
  real_T STATE_1_Discrete;             // '<S20>/STATE_1'
  real_T OUTPUT_1_0_Discrete;          // '<S20>/OUTPUT_1_0'
  void* STATE_1_Simulator;             // '<S20>/STATE_1'
  void* STATE_1_SimData;               // '<S20>/STATE_1'
  void* STATE_1_DiagMgr;               // '<S20>/STATE_1'
  void* STATE_1_ZcLogger;              // '<S20>/STATE_1'
  void* STATE_1_TsIndex;               // '<S20>/STATE_1'
  void* OUTPUT_1_0_Simulator;          // '<S20>/OUTPUT_1_0'
  void* OUTPUT_1_0_SimData;            // '<S20>/OUTPUT_1_0'
  void* OUTPUT_1_0_DiagMgr;            // '<S20>/OUTPUT_1_0'
  void* OUTPUT_1_0_ZcLogger;           // '<S20>/OUTPUT_1_0'
  void* OUTPUT_1_0_TsIndex;            // '<S20>/OUTPUT_1_0'
  int_T STATE_1_Modes;                 // '<S20>/STATE_1'
  int_T OUTPUT_1_0_Modes;              // '<S20>/OUTPUT_1_0'
  boolean_T STATE_1_FirstOutput;       // '<S20>/STATE_1'
  boolean_T OUTPUT_1_0_FirstOutput;    // '<S20>/OUTPUT_1_0'
} DW_CtrlP_Tray_Poli_ROS_T;

// Continuous states (default storage)
typedef struct {
  real_T CtrlP_Tray_Poli_ROSDinamicajoin[4];// '<S20>/STATE_1'
} X_CtrlP_Tray_Poli_ROS_T;

// State derivatives (default storage)
typedef struct {
  real_T CtrlP_Tray_Poli_ROSDinamicajoin[4];// '<S20>/STATE_1'
} XDot_CtrlP_Tray_Poli_ROS_T;

// State disabled
typedef struct {
  boolean_T CtrlP_Tray_Poli_ROSDinamicajoin[4];// '<S20>/STATE_1'
} XDis_CtrlP_Tray_Poli_ROS_T;

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
} ODE3_IntgData;

#endif

// Parameters (default storage)
struct P_CtrlP_Tray_Poli_ROS_T_ {
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                                   //  Referenced by: '<S21>/Out1'

  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S6>/Constant'

  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                      //  Referenced by: '<S1>/Constant'

  real_T PolynomialTrajectory_Waypoints[12];
           // Expression: [1.57 0.75 0 -0.75 -1.57 0;0 -0.75 -1.57 -0.75 0 0.75]
              //  Referenced by: '<Root>/Polynomial Trajectory'

  real_T PolynomialTrajectory_TimePoints[6];// Expression: [ 0, 2,4,6,8,10]
                                               //  Referenced by: '<Root>/Polynomial Trajectory'

  real_T PolynomialTrajectory_VelocityBo[12];// Expression: zeros( 2, 6 )
                                                //  Referenced by: '<Root>/Polynomial Trajectory'

  uint32_T Constant1_Value;            // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_CtrlP_Tray_Poli_ROS_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_CtrlP_Tray_Poli_ROS_T *contStates;
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

  extern P_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_X;

// Block states (default storage)
extern DW_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void CtrlP_Tray_Poli_ROS_initialize(void);
  extern void CtrlP_Tray_Poli_ROS_step(void);
  extern void CtrlP_Tray_Poli_ROS_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_CtrlP_Tray_Poli_ROS_T *const CtrlP_Tray_Poli_ROS_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<S4>/Reshape' : Reshape block reduction
//  Block '<Root>/Rate Transition2' : Eliminated since input and output rates are identical


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
//  '<Root>' : 'CtrlP_Tray_Poli_ROS'
//  '<S1>'   : 'CtrlP_Tray_Poli_ROS/Blank Message2'
//  '<S2>'   : 'CtrlP_Tray_Poli_ROS/Control'
//  '<S3>'   : 'CtrlP_Tray_Poli_ROS/Dinamica'
//  '<S4>'   : 'CtrlP_Tray_Poli_ROS/Gravity Torque'
//  '<S5>'   : 'CtrlP_Tray_Poli_ROS/Pub_Torque'
//  '<S6>'   : 'CtrlP_Tray_Poli_ROS/Subs_Pos'
//  '<S7>'   : 'CtrlP_Tray_Poli_ROS/Control/Control PD+G'
//  '<S8>'   : 'CtrlP_Tray_Poli_ROS/Dinamica/JointPosT_1'
//  '<S9>'   : 'CtrlP_Tray_Poli_ROS/Dinamica/JointPosT_2'
//  '<S10>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/Simulink-PS Converter'
//  '<S11>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/Simulink-PS Converter1'
//  '<S12>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration'
//  '<S13>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/link_A'
//  '<S14>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/link_B'
//  '<S15>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/link_C'
//  '<S16>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/JointPosT_1/EVAL_KEY'
//  '<S17>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/JointPosT_2/EVAL_KEY'
//  '<S18>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/Simulink-PS Converter/EVAL_KEY'
//  '<S19>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/Simulink-PS Converter1/EVAL_KEY'
//  '<S20>'  : 'CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration/EVAL_KEY'
//  '<S21>'  : 'CtrlP_Tray_Poli_ROS/Subs_Pos/Enabled Subsystem'

#endif                                 // RTW_HEADER_CtrlP_Tray_Poli_ROS_h_

//
// File trailer for generated code.
//
// [EOF]
//
