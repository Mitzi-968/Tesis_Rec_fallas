//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: CtrlP_Tray_Poli_ROS.cpp
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
#include "CtrlP_Tray_Poli_ROS.h"
#include "CtrlP_Tray_Poli_ROS_private.h"

// Block signals (default storage)
B_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_B;

// Continuous states
X_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_X;

// Block states (default storage)
DW_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_DW;

// Real-time model
RT_MODEL_CtrlP_Tray_Poli_ROS_T CtrlP_Tray_Poli_ROS_M_ =
  RT_MODEL_CtrlP_Tray_Poli_ROS_T();
RT_MODEL_CtrlP_Tray_Poli_ROS_T *const CtrlP_Tray_Poli_ROS_M =
  &CtrlP_Tray_Poli_ROS_M_;

// Forward declaration for local functions
static void CtrlP_Tray_Po_SystemCore_step_m(boolean_T *varargout_1, real_T
  varargout_2_Data[2], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension
  varargout_2_Layout_Dim[16], uint32_T *varargout_2_Layout_Dim_SL_Info_,
  uint32_T *varargout_2_Layout_Dim_SL_Inf_0);
static real_T CtrlP_Tray_Poli_ROS_rt_powd_snf(real_T u0, real_T u1);
static void Ct_addFlatSegmentsToPPFormParts(const real_T oldbreaks[6], const
  real_T oldCoeffs[40], real_T newBreaks[8], real_T newCoefs[56]);
static void CtrlP_Tray_Poli_ROS_ppval(const real_T pp_breaks[8], const real_T
  pp_coefs[56], const real_T x[6], real_T v[12]);
static void CtrlP_Tray_Poli_R_cubicpolytraj(const real_T wayPoints[12], const
  real_T timePoints[6], const real_T t[6], const real_T varargin_2[12], real_T
  q[12], real_T qd[12], real_T qdd[12], real_T pp_breaks[8], real_T pp_coefs[56]);
static void CtrlP_Tray_Poli_ROS_ppval_m(const real_T pp_breaks[8], const real_T
  pp_coefs[56], real_T x, real_T v[2]);
static void CtrlP_Tray_Poli_SystemCore_step(robotics_slcore_internal_bloc_T *obj,
  real_T varargin_1, real_T varargout_1[2], real_T varargout_2[2], real_T
  varargout_3[2]);
static void CtrlP_Tray_Poli__emxInit_real_T(emxArray_real_T_CtrlP_Tray_Po_T
  **pEmxArray, int32_T numDimensions);
static void CtrlP__emxEnsureCapacity_real_T(emxArray_real_T_CtrlP_Tray_Po_T
  *emxArray, int32_T oldNumel);
static void CtrlP_Tray__emxInit_e_cell_wrap(emxArray_e_cell_wrap_CtrlP_Tr_T
  **pEmxArray, int32_T numDimensions);
static void C_emxEnsureCapacity_e_cell_wrap(emxArray_e_cell_wrap_CtrlP_Tr_T
  *emxArray, int32_T oldNumel);
static void CtrlP_Tray_Poli_ROS_eye(real_T b_I[36]);
static void CtrlP_Tray_Poli__emxInit_char_T(emxArray_char_T_CtrlP_Tray_Po_T
  **pEmxArray, int32_T numDimensions);
static void CtrlP__emxEnsureCapacity_char_T(emxArray_char_T_CtrlP_Tray_Po_T
  *emxArray, int32_T oldNumel);
static void CtrlP_Tray_Poli__emxFree_char_T(emxArray_char_T_CtrlP_Tray_Po_T
  **pEmxArray);
static void Ct_rigidBodyJoint_get_JointAxis(const
  rigidBodyJoint_CtrlP_Tray_Pol_T *obj, real_T ax[3]);
static void CtrlP_Tray_Poli_R_normalizeRows(const real_T matrix[3], real_T
  normRowMatrix[3]);
static void CtrlP_Tray_Poli_ROS_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyToP(const
  rigidBodyJoint_CtrlP_Tray_Pol_T *obj, real_T T[16]);
static void CtrlP_Tray_Poli_ROS_tforminv(const real_T T[16], real_T Tinv[16]);
static void CtrlP_Tray__tformToSpatialXform(const real_T T[16], real_T X[36]);
static void CtrlP_Tray_Poli__emxFree_real_T(emxArray_real_T_CtrlP_Tray_Po_T
  **pEmxArray);
static void CtrlP_Tray__emxFree_e_cell_wrap(emxArray_e_cell_wrap_CtrlP_Tr_T
  **pEmxArray);
static boolean_T CtrlP_Tray_Poli_ROS_strcmp(const
  emxArray_char_T_CtrlP_Tray_Po_T *a);
static void Ctr_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real_T q[2], real_T jointTorq[2]);
static void matlabCodegenHandle_matlabCod_m(ros_slros_internal_block_Subs_T *obj);
static void Ct_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_CtrlP_Tray_Pol_T
  *pStruct);
static void emxFreeStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_g_robotics_manip_(g_robotics_manip_internal_Rig_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void Ct_emxInitStruct_rigidBodyJoint(rigidBodyJoint_CtrlP_Tray_Pol_T
  *pStruct);
static void emxInitStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_g_robotics_manip_(g_robotics_manip_internal_Rig_T
  *pStruct);
static g_robotics_manip_internal_Rig_T *CtrlP_Tray__RigidBody_RigidBody
  (g_robotics_manip_internal_Rig_T *obj);
static g_robotics_manip_internal_Rig_T *CtrlP_Tra_RigidBody_RigidBody_m
  (g_robotics_manip_internal_Rig_T *obj);
static f_robotics_manip_internal_Rig_T *CtrlP_Tr_RigidBody_RigidBody_mm
  (f_robotics_manip_internal_Rig_T *obj);
static h_robotics_manip_internal_Rig_T *Ctr_RigidBodyTree_RigidBodyTree
  (h_robotics_manip_internal_Rig_T *obj, g_robotics_manip_internal_Rig_T *iobj_0,
   g_robotics_manip_internal_Rig_T *iobj_1);

// Projection for root system: '<Root>'
void CtrlP_Tray_Poli_ROS_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[8];
  int_T tmp_1[3];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;

  // Projection for SimscapeExecutionBlock: '<S20>/STATE_1'
  simulationData = (NeslSimulationData *)CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData;
  time = CtrlP_Tray_Poli_ROS_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX =
    &CtrlP_Tray_Poli_ROS_X.CtrlP_Tray_Poli_ROSDinamicajoin[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &CtrlP_Tray_Poli_ROS_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &CtrlP_Tray_Poli_ROS_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (CtrlP_Tray_Poli_ROS_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&CtrlP_Tray_Poli_ROS_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[0];
  tmp_0[1] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[1];
  tmp_0[2] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[2];
  tmp_0[3] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[0];
  tmp_0[5] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[1];
  tmp_0[6] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[2];
  tmp_0[7] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[3];
  tmp_1[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)
    CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator, NESL_SIM_PROJECTION,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
    }
  }

  // End of Projection for SimscapeExecutionBlock: '<S20>/STATE_1'
}

//
// This function updates continuous states using the ODE3 fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = static_cast<ODE3_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  CtrlP_Tray_Poli_ROS_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  CtrlP_Tray_Poli_ROS_step();
  CtrlP_Tray_Poli_ROS_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  CtrlP_Tray_Poli_ROS_step();
  CtrlP_Tray_Poli_ROS_derivatives();

  // tnew = t + hA(3);
  // ynew = y + f*hB(:,3);
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  CtrlP_Tray_Poli_ROS_step();
  CtrlP_Tray_Poli_ROS_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void CtrlP_Tray_Po_SystemCore_step_m(boolean_T *varargout_1, real_T
  varargout_2_Data[2], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension
  varargout_2_Layout_Dim[16], uint32_T *varargout_2_Layout_Dim_SL_Info_,
  uint32_T *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_CtrlP_Tray_Poli_ROS_177.getLatestMessage
    (&CtrlP_Tray_Poli_ROS_B.b_varargout_2);
  varargout_2_Data[0] = CtrlP_Tray_Poli_ROS_B.b_varargout_2.Data[0];
  varargout_2_Data[1] = CtrlP_Tray_Poli_ROS_B.b_varargout_2.Data[1];
  *varargout_2_Data_SL_Info_Curren =
    CtrlP_Tray_Poli_ROS_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    CtrlP_Tray_Poli_ROS_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    CtrlP_Tray_Poli_ROS_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0],
         &CtrlP_Tray_Poli_ROS_B.b_varargout_2.Layout.Dim[0], sizeof
         (SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    CtrlP_Tray_Poli_ROS_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    CtrlP_Tray_Poli_ROS_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static real_T CtrlP_Tray_Poli_ROS_rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    CtrlP_Tray_Poli_ROS_B.d = fabs(u0);
    CtrlP_Tray_Poli_ROS_B.d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (CtrlP_Tray_Poli_ROS_B.d == 1.0) {
        y = 1.0;
      } else if (CtrlP_Tray_Poli_ROS_B.d > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (CtrlP_Tray_Poli_ROS_B.d1 == 0.0) {
      y = 1.0;
    } else if (CtrlP_Tray_Poli_ROS_B.d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void Ct_addFlatSegmentsToPPFormParts(const real_T oldbreaks[6], const
  real_T oldCoeffs[40], real_T newBreaks[8], real_T newCoefs[56])
{
  int32_T i;
  int32_T coefsWithFlatStart_tmp;
  memset(&CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[0], 0, sizeof(real_T) << 3U);
  for (i = 0; i < 2; i++) {
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] = 0.0;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] += oldCoeffs[i] * 0.0;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] += oldCoeffs[i + 10] * 0.0;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] += oldCoeffs[i + 20] * 0.0;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] += oldCoeffs[i + 30];
  }

  memset(&CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[0], 0, 48U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    coefsWithFlatStart_tmp = i << 1;
    CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[12 * i] =
      CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[coefsWithFlatStart_tmp];
    CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[12 * i + 1] =
      CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[coefsWithFlatStart_tmp + 1];
    for (coefsWithFlatStart_tmp = 0; coefsWithFlatStart_tmp < 10;
         coefsWithFlatStart_tmp++) {
      CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[((coefsWithFlatStart_tmp + 3) +
        12 * i) - 1] = oldCoeffs[10 * i + coefsWithFlatStart_tmp];
    }
  }

  CtrlP_Tray_Poli_ROS_B.breaksWithFlatStart[0] = oldbreaks[0] - 1.0;
  for (i = 0; i < 6; i++) {
    CtrlP_Tray_Poli_ROS_B.breaksWithFlatStart[i + 1] = oldbreaks[i];
  }

  CtrlP_Tray_Poli_ROS_B.holdPoint = CtrlP_Tray_Poli_ROS_B.breaksWithFlatStart[6]
    - CtrlP_Tray_Poli_ROS_B.breaksWithFlatStart[5];
  CtrlP_Tray_Poli_ROS_B.evalPointVector_idx_0 = CtrlP_Tray_Poli_ROS_rt_powd_snf
    (CtrlP_Tray_Poli_ROS_B.holdPoint, 3.0);
  CtrlP_Tray_Poli_ROS_B.evalPointVector_idx_1 = CtrlP_Tray_Poli_ROS_rt_powd_snf
    (CtrlP_Tray_Poli_ROS_B.holdPoint, 2.0);
  CtrlP_Tray_Poli_ROS_B.evalPointVector_idx_2 = CtrlP_Tray_Poli_ROS_rt_powd_snf
    (CtrlP_Tray_Poli_ROS_B.holdPoint, 1.0);
  CtrlP_Tray_Poli_ROS_B.holdPoint = CtrlP_Tray_Poli_ROS_rt_powd_snf
    (CtrlP_Tray_Poli_ROS_B.holdPoint, 0.0);
  memset(&CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[0], 0, sizeof(real_T) << 3U);
  for (i = 0; i < 2; i++) {
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] = 0.0;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] +=
      CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[i + 10] *
      CtrlP_Tray_Poli_ROS_B.evalPointVector_idx_0;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] +=
      CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[i + 22] *
      CtrlP_Tray_Poli_ROS_B.evalPointVector_idx_1;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] +=
      CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[i + 34] *
      CtrlP_Tray_Poli_ROS_B.evalPointVector_idx_2;
    CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[i + 6] +=
      CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[i + 46] *
      CtrlP_Tray_Poli_ROS_B.holdPoint;
  }

  memset(&newCoefs[0], 0, 56U * sizeof(real_T));
  for (i = 0; i < 4; i++) {
    for (coefsWithFlatStart_tmp = 0; coefsWithFlatStart_tmp < 12;
         coefsWithFlatStart_tmp++) {
      newCoefs[((coefsWithFlatStart_tmp + 1) + 14 * i) - 1] =
        CtrlP_Tray_Poli_ROS_B.coefsWithFlatStart[12 * i + coefsWithFlatStart_tmp];
    }

    coefsWithFlatStart_tmp = i << 1;
    newCoefs[14 * i + 12] =
      CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[coefsWithFlatStart_tmp];
    newCoefs[14 * i + 13] =
      CtrlP_Tray_Poli_ROS_B.newSegmentCoeffs[coefsWithFlatStart_tmp + 1];
  }

  for (i = 0; i < 7; i++) {
    newBreaks[i] = CtrlP_Tray_Poli_ROS_B.breaksWithFlatStart[i];
  }

  newBreaks[7] = CtrlP_Tray_Poli_ROS_B.breaksWithFlatStart[6] + 1.0;
}

static void CtrlP_Tray_Poli_ROS_ppval(const real_T pp_breaks[8], const real_T
  pp_coefs[56], const real_T x[6], real_T v[12])
{
  int32_T iv0;
  real_T xloc;
  int32_T b_ix;
  int32_T low_i;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  for (b_ix = 0; b_ix < 6; b_ix++) {
    iv0 = (b_ix << 1) - 1;
    if (rtIsNaN(x[b_ix])) {
      v[iv0 + 1] = x[b_ix];
      v[iv0 + 2] = x[b_ix];
    } else {
      low_i = 0;
      low_ip1 = 1;
      high_i = 8;
      while (high_i > low_ip1 + 1) {
        mid_i = ((low_i + high_i) + 1) >> 1;
        if (x[b_ix] >= pp_breaks[mid_i - 1]) {
          low_i = mid_i - 1;
          low_ip1 = mid_i;
        } else {
          high_i = mid_i;
        }
      }

      low_ip1 = low_i << 1;
      xloc = x[b_ix] - pp_breaks[low_i];
      v[iv0 + 1] = pp_coefs[low_ip1];
      v[iv0 + 2] = pp_coefs[low_ip1 + 1];
      for (low_i = 0; low_i < 3; low_i++) {
        high_i = ((low_i + 1) * 14 + low_ip1) - 1;
        v[iv0 + 1] = v[iv0 + 1] * xloc + pp_coefs[high_i + 1];
        v[iv0 + 2] = v[iv0 + 2] * xloc + pp_coefs[high_i + 2];
      }
    }
  }
}

static void CtrlP_Tray_Poli_R_cubicpolytraj(const real_T wayPoints[12], const
  real_T timePoints[6], const real_T t[6], const real_T varargin_2[12], real_T
  q[12], real_T qd[12], real_T qdd[12], real_T pp_breaks[8], real_T pp_coefs[56])
{
  int32_T tGreaterThanTfIdx_data;
  int32_T ii_data;
  int32_T idx;
  int32_T b_coeffVec_idx_0_tmp;
  int32_T wayPoints_idx_0_tmp;
  boolean_T exitg1;
  memset(&CtrlP_Tray_Poli_ROS_B.coefMat[0], 0, 40U * sizeof(real_T));
  for (idx = 0; idx < 5; idx++) {
    CtrlP_Tray_Poli_ROS_B.finalTime = timePoints[idx + 1] - timePoints[idx];
    for (CtrlP_Tray_Poli_ROS_B.b_j_j = 0; CtrlP_Tray_Poli_ROS_B.b_j_j < 2;
         CtrlP_Tray_Poli_ROS_B.b_j_j++) {
      b_coeffVec_idx_0_tmp = (idx << 1) + CtrlP_Tray_Poli_ROS_B.b_j_j;
      wayPoints_idx_0_tmp = ((idx + 1) << 1) + CtrlP_Tray_Poli_ROS_B.b_j_j;
      CtrlP_Tray_Poli_ROS_B.wayPoints_idx_0 = wayPoints[wayPoints_idx_0_tmp] -
        (CtrlP_Tray_Poli_ROS_B.finalTime * varargin_2[b_coeffVec_idx_0_tmp] +
         wayPoints[b_coeffVec_idx_0_tmp]);
      CtrlP_Tray_Poli_ROS_B.wayPoints_idx_1 = varargin_2[wayPoints_idx_0_tmp] -
        (0.0 * wayPoints[b_coeffVec_idx_0_tmp] + varargin_2[b_coeffVec_idx_0_tmp]);
      wayPoints_idx_0_tmp = ((idx << 1) + CtrlP_Tray_Poli_ROS_B.b_j_j) + 1;
      CtrlP_Tray_Poli_ROS_B.coefMat_tmp = CtrlP_Tray_Poli_ROS_B.finalTime *
        CtrlP_Tray_Poli_ROS_B.finalTime;
      CtrlP_Tray_Poli_ROS_B.coefMat[wayPoints_idx_0_tmp - 1] = 1.0 /
        CtrlP_Tray_Poli_ROS_B.coefMat_tmp *
        CtrlP_Tray_Poli_ROS_B.wayPoints_idx_1 + -2.0 /
        CtrlP_Tray_Poli_ROS_rt_powd_snf(CtrlP_Tray_Poli_ROS_B.finalTime, 3.0) *
        CtrlP_Tray_Poli_ROS_B.wayPoints_idx_0;
      CtrlP_Tray_Poli_ROS_B.coefMat[wayPoints_idx_0_tmp + 9] = 3.0 /
        CtrlP_Tray_Poli_ROS_B.coefMat_tmp *
        CtrlP_Tray_Poli_ROS_B.wayPoints_idx_0 + -1.0 /
        CtrlP_Tray_Poli_ROS_B.finalTime * CtrlP_Tray_Poli_ROS_B.wayPoints_idx_1;
      CtrlP_Tray_Poli_ROS_B.coefMat[wayPoints_idx_0_tmp + 19] =
        varargin_2[b_coeffVec_idx_0_tmp];
      CtrlP_Tray_Poli_ROS_B.coefMat[wayPoints_idx_0_tmp + 29] =
        wayPoints[b_coeffVec_idx_0_tmp];
    }
  }

  Ct_addFlatSegmentsToPPFormParts(timePoints, CtrlP_Tray_Poli_ROS_B.coefMat,
    CtrlP_Tray_Poli_ROS_B.coeffMat, CtrlP_Tray_Poli_ROS_B.ddCoeffs);
  memcpy(&pp_breaks[0], &CtrlP_Tray_Poli_ROS_B.coeffMat[0], sizeof(real_T) << 3U);
  memcpy(&pp_coefs[0], &CtrlP_Tray_Poli_ROS_B.ddCoeffs[0], 56U * sizeof(real_T));
  CtrlP_Tray_Poli_ROS_ppval(CtrlP_Tray_Poli_ROS_B.coeffMat,
    CtrlP_Tray_Poli_ROS_B.ddCoeffs, t, q);
  CtrlP_Tray_Poli_ROS_B.finalTime = 0.01;
  for (CtrlP_Tray_Poli_ROS_B.b_j_j = 0; CtrlP_Tray_Poli_ROS_B.b_j_j < 6;
       CtrlP_Tray_Poli_ROS_B.b_j_j++) {
    CtrlP_Tray_Poli_ROS_B.x[CtrlP_Tray_Poli_ROS_B.b_j_j] =
      (t[CtrlP_Tray_Poli_ROS_B.b_j_j] > CtrlP_Tray_Poli_ROS_B.coeffMat[6]);
  }

  idx = 0;
  wayPoints_idx_0_tmp = 1;
  CtrlP_Tray_Poli_ROS_B.b_j_j = 1;
  exitg1 = false;
  while ((!exitg1) && (CtrlP_Tray_Poli_ROS_B.b_j_j - 1 < 6)) {
    if (CtrlP_Tray_Poli_ROS_B.x[CtrlP_Tray_Poli_ROS_B.b_j_j - 1]) {
      idx = 1;
      ii_data = CtrlP_Tray_Poli_ROS_B.b_j_j;
      exitg1 = true;
    } else {
      CtrlP_Tray_Poli_ROS_B.b_j_j++;
    }
  }

  if (idx == 0) {
    wayPoints_idx_0_tmp = 0;
  }

  if (0 <= wayPoints_idx_0_tmp - 1) {
    tGreaterThanTfIdx_data = ii_data;
  }

  if (wayPoints_idx_0_tmp != 0) {
    CtrlP_Tray_Poli_ROS_B.wayPoints_idx_0 = (t[tGreaterThanTfIdx_data - 1] -
      CtrlP_Tray_Poli_ROS_B.coeffMat[6]) / 2.0;
    if (CtrlP_Tray_Poli_ROS_B.wayPoints_idx_0 < 0.01) {
      CtrlP_Tray_Poli_ROS_B.finalTime = CtrlP_Tray_Poli_ROS_B.wayPoints_idx_0;
    }
  }

  CtrlP_Tray_Poli_ROS_B.coeffMat[6] += CtrlP_Tray_Poli_ROS_B.finalTime;
  memset(&CtrlP_Tray_Poli_ROS_B.dCoeffs[0], 0, 56U * sizeof(real_T));
  for (idx = 0; idx < 3; idx++) {
    CtrlP_Tray_Poli_ROS_B.b_j_j = 3 - idx;
    wayPoints_idx_0_tmp = idx + 1;
    for (b_coeffVec_idx_0_tmp = 0; b_coeffVec_idx_0_tmp < 14;
         b_coeffVec_idx_0_tmp++) {
      CtrlP_Tray_Poli_ROS_B.dCoeffs[b_coeffVec_idx_0_tmp + 14 * (idx + 1)] =
        CtrlP_Tray_Poli_ROS_B.ddCoeffs[(wayPoints_idx_0_tmp - 1) * 14 +
        b_coeffVec_idx_0_tmp] * static_cast<real_T>(CtrlP_Tray_Poli_ROS_B.b_j_j);
    }
  }

  CtrlP_Tray_Poli_ROS_ppval(CtrlP_Tray_Poli_ROS_B.coeffMat,
    CtrlP_Tray_Poli_ROS_B.dCoeffs, t, qd);
  memset(&CtrlP_Tray_Poli_ROS_B.ddCoeffs[0], 0, 56U * sizeof(real_T));
  for (idx = 0; idx < 3; idx++) {
    CtrlP_Tray_Poli_ROS_B.b_j_j = 3 - idx;
    wayPoints_idx_0_tmp = idx + 1;
    for (b_coeffVec_idx_0_tmp = 0; b_coeffVec_idx_0_tmp < 14;
         b_coeffVec_idx_0_tmp++) {
      CtrlP_Tray_Poli_ROS_B.ddCoeffs[b_coeffVec_idx_0_tmp + 14 * (idx + 1)] =
        CtrlP_Tray_Poli_ROS_B.dCoeffs[(wayPoints_idx_0_tmp - 1) * 14 +
        b_coeffVec_idx_0_tmp] * static_cast<real_T>(CtrlP_Tray_Poli_ROS_B.b_j_j);
    }
  }

  CtrlP_Tray_Poli_ROS_ppval(CtrlP_Tray_Poli_ROS_B.coeffMat,
    CtrlP_Tray_Poli_ROS_B.ddCoeffs, t, qdd);
}

static void CtrlP_Tray_Poli_ROS_ppval_m(const real_T pp_breaks[8], const real_T
  pp_coefs[56], real_T x, real_T v[2])
{
  real_T xloc;
  int32_T low_i;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  if (rtIsNaN(x)) {
    v[0] = x;
    v[1] = x;
  } else {
    low_i = 0;
    low_ip1 = 1;
    high_i = 8;
    while (high_i > low_ip1 + 1) {
      mid_i = ((low_i + high_i) + 1) >> 1;
      if (x >= pp_breaks[mid_i - 1]) {
        low_i = mid_i - 1;
        low_ip1 = mid_i;
      } else {
        high_i = mid_i;
      }
    }

    low_ip1 = low_i << 1;
    xloc = x - pp_breaks[low_i];
    v[0] = pp_coefs[low_ip1];
    v[1] = pp_coefs[low_ip1 + 1];
    for (low_i = 0; low_i < 3; low_i++) {
      high_i = ((low_i + 1) * 14 + low_ip1) - 1;
      v[0] = xloc * v[0] + pp_coefs[high_i + 1];
      v[1] = xloc * v[1] + pp_coefs[high_i + 2];
    }
  }
}

static void CtrlP_Tray_Poli_SystemCore_step(robotics_slcore_internal_bloc_T *obj,
  real_T varargin_1, real_T varargout_1[2], real_T varargout_2[2], real_T
  varargout_3[2])
{
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  for (CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 0;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 < 12;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_0++) {
    CtrlP_Tray_Poli_ROS_B.waypoints[CtrlP_Tray_Poli_ROS_B.ii_size_idx_0] =
      obj->Waypoints[CtrlP_Tray_Poli_ROS_B.ii_size_idx_0];
  }

  for (CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 0;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 < 6;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_0++) {
    CtrlP_Tray_Poli_ROS_B.Tpoints[CtrlP_Tray_Poli_ROS_B.ii_size_idx_0] =
      obj->TimePoints[CtrlP_Tray_Poli_ROS_B.ii_size_idx_0];
  }

  for (CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 0;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 < 12;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_0++) {
    CtrlP_Tray_Poli_ROS_B.velBounds[CtrlP_Tray_Poli_ROS_B.ii_size_idx_0] =
      obj->VelocityBoundaryCondition[CtrlP_Tray_Poli_ROS_B.ii_size_idx_0];
  }

  CtrlP_Tray_Poli_R_cubicpolytraj(CtrlP_Tray_Poli_ROS_B.waypoints,
    CtrlP_Tray_Poli_ROS_B.Tpoints, CtrlP_Tray_Poli_ROS_B.Tpoints,
    CtrlP_Tray_Poli_ROS_B.velBounds, CtrlP_Tray_Poli_ROS_B.unusedU1,
    CtrlP_Tray_Poli_ROS_B.unusedU2, CtrlP_Tray_Poli_ROS_B.unusedU3,
    CtrlP_Tray_Poli_ROS_B.pp_breaks, CtrlP_Tray_Poli_ROS_B.pp_coefs);
  memcpy(&CtrlP_Tray_Poli_ROS_B.newBreaks[0], &CtrlP_Tray_Poli_ROS_B.pp_breaks[0],
         sizeof(real_T) << 3U);
  CtrlP_Tray_Poli_ROS_B.dt = 0.01;
  if (varargin_1 > CtrlP_Tray_Poli_ROS_B.pp_breaks[6]) {
    CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 1;
    CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 = 1;
  } else {
    CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 0;
    CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 = 0;
  }

  if ((CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 != 0) &&
      (CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 != 0)) {
    CtrlP_Tray_Poli_ROS_B.u0 = (varargin_1 - CtrlP_Tray_Poli_ROS_B.pp_breaks[6])
      / 2.0;
    if (CtrlP_Tray_Poli_ROS_B.u0 < 0.01) {
      CtrlP_Tray_Poli_ROS_B.dt = CtrlP_Tray_Poli_ROS_B.u0;
    }
  }

  CtrlP_Tray_Poli_ROS_B.newBreaks[6] = CtrlP_Tray_Poli_ROS_B.pp_breaks[6] +
    CtrlP_Tray_Poli_ROS_B.dt;
  memset(&CtrlP_Tray_Poli_ROS_B.dCoefs[0], 0, 56U * sizeof(real_T));
  for (CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 = 0;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 < 3;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_1++) {
    CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 3 -
      CtrlP_Tray_Poli_ROS_B.ii_size_idx_1;
    CtrlP_Tray_Poli_ROS_B.b_i = CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 + 1;
    for (CtrlP_Tray_Poli_ROS_B.i = 0; CtrlP_Tray_Poli_ROS_B.i < 14;
         CtrlP_Tray_Poli_ROS_B.i++) {
      CtrlP_Tray_Poli_ROS_B.dCoefs[CtrlP_Tray_Poli_ROS_B.i + 14 *
        (CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 + 1)] =
        CtrlP_Tray_Poli_ROS_B.pp_coefs[(CtrlP_Tray_Poli_ROS_B.b_i - 1) * 14 +
        CtrlP_Tray_Poli_ROS_B.i] * static_cast<real_T>
        (CtrlP_Tray_Poli_ROS_B.ii_size_idx_0);
    }
  }

  memset(&CtrlP_Tray_Poli_ROS_B.ddCoefs[0], 0, 56U * sizeof(real_T));
  for (CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 = 0;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 < 3;
       CtrlP_Tray_Poli_ROS_B.ii_size_idx_1++) {
    CtrlP_Tray_Poli_ROS_B.ii_size_idx_0 = 3 -
      CtrlP_Tray_Poli_ROS_B.ii_size_idx_1;
    CtrlP_Tray_Poli_ROS_B.b_i = CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 + 1;
    for (CtrlP_Tray_Poli_ROS_B.i = 0; CtrlP_Tray_Poli_ROS_B.i < 14;
         CtrlP_Tray_Poli_ROS_B.i++) {
      CtrlP_Tray_Poli_ROS_B.ddCoefs[CtrlP_Tray_Poli_ROS_B.i + 14 *
        (CtrlP_Tray_Poli_ROS_B.ii_size_idx_1 + 1)] =
        CtrlP_Tray_Poli_ROS_B.dCoefs[(CtrlP_Tray_Poli_ROS_B.b_i - 1) * 14 +
        CtrlP_Tray_Poli_ROS_B.i] * static_cast<real_T>
        (CtrlP_Tray_Poli_ROS_B.ii_size_idx_0);
    }
  }

  CtrlP_Tray_Poli_ROS_ppval_m(CtrlP_Tray_Poli_ROS_B.pp_breaks,
    CtrlP_Tray_Poli_ROS_B.pp_coefs, varargin_1, varargout_1);
  CtrlP_Tray_Poli_ROS_ppval_m(CtrlP_Tray_Poli_ROS_B.newBreaks,
    CtrlP_Tray_Poli_ROS_B.dCoefs, varargin_1, varargout_2);
  CtrlP_Tray_Poli_ROS_ppval_m(CtrlP_Tray_Poli_ROS_B.newBreaks,
    CtrlP_Tray_Poli_ROS_B.ddCoefs, varargin_1, varargout_3);
}

static void CtrlP_Tray_Poli__emxInit_real_T(emxArray_real_T_CtrlP_Tray_Po_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_CtrlP_Tray_Po_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_CtrlP_Tray_Po_T *)malloc(sizeof
    (emxArray_real_T_CtrlP_Tray_Po_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void CtrlP__emxEnsureCapacity_real_T(emxArray_real_T_CtrlP_Tray_Po_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  CtrlP_Tray_Poli_ROS_B.newNumel_i = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    CtrlP_Tray_Poli_ROS_B.newNumel_i *= emxArray->size[i];
  }

  if (CtrlP_Tray_Poli_ROS_B.newNumel_i > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < CtrlP_Tray_Poli_ROS_B.newNumel_i) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(i), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void CtrlP_Tray__emxInit_e_cell_wrap(emxArray_e_cell_wrap_CtrlP_Tr_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_e_cell_wrap_CtrlP_Tr_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_e_cell_wrap_CtrlP_Tr_T *)malloc(sizeof
    (emxArray_e_cell_wrap_CtrlP_Tr_T));
  emxArray = *pEmxArray;
  emxArray->data = (e_cell_wrap_CtrlP_Tray_Poli_R_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void C_emxEnsureCapacity_e_cell_wrap(emxArray_e_cell_wrap_CtrlP_Tr_T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(i), sizeof
                     (e_cell_wrap_CtrlP_Tray_Poli_R_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(e_cell_wrap_CtrlP_Tray_Poli_R_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (e_cell_wrap_CtrlP_Tray_Poli_R_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void CtrlP_Tray_Poli_ROS_eye(real_T b_I[36])
{
  int32_T b_k;
  memset(&b_I[0], 0, 36U * sizeof(real_T));
  for (b_k = 0; b_k < 6; b_k++) {
    b_I[b_k + 6 * b_k] = 1.0;
  }
}

static void CtrlP_Tray_Poli__emxInit_char_T(emxArray_char_T_CtrlP_Tray_Po_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T_CtrlP_Tray_Po_T *emxArray;
  *pEmxArray = (emxArray_char_T_CtrlP_Tray_Po_T *)malloc(sizeof
    (emxArray_char_T_CtrlP_Tray_Po_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (CtrlP_Tray_Poli_ROS_B.i_n = 0; CtrlP_Tray_Poli_ROS_B.i_n < numDimensions;
       CtrlP_Tray_Poli_ROS_B.i_n++) {
    emxArray->size[CtrlP_Tray_Poli_ROS_B.i_n] = 0;
  }
}

static void CtrlP__emxEnsureCapacity_char_T(emxArray_char_T_CtrlP_Tray_Po_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  CtrlP_Tray_Poli_ROS_B.newNumel = 1;
  for (CtrlP_Tray_Poli_ROS_B.i_j = 0; CtrlP_Tray_Poli_ROS_B.i_j <
       emxArray->numDimensions; CtrlP_Tray_Poli_ROS_B.i_j++) {
    CtrlP_Tray_Poli_ROS_B.newNumel *= emxArray->size[CtrlP_Tray_Poli_ROS_B.i_j];
  }

  if (CtrlP_Tray_Poli_ROS_B.newNumel > emxArray->allocatedSize) {
    CtrlP_Tray_Poli_ROS_B.i_j = emxArray->allocatedSize;
    if (CtrlP_Tray_Poli_ROS_B.i_j < 16) {
      CtrlP_Tray_Poli_ROS_B.i_j = 16;
    }

    while (CtrlP_Tray_Poli_ROS_B.i_j < CtrlP_Tray_Poli_ROS_B.newNumel) {
      if (CtrlP_Tray_Poli_ROS_B.i_j > 1073741823) {
        CtrlP_Tray_Poli_ROS_B.i_j = MAX_int32_T;
      } else {
        CtrlP_Tray_Poli_ROS_B.i_j <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(CtrlP_Tray_Poli_ROS_B.i_j), sizeof
                     (char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = CtrlP_Tray_Poli_ROS_B.i_j;
    emxArray->canFreeData = true;
  }
}

static void CtrlP_Tray_Poli__emxFree_char_T(emxArray_char_T_CtrlP_Tray_Po_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_CtrlP_Tray_Po_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_CtrlP_Tray_Po_T *)NULL;
  }
}

static void Ct_rigidBodyJoint_get_JointAxis(const
  rigidBodyJoint_CtrlP_Tray_Pol_T *obj, real_T ax[3])
{
  emxArray_char_T_CtrlP_Tray_Po_T *a;
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  CtrlP_Tray_Poli__emxInit_char_T(&a, 2);
  CtrlP_Tray_Poli_ROS_B.b_kstr_a = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = obj->Type->size[1];
  CtrlP__emxEnsureCapacity_char_T(a, CtrlP_Tray_Poli_ROS_B.b_kstr_a);
  CtrlP_Tray_Poli_ROS_B.loop_ub_j = obj->Type->size[0] * obj->Type->size[1] - 1;
  for (CtrlP_Tray_Poli_ROS_B.b_kstr_a = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_a <=
       CtrlP_Tray_Poli_ROS_B.loop_ub_j; CtrlP_Tray_Poli_ROS_B.b_kstr_a++) {
    a->data[CtrlP_Tray_Poli_ROS_B.b_kstr_a] = obj->Type->
      data[CtrlP_Tray_Poli_ROS_B.b_kstr_a];
  }

  for (CtrlP_Tray_Poli_ROS_B.b_kstr_a = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_a < 8;
       CtrlP_Tray_Poli_ROS_B.b_kstr_a++) {
    CtrlP_Tray_Poli_ROS_B.b_dh[CtrlP_Tray_Poli_ROS_B.b_kstr_a] =
      tmp[CtrlP_Tray_Poli_ROS_B.b_kstr_a];
  }

  CtrlP_Tray_Poli_ROS_B.b_bool_c = false;
  if (a->size[1] == 8) {
    CtrlP_Tray_Poli_ROS_B.b_kstr_a = 1;
    do {
      exitg1 = 0;
      if (CtrlP_Tray_Poli_ROS_B.b_kstr_a - 1 < 8) {
        CtrlP_Tray_Poli_ROS_B.loop_ub_j = CtrlP_Tray_Poli_ROS_B.b_kstr_a - 1;
        if (a->data[CtrlP_Tray_Poli_ROS_B.loop_ub_j] !=
            CtrlP_Tray_Poli_ROS_B.b_dh[CtrlP_Tray_Poli_ROS_B.loop_ub_j]) {
          exitg1 = 1;
        } else {
          CtrlP_Tray_Poli_ROS_B.b_kstr_a++;
        }
      } else {
        CtrlP_Tray_Poli_ROS_B.b_bool_c = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (CtrlP_Tray_Poli_ROS_B.b_bool_c) {
    guard1 = true;
  } else {
    CtrlP_Tray_Poli_ROS_B.b_kstr_a = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->Type->size[1];
    CtrlP__emxEnsureCapacity_char_T(a, CtrlP_Tray_Poli_ROS_B.b_kstr_a);
    CtrlP_Tray_Poli_ROS_B.loop_ub_j = obj->Type->size[0] * obj->Type->size[1] -
      1;
    for (CtrlP_Tray_Poli_ROS_B.b_kstr_a = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_a <=
         CtrlP_Tray_Poli_ROS_B.loop_ub_j; CtrlP_Tray_Poli_ROS_B.b_kstr_a++) {
      a->data[CtrlP_Tray_Poli_ROS_B.b_kstr_a] = obj->Type->
        data[CtrlP_Tray_Poli_ROS_B.b_kstr_a];
    }

    for (CtrlP_Tray_Poli_ROS_B.b_kstr_a = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_a < 9;
         CtrlP_Tray_Poli_ROS_B.b_kstr_a++) {
      CtrlP_Tray_Poli_ROS_B.b_j[CtrlP_Tray_Poli_ROS_B.b_kstr_a] =
        tmp_0[CtrlP_Tray_Poli_ROS_B.b_kstr_a];
    }

    CtrlP_Tray_Poli_ROS_B.b_bool_c = false;
    if (a->size[1] == 9) {
      CtrlP_Tray_Poli_ROS_B.b_kstr_a = 1;
      do {
        exitg1 = 0;
        if (CtrlP_Tray_Poli_ROS_B.b_kstr_a - 1 < 9) {
          CtrlP_Tray_Poli_ROS_B.loop_ub_j = CtrlP_Tray_Poli_ROS_B.b_kstr_a - 1;
          if (a->data[CtrlP_Tray_Poli_ROS_B.loop_ub_j] !=
              CtrlP_Tray_Poli_ROS_B.b_j[CtrlP_Tray_Poli_ROS_B.loop_ub_j]) {
            exitg1 = 1;
          } else {
            CtrlP_Tray_Poli_ROS_B.b_kstr_a++;
          }
        } else {
          CtrlP_Tray_Poli_ROS_B.b_bool_c = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (CtrlP_Tray_Poli_ROS_B.b_bool_c) {
      guard1 = true;
    } else {
      ax[0] = (rtNaN);
      ax[1] = (rtNaN);
      ax[2] = (rtNaN);
    }
  }

  if (guard1) {
    ax[0] = obj->JointAxisInternal[0];
    ax[1] = obj->JointAxisInternal[1];
    ax[2] = obj->JointAxisInternal[2];
  }

  CtrlP_Tray_Poli__emxFree_char_T(&a);
}

static void CtrlP_Tray_Poli_R_normalizeRows(const real_T matrix[3], real_T
  normRowMatrix[3])
{
  real_T b;
  b = 1.0 / sqrt((matrix[0] * matrix[0] + matrix[1] * matrix[1]) + matrix[2] *
                 matrix[2]);
  normRowMatrix[0] = matrix[0] * b;
  normRowMatrix[1] = matrix[1] * b;
  normRowMatrix[2] = matrix[2] * b;
}

static void CtrlP_Tray_Poli_ROS_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void rigidBodyJoint_transformBodyToP(const
  rigidBodyJoint_CtrlP_Tray_Pol_T *obj, real_T T[16])
{
  emxArray_char_T_CtrlP_Tray_Po_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  CtrlP_Tray_Poli__emxInit_char_T(&switch_expression, 2);
  CtrlP_Tray_Poli_ROS_B.b_kstr = switch_expression->size[0] *
    switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  CtrlP__emxEnsureCapacity_char_T(switch_expression,
    CtrlP_Tray_Poli_ROS_B.b_kstr);
  CtrlP_Tray_Poli_ROS_B.loop_ub = obj->Type->size[0] * obj->Type->size[1] - 1;
  for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr <=
       CtrlP_Tray_Poli_ROS_B.loop_ub; CtrlP_Tray_Poli_ROS_B.b_kstr++) {
    switch_expression->data[CtrlP_Tray_Poli_ROS_B.b_kstr] = obj->Type->
      data[CtrlP_Tray_Poli_ROS_B.b_kstr];
  }

  for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 5;
       CtrlP_Tray_Poli_ROS_B.b_kstr++) {
    CtrlP_Tray_Poli_ROS_B.b_b[CtrlP_Tray_Poli_ROS_B.b_kstr] =
      tmp[CtrlP_Tray_Poli_ROS_B.b_kstr];
  }

  CtrlP_Tray_Poli_ROS_B.b_bool_h = false;
  if (switch_expression->size[1] == 5) {
    CtrlP_Tray_Poli_ROS_B.b_kstr = 1;
    do {
      exitg1 = 0;
      if (CtrlP_Tray_Poli_ROS_B.b_kstr - 1 < 5) {
        CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr - 1;
        if (switch_expression->data[CtrlP_Tray_Poli_ROS_B.loop_ub] !=
            CtrlP_Tray_Poli_ROS_B.b_b[CtrlP_Tray_Poli_ROS_B.loop_ub]) {
          exitg1 = 1;
        } else {
          CtrlP_Tray_Poli_ROS_B.b_kstr++;
        }
      } else {
        CtrlP_Tray_Poli_ROS_B.b_bool_h = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (CtrlP_Tray_Poli_ROS_B.b_bool_h) {
    CtrlP_Tray_Poli_ROS_B.b_kstr = 0;
  } else {
    for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 8;
         CtrlP_Tray_Poli_ROS_B.b_kstr++) {
      CtrlP_Tray_Poli_ROS_B.b_l[CtrlP_Tray_Poli_ROS_B.b_kstr] =
        tmp_0[CtrlP_Tray_Poli_ROS_B.b_kstr];
    }

    CtrlP_Tray_Poli_ROS_B.b_bool_h = false;
    if (switch_expression->size[1] == 8) {
      CtrlP_Tray_Poli_ROS_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (CtrlP_Tray_Poli_ROS_B.b_kstr - 1 < 8) {
          CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr - 1;
          if (switch_expression->data[CtrlP_Tray_Poli_ROS_B.loop_ub] !=
              CtrlP_Tray_Poli_ROS_B.b_l[CtrlP_Tray_Poli_ROS_B.loop_ub]) {
            exitg1 = 1;
          } else {
            CtrlP_Tray_Poli_ROS_B.b_kstr++;
          }
        } else {
          CtrlP_Tray_Poli_ROS_B.b_bool_h = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (CtrlP_Tray_Poli_ROS_B.b_bool_h) {
      CtrlP_Tray_Poli_ROS_B.b_kstr = 1;
    } else {
      CtrlP_Tray_Poli_ROS_B.b_kstr = -1;
    }
  }

  CtrlP_Tray_Poli__emxFree_char_T(&switch_expression);
  switch (CtrlP_Tray_Poli_ROS_B.b_kstr) {
   case 0:
    memset(&CtrlP_Tray_Poli_ROS_B.TJ_c[0], 0, sizeof(real_T) << 4U);
    CtrlP_Tray_Poli_ROS_B.TJ_c[0] = 1.0;
    CtrlP_Tray_Poli_ROS_B.TJ_c[5] = 1.0;
    CtrlP_Tray_Poli_ROS_B.TJ_c[10] = 1.0;
    CtrlP_Tray_Poli_ROS_B.TJ_c[15] = 1.0;
    break;

   case 1:
    Ct_rigidBodyJoint_get_JointAxis(obj, CtrlP_Tray_Poli_ROS_B.v_p);
    CtrlP_Tray_Poli_ROS_B.v_l[0] = CtrlP_Tray_Poli_ROS_B.v_p[0];
    CtrlP_Tray_Poli_ROS_B.v_l[1] = CtrlP_Tray_Poli_ROS_B.v_p[1];
    CtrlP_Tray_Poli_ROS_B.v_l[2] = CtrlP_Tray_Poli_ROS_B.v_p[2];
    CtrlP_Tray_Poli_R_normalizeRows(CtrlP_Tray_Poli_ROS_B.v_l,
      CtrlP_Tray_Poli_ROS_B.v_p);
    CtrlP_Tray_Poli_ROS_B.tempR_tmp_n = CtrlP_Tray_Poli_ROS_B.v_p[1] *
      CtrlP_Tray_Poli_ROS_B.v_p[0] * 0.0;
    CtrlP_Tray_Poli_ROS_B.tempR_tmp_bs = CtrlP_Tray_Poli_ROS_B.v_p[2] *
      CtrlP_Tray_Poli_ROS_B.v_p[0] * 0.0;
    CtrlP_Tray_Poli_ROS_B.tempR_tmp_l = CtrlP_Tray_Poli_ROS_B.v_p[2] *
      CtrlP_Tray_Poli_ROS_B.v_p[1] * 0.0;
    CtrlP_Tray_Poli_ROS_cat(CtrlP_Tray_Poli_ROS_B.v_p[0] *
      CtrlP_Tray_Poli_ROS_B.v_p[0] * 0.0 + 1.0,
      CtrlP_Tray_Poli_ROS_B.tempR_tmp_n - CtrlP_Tray_Poli_ROS_B.v_p[2] * 0.0,
      CtrlP_Tray_Poli_ROS_B.tempR_tmp_bs + CtrlP_Tray_Poli_ROS_B.v_p[1] * 0.0,
      CtrlP_Tray_Poli_ROS_B.tempR_tmp_n + CtrlP_Tray_Poli_ROS_B.v_p[2] * 0.0,
      CtrlP_Tray_Poli_ROS_B.v_p[1] * CtrlP_Tray_Poli_ROS_B.v_p[1] * 0.0 + 1.0,
      CtrlP_Tray_Poli_ROS_B.tempR_tmp_l - CtrlP_Tray_Poli_ROS_B.v_p[0] * 0.0,
      CtrlP_Tray_Poli_ROS_B.tempR_tmp_bs - CtrlP_Tray_Poli_ROS_B.v_p[1] * 0.0,
      CtrlP_Tray_Poli_ROS_B.tempR_tmp_l + CtrlP_Tray_Poli_ROS_B.v_p[0] * 0.0,
      CtrlP_Tray_Poli_ROS_B.v_p[2] * CtrlP_Tray_Poli_ROS_B.v_p[2] * 0.0 + 1.0,
      CtrlP_Tray_Poli_ROS_B.tempR_f);
    for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 3;
         CtrlP_Tray_Poli_ROS_B.b_kstr++) {
      CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr + 1;
      CtrlP_Tray_Poli_ROS_B.R_c[CtrlP_Tray_Poli_ROS_B.loop_ub - 1] =
        CtrlP_Tray_Poli_ROS_B.tempR_f[(CtrlP_Tray_Poli_ROS_B.loop_ub - 1) * 3];
      CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr + 1;
      CtrlP_Tray_Poli_ROS_B.R_c[CtrlP_Tray_Poli_ROS_B.loop_ub + 2] =
        CtrlP_Tray_Poli_ROS_B.tempR_f[(CtrlP_Tray_Poli_ROS_B.loop_ub - 1) * 3 +
        1];
      CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr + 1;
      CtrlP_Tray_Poli_ROS_B.R_c[CtrlP_Tray_Poli_ROS_B.loop_ub + 5] =
        CtrlP_Tray_Poli_ROS_B.tempR_f[(CtrlP_Tray_Poli_ROS_B.loop_ub - 1) * 3 +
        2];
    }

    memset(&CtrlP_Tray_Poli_ROS_B.TJ_c[0], 0, sizeof(real_T) << 4U);
    for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 3;
         CtrlP_Tray_Poli_ROS_B.b_kstr++) {
      CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr << 2;
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.loop_ub] =
        CtrlP_Tray_Poli_ROS_B.R_c[3 * CtrlP_Tray_Poli_ROS_B.b_kstr];
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.loop_ub + 1] =
        CtrlP_Tray_Poli_ROS_B.R_c[3 * CtrlP_Tray_Poli_ROS_B.b_kstr + 1];
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.loop_ub + 2] =
        CtrlP_Tray_Poli_ROS_B.R_c[3 * CtrlP_Tray_Poli_ROS_B.b_kstr + 2];
    }

    CtrlP_Tray_Poli_ROS_B.TJ_c[15] = 1.0;
    break;

   default:
    Ct_rigidBodyJoint_get_JointAxis(obj, CtrlP_Tray_Poli_ROS_B.v_p);
    memset(&CtrlP_Tray_Poli_ROS_B.tempR_f[0], 0, 9U * sizeof(real_T));
    CtrlP_Tray_Poli_ROS_B.tempR_f[0] = 1.0;
    CtrlP_Tray_Poli_ROS_B.tempR_f[4] = 1.0;
    CtrlP_Tray_Poli_ROS_B.tempR_f[8] = 1.0;
    for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 3;
         CtrlP_Tray_Poli_ROS_B.b_kstr++) {
      CtrlP_Tray_Poli_ROS_B.loop_ub = CtrlP_Tray_Poli_ROS_B.b_kstr << 2;
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.loop_ub] =
        CtrlP_Tray_Poli_ROS_B.tempR_f[3 * CtrlP_Tray_Poli_ROS_B.b_kstr];
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.loop_ub + 1] =
        CtrlP_Tray_Poli_ROS_B.tempR_f[3 * CtrlP_Tray_Poli_ROS_B.b_kstr + 1];
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.loop_ub + 2] =
        CtrlP_Tray_Poli_ROS_B.tempR_f[3 * CtrlP_Tray_Poli_ROS_B.b_kstr + 2];
      CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.b_kstr + 12] =
        CtrlP_Tray_Poli_ROS_B.v_p[CtrlP_Tray_Poli_ROS_B.b_kstr] * 0.0;
    }

    CtrlP_Tray_Poli_ROS_B.TJ_c[3] = 0.0;
    CtrlP_Tray_Poli_ROS_B.TJ_c[7] = 0.0;
    CtrlP_Tray_Poli_ROS_B.TJ_c[11] = 0.0;
    CtrlP_Tray_Poli_ROS_B.TJ_c[15] = 1.0;
    break;
  }

  for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 16;
       CtrlP_Tray_Poli_ROS_B.b_kstr++) {
    CtrlP_Tray_Poli_ROS_B.a_k[CtrlP_Tray_Poli_ROS_B.b_kstr] =
      obj->JointToParentTransform[CtrlP_Tray_Poli_ROS_B.b_kstr];
  }

  for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 16;
       CtrlP_Tray_Poli_ROS_B.b_kstr++) {
    CtrlP_Tray_Poli_ROS_B.b_c[CtrlP_Tray_Poli_ROS_B.b_kstr] =
      obj->ChildToJointTransform[CtrlP_Tray_Poli_ROS_B.b_kstr];
  }

  for (CtrlP_Tray_Poli_ROS_B.b_kstr = 0; CtrlP_Tray_Poli_ROS_B.b_kstr < 4;
       CtrlP_Tray_Poli_ROS_B.b_kstr++) {
    for (CtrlP_Tray_Poli_ROS_B.loop_ub = 0; CtrlP_Tray_Poli_ROS_B.loop_ub < 4;
         CtrlP_Tray_Poli_ROS_B.loop_ub++) {
      CtrlP_Tray_Poli_ROS_B.a_tmp_tmp = CtrlP_Tray_Poli_ROS_B.loop_ub << 2;
      CtrlP_Tray_Poli_ROS_B.a_tmp = CtrlP_Tray_Poli_ROS_B.b_kstr +
        CtrlP_Tray_Poli_ROS_B.a_tmp_tmp;
      CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.a_tmp] = 0.0;
      CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp] *
        CtrlP_Tray_Poli_ROS_B.a_k[CtrlP_Tray_Poli_ROS_B.b_kstr];
      CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp + 1] *
        CtrlP_Tray_Poli_ROS_B.a_k[CtrlP_Tray_Poli_ROS_B.b_kstr + 4];
      CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp + 2] *
        CtrlP_Tray_Poli_ROS_B.a_k[CtrlP_Tray_Poli_ROS_B.b_kstr + 8];
      CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.TJ_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp + 3] *
        CtrlP_Tray_Poli_ROS_B.a_k[CtrlP_Tray_Poli_ROS_B.b_kstr + 12];
    }

    for (CtrlP_Tray_Poli_ROS_B.loop_ub = 0; CtrlP_Tray_Poli_ROS_B.loop_ub < 4;
         CtrlP_Tray_Poli_ROS_B.loop_ub++) {
      CtrlP_Tray_Poli_ROS_B.a_tmp_tmp = CtrlP_Tray_Poli_ROS_B.loop_ub << 2;
      CtrlP_Tray_Poli_ROS_B.a_tmp = CtrlP_Tray_Poli_ROS_B.b_kstr +
        CtrlP_Tray_Poli_ROS_B.a_tmp_tmp;
      T[CtrlP_Tray_Poli_ROS_B.a_tmp] = 0.0;
      T[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.b_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp] *
        CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.b_kstr];
      T[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.b_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp + 1] *
        CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.b_kstr + 4];
      T[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.b_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp + 2] *
        CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.b_kstr + 8];
      T[CtrlP_Tray_Poli_ROS_B.a_tmp] +=
        CtrlP_Tray_Poli_ROS_B.b_c[CtrlP_Tray_Poli_ROS_B.a_tmp_tmp + 3] *
        CtrlP_Tray_Poli_ROS_B.a_b[CtrlP_Tray_Poli_ROS_B.b_kstr + 12];
    }
  }
}

static void CtrlP_Tray_Poli_ROS_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (CtrlP_Tray_Poli_ROS_B.i4 = 0; CtrlP_Tray_Poli_ROS_B.i4 < 3;
       CtrlP_Tray_Poli_ROS_B.i4++) {
    CtrlP_Tray_Poli_ROS_B.R_g[3 * CtrlP_Tray_Poli_ROS_B.i4] =
      T[CtrlP_Tray_Poli_ROS_B.i4];
    CtrlP_Tray_Poli_ROS_B.R_g[3 * CtrlP_Tray_Poli_ROS_B.i4 + 1] =
      T[CtrlP_Tray_Poli_ROS_B.i4 + 4];
    CtrlP_Tray_Poli_ROS_B.R_g[3 * CtrlP_Tray_Poli_ROS_B.i4 + 2] =
      T[CtrlP_Tray_Poli_ROS_B.i4 + 8];
  }

  for (CtrlP_Tray_Poli_ROS_B.i4 = 0; CtrlP_Tray_Poli_ROS_B.i4 < 9;
       CtrlP_Tray_Poli_ROS_B.i4++) {
    CtrlP_Tray_Poli_ROS_B.R_g1[CtrlP_Tray_Poli_ROS_B.i4] =
      -CtrlP_Tray_Poli_ROS_B.R_g[CtrlP_Tray_Poli_ROS_B.i4];
  }

  for (CtrlP_Tray_Poli_ROS_B.i4 = 0; CtrlP_Tray_Poli_ROS_B.i4 < 3;
       CtrlP_Tray_Poli_ROS_B.i4++) {
    CtrlP_Tray_Poli_ROS_B.Tinv_tmp = CtrlP_Tray_Poli_ROS_B.i4 << 2;
    Tinv[CtrlP_Tray_Poli_ROS_B.Tinv_tmp] = CtrlP_Tray_Poli_ROS_B.R_g[3 *
      CtrlP_Tray_Poli_ROS_B.i4];
    Tinv[CtrlP_Tray_Poli_ROS_B.Tinv_tmp + 1] = CtrlP_Tray_Poli_ROS_B.R_g[3 *
      CtrlP_Tray_Poli_ROS_B.i4 + 1];
    Tinv[CtrlP_Tray_Poli_ROS_B.Tinv_tmp + 2] = CtrlP_Tray_Poli_ROS_B.R_g[3 *
      CtrlP_Tray_Poli_ROS_B.i4 + 2];
    Tinv[CtrlP_Tray_Poli_ROS_B.i4 + 12] =
      CtrlP_Tray_Poli_ROS_B.R_g1[CtrlP_Tray_Poli_ROS_B.i4 + 6] * T[14] +
      (CtrlP_Tray_Poli_ROS_B.R_g1[CtrlP_Tray_Poli_ROS_B.i4 + 3] * T[13] +
       CtrlP_Tray_Poli_ROS_B.R_g1[CtrlP_Tray_Poli_ROS_B.i4] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void CtrlP_Tray__tformToSpatialXform(const real_T T[16], real_T X[36])
{
  CtrlP_Tray_Poli_ROS_B.dv2[0] = 0.0;
  CtrlP_Tray_Poli_ROS_B.dv2[3] = -T[14];
  CtrlP_Tray_Poli_ROS_B.dv2[6] = T[13];
  CtrlP_Tray_Poli_ROS_B.dv2[1] = T[14];
  CtrlP_Tray_Poli_ROS_B.dv2[4] = 0.0;
  CtrlP_Tray_Poli_ROS_B.dv2[7] = -T[12];
  CtrlP_Tray_Poli_ROS_B.dv2[2] = -T[13];
  CtrlP_Tray_Poli_ROS_B.dv2[5] = T[12];
  CtrlP_Tray_Poli_ROS_B.dv2[8] = 0.0;
  for (CtrlP_Tray_Poli_ROS_B.i2 = 0; CtrlP_Tray_Poli_ROS_B.i2 < 3;
       CtrlP_Tray_Poli_ROS_B.i2++) {
    for (CtrlP_Tray_Poli_ROS_B.X_tmp = 0; CtrlP_Tray_Poli_ROS_B.X_tmp < 3;
         CtrlP_Tray_Poli_ROS_B.X_tmp++) {
      CtrlP_Tray_Poli_ROS_B.X_tmp_o = CtrlP_Tray_Poli_ROS_B.i2 + 3 *
        CtrlP_Tray_Poli_ROS_B.X_tmp;
      CtrlP_Tray_Poli_ROS_B.dv3[CtrlP_Tray_Poli_ROS_B.X_tmp_o] = 0.0;
      CtrlP_Tray_Poli_ROS_B.i3 = CtrlP_Tray_Poli_ROS_B.X_tmp << 2;
      CtrlP_Tray_Poli_ROS_B.dv3[CtrlP_Tray_Poli_ROS_B.X_tmp_o] +=
        T[CtrlP_Tray_Poli_ROS_B.i3] *
        CtrlP_Tray_Poli_ROS_B.dv2[CtrlP_Tray_Poli_ROS_B.i2];
      CtrlP_Tray_Poli_ROS_B.dv3[CtrlP_Tray_Poli_ROS_B.X_tmp_o] +=
        T[CtrlP_Tray_Poli_ROS_B.i3 + 1] *
        CtrlP_Tray_Poli_ROS_B.dv2[CtrlP_Tray_Poli_ROS_B.i2 + 3];
      CtrlP_Tray_Poli_ROS_B.dv3[CtrlP_Tray_Poli_ROS_B.X_tmp_o] +=
        T[CtrlP_Tray_Poli_ROS_B.i3 + 2] *
        CtrlP_Tray_Poli_ROS_B.dv2[CtrlP_Tray_Poli_ROS_B.i2 + 6];
      X[CtrlP_Tray_Poli_ROS_B.X_tmp + 6 * CtrlP_Tray_Poli_ROS_B.i2] = T
        [(CtrlP_Tray_Poli_ROS_B.i2 << 2) + CtrlP_Tray_Poli_ROS_B.X_tmp];
      X[CtrlP_Tray_Poli_ROS_B.X_tmp + 6 * (CtrlP_Tray_Poli_ROS_B.i2 + 3)] = 0.0;
    }
  }

  for (CtrlP_Tray_Poli_ROS_B.i2 = 0; CtrlP_Tray_Poli_ROS_B.i2 < 3;
       CtrlP_Tray_Poli_ROS_B.i2++) {
    X[6 * CtrlP_Tray_Poli_ROS_B.i2 + 3] = CtrlP_Tray_Poli_ROS_B.dv3[3 *
      CtrlP_Tray_Poli_ROS_B.i2];
    CtrlP_Tray_Poli_ROS_B.X_tmp = CtrlP_Tray_Poli_ROS_B.i2 << 2;
    CtrlP_Tray_Poli_ROS_B.X_tmp_o = 6 * (CtrlP_Tray_Poli_ROS_B.i2 + 3);
    X[CtrlP_Tray_Poli_ROS_B.X_tmp_o + 3] = T[CtrlP_Tray_Poli_ROS_B.X_tmp];
    X[6 * CtrlP_Tray_Poli_ROS_B.i2 + 4] = CtrlP_Tray_Poli_ROS_B.dv3[3 *
      CtrlP_Tray_Poli_ROS_B.i2 + 1];
    X[CtrlP_Tray_Poli_ROS_B.X_tmp_o + 4] = T[CtrlP_Tray_Poli_ROS_B.X_tmp + 1];
    X[6 * CtrlP_Tray_Poli_ROS_B.i2 + 5] = CtrlP_Tray_Poli_ROS_B.dv3[3 *
      CtrlP_Tray_Poli_ROS_B.i2 + 2];
    X[CtrlP_Tray_Poli_ROS_B.X_tmp_o + 5] = T[CtrlP_Tray_Poli_ROS_B.X_tmp + 2];
  }
}

static void CtrlP_Tray_Poli__emxFree_real_T(emxArray_real_T_CtrlP_Tray_Po_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_CtrlP_Tray_Po_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_CtrlP_Tray_Po_T *)NULL;
  }
}

static void CtrlP_Tray__emxFree_e_cell_wrap(emxArray_e_cell_wrap_CtrlP_Tr_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_e_cell_wrap_CtrlP_Tr_T *)NULL) {
    if (((*pEmxArray)->data != (e_cell_wrap_CtrlP_Tray_Poli_R_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_e_cell_wrap_CtrlP_Tr_T *)NULL;
  }
}

static boolean_T CtrlP_Tray_Poli_ROS_strcmp(const
  emxArray_char_T_CtrlP_Tray_Po_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  int32_T b_kstr;
  char_T b[5];
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    b[b_kstr] = tmp[b_kstr];
  }

  b_bool = false;
  if (a->size[1] == 5) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 5) {
        kstr = b_kstr - 1;
        if (a->data[kstr] != b[kstr]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void Ctr_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real_T q[2], real_T jointTorq[2])
{
  h_robotics_manip_internal_Rig_T *robot;
  emxArray_e_cell_wrap_CtrlP_Tr_T *X;
  emxArray_e_cell_wrap_CtrlP_Tr_T *Xtree;
  emxArray_real_T_CtrlP_Tray_Po_T *vJ;
  emxArray_real_T_CtrlP_Tray_Po_T *vB;
  emxArray_real_T_CtrlP_Tray_Po_T *aB;
  emxArray_real_T_CtrlP_Tray_Po_T *f;
  emxArray_real_T_CtrlP_Tray_Po_T *S;
  emxArray_real_T_CtrlP_Tray_Po_T *taui;
  g_robotics_manip_internal_Rig_T *obj_0;
  emxArray_real_T_CtrlP_Tray_Po_T *a;
  emxArray_char_T_CtrlP_Tray_Po_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  robot = &obj->TreeInternal;
  CtrlP_Tray_Poli_ROS_B.a0[0] = 0.0;
  CtrlP_Tray_Poli_ROS_B.a0[1] = 0.0;
  CtrlP_Tray_Poli_ROS_B.a0[2] = 0.0;
  CtrlP_Tray_Poli_ROS_B.a0[3] = -obj->TreeInternal.Gravity[0];
  CtrlP_Tray_Poli_ROS_B.a0[4] = -obj->TreeInternal.Gravity[1];
  CtrlP_Tray_Poli_ROS_B.a0[5] = -obj->TreeInternal.Gravity[2];
  CtrlP_Tray_Poli__emxInit_real_T(&vJ, 2);
  CtrlP_Tray_Poli_ROS_B.nb = obj->TreeInternal.NumBodies;
  CtrlP_Tray_Poli_ROS_B.u = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 = static_cast<int32_T>
    (CtrlP_Tray_Poli_ROS_B.nb);
  vJ->size[1] = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
  CtrlP__emxEnsureCapacity_real_T(vJ, CtrlP_Tray_Poli_ROS_B.u);
  CtrlP_Tray_Poli_ROS_B.aoffset = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 - 1;
  for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <=
       CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
    vJ->data[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
  }

  CtrlP_Tray_Poli__emxInit_real_T(&vB, 2);
  CtrlP_Tray_Poli_ROS_B.u = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
  CtrlP__emxEnsureCapacity_real_T(vB, CtrlP_Tray_Poli_ROS_B.u);
  for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <=
       CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
    vB->data[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
  }

  CtrlP_Tray_Poli__emxInit_real_T(&aB, 2);
  CtrlP_Tray_Poli_ROS_B.u = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
  CtrlP__emxEnsureCapacity_real_T(aB, CtrlP_Tray_Poli_ROS_B.u);
  for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <=
       CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
    aB->data[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
  }

  jointTorq[0] = 0.0;
  jointTorq[1] = 0.0;
  CtrlP_Tray__emxInit_e_cell_wrap(&X, 2);
  CtrlP_Tray__emxInit_e_cell_wrap(&Xtree, 2);
  CtrlP_Tray_Poli_ROS_B.c_tmp = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 - 1;
  CtrlP_Tray_Poli_ROS_B.u = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
  C_emxEnsureCapacity_e_cell_wrap(Xtree, CtrlP_Tray_Poli_ROS_B.u);
  CtrlP_Tray_Poli_ROS_B.u = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
  C_emxEnsureCapacity_e_cell_wrap(X, CtrlP_Tray_Poli_ROS_B.u);
  if (0 <= CtrlP_Tray_Poli_ROS_B.c_tmp) {
    CtrlP_Tray_Poli_ROS_eye(CtrlP_Tray_Poli_ROS_B.b_I);
  }

  for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <=
       CtrlP_Tray_Poli_ROS_B.c_tmp; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 36;
         CtrlP_Tray_Poli_ROS_B.u++) {
      Xtree->data[CtrlP_Tray_Poli_ROS_B.b_k_f].f1[CtrlP_Tray_Poli_ROS_B.u] =
        CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.u];
    }

    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 36;
         CtrlP_Tray_Poli_ROS_B.u++) {
      X->data[CtrlP_Tray_Poli_ROS_B.b_k_f].f1[CtrlP_Tray_Poli_ROS_B.u] =
        CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.u];
    }
  }

  CtrlP_Tray_Poli__emxInit_real_T(&f, 2);
  CtrlP_Tray_Poli_ROS_B.u = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
  CtrlP__emxEnsureCapacity_real_T(f, CtrlP_Tray_Poli_ROS_B.u);
  CtrlP_Tray_Poli__emxInit_real_T(&S, 2);
  CtrlP_Tray_Poli__emxInit_char_T(&switch_expression, 2);
  for (CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 = 0;
       CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 <= CtrlP_Tray_Poli_ROS_B.c_tmp;
       CtrlP_Tray_Poli_ROS_B.unnamed_idx_1++) {
    obj_0 = robot->Bodies[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
    CtrlP_Tray_Poli_ROS_B.u = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
    CtrlP__emxEnsureCapacity_real_T(S, CtrlP_Tray_Poli_ROS_B.u);
    CtrlP_Tray_Poli_ROS_B.aoffset = obj_0->JointInternal.MotionSubspace->size[0]
      * obj_0->JointInternal.MotionSubspace->size[1] - 1;
    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <=
         CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
      S->data[CtrlP_Tray_Poli_ROS_B.u] = obj_0->
        JointInternal.MotionSubspace->data[CtrlP_Tray_Poli_ROS_B.u];
    }

    CtrlP_Tray_Poli_ROS_B.a_idx_0 = robot->
      PositionDoFMap[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
    CtrlP_Tray_Poli_ROS_B.a_idx_1 = robot->
      PositionDoFMap[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 2];
    CtrlP_Tray_Poli_ROS_B.b_idx_0 = robot->
      VelocityDoFMap[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
    CtrlP_Tray_Poli_ROS_B.b_idx_1 = robot->
      VelocityDoFMap[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 2];
    if (CtrlP_Tray_Poli_ROS_B.a_idx_1 < CtrlP_Tray_Poli_ROS_B.a_idx_0) {
      obj_0 = robot->Bodies[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj_0->JointInternal,
        CtrlP_Tray_Poli_ROS_B.T);
      CtrlP_Tray_Poli_ROS_B.t = 1;
      CtrlP_Tray_Poli_ROS_B.qddoti_data[0] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        vJ->data[CtrlP_Tray_Poli_ROS_B.u + 6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (CtrlP_Tray_Poli_ROS_B.a_idx_0 > CtrlP_Tray_Poli_ROS_B.a_idx_1) {
        CtrlP_Tray_Poli_ROS_B.b_k_f = 0;
        CtrlP_Tray_Poli_ROS_B.j = 0;
      } else {
        CtrlP_Tray_Poli_ROS_B.b_k_f = static_cast<int32_T>
          (CtrlP_Tray_Poli_ROS_B.a_idx_0) - 1;
        CtrlP_Tray_Poli_ROS_B.j = static_cast<int32_T>
          (CtrlP_Tray_Poli_ROS_B.a_idx_1);
      }

      if (CtrlP_Tray_Poli_ROS_B.b_idx_0 > CtrlP_Tray_Poli_ROS_B.b_idx_1) {
        CtrlP_Tray_Poli_ROS_B.m = 0;
        CtrlP_Tray_Poli_ROS_B.inner = 0;
        CtrlP_Tray_Poli_ROS_B.u = 0;
        CtrlP_Tray_Poli_ROS_B.t = -1;
      } else {
        CtrlP_Tray_Poli_ROS_B.m = static_cast<int32_T>
          (CtrlP_Tray_Poli_ROS_B.b_idx_0) - 1;
        CtrlP_Tray_Poli_ROS_B.inner = static_cast<int32_T>
          (CtrlP_Tray_Poli_ROS_B.b_idx_1);
        CtrlP_Tray_Poli_ROS_B.u = CtrlP_Tray_Poli_ROS_B.m;
        CtrlP_Tray_Poli_ROS_B.t = CtrlP_Tray_Poli_ROS_B.inner - 1;
      }

      CtrlP_Tray_Poli_ROS_B.u = CtrlP_Tray_Poli_ROS_B.t -
        CtrlP_Tray_Poli_ROS_B.u;
      CtrlP_Tray_Poli_ROS_B.t = CtrlP_Tray_Poli_ROS_B.u + 1;
      if (0 <= CtrlP_Tray_Poli_ROS_B.u) {
        memset(&CtrlP_Tray_Poli_ROS_B.qddoti_data[0], 0,
               (CtrlP_Tray_Poli_ROS_B.u + 1) * sizeof(real_T));
      }

      obj_0 = robot->Bodies[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
      CtrlP_Tray_Poli_ROS_B.u = switch_expression->size[0] *
        switch_expression->size[1];
      switch_expression->size[0] = 1;
      switch_expression->size[1] = obj_0->JointInternal.Type->size[1];
      CtrlP__emxEnsureCapacity_char_T(switch_expression, CtrlP_Tray_Poli_ROS_B.u);
      CtrlP_Tray_Poli_ROS_B.aoffset = obj_0->JointInternal.Type->size[0] *
        obj_0->JointInternal.Type->size[1] - 1;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <=
           CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
        switch_expression->data[CtrlP_Tray_Poli_ROS_B.u] =
          obj_0->JointInternal.Type->data[CtrlP_Tray_Poli_ROS_B.u];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 5;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b_e[CtrlP_Tray_Poli_ROS_B.u] =
          tmp[CtrlP_Tray_Poli_ROS_B.u];
      }

      CtrlP_Tray_Poli_ROS_B.b_bool = false;
      if (switch_expression->size[1] == 5) {
        CtrlP_Tray_Poli_ROS_B.u = 1;
        do {
          exitg1 = 0;
          if (CtrlP_Tray_Poli_ROS_B.u - 1 < 5) {
            CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.u - 1;
            if (switch_expression->data[CtrlP_Tray_Poli_ROS_B.aoffset] !=
                CtrlP_Tray_Poli_ROS_B.b_e[CtrlP_Tray_Poli_ROS_B.aoffset]) {
              exitg1 = 1;
            } else {
              CtrlP_Tray_Poli_ROS_B.u++;
            }
          } else {
            CtrlP_Tray_Poli_ROS_B.b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (CtrlP_Tray_Poli_ROS_B.b_bool) {
        CtrlP_Tray_Poli_ROS_B.u = 0;
      } else {
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 8;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.b_g[CtrlP_Tray_Poli_ROS_B.u] =
            tmp_0[CtrlP_Tray_Poli_ROS_B.u];
        }

        CtrlP_Tray_Poli_ROS_B.b_bool = false;
        if (switch_expression->size[1] == 8) {
          CtrlP_Tray_Poli_ROS_B.u = 1;
          do {
            exitg1 = 0;
            if (CtrlP_Tray_Poli_ROS_B.u - 1 < 8) {
              CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.u - 1;
              if (switch_expression->data[CtrlP_Tray_Poli_ROS_B.aoffset] !=
                  CtrlP_Tray_Poli_ROS_B.b_g[CtrlP_Tray_Poli_ROS_B.aoffset]) {
                exitg1 = 1;
              } else {
                CtrlP_Tray_Poli_ROS_B.u++;
              }
            } else {
              CtrlP_Tray_Poli_ROS_B.b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (CtrlP_Tray_Poli_ROS_B.b_bool) {
          CtrlP_Tray_Poli_ROS_B.u = 1;
        } else {
          CtrlP_Tray_Poli_ROS_B.u = -1;
        }
      }

      switch (CtrlP_Tray_Poli_ROS_B.u) {
       case 0:
        memset(&CtrlP_Tray_Poli_ROS_B.TJ[0], 0, sizeof(real_T) << 4U);
        CtrlP_Tray_Poli_ROS_B.TJ[0] = 1.0;
        CtrlP_Tray_Poli_ROS_B.TJ[5] = 1.0;
        CtrlP_Tray_Poli_ROS_B.TJ[10] = 1.0;
        CtrlP_Tray_Poli_ROS_B.TJ[15] = 1.0;
        break;

       case 1:
        Ct_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal,
          CtrlP_Tray_Poli_ROS_B.v);
        CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.j -
          CtrlP_Tray_Poli_ROS_B.b_k_f;
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <
             CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.l_data[CtrlP_Tray_Poli_ROS_B.u] =
            CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u;
        }

        CtrlP_Tray_Poli_ROS_B.result_data[0] = CtrlP_Tray_Poli_ROS_B.v[0];
        CtrlP_Tray_Poli_ROS_B.result_data[1] = CtrlP_Tray_Poli_ROS_B.v[1];
        CtrlP_Tray_Poli_ROS_B.result_data[2] = CtrlP_Tray_Poli_ROS_B.v[2];
        if (0 <= (CtrlP_Tray_Poli_ROS_B.aoffset != 0) - 1) {
          CtrlP_Tray_Poli_ROS_B.result_data[3] = q[CtrlP_Tray_Poli_ROS_B.l_data
            [0]];
        }

        CtrlP_Tray_Poli_R_normalizeRows(&CtrlP_Tray_Poli_ROS_B.result_data[0],
          CtrlP_Tray_Poli_ROS_B.v);
        CtrlP_Tray_Poli_ROS_B.a_idx_0 = cos(CtrlP_Tray_Poli_ROS_B.result_data[3]);
        CtrlP_Tray_Poli_ROS_B.sth = sin(CtrlP_Tray_Poli_ROS_B.result_data[3]);
        CtrlP_Tray_Poli_ROS_B.a_idx_1 = CtrlP_Tray_Poli_ROS_B.v[1] *
          CtrlP_Tray_Poli_ROS_B.v[0] * (1.0 - CtrlP_Tray_Poli_ROS_B.a_idx_0);
        CtrlP_Tray_Poli_ROS_B.b_idx_0 = CtrlP_Tray_Poli_ROS_B.v[2] *
          CtrlP_Tray_Poli_ROS_B.sth;
        CtrlP_Tray_Poli_ROS_B.b_idx_1 = CtrlP_Tray_Poli_ROS_B.v[2] *
          CtrlP_Tray_Poli_ROS_B.v[0] * (1.0 - CtrlP_Tray_Poli_ROS_B.a_idx_0);
        CtrlP_Tray_Poli_ROS_B.tempR_tmp = CtrlP_Tray_Poli_ROS_B.v[1] *
          CtrlP_Tray_Poli_ROS_B.sth;
        CtrlP_Tray_Poli_ROS_B.tempR_tmp_b = CtrlP_Tray_Poli_ROS_B.v[2] *
          CtrlP_Tray_Poli_ROS_B.v[1] * (1.0 - CtrlP_Tray_Poli_ROS_B.a_idx_0);
        CtrlP_Tray_Poli_ROS_B.sth *= CtrlP_Tray_Poli_ROS_B.v[0];
        CtrlP_Tray_Poli_ROS_cat(CtrlP_Tray_Poli_ROS_B.v[0] *
          CtrlP_Tray_Poli_ROS_B.v[0] * (1.0 - CtrlP_Tray_Poli_ROS_B.a_idx_0) +
          CtrlP_Tray_Poli_ROS_B.a_idx_0, CtrlP_Tray_Poli_ROS_B.a_idx_1 -
          CtrlP_Tray_Poli_ROS_B.b_idx_0, CtrlP_Tray_Poli_ROS_B.b_idx_1 +
          CtrlP_Tray_Poli_ROS_B.tempR_tmp, CtrlP_Tray_Poli_ROS_B.a_idx_1 +
          CtrlP_Tray_Poli_ROS_B.b_idx_0, CtrlP_Tray_Poli_ROS_B.v[1] *
          CtrlP_Tray_Poli_ROS_B.v[1] * (1.0 - CtrlP_Tray_Poli_ROS_B.a_idx_0) +
          CtrlP_Tray_Poli_ROS_B.a_idx_0, CtrlP_Tray_Poli_ROS_B.tempR_tmp_b -
          CtrlP_Tray_Poli_ROS_B.sth, CtrlP_Tray_Poli_ROS_B.b_idx_1 -
          CtrlP_Tray_Poli_ROS_B.tempR_tmp, CtrlP_Tray_Poli_ROS_B.tempR_tmp_b +
          CtrlP_Tray_Poli_ROS_B.sth, CtrlP_Tray_Poli_ROS_B.v[2] *
          CtrlP_Tray_Poli_ROS_B.v[2] * (1.0 - CtrlP_Tray_Poli_ROS_B.a_idx_0) +
          CtrlP_Tray_Poli_ROS_B.a_idx_0, CtrlP_Tray_Poli_ROS_B.tempR_p);
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 3;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.u = CtrlP_Tray_Poli_ROS_B.b_k_f + 1;
          CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u - 1] =
            CtrlP_Tray_Poli_ROS_B.tempR_p[(CtrlP_Tray_Poli_ROS_B.u - 1) * 3];
          CtrlP_Tray_Poli_ROS_B.u = CtrlP_Tray_Poli_ROS_B.b_k_f + 1;
          CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u + 2] =
            CtrlP_Tray_Poli_ROS_B.tempR_p[(CtrlP_Tray_Poli_ROS_B.u - 1) * 3 + 1];
          CtrlP_Tray_Poli_ROS_B.u = CtrlP_Tray_Poli_ROS_B.b_k_f + 1;
          CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u + 5] =
            CtrlP_Tray_Poli_ROS_B.tempR_p[(CtrlP_Tray_Poli_ROS_B.u - 1) * 3 + 2];
        }

        memset(&CtrlP_Tray_Poli_ROS_B.TJ[0], 0, sizeof(real_T) << 4U);
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.u << 2;
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset] =
            CtrlP_Tray_Poli_ROS_B.R[3 * CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 1] =
            CtrlP_Tray_Poli_ROS_B.R[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 2] =
            CtrlP_Tray_Poli_ROS_B.R[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
        }

        CtrlP_Tray_Poli_ROS_B.TJ[15] = 1.0;
        break;

       default:
        Ct_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal,
          CtrlP_Tray_Poli_ROS_B.v);
        memset(&CtrlP_Tray_Poli_ROS_B.tempR_p[0], 0, 9U * sizeof(real_T));
        CtrlP_Tray_Poli_ROS_B.tempR_p[0] = 1.0;
        CtrlP_Tray_Poli_ROS_B.tempR_p[4] = 1.0;
        CtrlP_Tray_Poli_ROS_B.tempR_p[8] = 1.0;
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.u << 2;
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset] =
            CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 1] =
            CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 2] =
            CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
          CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.u + 12] =
            CtrlP_Tray_Poli_ROS_B.v[CtrlP_Tray_Poli_ROS_B.u] *
            q[CtrlP_Tray_Poli_ROS_B.b_k_f];
        }

        CtrlP_Tray_Poli_ROS_B.TJ[3] = 0.0;
        CtrlP_Tray_Poli_ROS_B.TJ[7] = 0.0;
        CtrlP_Tray_Poli_ROS_B.TJ[11] = 0.0;
        CtrlP_Tray_Poli_ROS_B.TJ[15] = 1.0;
        break;
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 16;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.a[CtrlP_Tray_Poli_ROS_B.u] =
          obj_0->JointInternal.JointToParentTransform[CtrlP_Tray_Poli_ROS_B.u];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 16;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b[CtrlP_Tray_Poli_ROS_B.u] =
          obj_0->JointInternal.ChildToJointTransform[CtrlP_Tray_Poli_ROS_B.u];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 4;
           CtrlP_Tray_Poli_ROS_B.u++) {
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 4;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.b_k_f << 2;
          CtrlP_Tray_Poli_ROS_B.j = CtrlP_Tray_Poli_ROS_B.u +
            CtrlP_Tray_Poli_ROS_B.aoffset;
          CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.j] = 0.0;
          CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.j] +=
            CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset] *
            CtrlP_Tray_Poli_ROS_B.a[CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.j] +=
            CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 1] *
            CtrlP_Tray_Poli_ROS_B.a[CtrlP_Tray_Poli_ROS_B.u + 4];
          CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.j] +=
            CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 2] *
            CtrlP_Tray_Poli_ROS_B.a[CtrlP_Tray_Poli_ROS_B.u + 8];
          CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.j] +=
            CtrlP_Tray_Poli_ROS_B.TJ[CtrlP_Tray_Poli_ROS_B.aoffset + 3] *
            CtrlP_Tray_Poli_ROS_B.a[CtrlP_Tray_Poli_ROS_B.u + 12];
        }

        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 4;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.j = CtrlP_Tray_Poli_ROS_B.b_k_f << 2;
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.u +
            CtrlP_Tray_Poli_ROS_B.j;
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset] = 0.0;
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset] +=
            CtrlP_Tray_Poli_ROS_B.b[CtrlP_Tray_Poli_ROS_B.j] *
            CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset] +=
            CtrlP_Tray_Poli_ROS_B.b[CtrlP_Tray_Poli_ROS_B.j + 1] *
            CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.u + 4];
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset] +=
            CtrlP_Tray_Poli_ROS_B.b[CtrlP_Tray_Poli_ROS_B.j + 2] *
            CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.u + 8];
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset] +=
            CtrlP_Tray_Poli_ROS_B.b[CtrlP_Tray_Poli_ROS_B.j + 3] *
            CtrlP_Tray_Poli_ROS_B.a_m[CtrlP_Tray_Poli_ROS_B.u + 12];
        }
      }

      if ((S->size[1] == 1) || (CtrlP_Tray_Poli_ROS_B.inner -
           CtrlP_Tray_Poli_ROS_B.m == 1)) {
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.b_k_f = CtrlP_Tray_Poli_ROS_B.u + 6 *
            CtrlP_Tray_Poli_ROS_B.unnamed_idx_1;
          vJ->data[CtrlP_Tray_Poli_ROS_B.b_k_f] = 0.0;
          CtrlP_Tray_Poli_ROS_B.aoffset = S->size[1];
          for (CtrlP_Tray_Poli_ROS_B.m = 0; CtrlP_Tray_Poli_ROS_B.m <
               CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.m++) {
            vJ->data[CtrlP_Tray_Poli_ROS_B.b_k_f] += S->data[6 *
              CtrlP_Tray_Poli_ROS_B.m + CtrlP_Tray_Poli_ROS_B.u] * 0.0;
          }
        }
      } else {
        CtrlP_Tray_Poli_ROS_B.inner = S->size[1] - 1;
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
             CtrlP_Tray_Poli_ROS_B.u++) {
          vJ->data[CtrlP_Tray_Poli_ROS_B.u + 6 *
            CtrlP_Tray_Poli_ROS_B.unnamed_idx_1] = 0.0;
        }

        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <=
             CtrlP_Tray_Poli_ROS_B.inner; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.b_k_f * 6 - 1;
          for (CtrlP_Tray_Poli_ROS_B.c_i = 0; CtrlP_Tray_Poli_ROS_B.c_i < 6;
               CtrlP_Tray_Poli_ROS_B.c_i++) {
            CtrlP_Tray_Poli_ROS_B.u = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 +
              CtrlP_Tray_Poli_ROS_B.c_i;
            vJ->data[CtrlP_Tray_Poli_ROS_B.u] += S->data
              [(CtrlP_Tray_Poli_ROS_B.aoffset + CtrlP_Tray_Poli_ROS_B.c_i) + 1] *
              0.0;
          }
        }
      }
    }

    CtrlP_Tray_Poli_ROS_tforminv(CtrlP_Tray_Poli_ROS_B.T,
      CtrlP_Tray_Poli_ROS_B.TJ);
    CtrlP_Tray__tformToSpatialXform(CtrlP_Tray_Poli_ROS_B.TJ, X->
      data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1);
    CtrlP_Tray_Poli_ROS_B.a_idx_0 = robot->
      Bodies[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]->ParentIndex;
    if (CtrlP_Tray_Poli_ROS_B.a_idx_0 > 0.0) {
      CtrlP_Tray_Poli_ROS_B.m = static_cast<int32_T>
        (CtrlP_Tray_Poli_ROS_B.a_idx_0);
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_1 = 0.0;
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.a_idx_1 += vB->data[(CtrlP_Tray_Poli_ROS_B.m - 1)
            * 6 + CtrlP_Tray_Poli_ROS_B.b_k_f] * X->
            data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
            CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u];
        }

        CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = vJ->data[6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + CtrlP_Tray_Poli_ROS_B.u] +
          CtrlP_Tray_Poli_ROS_B.a_idx_1;
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        vB->data[CtrlP_Tray_Poli_ROS_B.u + 6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1] =
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
      }

      if ((S->size[1] == 1) || (CtrlP_Tray_Poli_ROS_B.t == 1)) {
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
          CtrlP_Tray_Poli_ROS_B.aoffset = S->size[1];
          for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <
               CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
            CtrlP_Tray_Poli_ROS_B.a_idx_1 = S->data[6 *
              CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u] *
              CtrlP_Tray_Poli_ROS_B.qddoti_data[CtrlP_Tray_Poli_ROS_B.b_k_f] +
              CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
            CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] =
              CtrlP_Tray_Poli_ROS_B.a_idx_1;
          }
        }
      } else {
        CtrlP_Tray_Poli_ROS_B.inner = S->size[1] - 1;
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
        }

        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <=
             CtrlP_Tray_Poli_ROS_B.inner; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.b_k_f * 6 - 1;
          for (CtrlP_Tray_Poli_ROS_B.c_i = 0; CtrlP_Tray_Poli_ROS_B.c_i < 6;
               CtrlP_Tray_Poli_ROS_B.c_i++) {
            CtrlP_Tray_Poli_ROS_B.a_idx_1 = S->data
              [(CtrlP_Tray_Poli_ROS_B.aoffset + CtrlP_Tray_Poli_ROS_B.c_i) + 1] *
              0.0 + CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.c_i];
            CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.c_i] =
              CtrlP_Tray_Poli_ROS_B.a_idx_1;
          }
        }
      }

      CtrlP_Tray_Poli_ROS_B.tempR_p[0] = 0.0;
      CtrlP_Tray_Poli_ROS_B.t = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 2;
      CtrlP_Tray_Poli_ROS_B.tempR_p[3] = -vB->data[CtrlP_Tray_Poli_ROS_B.t];
      CtrlP_Tray_Poli_ROS_B.u = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 1;
      CtrlP_Tray_Poli_ROS_B.tempR_p[6] = vB->data[CtrlP_Tray_Poli_ROS_B.u];
      CtrlP_Tray_Poli_ROS_B.tempR_p[1] = vB->data[CtrlP_Tray_Poli_ROS_B.t];
      CtrlP_Tray_Poli_ROS_B.tempR_p[4] = 0.0;
      CtrlP_Tray_Poli_ROS_B.tempR_p[7] = -vB->data[6 *
        CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
      CtrlP_Tray_Poli_ROS_B.tempR_p[2] = -vB->data[CtrlP_Tray_Poli_ROS_B.u];
      CtrlP_Tray_Poli_ROS_B.tempR_p[5] = vB->data[6 *
        CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
      CtrlP_Tray_Poli_ROS_B.tempR_p[8] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u] =
          CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u];
        CtrlP_Tray_Poli_ROS_B.t = 6 * (CtrlP_Tray_Poli_ROS_B.u + 3);
        CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t] = 0.0;
        CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 1] =
          CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
        CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 1] = 0.0;
        CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 2] =
          CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
        CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 2] = 0.0;
      }

      CtrlP_Tray_Poli_ROS_B.tempR[3] = 0.0;
      CtrlP_Tray_Poli_ROS_B.t = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 5;
      CtrlP_Tray_Poli_ROS_B.tempR[9] = -vB->data[CtrlP_Tray_Poli_ROS_B.t];
      CtrlP_Tray_Poli_ROS_B.u = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 4;
      CtrlP_Tray_Poli_ROS_B.tempR[15] = vB->data[CtrlP_Tray_Poli_ROS_B.u];
      CtrlP_Tray_Poli_ROS_B.tempR[4] = vB->data[CtrlP_Tray_Poli_ROS_B.t];
      CtrlP_Tray_Poli_ROS_B.tempR[10] = 0.0;
      CtrlP_Tray_Poli_ROS_B.t = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 3;
      CtrlP_Tray_Poli_ROS_B.tempR[16] = -vB->data[CtrlP_Tray_Poli_ROS_B.t];
      CtrlP_Tray_Poli_ROS_B.tempR[5] = -vB->data[CtrlP_Tray_Poli_ROS_B.u];
      CtrlP_Tray_Poli_ROS_B.tempR[11] = vB->data[CtrlP_Tray_Poli_ROS_B.t];
      CtrlP_Tray_Poli_ROS_B.tempR[17] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.t = 6 * (CtrlP_Tray_Poli_ROS_B.u + 3);
        CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 3] =
          CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u];
        CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 4] =
          CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
        CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 5] =
          CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_1 = 0.0;
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.a_idx_1 += aB->data[(CtrlP_Tray_Poli_ROS_B.m - 1)
            * 6 + CtrlP_Tray_Poli_ROS_B.b_k_f] * X->
            data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
            CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u];
        }

        CtrlP_Tray_Poli_ROS_B.X[CtrlP_Tray_Poli_ROS_B.u] =
          CtrlP_Tray_Poli_ROS_B.a_idx_1 +
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.a_idx_1 = CtrlP_Tray_Poli_ROS_B.tempR[6 *
            CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u] * vJ->data[6 *
            CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + CtrlP_Tray_Poli_ROS_B.b_k_f] +
            CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] =
            CtrlP_Tray_Poli_ROS_B.a_idx_1;
        }
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        aB->data[CtrlP_Tray_Poli_ROS_B.u + 6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1] =
          CtrlP_Tray_Poli_ROS_B.X[CtrlP_Tray_Poli_ROS_B.u] +
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
      }

      CtrlP_Tray_Poli_ROS_B.R[0] = 0.0;
      CtrlP_Tray_Poli_ROS_B.R[3] = -CtrlP_Tray_Poli_ROS_B.T[14];
      CtrlP_Tray_Poli_ROS_B.R[6] = CtrlP_Tray_Poli_ROS_B.T[13];
      CtrlP_Tray_Poli_ROS_B.R[1] = CtrlP_Tray_Poli_ROS_B.T[14];
      CtrlP_Tray_Poli_ROS_B.R[4] = 0.0;
      CtrlP_Tray_Poli_ROS_B.R[7] = -CtrlP_Tray_Poli_ROS_B.T[12];
      CtrlP_Tray_Poli_ROS_B.R[2] = -CtrlP_Tray_Poli_ROS_B.T[13];
      CtrlP_Tray_Poli_ROS_B.R[5] = CtrlP_Tray_Poli_ROS_B.T[12];
      CtrlP_Tray_Poli_ROS_B.R[8] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 3;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.m = CtrlP_Tray_Poli_ROS_B.u + 3 *
            CtrlP_Tray_Poli_ROS_B.b_k_f;
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] = 0.0;
          CtrlP_Tray_Poli_ROS_B.t = CtrlP_Tray_Poli_ROS_B.b_k_f << 2;
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] +=
            CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.t] *
            CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] +=
            CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.t + 1] *
            CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u + 3];
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] +=
            CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.t + 2] *
            CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u + 6];
          CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.b_k_f + 6 *
            CtrlP_Tray_Poli_ROS_B.u] = CtrlP_Tray_Poli_ROS_B.T
            [(CtrlP_Tray_Poli_ROS_B.u << 2) + CtrlP_Tray_Poli_ROS_B.b_k_f];
          CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.b_k_f + 6 *
            (CtrlP_Tray_Poli_ROS_B.u + 3)] = 0.0;
        }
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b_I[6 * CtrlP_Tray_Poli_ROS_B.u + 3] =
          CtrlP_Tray_Poli_ROS_B.dv1[3 * CtrlP_Tray_Poli_ROS_B.u];
        CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.u << 2;
        CtrlP_Tray_Poli_ROS_B.t = 6 * (CtrlP_Tray_Poli_ROS_B.u + 3);
        CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.t + 3] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset];
        CtrlP_Tray_Poli_ROS_B.b_I[6 * CtrlP_Tray_Poli_ROS_B.u + 4] =
          CtrlP_Tray_Poli_ROS_B.dv1[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
        CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.t + 4] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset + 1];
        CtrlP_Tray_Poli_ROS_B.b_I[6 * CtrlP_Tray_Poli_ROS_B.u + 5] =
          CtrlP_Tray_Poli_ROS_B.dv1[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
        CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.t + 5] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.aoffset + 2];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.t = CtrlP_Tray_Poli_ROS_B.u + 6 *
            CtrlP_Tray_Poli_ROS_B.b_k_f;
          CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t] = 0.0;
          for (CtrlP_Tray_Poli_ROS_B.m = 0; CtrlP_Tray_Poli_ROS_B.m < 6;
               CtrlP_Tray_Poli_ROS_B.m++) {
            CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t] += Xtree->data[
              static_cast<int32_T>(CtrlP_Tray_Poli_ROS_B.a_idx_0) - 1].f1[6 *
              CtrlP_Tray_Poli_ROS_B.m + CtrlP_Tray_Poli_ROS_B.u] *
              CtrlP_Tray_Poli_ROS_B.b_I[6 * CtrlP_Tray_Poli_ROS_B.b_k_f +
              CtrlP_Tray_Poli_ROS_B.m];
          }
        }
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 36;
           CtrlP_Tray_Poli_ROS_B.u++) {
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.u] =
          CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.u];
      }
    } else {
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b_k_f = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 +
          CtrlP_Tray_Poli_ROS_B.u;
        vB->data[CtrlP_Tray_Poli_ROS_B.b_k_f] = vJ->
          data[CtrlP_Tray_Poli_ROS_B.b_k_f];
      }

      if ((S->size[1] == 1) || (CtrlP_Tray_Poli_ROS_B.t == 1)) {
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
          CtrlP_Tray_Poli_ROS_B.aoffset = S->size[1];
          for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <
               CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
            CtrlP_Tray_Poli_ROS_B.a_idx_1 = S->data[6 *
              CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u] *
              CtrlP_Tray_Poli_ROS_B.qddoti_data[CtrlP_Tray_Poli_ROS_B.b_k_f] +
              CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
            CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] =
              CtrlP_Tray_Poli_ROS_B.a_idx_1;
          }
        }
      } else {
        CtrlP_Tray_Poli_ROS_B.inner = S->size[1] - 1;
        for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
             CtrlP_Tray_Poli_ROS_B.u++) {
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
        }

        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <=
             CtrlP_Tray_Poli_ROS_B.inner; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.aoffset = CtrlP_Tray_Poli_ROS_B.b_k_f * 6 - 1;
          for (CtrlP_Tray_Poli_ROS_B.c_i = 0; CtrlP_Tray_Poli_ROS_B.c_i < 6;
               CtrlP_Tray_Poli_ROS_B.c_i++) {
            CtrlP_Tray_Poli_ROS_B.a_idx_1 = S->data
              [(CtrlP_Tray_Poli_ROS_B.aoffset + CtrlP_Tray_Poli_ROS_B.c_i) + 1] *
              0.0 + CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.c_i];
            CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.c_i] =
              CtrlP_Tray_Poli_ROS_B.a_idx_1;
          }
        }
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_1 = 0.0;
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.a_idx_1 += X->
            data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
            CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u] *
            CtrlP_Tray_Poli_ROS_B.a0[CtrlP_Tray_Poli_ROS_B.b_k_f];
        }

        aB->data[CtrlP_Tray_Poli_ROS_B.u + 6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1] = CtrlP_Tray_Poli_ROS_B.a_idx_1 +
          CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u];
      }

      CtrlP_Tray_Poli_ROS_B.R[0] = 0.0;
      CtrlP_Tray_Poli_ROS_B.R[3] = -CtrlP_Tray_Poli_ROS_B.T[14];
      CtrlP_Tray_Poli_ROS_B.R[6] = CtrlP_Tray_Poli_ROS_B.T[13];
      CtrlP_Tray_Poli_ROS_B.R[1] = CtrlP_Tray_Poli_ROS_B.T[14];
      CtrlP_Tray_Poli_ROS_B.R[4] = 0.0;
      CtrlP_Tray_Poli_ROS_B.R[7] = -CtrlP_Tray_Poli_ROS_B.T[12];
      CtrlP_Tray_Poli_ROS_B.R[2] = -CtrlP_Tray_Poli_ROS_B.T[13];
      CtrlP_Tray_Poli_ROS_B.R[5] = CtrlP_Tray_Poli_ROS_B.T[12];
      CtrlP_Tray_Poli_ROS_B.R[8] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 3;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.m = CtrlP_Tray_Poli_ROS_B.u + 3 *
            CtrlP_Tray_Poli_ROS_B.b_k_f;
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] = 0.0;
          CtrlP_Tray_Poli_ROS_B.t = CtrlP_Tray_Poli_ROS_B.b_k_f << 2;
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] +=
            CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.t] *
            CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u];
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] +=
            CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.t + 1] *
            CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u + 3];
          CtrlP_Tray_Poli_ROS_B.dv1[CtrlP_Tray_Poli_ROS_B.m] +=
            CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.t + 2] *
            CtrlP_Tray_Poli_ROS_B.R[CtrlP_Tray_Poli_ROS_B.u + 6];
        }
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b_k_f = CtrlP_Tray_Poli_ROS_B.u << 2;
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.b_k_f];
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u + 1] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.b_k_f + 1];
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u + 2] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.b_k_f + 2];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b_k_f = 6 * (CtrlP_Tray_Poli_ROS_B.u + 3);
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.b_k_f] = 0.0;
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.b_k_f + 1] = 0.0;
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.b_k_f + 2] = 0.0;
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u + 3] = CtrlP_Tray_Poli_ROS_B.dv1[3 *
          CtrlP_Tray_Poli_ROS_B.u];
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u + 4] = CtrlP_Tray_Poli_ROS_B.dv1[3 *
          CtrlP_Tray_Poli_ROS_B.u + 1];
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u + 5] = CtrlP_Tray_Poli_ROS_B.dv1[3 *
          CtrlP_Tray_Poli_ROS_B.u + 2];
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.b_k_f = CtrlP_Tray_Poli_ROS_B.u << 2;
        CtrlP_Tray_Poli_ROS_B.m = 6 * (CtrlP_Tray_Poli_ROS_B.u + 3);
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.m + 3] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.b_k_f];
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.m + 4] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.b_k_f + 1];
        Xtree->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
          .f1[CtrlP_Tray_Poli_ROS_B.m + 5] =
          CtrlP_Tray_Poli_ROS_B.T[CtrlP_Tray_Poli_ROS_B.b_k_f + 2];
      }
    }

    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 36;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.b_I[CtrlP_Tray_Poli_ROS_B.u] = robot->
        Bodies[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]->
        SpatialInertia[CtrlP_Tray_Poli_ROS_B.u];
    }

    CtrlP_Tray_Poli_ROS_B.tempR_p[0] = 0.0;
    CtrlP_Tray_Poli_ROS_B.t = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 2;
    CtrlP_Tray_Poli_ROS_B.tempR_p[3] = -vB->data[CtrlP_Tray_Poli_ROS_B.t];
    CtrlP_Tray_Poli_ROS_B.u = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 1;
    CtrlP_Tray_Poli_ROS_B.tempR_p[6] = vB->data[CtrlP_Tray_Poli_ROS_B.u];
    CtrlP_Tray_Poli_ROS_B.tempR_p[1] = vB->data[CtrlP_Tray_Poli_ROS_B.t];
    CtrlP_Tray_Poli_ROS_B.tempR_p[4] = 0.0;
    CtrlP_Tray_Poli_ROS_B.tempR_p[7] = -vB->data[6 *
      CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
    CtrlP_Tray_Poli_ROS_B.tempR_p[2] = -vB->data[CtrlP_Tray_Poli_ROS_B.u];
    CtrlP_Tray_Poli_ROS_B.tempR_p[5] = vB->data[6 *
      CtrlP_Tray_Poli_ROS_B.unnamed_idx_1];
    CtrlP_Tray_Poli_ROS_B.tempR_p[8] = 0.0;
    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u] =
        CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u];
      CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 1] =
        CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
      CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 2] =
        CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
    }

    CtrlP_Tray_Poli_ROS_B.tempR[18] = 0.0;
    CtrlP_Tray_Poli_ROS_B.t = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 5;
    CtrlP_Tray_Poli_ROS_B.tempR[24] = -vB->data[CtrlP_Tray_Poli_ROS_B.t];
    CtrlP_Tray_Poli_ROS_B.u = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 4;
    CtrlP_Tray_Poli_ROS_B.tempR[30] = vB->data[CtrlP_Tray_Poli_ROS_B.u];
    CtrlP_Tray_Poli_ROS_B.tempR[19] = vB->data[CtrlP_Tray_Poli_ROS_B.t];
    CtrlP_Tray_Poli_ROS_B.tempR[25] = 0.0;
    CtrlP_Tray_Poli_ROS_B.t = 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + 3;
    CtrlP_Tray_Poli_ROS_B.tempR[31] = -vB->data[CtrlP_Tray_Poli_ROS_B.t];
    CtrlP_Tray_Poli_ROS_B.tempR[20] = -vB->data[CtrlP_Tray_Poli_ROS_B.u];
    CtrlP_Tray_Poli_ROS_B.tempR[26] = vB->data[CtrlP_Tray_Poli_ROS_B.t];
    CtrlP_Tray_Poli_ROS_B.tempR[32] = 0.0;
    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 3;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 3] = 0.0;
      CtrlP_Tray_Poli_ROS_B.t = 6 * (CtrlP_Tray_Poli_ROS_B.u + 3);
      CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 3] =
        CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u];
      CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 4] = 0.0;
      CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 4] =
        CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 1];
      CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.u + 5] = 0.0;
      CtrlP_Tray_Poli_ROS_B.tempR[CtrlP_Tray_Poli_ROS_B.t + 5] =
        CtrlP_Tray_Poli_ROS_B.tempR_p[3 * CtrlP_Tray_Poli_ROS_B.u + 2];
    }

    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.X[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
           CtrlP_Tray_Poli_ROS_B.b_k_f++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_0 = CtrlP_Tray_Poli_ROS_B.b_I[6 *
          CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u] * vB->data[6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + CtrlP_Tray_Poli_ROS_B.b_k_f] +
          CtrlP_Tray_Poli_ROS_B.X[CtrlP_Tray_Poli_ROS_B.u];
        CtrlP_Tray_Poli_ROS_B.X[CtrlP_Tray_Poli_ROS_B.u] =
          CtrlP_Tray_Poli_ROS_B.a_idx_0;
      }
    }

    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.b_I_m[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
           CtrlP_Tray_Poli_ROS_B.b_k_f++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_0 = CtrlP_Tray_Poli_ROS_B.b_I[6 *
          CtrlP_Tray_Poli_ROS_B.b_k_f + CtrlP_Tray_Poli_ROS_B.u] * aB->data[6 *
          CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 + CtrlP_Tray_Poli_ROS_B.b_k_f] +
          CtrlP_Tray_Poli_ROS_B.b_I_m[CtrlP_Tray_Poli_ROS_B.u];
        CtrlP_Tray_Poli_ROS_B.b_I_m[CtrlP_Tray_Poli_ROS_B.u] =
          CtrlP_Tray_Poli_ROS_B.a_idx_0;
      }
    }

    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
           CtrlP_Tray_Poli_ROS_B.b_k_f++) {
        CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u] +=
          CtrlP_Tray_Poli_ROS_B.tempR[6 * CtrlP_Tray_Poli_ROS_B.b_k_f +
          CtrlP_Tray_Poli_ROS_B.u] *
          CtrlP_Tray_Poli_ROS_B.X[CtrlP_Tray_Poli_ROS_B.b_k_f];
      }
    }

    for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
         CtrlP_Tray_Poli_ROS_B.u++) {
      CtrlP_Tray_Poli_ROS_B.a_idx_1 = 0.0;
      for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
           CtrlP_Tray_Poli_ROS_B.b_k_f++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_1 += Xtree->
          data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1].f1[6 *
          CtrlP_Tray_Poli_ROS_B.u + CtrlP_Tray_Poli_ROS_B.b_k_f] * 0.0;
      }

      f->data[CtrlP_Tray_Poli_ROS_B.u + 6 * CtrlP_Tray_Poli_ROS_B.unnamed_idx_1]
        = (CtrlP_Tray_Poli_ROS_B.b_I_m[CtrlP_Tray_Poli_ROS_B.u] +
           CtrlP_Tray_Poli_ROS_B.y[CtrlP_Tray_Poli_ROS_B.u]) -
        CtrlP_Tray_Poli_ROS_B.a_idx_1;
    }
  }

  CtrlP_Tray_Poli__emxFree_char_T(&switch_expression);
  CtrlP_Tray_Poli__emxFree_real_T(&aB);
  CtrlP_Tray_Poli__emxFree_real_T(&vB);
  CtrlP_Tray_Poli__emxFree_real_T(&vJ);
  CtrlP_Tray__emxFree_e_cell_wrap(&Xtree);
  CtrlP_Tray_Poli_ROS_B.c_tmp = static_cast<int32_T>(((-1.0 -
    CtrlP_Tray_Poli_ROS_B.nb) + 1.0) / -1.0) - 1;
  CtrlP_Tray_Poli__emxInit_real_T(&taui, 1);
  CtrlP_Tray_Poli__emxInit_real_T(&a, 2);
  for (CtrlP_Tray_Poli_ROS_B.t = 0; CtrlP_Tray_Poli_ROS_B.t <=
       CtrlP_Tray_Poli_ROS_B.c_tmp; CtrlP_Tray_Poli_ROS_B.t++) {
    CtrlP_Tray_Poli_ROS_B.a_idx_0 = CtrlP_Tray_Poli_ROS_B.nb +
      -static_cast<real_T>(CtrlP_Tray_Poli_ROS_B.t);
    CtrlP_Tray_Poli_ROS_B.inner = static_cast<int32_T>
      (CtrlP_Tray_Poli_ROS_B.a_idx_0);
    CtrlP_Tray_Poli_ROS_B.j = CtrlP_Tray_Poli_ROS_B.inner - 1;
    obj_0 = robot->Bodies[CtrlP_Tray_Poli_ROS_B.j];
    if (!CtrlP_Tray_Poli_ROS_strcmp(obj_0->JointInternal.Type)) {
      obj_0 = robot->Bodies[CtrlP_Tray_Poli_ROS_B.j];
      CtrlP_Tray_Poli_ROS_B.u = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
      CtrlP__emxEnsureCapacity_real_T(S, CtrlP_Tray_Poli_ROS_B.u);
      CtrlP_Tray_Poli_ROS_B.aoffset = obj_0->JointInternal.MotionSubspace->size
        [0] * obj_0->JointInternal.MotionSubspace->size[1] - 1;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <=
           CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.u++) {
        S->data[CtrlP_Tray_Poli_ROS_B.u] = obj_0->
          JointInternal.MotionSubspace->data[CtrlP_Tray_Poli_ROS_B.u];
      }

      CtrlP_Tray_Poli_ROS_B.u = a->size[0] * a->size[1];
      a->size[0] = S->size[1];
      a->size[1] = 6;
      CtrlP__emxEnsureCapacity_real_T(a, CtrlP_Tray_Poli_ROS_B.u);
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.aoffset = S->size[1];
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f <
             CtrlP_Tray_Poli_ROS_B.aoffset; CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          a->data[CtrlP_Tray_Poli_ROS_B.b_k_f + a->size[0] *
            CtrlP_Tray_Poli_ROS_B.u] = S->data[6 * CtrlP_Tray_Poli_ROS_B.b_k_f +
            CtrlP_Tray_Poli_ROS_B.u];
        }
      }

      CtrlP_Tray_Poli_ROS_B.m = a->size[0] - 1;
      CtrlP_Tray_Poli_ROS_B.u = taui->size[0];
      taui->size[0] = a->size[0];
      CtrlP__emxEnsureCapacity_real_T(taui, CtrlP_Tray_Poli_ROS_B.u);
      for (CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 = 0;
           CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 <= CtrlP_Tray_Poli_ROS_B.m;
           CtrlP_Tray_Poli_ROS_B.unnamed_idx_1++) {
        taui->data[CtrlP_Tray_Poli_ROS_B.unnamed_idx_1] = 0.0;
      }

      for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
           CtrlP_Tray_Poli_ROS_B.b_k_f++) {
        CtrlP_Tray_Poli_ROS_B.aoffset = (CtrlP_Tray_Poli_ROS_B.m + 1) *
          CtrlP_Tray_Poli_ROS_B.b_k_f - 1;
        for (CtrlP_Tray_Poli_ROS_B.c_i = 0; CtrlP_Tray_Poli_ROS_B.c_i <=
             CtrlP_Tray_Poli_ROS_B.m; CtrlP_Tray_Poli_ROS_B.c_i++) {
          taui->data[CtrlP_Tray_Poli_ROS_B.c_i] += f->data[(static_cast<int32_T>
            (CtrlP_Tray_Poli_ROS_B.a_idx_0) - 1) * 6 +
            CtrlP_Tray_Poli_ROS_B.b_k_f] * a->data
            [(CtrlP_Tray_Poli_ROS_B.aoffset + CtrlP_Tray_Poli_ROS_B.c_i) + 1];
        }
      }

      CtrlP_Tray_Poli_ROS_B.b_idx_0 = robot->
        VelocityDoFMap[CtrlP_Tray_Poli_ROS_B.inner - 1];
      CtrlP_Tray_Poli_ROS_B.b_idx_1 = robot->
        VelocityDoFMap[CtrlP_Tray_Poli_ROS_B.inner + 1];
      if (CtrlP_Tray_Poli_ROS_B.b_idx_0 > CtrlP_Tray_Poli_ROS_B.b_idx_1) {
        CtrlP_Tray_Poli_ROS_B.m = 0;
        CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 = 0;
      } else {
        CtrlP_Tray_Poli_ROS_B.m = static_cast<int32_T>
          (CtrlP_Tray_Poli_ROS_B.b_idx_0) - 1;
        CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 = static_cast<int32_T>
          (CtrlP_Tray_Poli_ROS_B.b_idx_1);
      }

      CtrlP_Tray_Poli_ROS_B.unnamed_idx_1 -= CtrlP_Tray_Poli_ROS_B.m;
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u <
           CtrlP_Tray_Poli_ROS_B.unnamed_idx_1; CtrlP_Tray_Poli_ROS_B.u++) {
        jointTorq[CtrlP_Tray_Poli_ROS_B.m + CtrlP_Tray_Poli_ROS_B.u] =
          taui->data[CtrlP_Tray_Poli_ROS_B.u];
      }
    }

    CtrlP_Tray_Poli_ROS_B.a_idx_0 = robot->Bodies[CtrlP_Tray_Poli_ROS_B.j]
      ->ParentIndex;
    if (CtrlP_Tray_Poli_ROS_B.a_idx_0 > 0.0) {
      CtrlP_Tray_Poli_ROS_B.m = static_cast<int32_T>
        (CtrlP_Tray_Poli_ROS_B.a_idx_0);
      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        CtrlP_Tray_Poli_ROS_B.a_idx_1 = 0.0;
        for (CtrlP_Tray_Poli_ROS_B.b_k_f = 0; CtrlP_Tray_Poli_ROS_B.b_k_f < 6;
             CtrlP_Tray_Poli_ROS_B.b_k_f++) {
          CtrlP_Tray_Poli_ROS_B.a_idx_1 += f->data[(CtrlP_Tray_Poli_ROS_B.inner
            - 1) * 6 + CtrlP_Tray_Poli_ROS_B.b_k_f] * X->
            data[CtrlP_Tray_Poli_ROS_B.j].f1[6 * CtrlP_Tray_Poli_ROS_B.u +
            CtrlP_Tray_Poli_ROS_B.b_k_f];
        }

        CtrlP_Tray_Poli_ROS_B.a0[CtrlP_Tray_Poli_ROS_B.u] = f->data
          [(CtrlP_Tray_Poli_ROS_B.m - 1) * 6 + CtrlP_Tray_Poli_ROS_B.u] +
          CtrlP_Tray_Poli_ROS_B.a_idx_1;
      }

      for (CtrlP_Tray_Poli_ROS_B.u = 0; CtrlP_Tray_Poli_ROS_B.u < 6;
           CtrlP_Tray_Poli_ROS_B.u++) {
        f->data[CtrlP_Tray_Poli_ROS_B.u + 6 * (CtrlP_Tray_Poli_ROS_B.m - 1)] =
          CtrlP_Tray_Poli_ROS_B.a0[CtrlP_Tray_Poli_ROS_B.u];
      }
    }
  }

  CtrlP_Tray_Poli__emxFree_real_T(&a);
  CtrlP_Tray_Poli__emxFree_real_T(&taui);
  CtrlP_Tray_Poli__emxFree_real_T(&S);
  CtrlP_Tray_Poli__emxFree_real_T(&f);
  CtrlP_Tray__emxFree_e_cell_wrap(&X);
}

static void matlabCodegenHandle_matlabCod_m(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void Ct_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_CtrlP_Tray_Pol_T
  *pStruct)
{
  CtrlP_Tray_Poli__emxFree_char_T(&pStruct->Type);
  CtrlP_Tray_Poli__emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct)
{
  Ct_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_f_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_h_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_g_robotics_manip_(g_robotics_manip_internal_Rig_T
  *pStruct)
{
  Ct_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void Ct_emxInitStruct_rigidBodyJoint(rigidBodyJoint_CtrlP_Tray_Pol_T
  *pStruct)
{
  CtrlP_Tray_Poli__emxInit_char_T(&pStruct->Type, 2);
  CtrlP_Tray_Poli__emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct)
{
  Ct_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_f_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_h_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_g_robotics_manip_(g_robotics_manip_internal_Rig_T
  *pStruct)
{
  Ct_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static g_robotics_manip_internal_Rig_T *CtrlP_Tray__RigidBody_RigidBody
  (g_robotics_manip_internal_Rig_T *obj)
{
  g_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_CtrlP_Tray_Po_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.625, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.625,
    0.0, -0.25, 0.0, -0.0, 0.0, 0.0, 0.5, -0.0, 0.0, 0.0, 0.0, -0.25, -0.0, 0.5,
    0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.5 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, -0.05, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 0.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  CtrlP__emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  CtrlP_Tray_Poli__emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  CtrlP__emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  CtrlP_Tray_Poli__emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  CtrlP__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  CtrlP__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static g_robotics_manip_internal_Rig_T *CtrlP_Tra_RigidBody_RigidBody_m
  (g_robotics_manip_internal_Rig_T *obj)
{
  g_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_CtrlP_Tray_Po_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.625, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.625,
    0.0, -0.25, 0.0, -0.0, 0.0, 0.0, 0.5, -0.0, 0.0, 0.0, 0.0, -0.25, -0.0, 0.5,
    0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.5 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 1.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  CtrlP__emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  CtrlP_Tray_Poli__emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  CtrlP__emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  CtrlP_Tray_Poli__emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  CtrlP__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  CtrlP__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static f_robotics_manip_internal_Rig_T *CtrlP_Tr_RigidBody_RigidBody_mm
  (f_robotics_manip_internal_Rig_T *obj)
{
  f_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_CtrlP_Tray_Po_T *switch_expression;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  b_obj = obj;
  CtrlP_Tray_Poli_ROS_B.b_kstr_o = obj->JointInternal.Type->size[0] *
    obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  CtrlP__emxEnsureCapacity_char_T(obj->JointInternal.Type,
    CtrlP_Tray_Poli_ROS_B.b_kstr_o);
  for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 5;
       CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
    obj->JointInternal.Type->data[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
      tmp[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
  }

  CtrlP_Tray_Poli__emxInit_char_T(&switch_expression, 2);
  CtrlP_Tray_Poli_ROS_B.b_kstr_o = switch_expression->size[0] *
    switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  CtrlP__emxEnsureCapacity_char_T(switch_expression,
    CtrlP_Tray_Poli_ROS_B.b_kstr_o);
  CtrlP_Tray_Poli_ROS_B.loop_ub_n = obj->JointInternal.Type->size[0] *
    obj->JointInternal.Type->size[1] - 1;
  for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o <=
       CtrlP_Tray_Poli_ROS_B.loop_ub_n; CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
    switch_expression->data[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
      obj->JointInternal.Type->data[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
  }

  for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 8;
       CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
    CtrlP_Tray_Poli_ROS_B.b_dy[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
      tmp_0[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    CtrlP_Tray_Poli_ROS_B.b_kstr_o = 1;
    do {
      exitg1 = 0;
      if (CtrlP_Tray_Poli_ROS_B.b_kstr_o - 1 < 8) {
        CtrlP_Tray_Poli_ROS_B.loop_ub_n = CtrlP_Tray_Poli_ROS_B.b_kstr_o - 1;
        if (switch_expression->data[CtrlP_Tray_Poli_ROS_B.loop_ub_n] !=
            CtrlP_Tray_Poli_ROS_B.b_dy[CtrlP_Tray_Poli_ROS_B.loop_ub_n]) {
          exitg1 = 1;
        } else {
          CtrlP_Tray_Poli_ROS_B.b_kstr_o++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0;
  } else {
    for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 9;
         CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
      CtrlP_Tray_Poli_ROS_B.b_d[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
        tmp_1[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      CtrlP_Tray_Poli_ROS_B.b_kstr_o = 1;
      do {
        exitg1 = 0;
        if (CtrlP_Tray_Poli_ROS_B.b_kstr_o - 1 < 9) {
          CtrlP_Tray_Poli_ROS_B.loop_ub_n = CtrlP_Tray_Poli_ROS_B.b_kstr_o - 1;
          if (switch_expression->data[CtrlP_Tray_Poli_ROS_B.loop_ub_n] !=
              CtrlP_Tray_Poli_ROS_B.b_d[CtrlP_Tray_Poli_ROS_B.loop_ub_n]) {
            exitg1 = 1;
          } else {
            CtrlP_Tray_Poli_ROS_B.b_kstr_o++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      CtrlP_Tray_Poli_ROS_B.b_kstr_o = 1;
    } else {
      CtrlP_Tray_Poli_ROS_B.b_kstr_o = -1;
    }
  }

  CtrlP_Tray_Poli__emxFree_char_T(&switch_expression);
  switch (CtrlP_Tray_Poli_ROS_B.b_kstr_o) {
   case 0:
    CtrlP_Tray_Poli_ROS_B.iv2[0] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[1] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[2] = 1;
    CtrlP_Tray_Poli_ROS_B.iv2[3] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[4] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[5] = 0;
    for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 6;
         CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
      CtrlP_Tray_Poli_ROS_B.msubspace_data[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
        CtrlP_Tray_Poli_ROS_B.iv2[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    CtrlP_Tray_Poli_ROS_B.iv2[0] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[1] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[2] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[3] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[4] = 0;
    CtrlP_Tray_Poli_ROS_B.iv2[5] = 1;
    for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 6;
         CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
      CtrlP_Tray_Poli_ROS_B.msubspace_data[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
        CtrlP_Tray_Poli_ROS_B.iv2[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 6;
         CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
      CtrlP_Tray_Poli_ROS_B.msubspace_data[CtrlP_Tray_Poli_ROS_B.b_kstr_o] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  CtrlP_Tray_Poli_ROS_B.b_kstr_o = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  CtrlP__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace,
    CtrlP_Tray_Poli_ROS_B.b_kstr_o);
  for (CtrlP_Tray_Poli_ROS_B.b_kstr_o = 0; CtrlP_Tray_Poli_ROS_B.b_kstr_o < 6;
       CtrlP_Tray_Poli_ROS_B.b_kstr_o++) {
    obj->JointInternal.MotionSubspace->data[CtrlP_Tray_Poli_ROS_B.b_kstr_o] =
      CtrlP_Tray_Poli_ROS_B.msubspace_data[CtrlP_Tray_Poli_ROS_B.b_kstr_o];
  }

  return b_obj;
}

static h_robotics_manip_internal_Rig_T *Ctr_RigidBodyTree_RigidBodyTree
  (h_robotics_manip_internal_Rig_T *obj, g_robotics_manip_internal_Rig_T *iobj_0,
   g_robotics_manip_internal_Rig_T *iobj_1)
{
  h_robotics_manip_internal_Rig_T *b_obj;
  b_obj = obj;
  obj->Bodies[0] = CtrlP_Tray__RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = CtrlP_Tra_RigidBody_RigidBody_m(iobj_1);
  obj->Bodies[1]->Index = 2.0;
  obj->NumBodies = 2.0;
  obj->Gravity[0] = 0.0;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = -9.80665;
  obj->PositionDoFMap[0] = 1.0;
  obj->PositionDoFMap[1] = 2.0;
  obj->PositionDoFMap[2] = 1.0;
  obj->PositionDoFMap[3] = 2.0;
  obj->VelocityDoFMap[0] = 1.0;
  obj->VelocityDoFMap[1] = 2.0;
  obj->VelocityDoFMap[2] = 1.0;
  obj->VelocityDoFMap[3] = 2.0;
  CtrlP_Tr_RigidBody_RigidBody_mm(&obj->Base);
  return b_obj;
}

// Model step function
void CtrlP_Tray_Poli_ROS_step(void)
{
  if (rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&CtrlP_Tray_Poli_ROS_M->solverInfo,
                          ((CtrlP_Tray_Poli_ROS_M->Timing.clockTick0+1)*
      CtrlP_Tray_Poli_ROS_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(CtrlP_Tray_Poli_ROS_M)) {
    CtrlP_Tray_Poli_ROS_M->Timing.t[0] = rtsiGetT
      (&CtrlP_Tray_Poli_ROS_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    boolean_T exitg1;

    // SimscapeExecutionBlock: '<S20>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S20>/OUTPUT_1_0'

    simulationData = (NeslSimulationData *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData;
    CtrlP_Tray_Poli_ROS_B.time_tmp = CtrlP_Tray_Poli_ROS_M->Timing.t[0];
    CtrlP_Tray_Poli_ROS_B.time = CtrlP_Tray_Poli_ROS_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &CtrlP_Tray_Poli_ROS_B.time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX =
      &CtrlP_Tray_Poli_ROS_X.CtrlP_Tray_Poli_ROSDinamicajoin[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &CtrlP_Tray_Poli_ROS_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &CtrlP_Tray_Poli_ROS_DW.STATE_1_Modes;
    CtrlP_Tray_Poli_ROS_B.b_ja = false;
    simulationData->mData->mFoundZcEvents = CtrlP_Tray_Poli_ROS_B.b_ja;
    CtrlP_Tray_Poli_ROS_B.b_ja = rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M);
    simulationData->mData->mIsMajorTimeStep = CtrlP_Tray_Poli_ROS_B.b_ja;
    CtrlP_Tray_Poli_ROS_B.b_varargout_1 = false;
    simulationData->mData->mIsSolverAssertCheck =
      CtrlP_Tray_Poli_ROS_B.b_varargout_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    CtrlP_Tray_Poli_ROS_B.b_varargout_1 = rtsiIsSolverComputingJacobian
      (&CtrlP_Tray_Poli_ROS_M->solverInfo);
    simulationData->mData->mIsComputingJacobian =
      CtrlP_Tray_Poli_ROS_B.b_varargout_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    CtrlP_Tray_Poli_ROS_B.iv1[0] = 0;
    CtrlP_Tray_Poli_ROS_B.dv4[0] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[0];
    CtrlP_Tray_Poli_ROS_B.dv4[1] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[1];
    CtrlP_Tray_Poli_ROS_B.dv4[2] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[2];
    CtrlP_Tray_Poli_ROS_B.dv4[3] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[3];
    CtrlP_Tray_Poli_ROS_B.iv1[1] = 4;
    CtrlP_Tray_Poli_ROS_B.dv4[4] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[0];
    CtrlP_Tray_Poli_ROS_B.dv4[5] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[1];
    CtrlP_Tray_Poli_ROS_B.dv4[6] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[2];
    CtrlP_Tray_Poli_ROS_B.dv4[7] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[3];
    CtrlP_Tray_Poli_ROS_B.iv1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &CtrlP_Tray_Poli_ROS_B.dv4[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &CtrlP_Tray_Poli_ROS_B.iv1[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &CtrlP_Tray_Poli_ROS_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    CtrlP_Tray_Poli_ROS_B.b_k = ne_simulator_method((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (CtrlP_Tray_Poli_ROS_B.b_k != 0) {
      CtrlP_Tray_Poli_ROS_B.b_varargout_1 = error_buffer_is_empty
        (rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
      if (CtrlP_Tray_Poli_ROS_B.b_varargout_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    // End of SimscapeExecutionBlock: '<S20>/STATE_1'
    if (rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M)) {
      // Outputs for Atomic SubSystem: '<Root>/Subs_Pos'
      // MATLABSystem: '<S6>/SourceBlock' incorporates:
      //   Inport: '<S21>/In1'

      CtrlP_Tray_Po_SystemCore_step_m(&CtrlP_Tray_Poli_ROS_B.b_varargout_1,
        CtrlP_Tray_Poli_ROS_B.PAR,
        &CtrlP_Tray_Poli_ROS_B.b_varargout_2_Data_SL_Info_Curr,
        &CtrlP_Tray_Poli_ROS_B.b_varargout_2_Data_SL_Info_Rece,
        &CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_DataOffset,
        CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_Dim,
        &CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_Dim_SL_Inf,
        &CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_Dim_SL_I_m);

      // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S21>/Enable'

      if (CtrlP_Tray_Poli_ROS_B.b_varargout_1) {
        CtrlP_Tray_Poli_ROS_B.In1.Data[0] = CtrlP_Tray_Poli_ROS_B.PAR[0];
        CtrlP_Tray_Poli_ROS_B.In1.Data[1] = CtrlP_Tray_Poli_ROS_B.PAR[1];
        CtrlP_Tray_Poli_ROS_B.In1.Data_SL_Info.CurrentLength =
          CtrlP_Tray_Poli_ROS_B.b_varargout_2_Data_SL_Info_Curr;
        CtrlP_Tray_Poli_ROS_B.In1.Data_SL_Info.ReceivedLength =
          CtrlP_Tray_Poli_ROS_B.b_varargout_2_Data_SL_Info_Rece;
        CtrlP_Tray_Poli_ROS_B.In1.Layout.DataOffset =
          CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_DataOffset;
        memcpy(&CtrlP_Tray_Poli_ROS_B.In1.Layout.Dim[0],
               &CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_Dim[0], sizeof
               (SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension) << 4U);
        CtrlP_Tray_Poli_ROS_B.In1.Layout.Dim_SL_Info.CurrentLength =
          CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_Dim_SL_Inf;
        CtrlP_Tray_Poli_ROS_B.In1.Layout.Dim_SL_Info.ReceivedLength =
          CtrlP_Tray_Poli_ROS_B.b_varargout_2_Layout_Dim_SL_I_m;
      }

      // End of MATLABSystem: '<S6>/SourceBlock'
      // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subs_Pos'
    }

    // MATLABSystem: '<Root>/Polynomial Trajectory' incorporates:
    //   Clock: '<Root>/Clock'

    CtrlP_Tray_Poli_ROS_B.b_varargout_1 = false;
    CtrlP_Tray_Poli_ROS_B.p = true;
    CtrlP_Tray_Poli_ROS_B.b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (CtrlP_Tray_Poli_ROS_B.b_k < 12)) {
      if (!(CtrlP_Tray_Poli_ROS_DW.obj_h.Waypoints[CtrlP_Tray_Poli_ROS_B.b_k] ==
            CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_Waypoints[CtrlP_Tray_Poli_ROS_B.b_k]))
      {
        CtrlP_Tray_Poli_ROS_B.p = false;
        exitg1 = true;
      } else {
        CtrlP_Tray_Poli_ROS_B.b_k++;
      }
    }

    if (CtrlP_Tray_Poli_ROS_B.p) {
      CtrlP_Tray_Poli_ROS_B.b_varargout_1 = true;
    }

    if (!CtrlP_Tray_Poli_ROS_B.b_varargout_1) {
      if (CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized == 1) {
        CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = true;
      }

      memcpy(&CtrlP_Tray_Poli_ROS_DW.obj_h.Waypoints[0],
             &CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_Waypoints[0], 12U *
             sizeof(real_T));
    }

    CtrlP_Tray_Poli_ROS_B.b_varargout_1 = false;
    CtrlP_Tray_Poli_ROS_B.p = true;
    CtrlP_Tray_Poli_ROS_B.b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (CtrlP_Tray_Poli_ROS_B.b_k < 6)) {
      if (!(CtrlP_Tray_Poli_ROS_DW.obj_h.TimePoints[CtrlP_Tray_Poli_ROS_B.b_k] ==
            CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_TimePoints[CtrlP_Tray_Poli_ROS_B.b_k]))
      {
        CtrlP_Tray_Poli_ROS_B.p = false;
        exitg1 = true;
      } else {
        CtrlP_Tray_Poli_ROS_B.b_k++;
      }
    }

    if (CtrlP_Tray_Poli_ROS_B.p) {
      CtrlP_Tray_Poli_ROS_B.b_varargout_1 = true;
    }

    if (!CtrlP_Tray_Poli_ROS_B.b_varargout_1) {
      if (CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized == 1) {
        CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = true;
      }

      for (CtrlP_Tray_Poli_ROS_B.b_k = 0; CtrlP_Tray_Poli_ROS_B.b_k < 6;
           CtrlP_Tray_Poli_ROS_B.b_k++) {
        CtrlP_Tray_Poli_ROS_DW.obj_h.TimePoints[CtrlP_Tray_Poli_ROS_B.b_k] =
          CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_TimePoints[CtrlP_Tray_Poli_ROS_B.b_k];
      }
    }

    CtrlP_Tray_Poli_ROS_B.b_varargout_1 = false;
    CtrlP_Tray_Poli_ROS_B.p = true;
    CtrlP_Tray_Poli_ROS_B.b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (CtrlP_Tray_Poli_ROS_B.b_k < 12)) {
      if (!(CtrlP_Tray_Poli_ROS_DW.obj_h.VelocityBoundaryCondition[CtrlP_Tray_Poli_ROS_B.b_k]
            ==
            CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_VelocityBo[CtrlP_Tray_Poli_ROS_B.b_k]))
      {
        CtrlP_Tray_Poli_ROS_B.p = false;
        exitg1 = true;
      } else {
        CtrlP_Tray_Poli_ROS_B.b_k++;
      }
    }

    if (CtrlP_Tray_Poli_ROS_B.p) {
      CtrlP_Tray_Poli_ROS_B.b_varargout_1 = true;
    }

    if (!CtrlP_Tray_Poli_ROS_B.b_varargout_1) {
      if (CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized == 1) {
        CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = true;
      }

      memcpy(&CtrlP_Tray_Poli_ROS_DW.obj_h.VelocityBoundaryCondition[0],
             &CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_VelocityBo[0], 12U *
             sizeof(real_T));
    }

    CtrlP_Tray_Poli_SystemCore_step(&CtrlP_Tray_Poli_ROS_DW.obj_h,
      CtrlP_Tray_Poli_ROS_M->Timing.t[0], CtrlP_Tray_Poli_ROS_B.PAR,
      CtrlP_Tray_Poli_ROS_B.E, CtrlP_Tray_Poli_ROS_B.b_varargout_3);

    // MATLAB Function: '<S2>/Control PD+G' incorporates:
    //   MATLABSystem: '<Root>/Polynomial Trajectory'

    CtrlP_Tray_Poli_ROS_B.PAR[0] = (CtrlP_Tray_Poli_ROS_B.In1.Data[0] -
      CtrlP_Tray_Poli_ROS_B.PAR[0]) * -60.0;
    CtrlP_Tray_Poli_ROS_B.E_o = CtrlP_Tray_Poli_ROS_B.In1.Data[1] -
      CtrlP_Tray_Poli_ROS_B.PAR[1];

    // SimscapeExecutionBlock: '<S20>/OUTPUT_1_0'
    simulationData = (NeslSimulationData *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_SimData;
    CtrlP_Tray_Poli_ROS_B.time_l = CtrlP_Tray_Poli_ROS_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &CtrlP_Tray_Poli_ROS_B.time_l;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Modes;
    CtrlP_Tray_Poli_ROS_B.b_varargout_1 = false;
    simulationData->mData->mFoundZcEvents = CtrlP_Tray_Poli_ROS_B.b_varargout_1;
    simulationData->mData->mIsMajorTimeStep = CtrlP_Tray_Poli_ROS_B.b_ja;
    CtrlP_Tray_Poli_ROS_B.b_ja = false;
    simulationData->mData->mIsSolverAssertCheck = CtrlP_Tray_Poli_ROS_B.b_ja;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    CtrlP_Tray_Poli_ROS_B.iv[0] = 0;
    CtrlP_Tray_Poli_ROS_B.dv[0] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[0];
    CtrlP_Tray_Poli_ROS_B.dv[1] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[1];
    CtrlP_Tray_Poli_ROS_B.dv[2] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[2];
    CtrlP_Tray_Poli_ROS_B.dv[3] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[3];
    CtrlP_Tray_Poli_ROS_B.iv[1] = 4;
    CtrlP_Tray_Poli_ROS_B.dv[4] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[0];
    CtrlP_Tray_Poli_ROS_B.dv[5] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[1];
    CtrlP_Tray_Poli_ROS_B.dv[6] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[2];
    CtrlP_Tray_Poli_ROS_B.dv[7] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[3];
    CtrlP_Tray_Poli_ROS_B.iv[2] = 8;
    CtrlP_Tray_Poli_ROS_B.dv[8] = CtrlP_Tray_Poli_ROS_B.STATE_1[0];
    CtrlP_Tray_Poli_ROS_B.dv[9] = CtrlP_Tray_Poli_ROS_B.STATE_1[1];
    CtrlP_Tray_Poli_ROS_B.dv[10] = CtrlP_Tray_Poli_ROS_B.STATE_1[2];
    CtrlP_Tray_Poli_ROS_B.dv[11] = CtrlP_Tray_Poli_ROS_B.STATE_1[3];
    CtrlP_Tray_Poli_ROS_B.iv[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &CtrlP_Tray_Poli_ROS_B.dv[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &CtrlP_Tray_Poli_ROS_B.iv[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &CtrlP_Tray_Poli_ROS_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    CtrlP_Tray_Poli_ROS_B.b_k = ne_simulator_method((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (CtrlP_Tray_Poli_ROS_B.b_k != 0) {
      CtrlP_Tray_Poli_ROS_B.b_ja = error_buffer_is_empty(rtmGetErrorStatus
        (CtrlP_Tray_Poli_ROS_M));
      if (CtrlP_Tray_Poli_ROS_B.b_ja) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    // SignalConversion generated from: '<S4>/MATLAB System'
    CtrlP_Tray_Poli_ROS_B.E[0] = CtrlP_Tray_Poli_ROS_B.OUTPUT_1_0[0];
    CtrlP_Tray_Poli_ROS_B.E[1] = CtrlP_Tray_Poli_ROS_B.OUTPUT_1_0[2];

    // MATLABSystem: '<S4>/MATLAB System'
    Ctr_GravityTorqueBlock_stepImpl(&CtrlP_Tray_Poli_ROS_DW.obj,
      CtrlP_Tray_Poli_ROS_B.E, CtrlP_Tray_Poli_ROS_B.b_varargout_3);

    // Sum: '<Root>/Sum' incorporates:
    //   MATLAB Function: '<S2>/Control PD+G'
    //   MATLABSystem: '<S4>/MATLAB System'

    CtrlP_Tray_Poli_ROS_B.PAR[0] += CtrlP_Tray_Poli_ROS_B.b_varargout_3[0];
    CtrlP_Tray_Poli_ROS_B.time_tmp = -30.0 * CtrlP_Tray_Poli_ROS_B.E_o +
      CtrlP_Tray_Poli_ROS_B.b_varargout_3[1];

    // SimscapeInputBlock: '<S20>/INPUT_1_1_1'
    CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[0] = CtrlP_Tray_Poli_ROS_B.PAR[0];
    CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[1] = 0.0;
    CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[2] = 0.0;
    CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[3] = 0.0;

    // SimscapeInputBlock: '<S20>/INPUT_2_1_1'
    CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[0] = CtrlP_Tray_Poli_ROS_B.time_tmp;
    CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[1] = 0.0;
    CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[2] = 0.0;
    CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[3] = 0.0;
    if (rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M)) {
      // BusAssignment: '<Root>/Bus Assignment2' incorporates:
      //   Constant: '<Root>/Constant1'
      //   Constant: '<S1>/Constant'

      CtrlP_Tray_Poli_ROS_B.BusAssignment2 =
        CtrlP_Tray_Poli_ROS_P.Constant_Value_j;
      CtrlP_Tray_Poli_ROS_B.BusAssignment2.Data[0] = CtrlP_Tray_Poli_ROS_B.PAR[0];
      CtrlP_Tray_Poli_ROS_B.BusAssignment2.Data[1] =
        CtrlP_Tray_Poli_ROS_B.time_tmp;
      CtrlP_Tray_Poli_ROS_B.BusAssignment2.Data_SL_Info.CurrentLength =
        CtrlP_Tray_Poli_ROS_P.Constant1_Value;
      CtrlP_Tray_Poli_ROS_B.BusAssignment2.Data_SL_Info.ReceivedLength =
        CtrlP_Tray_Poli_ROS_P.Constant1_Value;

      // Outputs for Atomic SubSystem: '<Root>/Pub_Torque'
      // MATLABSystem: '<S5>/SinkBlock'
      Pub_CtrlP_Tray_Poli_ROS_182.publish(&CtrlP_Tray_Poli_ROS_B.BusAssignment2);

      // End of Outputs for SubSystem: '<Root>/Pub_Torque'
    }
  }

  if (rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[8];
    int_T tmp_1[3];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;

    // Update for SimscapeExecutionBlock: '<S20>/STATE_1'
    simulationData = (NeslSimulationData *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData;
    time = CtrlP_Tray_Poli_ROS_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX =
      &CtrlP_Tray_Poli_ROS_X.CtrlP_Tray_Poli_ROSDinamicajoin[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &CtrlP_Tray_Poli_ROS_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &CtrlP_Tray_Poli_ROS_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (CtrlP_Tray_Poli_ROS_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&CtrlP_Tray_Poli_ROS_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_1[0] = 0;
    tmp_0[0] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[0];
    tmp_0[1] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[1];
    tmp_0[2] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[2];
    tmp_0[3] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[0];
    tmp_0[5] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[1];
    tmp_0[6] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[2];
    tmp_0[7] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[3];
    tmp_1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    // End of Update for SimscapeExecutionBlock: '<S20>/STATE_1'
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M)) {
    rt_ertODEUpdateContinuousStates(&CtrlP_Tray_Poli_ROS_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++CtrlP_Tray_Poli_ROS_M->Timing.clockTick0;
    CtrlP_Tray_Poli_ROS_M->Timing.t[0] = rtsiGetSolverStopTime
      (&CtrlP_Tray_Poli_ROS_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.002s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.002, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      CtrlP_Tray_Poli_ROS_M->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void CtrlP_Tray_Poli_ROS_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[8];
  int_T tmp_1[3];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  XDot_CtrlP_Tray_Poli_ROS_T *_rtXdot;
  _rtXdot = ((XDot_CtrlP_Tray_Poli_ROS_T *) CtrlP_Tray_Poli_ROS_M->derivs);

  // Derivatives for SimscapeExecutionBlock: '<S20>/STATE_1'
  simulationData = (NeslSimulationData *)CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData;
  time = CtrlP_Tray_Poli_ROS_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX =
    &CtrlP_Tray_Poli_ROS_X.CtrlP_Tray_Poli_ROSDinamicajoin[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &CtrlP_Tray_Poli_ROS_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &CtrlP_Tray_Poli_ROS_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (CtrlP_Tray_Poli_ROS_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&CtrlP_Tray_Poli_ROS_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[0];
  tmp_0[1] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[1];
  tmp_0[2] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[2];
  tmp_0[3] = CtrlP_Tray_Poli_ROS_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[0];
  tmp_0[5] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[1];
  tmp_0[6] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[2];
  tmp_0[7] = CtrlP_Tray_Poli_ROS_B.INPUT_2_1_1[3];
  tmp_1[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 4;
  simulationData->mData->mDx.mX = &_rtXdot->CtrlP_Tray_Poli_ROSDinamicajoin[0];
  diagnosticManager = (NeuDiagnosticManager *)
    CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
    }
  }

  // End of Derivatives for SimscapeExecutionBlock: '<S20>/STATE_1'
}

// Model initialize function
void CtrlP_Tray_Poli_ROS_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
                          &CtrlP_Tray_Poli_ROS_M->Timing.simTimeStep);
    rtsiSetTPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo, &rtmGetTPtr
                (CtrlP_Tray_Poli_ROS_M));
    rtsiSetStepSizePtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
                       &CtrlP_Tray_Poli_ROS_M->Timing.stepSize0);
    rtsiSetdXPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
                 &CtrlP_Tray_Poli_ROS_M->derivs);
    rtsiSetContStatesPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo, (real_T **)
                         &CtrlP_Tray_Poli_ROS_M->contStates);
    rtsiSetNumContStatesPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
      &CtrlP_Tray_Poli_ROS_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
      &CtrlP_Tray_Poli_ROS_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
      &CtrlP_Tray_Poli_ROS_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
      &CtrlP_Tray_Poli_ROS_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo,
                          (&rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M)));
    rtsiSetRTModelPtr(&CtrlP_Tray_Poli_ROS_M->solverInfo, CtrlP_Tray_Poli_ROS_M);
  }

  rtsiSetSimTimeStep(&CtrlP_Tray_Poli_ROS_M->solverInfo, MAJOR_TIME_STEP);
  CtrlP_Tray_Poli_ROS_M->intgData.y = CtrlP_Tray_Poli_ROS_M->odeY;
  CtrlP_Tray_Poli_ROS_M->intgData.f[0] = CtrlP_Tray_Poli_ROS_M->odeF[0];
  CtrlP_Tray_Poli_ROS_M->intgData.f[1] = CtrlP_Tray_Poli_ROS_M->odeF[1];
  CtrlP_Tray_Poli_ROS_M->intgData.f[2] = CtrlP_Tray_Poli_ROS_M->odeF[2];
  CtrlP_Tray_Poli_ROS_M->contStates = ((X_CtrlP_Tray_Poli_ROS_T *)
    &CtrlP_Tray_Poli_ROS_X);
  rtsiSetSolverData(&CtrlP_Tray_Poli_ROS_M->solverInfo, static_cast<void *>
                    (&CtrlP_Tray_Poli_ROS_M->intgData));
  rtsiSetSolverName(&CtrlP_Tray_Poli_ROS_M->solverInfo,"ode3");
  rtmSetTPtr(CtrlP_Tray_Poli_ROS_M, &CtrlP_Tray_Poli_ROS_M->Timing.tArray[0]);
  CtrlP_Tray_Poli_ROS_M->Timing.stepSize0 = 0.002;

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    NeslSimulationData *simulationData;
    boolean_T tmp_1;
    static const char_T tmp_2[7] = { '/', 't', 'o', 'r', 'q', 'u', 'e' };

    // Start for SimscapeExecutionBlock: '<S20>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S20>/OUTPUT_1_0'

    tmp = nesl_lease_simulator(
      "CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration_1", 0, 0);
    CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator);
    if (tmp_0) {
      CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway();
      tmp = nesl_lease_simulator(
        "CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration_1", 0, 0);
      CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mSolverTolerance = 0.001;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mVariableStepSolver = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mFixedStepSize = 0.002;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mStartTime = 0.0;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mLoadInitialState = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mUseSimState = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mLinTrimCompile = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mRTWModifiedTimeStamp = 5.22251032E+8;
    CtrlP_Tray_Poli_ROS_B.d2 = 0.001;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mSolverTolerance =
      CtrlP_Tray_Poli_ROS_B.d2;
    CtrlP_Tray_Poli_ROS_B.d2 = 0.002;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mFixedStepSize =
      CtrlP_Tray_Poli_ROS_B.d2;
    tmp_0 = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    CtrlP_Tray_Poli_ROS_B.i1 = nesl_initialize_simulator((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator,
      &CtrlP_Tray_Poli_ROS_B.modelParameters, diagnosticManager);
    if (CtrlP_Tray_Poli_ROS_B.i1 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    CtrlP_Tray_Poli_ROS_B.expl_temp.mRealParameters.mN = 0;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mRealParameters.mX = NULL;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mLogicalParameters.mN = 0;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mLogicalParameters.mX = NULL;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mIntegerParameters.mN = 0;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mIntegerParameters.mX = NULL;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mIndexParameters.mN = 0;
    CtrlP_Tray_Poli_ROS_B.expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator, CtrlP_Tray_Poli_ROS_B.expl_temp);
    simulationData = (NeslSimulationData *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData;
    CtrlP_Tray_Poli_ROS_B.time_tmp_d = CtrlP_Tray_Poli_ROS_M->Timing.t[0];
    CtrlP_Tray_Poli_ROS_B.time_h = CtrlP_Tray_Poli_ROS_B.time_tmp_d;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &CtrlP_Tray_Poli_ROS_B.time_h;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX =
      &CtrlP_Tray_Poli_ROS_X.CtrlP_Tray_Poli_ROSDinamicajoin[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &CtrlP_Tray_Poli_ROS_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &CtrlP_Tray_Poli_ROS_DW.STATE_1_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_0 = rtmIsMajorTimeStep(CtrlP_Tray_Poli_ROS_M);
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_1 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_1 = rtsiIsSolverComputingJacobian(&CtrlP_Tray_Poli_ROS_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    CtrlP_Tray_Poli_ROS_B.i1 = ne_simulator_method((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (CtrlP_Tray_Poli_ROS_B.i1 != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S20>/STATE_1'

    // Start for Atomic SubSystem: '<Root>/Subs_Pos'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    CtrlP_Tray_Poli_ROS_DW.obj_f.matlabCodegenIsDeleted = true;
    CtrlP_Tray_Poli_ROS_DW.obj_f.isInitialized = 0;
    CtrlP_Tray_Poli_ROS_DW.obj_f.matlabCodegenIsDeleted = false;
    CtrlP_Tray_Poli_ROS_DW.obj_f.isSetupComplete = false;
    CtrlP_Tray_Poli_ROS_DW.obj_f.isInitialized = 1;
    CtrlP_Tray_Poli_ROS_B.cv1[0] = '/';
    CtrlP_Tray_Poli_ROS_B.cv1[1] = 'p';
    CtrlP_Tray_Poli_ROS_B.cv1[2] = 'o';
    CtrlP_Tray_Poli_ROS_B.cv1[3] = 's';
    CtrlP_Tray_Poli_ROS_B.cv1[4] = '\x00';
    Sub_CtrlP_Tray_Poli_ROS_177.createSubscriber(CtrlP_Tray_Poli_ROS_B.cv1, 1);
    CtrlP_Tray_Poli_ROS_DW.obj_f.isSetupComplete = true;

    // End of Start for SubSystem: '<Root>/Subs_Pos'

    // Start for MATLABSystem: '<Root>/Polynomial Trajectory'
    memset(&CtrlP_Tray_Poli_ROS_DW.obj_h.AccelerationBoundaryCondition[0], 0,
           10U * sizeof(real_T));
    CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized = 0;
    if (CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized == 1) {
      CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = true;
    }

    memcpy(&CtrlP_Tray_Poli_ROS_DW.obj_h.Waypoints[0],
           &CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_Waypoints[0], 12U *
           sizeof(real_T));
    if (CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized == 1) {
      CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = true;
    }

    for (CtrlP_Tray_Poli_ROS_B.i1 = 0; CtrlP_Tray_Poli_ROS_B.i1 < 6;
         CtrlP_Tray_Poli_ROS_B.i1++) {
      CtrlP_Tray_Poli_ROS_DW.obj_h.TimePoints[CtrlP_Tray_Poli_ROS_B.i1] =
        CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_TimePoints[CtrlP_Tray_Poli_ROS_B.i1];
    }

    if (CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized == 1) {
      CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = true;
    }

    memcpy(&CtrlP_Tray_Poli_ROS_DW.obj_h.VelocityBoundaryCondition[0],
           &CtrlP_Tray_Poli_ROS_P.PolynomialTrajectory_VelocityBo[0], 12U *
           sizeof(real_T));
    CtrlP_Tray_Poli_ROS_DW.obj_h.isInitialized = 1;
    CtrlP_Tray_Poli_ROS_DW.obj_h.TunablePropsChanged = false;

    // End of Start for MATLABSystem: '<Root>/Polynomial Trajectory'

    // Start for SimscapeExecutionBlock: '<S20>/OUTPUT_1_0'
    tmp = nesl_lease_simulator(
      "CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration_1", 1, 0);
    CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_1 = pointer_is_null(CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Simulator);
    if (tmp_1) {
      CtrlP_Tray_Poli_ROS_99de2b7c_1_gateway();
      tmp = nesl_lease_simulator(
        "CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration_1", 1, 0);
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mSolverType = NE_SOLVER_TYPE_DAE;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mSolverTolerance = 0.001;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mVariableStepSolver = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mFixedStepSize = 0.002;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mStartTime = 0.0;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mLoadInitialState = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mUseSimState = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mLinTrimCompile = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mLoggingMode = SSC_LOGGING_NONE;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mRTWModifiedTimeStamp =
      5.22251032E+8;
    CtrlP_Tray_Poli_ROS_B.d2 = 0.001;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mSolverTolerance =
      CtrlP_Tray_Poli_ROS_B.d2;
    CtrlP_Tray_Poli_ROS_B.d2 = 0.002;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mFixedStepSize =
      CtrlP_Tray_Poli_ROS_B.d2;
    tmp_1 = false;
    CtrlP_Tray_Poli_ROS_B.modelParameters_n.mVariableStepSolver = tmp_1;
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    CtrlP_Tray_Poli_ROS_B.i1 = nesl_initialize_simulator((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Simulator,
      &CtrlP_Tray_Poli_ROS_B.modelParameters_n, diagnosticManager);
    if (CtrlP_Tray_Poli_ROS_B.i1 != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_SimData;
    CtrlP_Tray_Poli_ROS_B.time_b = CtrlP_Tray_Poli_ROS_B.time_tmp_d;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &CtrlP_Tray_Poli_ROS_B.time_b;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Modes;
    tmp_1 = false;
    simulationData->mData->mFoundZcEvents = tmp_1;
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    CtrlP_Tray_Poli_ROS_B.i1 = ne_simulator_method((NeslSimulator *)
      CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (CtrlP_Tray_Poli_ROS_B.i1 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(CtrlP_Tray_Poli_ROS_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    emxInitStruct_robotics_slmanip_(&CtrlP_Tray_Poli_ROS_DW.obj);
    emxInitStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_0);
    emxInitStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_3);
    emxInitStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_2);
    emxInitStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_1);

    // Start for MATLABSystem: '<S4>/MATLAB System'
    CtrlP_Tray_Poli_ROS_DW.obj.isInitialized = 0;
    CtrlP_Tray_Poli_ROS_DW.obj.isInitialized = 1;
    Ctr_RigidBodyTree_RigidBodyTree(&CtrlP_Tray_Poli_ROS_DW.obj.TreeInternal,
      &CtrlP_Tray_Poli_ROS_DW.gobj_0, &CtrlP_Tray_Poli_ROS_DW.gobj_3);

    // Start for Atomic SubSystem: '<Root>/Pub_Torque'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    CtrlP_Tray_Poli_ROS_DW.obj_hh.matlabCodegenIsDeleted = true;
    CtrlP_Tray_Poli_ROS_DW.obj_hh.isInitialized = 0;
    CtrlP_Tray_Poli_ROS_DW.obj_hh.matlabCodegenIsDeleted = false;
    CtrlP_Tray_Poli_ROS_DW.obj_hh.isSetupComplete = false;
    CtrlP_Tray_Poli_ROS_DW.obj_hh.isInitialized = 1;
    for (CtrlP_Tray_Poli_ROS_B.i1 = 0; CtrlP_Tray_Poli_ROS_B.i1 < 7;
         CtrlP_Tray_Poli_ROS_B.i1++) {
      CtrlP_Tray_Poli_ROS_B.cv[CtrlP_Tray_Poli_ROS_B.i1] =
        tmp_2[CtrlP_Tray_Poli_ROS_B.i1];
    }

    CtrlP_Tray_Poli_ROS_B.cv[7] = '\x00';
    Pub_CtrlP_Tray_Poli_ROS_182.createPublisher(CtrlP_Tray_Poli_ROS_B.cv, 1);
    CtrlP_Tray_Poli_ROS_DW.obj_hh.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Pub_Torque'

    // InitializeConditions for SimscapeExecutionBlock: '<S20>/STATE_1'
    tmp_0 = false;
    if (tmp_0) {
      CtrlP_Tray_Poli_ROS_B.i1 = strcmp("ode3", rtsiGetSolverName
        (&CtrlP_Tray_Poli_ROS_M->solverInfo));
      if (CtrlP_Tray_Poli_ROS_B.i1 != 0) {
        msg = solver_mismatch_message("ode3", rtsiGetSolverName
          (&CtrlP_Tray_Poli_ROS_M->solverInfo));
        rtmSetErrorStatus(CtrlP_Tray_Poli_ROS_M, msg);
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S20>/STATE_1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subs_Pos'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S21>/Out1'
    CtrlP_Tray_Poli_ROS_B.In1 = CtrlP_Tray_Poli_ROS_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subs_Pos'
  }
}

// Model terminate function
void CtrlP_Tray_Poli_ROS_terminate(void)
{
  // Terminate for SimscapeExecutionBlock: '<S20>/STATE_1'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    CtrlP_Tray_Poli_ROS_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    CtrlP_Tray_Poli_ROS_DW.STATE_1_SimData);
  nesl_erase_simulator("CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration_1");

  // Terminate for Atomic SubSystem: '<Root>/Subs_Pos'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  matlabCodegenHandle_matlabCod_m(&CtrlP_Tray_Poli_ROS_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subs_Pos'

  // Terminate for SimscapeExecutionBlock: '<S20>/OUTPUT_1_0'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    CtrlP_Tray_Poli_ROS_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration_1");
  emxFreeStruct_robotics_slmanip_(&CtrlP_Tray_Poli_ROS_DW.obj);
  emxFreeStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_0);
  emxFreeStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_3);
  emxFreeStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_2);
  emxFreeStruct_g_robotics_manip_(&CtrlP_Tray_Poli_ROS_DW.gobj_1);

  // Terminate for Atomic SubSystem: '<Root>/Pub_Torque'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&CtrlP_Tray_Poli_ROS_DW.obj_hh);

  // End of Terminate for SubSystem: '<Root>/Pub_Torque'
}

//
// File trailer for generated code.
//
// [EOF]
//
