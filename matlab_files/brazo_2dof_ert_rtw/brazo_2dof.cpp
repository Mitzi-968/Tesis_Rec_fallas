//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: brazo_2dof.cpp
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
#include "brazo_2dof.h"
#include "brazo_2dof_private.h"

// Block signals (default storage)
B_brazo_2dof_T brazo_2dof_B;

// Continuous states
X_brazo_2dof_T brazo_2dof_X;

// Block states (default storage)
DW_brazo_2dof_T brazo_2dof_DW;

// Real-time model
RT_MODEL_brazo_2dof_T brazo_2dof_M_ = RT_MODEL_brazo_2dof_T();
RT_MODEL_brazo_2dof_T *const brazo_2dof_M = &brazo_2dof_M_;

// Forward declaration for local functions
static void brazo_2dof_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[2], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCod_c(ros_slros_internal_block_Publ_T *obj);

// Projection for root system: '<Root>'
void brazo_2dof_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  int_T tmp_0[3];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_1;
  char *msg;

  // Projection for SimscapeExecutionBlock: '<S15>/STATE_1'
  simulationData = (NeslSimulationData *)brazo_2dof_DW.STATE_1_SimData;
  time = brazo_2dof_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX = &brazo_2dof_X.brazo_2dofjoint_ARzq[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &brazo_2dof_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(brazo_2dof_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&brazo_2dof_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  brazo_2dof_B.dv3[0] = brazo_2dof_B.INPUT_1_1_1[0];
  brazo_2dof_B.dv3[1] = brazo_2dof_B.INPUT_1_1_1[1];
  brazo_2dof_B.dv3[2] = brazo_2dof_B.INPUT_1_1_1[2];
  brazo_2dof_B.dv3[3] = brazo_2dof_B.INPUT_1_1_1[3];
  tmp_0[1] = 4;
  brazo_2dof_B.dv3[4] = brazo_2dof_B.INPUT_2_1_1[0];
  brazo_2dof_B.dv3[5] = brazo_2dof_B.INPUT_2_1_1[1];
  brazo_2dof_B.dv3[6] = brazo_2dof_B.INPUT_2_1_1[2];
  brazo_2dof_B.dv3[7] = brazo_2dof_B.INPUT_2_1_1[3];
  tmp_0[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv3[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(brazo_2dof_M, msg);
    }
  }

  // End of Projection for SimscapeExecutionBlock: '<S15>/STATE_1'
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
  brazo_2dof_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  brazo_2dof_step();
  brazo_2dof_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  brazo_2dof_step();
  brazo_2dof_derivatives();

  // tnew = t + hA(3);
  // ynew = y + f*hB(:,3);
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  brazo_2dof_step();
  brazo_2dof_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void brazo_2dof_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[2], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_brazo_2dof_35.getLatestMessage(&brazo_2dof_B.b_varargout_2);
  varargout_2_Data[0] = brazo_2dof_B.b_varargout_2.Data[0];
  varargout_2_Data[1] = brazo_2dof_B.b_varargout_2.Data[1];
  *varargout_2_Data_SL_Info_Curren =
    brazo_2dof_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    brazo_2dof_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = brazo_2dof_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &brazo_2dof_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    brazo_2dof_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    brazo_2dof_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_c(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void brazo_2dof_step(void)
{
  if (rtmIsMajorTimeStep(brazo_2dof_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&brazo_2dof_M->solverInfo,
                          ((brazo_2dof_M->Timing.clockTick0+1)*
      brazo_2dof_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(brazo_2dof_M)) {
    brazo_2dof_M->Timing.t[0] = rtsiGetT(&brazo_2dof_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;
    uint32_T b_varargout_2_Data_SL_Info_Curr;
    uint32_T b_varargout_2_Data_SL_Info_Rece;
    uint32_T b_varargout_2_Layout_DataOffset;
    uint32_T b_varargout_2_Layout_Dim_SL_Inf;
    uint32_T b_varargout_2_Layout_Dim_SL_I_0;
    boolean_T b_varargout_1;

    // SimscapeExecutionBlock: '<S15>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'

    simulationData = (NeslSimulationData *)brazo_2dof_DW.STATE_1_SimData;
    brazo_2dof_B.time_tmp = brazo_2dof_M->Timing.t[0];
    brazo_2dof_B.time = brazo_2dof_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX = &brazo_2dof_X.brazo_2dofjoint_ARzq[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &brazo_2dof_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(brazo_2dof_M);
    simulationData->mData->mIsMajorTimeStep = tmp;
    b_varargout_1 = false;
    simulationData->mData->mIsSolverAssertCheck = b_varargout_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    b_varargout_1 = rtsiIsSolverComputingJacobian(&brazo_2dof_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = b_varargout_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    brazo_2dof_B.iv1[0] = 0;
    brazo_2dof_B.dv1[0] = brazo_2dof_B.INPUT_1_1_1[0];
    brazo_2dof_B.dv1[1] = brazo_2dof_B.INPUT_1_1_1[1];
    brazo_2dof_B.dv1[2] = brazo_2dof_B.INPUT_1_1_1[2];
    brazo_2dof_B.dv1[3] = brazo_2dof_B.INPUT_1_1_1[3];
    brazo_2dof_B.iv1[1] = 4;
    brazo_2dof_B.dv1[4] = brazo_2dof_B.INPUT_2_1_1[0];
    brazo_2dof_B.dv1[5] = brazo_2dof_B.INPUT_2_1_1[1];
    brazo_2dof_B.dv1[6] = brazo_2dof_B.INPUT_2_1_1[2];
    brazo_2dof_B.dv1[7] = brazo_2dof_B.INPUT_2_1_1[3];
    brazo_2dof_B.iv1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &brazo_2dof_B.iv1[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &brazo_2dof_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (tmp_0 != 0) {
      b_varargout_1 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (b_varargout_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of SimscapeExecutionBlock: '<S15>/STATE_1'
    if (rtmIsMajorTimeStep(brazo_2dof_M)) {
      // Outputs for Atomic SubSystem: '<Root>/Subs_Torque'
      // MATLABSystem: '<S6>/SourceBlock' incorporates:
      //   Inport: '<S16>/In1'

      brazo_2dof_SystemCore_step(&b_varargout_1, brazo_2dof_B.b_varargout_2_Data,
        &b_varargout_2_Data_SL_Info_Curr, &b_varargout_2_Data_SL_Info_Rece,
        &b_varargout_2_Layout_DataOffset, brazo_2dof_B.b_varargout_2_Layout_Dim,
        &b_varargout_2_Layout_Dim_SL_Inf, &b_varargout_2_Layout_Dim_SL_I_0);

      // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S16>/Enable'

      if (b_varargout_1) {
        brazo_2dof_B.In1.Data[0] = brazo_2dof_B.b_varargout_2_Data[0];
        brazo_2dof_B.In1.Data[1] = brazo_2dof_B.b_varargout_2_Data[1];
        brazo_2dof_B.In1.Data_SL_Info.CurrentLength =
          b_varargout_2_Data_SL_Info_Curr;
        brazo_2dof_B.In1.Data_SL_Info.ReceivedLength =
          b_varargout_2_Data_SL_Info_Rece;
        brazo_2dof_B.In1.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
        memcpy(&brazo_2dof_B.In1.Layout.Dim[0],
               &brazo_2dof_B.b_varargout_2_Layout_Dim[0], sizeof
               (SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension) << 4U);
        brazo_2dof_B.In1.Layout.Dim_SL_Info.CurrentLength =
          b_varargout_2_Layout_Dim_SL_Inf;
        brazo_2dof_B.In1.Layout.Dim_SL_Info.ReceivedLength =
          b_varargout_2_Layout_Dim_SL_I_0;
      }

      // End of MATLABSystem: '<S6>/SourceBlock'
      // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subs_Torque'
    }

    // SimscapeInputBlock: '<S15>/INPUT_1_1_1'
    brazo_2dof_B.INPUT_1_1_1[0] = brazo_2dof_B.In1.Data[0];
    brazo_2dof_B.INPUT_1_1_1[1] = 0.0;
    brazo_2dof_B.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(brazo_2dof_M)) {
      brazo_2dof_DW.INPUT_1_1_1_Discrete[0] = !(brazo_2dof_B.INPUT_1_1_1[0] ==
        brazo_2dof_DW.INPUT_1_1_1_Discrete[1]);
      brazo_2dof_DW.INPUT_1_1_1_Discrete[1] = brazo_2dof_B.INPUT_1_1_1[0];
    }

    brazo_2dof_B.INPUT_1_1_1[0] = brazo_2dof_DW.INPUT_1_1_1_Discrete[1];
    brazo_2dof_B.INPUT_1_1_1[3] = brazo_2dof_DW.INPUT_1_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S15>/INPUT_1_1_1'

    // SimscapeInputBlock: '<S15>/INPUT_2_1_1'
    brazo_2dof_B.INPUT_2_1_1[0] = brazo_2dof_B.In1.Data[1];
    brazo_2dof_B.INPUT_2_1_1[1] = 0.0;
    brazo_2dof_B.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(brazo_2dof_M)) {
      brazo_2dof_DW.INPUT_2_1_1_Discrete[0] = !(brazo_2dof_B.INPUT_2_1_1[0] ==
        brazo_2dof_DW.INPUT_2_1_1_Discrete[1]);
      brazo_2dof_DW.INPUT_2_1_1_Discrete[1] = brazo_2dof_B.INPUT_2_1_1[0];
    }

    brazo_2dof_B.INPUT_2_1_1[0] = brazo_2dof_DW.INPUT_2_1_1_Discrete[1];
    brazo_2dof_B.INPUT_2_1_1[3] = brazo_2dof_DW.INPUT_2_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S15>/INPUT_2_1_1'

    // SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'
    simulationData = (NeslSimulationData *)brazo_2dof_DW.OUTPUT_1_0_SimData;
    brazo_2dof_B.time_c = brazo_2dof_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time_c;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &brazo_2dof_DW.OUTPUT_1_0_Modes;
    b_varargout_1 = false;
    simulationData->mData->mFoundZcEvents = b_varargout_1;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    brazo_2dof_B.iv[0] = 0;
    brazo_2dof_B.dv[0] = brazo_2dof_B.INPUT_1_1_1[0];
    brazo_2dof_B.dv[1] = brazo_2dof_B.INPUT_1_1_1[1];
    brazo_2dof_B.dv[2] = brazo_2dof_B.INPUT_1_1_1[2];
    brazo_2dof_B.dv[3] = brazo_2dof_B.INPUT_1_1_1[3];
    brazo_2dof_B.iv[1] = 4;
    brazo_2dof_B.dv[4] = brazo_2dof_B.INPUT_2_1_1[0];
    brazo_2dof_B.dv[5] = brazo_2dof_B.INPUT_2_1_1[1];
    brazo_2dof_B.dv[6] = brazo_2dof_B.INPUT_2_1_1[2];
    brazo_2dof_B.dv[7] = brazo_2dof_B.INPUT_2_1_1[3];
    brazo_2dof_B.iv[2] = 8;
    brazo_2dof_B.dv[8] = brazo_2dof_B.STATE_1[0];
    brazo_2dof_B.dv[9] = brazo_2dof_B.STATE_1[1];
    brazo_2dof_B.dv[10] = brazo_2dof_B.STATE_1[2];
    brazo_2dof_B.dv[11] = brazo_2dof_B.STATE_1[3];
    brazo_2dof_B.iv[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &brazo_2dof_B.iv[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &brazo_2dof_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)
      brazo_2dof_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (tmp_0 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    if (rtmIsMajorTimeStep(brazo_2dof_M)) {
      // BusAssignment: '<S7>/Bus Assignment1' incorporates:
      //   Constant: '<S17>/Constant'
      //   Constant: '<S7>/Constant'

      brazo_2dof_B.BusAssignment1 = brazo_2dof_P.Constant_Value_j;
      brazo_2dof_B.BusAssignment1.Data[0] = brazo_2dof_B.OUTPUT_1_0[0];
      brazo_2dof_B.BusAssignment1.Data[1] = brazo_2dof_B.OUTPUT_1_0[2];
      brazo_2dof_B.BusAssignment1.Data_SL_Info.CurrentLength =
        brazo_2dof_P.Constant_Value_n;
      brazo_2dof_B.BusAssignment1.Data_SL_Info.ReceivedLength =
        brazo_2dof_P.Constant_Value_n;

      // Outputs for Atomic SubSystem: '<S7>/Pub_Pos'
      // MATLABSystem: '<S18>/SinkBlock'
      Pub_brazo_2dof_56.publish(&brazo_2dof_B.BusAssignment1);

      // End of Outputs for SubSystem: '<S7>/Pub_Pos'
    }
  }

  if (rtmIsMajorTimeStep(brazo_2dof_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    int_T tmp_0[3];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_1;
    char *msg;

    // Update for SimscapeExecutionBlock: '<S15>/STATE_1'
    simulationData = (NeslSimulationData *)brazo_2dof_DW.STATE_1_SimData;
    time = brazo_2dof_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX = &brazo_2dof_X.brazo_2dofjoint_ARzq[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &brazo_2dof_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(brazo_2dof_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&brazo_2dof_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0[0] = 0;
    brazo_2dof_B.dv5[0] = brazo_2dof_B.INPUT_1_1_1[0];
    brazo_2dof_B.dv5[1] = brazo_2dof_B.INPUT_1_1_1[1];
    brazo_2dof_B.dv5[2] = brazo_2dof_B.INPUT_1_1_1[2];
    brazo_2dof_B.dv5[3] = brazo_2dof_B.INPUT_1_1_1[3];
    tmp_0[1] = 4;
    brazo_2dof_B.dv5[4] = brazo_2dof_B.INPUT_2_1_1[0];
    brazo_2dof_B.dv5[5] = brazo_2dof_B.INPUT_2_1_1[1];
    brazo_2dof_B.dv5[6] = brazo_2dof_B.INPUT_2_1_1[2];
    brazo_2dof_B.dv5[7] = brazo_2dof_B.INPUT_2_1_1[3];
    tmp_0[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv5[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_0[0];
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_1 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of Update for SimscapeExecutionBlock: '<S15>/STATE_1'
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(brazo_2dof_M)) {
    rt_ertODEUpdateContinuousStates(&brazo_2dof_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++brazo_2dof_M->Timing.clockTick0;
    brazo_2dof_M->Timing.t[0] = rtsiGetSolverStopTime(&brazo_2dof_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.002s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.002, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      brazo_2dof_M->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void brazo_2dof_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  int_T tmp_0[3];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_1;
  char *msg;
  XDot_brazo_2dof_T *_rtXdot;
  _rtXdot = ((XDot_brazo_2dof_T *) brazo_2dof_M->derivs);

  // Derivatives for SimscapeExecutionBlock: '<S15>/STATE_1'
  simulationData = (NeslSimulationData *)brazo_2dof_DW.STATE_1_SimData;
  time = brazo_2dof_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX = &brazo_2dof_X.brazo_2dofjoint_ARzq[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &brazo_2dof_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(brazo_2dof_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&brazo_2dof_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  brazo_2dof_B.dv4[0] = brazo_2dof_B.INPUT_1_1_1[0];
  brazo_2dof_B.dv4[1] = brazo_2dof_B.INPUT_1_1_1[1];
  brazo_2dof_B.dv4[2] = brazo_2dof_B.INPUT_1_1_1[2];
  brazo_2dof_B.dv4[3] = brazo_2dof_B.INPUT_1_1_1[3];
  tmp_0[1] = 4;
  brazo_2dof_B.dv4[4] = brazo_2dof_B.INPUT_2_1_1[0];
  brazo_2dof_B.dv4[5] = brazo_2dof_B.INPUT_2_1_1[1];
  brazo_2dof_B.dv4[6] = brazo_2dof_B.INPUT_2_1_1[2];
  brazo_2dof_B.dv4[7] = brazo_2dof_B.INPUT_2_1_1[3];
  tmp_0[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv4[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mDx.mN = 4;
  simulationData->mData->mDx.mX = &_rtXdot->brazo_2dofjoint_ARzq[0];
  diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(brazo_2dof_M, msg);
    }
  }

  // End of Derivatives for SimscapeExecutionBlock: '<S15>/STATE_1'
}

// Model initialize function
void brazo_2dof_initialize(void)
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&brazo_2dof_M->solverInfo,
                          &brazo_2dof_M->Timing.simTimeStep);
    rtsiSetTPtr(&brazo_2dof_M->solverInfo, &rtmGetTPtr(brazo_2dof_M));
    rtsiSetStepSizePtr(&brazo_2dof_M->solverInfo,
                       &brazo_2dof_M->Timing.stepSize0);
    rtsiSetdXPtr(&brazo_2dof_M->solverInfo, &brazo_2dof_M->derivs);
    rtsiSetContStatesPtr(&brazo_2dof_M->solverInfo, (real_T **)
                         &brazo_2dof_M->contStates);
    rtsiSetNumContStatesPtr(&brazo_2dof_M->solverInfo,
      &brazo_2dof_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&brazo_2dof_M->solverInfo,
      &brazo_2dof_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&brazo_2dof_M->solverInfo,
      &brazo_2dof_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&brazo_2dof_M->solverInfo,
      &brazo_2dof_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&brazo_2dof_M->solverInfo, (&rtmGetErrorStatus
      (brazo_2dof_M)));
    rtsiSetRTModelPtr(&brazo_2dof_M->solverInfo, brazo_2dof_M);
  }

  rtsiSetSimTimeStep(&brazo_2dof_M->solverInfo, MAJOR_TIME_STEP);
  brazo_2dof_M->intgData.y = brazo_2dof_M->odeY;
  brazo_2dof_M->intgData.f[0] = brazo_2dof_M->odeF[0];
  brazo_2dof_M->intgData.f[1] = brazo_2dof_M->odeF[1];
  brazo_2dof_M->intgData.f[2] = brazo_2dof_M->odeF[2];
  brazo_2dof_M->contStates = ((X_brazo_2dof_T *) &brazo_2dof_X);
  rtsiSetSolverData(&brazo_2dof_M->solverInfo, static_cast<void *>
                    (&brazo_2dof_M->intgData));
  rtsiSetSolverName(&brazo_2dof_M->solverInfo,"ode3");
  rtmSetTPtr(brazo_2dof_M, &brazo_2dof_M->Timing.tArray[0]);
  brazo_2dof_M->Timing.stepSize0 = 0.002;

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T i;
    char *msg;
    NeslSimulationData *simulationData;
    boolean_T tmp_1;
    char_T tmp_2[5];
    char_T tmp_3[8];
    static const char_T tmp_4[7] = { '/', 't', 'o', 'r', 'q', 'u', 'e' };

    // Start for SimscapeExecutionBlock: '<S15>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'

    tmp = nesl_lease_simulator("brazo_2dof/Solver Configuration_1", 0, 0);
    brazo_2dof_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(brazo_2dof_DW.STATE_1_Simulator);
    if (tmp_0) {
      brazo_2dof_a093840a_1_gateway();
      tmp = nesl_lease_simulator("brazo_2dof/Solver Configuration_1", 0, 0);
      brazo_2dof_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    brazo_2dof_DW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    brazo_2dof_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    brazo_2dof_B.modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    brazo_2dof_B.modelParameters.mSolverTolerance = 0.001;
    brazo_2dof_B.modelParameters.mVariableStepSolver = false;
    brazo_2dof_B.modelParameters.mFixedStepSize = 0.002;
    brazo_2dof_B.modelParameters.mStartTime = 0.0;
    brazo_2dof_B.modelParameters.mLoadInitialState = false;
    brazo_2dof_B.modelParameters.mUseSimState = false;
    brazo_2dof_B.modelParameters.mLinTrimCompile = false;
    brazo_2dof_B.modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    brazo_2dof_B.modelParameters.mRTWModifiedTimeStamp = 5.23537605E+8;
    brazo_2dof_B.d = 0.001;
    brazo_2dof_B.modelParameters.mSolverTolerance = brazo_2dof_B.d;
    brazo_2dof_B.d = 0.002;
    brazo_2dof_B.modelParameters.mFixedStepSize = brazo_2dof_B.d;
    tmp_0 = false;
    brazo_2dof_B.modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      brazo_2dof_DW.STATE_1_Simulator, &brazo_2dof_B.modelParameters,
      diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    brazo_2dof_B.expl_temp.mRealParameters.mN = 0;
    brazo_2dof_B.expl_temp.mRealParameters.mX = NULL;
    brazo_2dof_B.expl_temp.mLogicalParameters.mN = 0;
    brazo_2dof_B.expl_temp.mLogicalParameters.mX = NULL;
    brazo_2dof_B.expl_temp.mIntegerParameters.mN = 0;
    brazo_2dof_B.expl_temp.mIntegerParameters.mX = NULL;
    brazo_2dof_B.expl_temp.mIndexParameters.mN = 0;
    brazo_2dof_B.expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
      brazo_2dof_B.expl_temp);
    simulationData = (NeslSimulationData *)brazo_2dof_DW.STATE_1_SimData;
    brazo_2dof_B.time_tmp_b = brazo_2dof_M->Timing.t[0];
    brazo_2dof_B.time_k = brazo_2dof_B.time_tmp_b;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time_k;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX = &brazo_2dof_X.brazo_2dofjoint_ARzq[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &brazo_2dof_DW.STATE_1_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_0 = rtmIsMajorTimeStep(brazo_2dof_M);
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_1 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_1 = rtsiIsSolverComputingJacobian(&brazo_2dof_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S15>/STATE_1'

    // Start for Atomic SubSystem: '<Root>/Subs_Torque'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    brazo_2dof_DW.obj.matlabCodegenIsDeleted = true;
    brazo_2dof_DW.obj.isInitialized = 0;
    brazo_2dof_DW.obj.matlabCodegenIsDeleted = false;
    brazo_2dof_DW.obj.isSetupComplete = false;
    brazo_2dof_DW.obj.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      tmp_3[i] = tmp_4[i];
    }

    tmp_3[7] = '\x00';
    Sub_brazo_2dof_35.createSubscriber(tmp_3, 1);
    brazo_2dof_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subs_Torque'

    // Start for SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'
    tmp = nesl_lease_simulator("brazo_2dof/Solver Configuration_1", 1, 0);
    brazo_2dof_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_1 = pointer_is_null(brazo_2dof_DW.OUTPUT_1_0_Simulator);
    if (tmp_1) {
      brazo_2dof_a093840a_1_gateway();
      tmp = nesl_lease_simulator("brazo_2dof/Solver Configuration_1", 1, 0);
      brazo_2dof_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    brazo_2dof_DW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    brazo_2dof_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    brazo_2dof_B.modelParameters_m.mSolverType = NE_SOLVER_TYPE_DAE;
    brazo_2dof_B.modelParameters_m.mSolverTolerance = 0.001;
    brazo_2dof_B.modelParameters_m.mVariableStepSolver = false;
    brazo_2dof_B.modelParameters_m.mFixedStepSize = 0.002;
    brazo_2dof_B.modelParameters_m.mStartTime = 0.0;
    brazo_2dof_B.modelParameters_m.mLoadInitialState = false;
    brazo_2dof_B.modelParameters_m.mUseSimState = false;
    brazo_2dof_B.modelParameters_m.mLinTrimCompile = false;
    brazo_2dof_B.modelParameters_m.mLoggingMode = SSC_LOGGING_NONE;
    brazo_2dof_B.modelParameters_m.mRTWModifiedTimeStamp = 5.23537605E+8;
    brazo_2dof_B.d = 0.001;
    brazo_2dof_B.modelParameters_m.mSolverTolerance = brazo_2dof_B.d;
    brazo_2dof_B.d = 0.002;
    brazo_2dof_B.modelParameters_m.mFixedStepSize = brazo_2dof_B.d;
    tmp_1 = false;
    brazo_2dof_B.modelParameters_m.mVariableStepSolver = tmp_1;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      brazo_2dof_DW.OUTPUT_1_0_Simulator, &brazo_2dof_B.modelParameters_m,
      diagnosticManager);
    if (i != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)brazo_2dof_DW.OUTPUT_1_0_SimData;
    brazo_2dof_B.time_cx = brazo_2dof_B.time_tmp_b;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time_cx;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &brazo_2dof_DW.OUTPUT_1_0_Modes;
    tmp_1 = false;
    simulationData->mData->mFoundZcEvents = tmp_1;
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.OUTPUT_1_0_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // Start for Atomic SubSystem: '<S7>/Pub_Pos'
    // Start for MATLABSystem: '<S18>/SinkBlock'
    brazo_2dof_DW.obj_n.matlabCodegenIsDeleted = true;
    brazo_2dof_DW.obj_n.isInitialized = 0;
    brazo_2dof_DW.obj_n.matlabCodegenIsDeleted = false;
    brazo_2dof_DW.obj_n.isSetupComplete = false;
    brazo_2dof_DW.obj_n.isInitialized = 1;
    tmp_2[0] = '/';
    tmp_2[1] = 'p';
    tmp_2[2] = 'o';
    tmp_2[3] = 's';
    tmp_2[4] = '\x00';
    Pub_brazo_2dof_56.createPublisher(tmp_2, 1);
    brazo_2dof_DW.obj_n.isSetupComplete = true;

    // End of Start for SubSystem: '<S7>/Pub_Pos'

    // InitializeConditions for SimscapeExecutionBlock: '<S15>/STATE_1'
    tmp_0 = false;
    if (tmp_0) {
      i = strcmp("ode3", rtsiGetSolverName(&brazo_2dof_M->solverInfo));
      if (i != 0) {
        msg = solver_mismatch_message("ode3", rtsiGetSolverName
          (&brazo_2dof_M->solverInfo));
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S15>/STATE_1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subs_Torque'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S16>/Out1'
    brazo_2dof_B.In1 = brazo_2dof_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subs_Torque'
  }
}

// Model terminate function
void brazo_2dof_terminate(void)
{
  // Terminate for SimscapeExecutionBlock: '<S15>/STATE_1'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    brazo_2dof_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    brazo_2dof_DW.STATE_1_SimData);
  nesl_erase_simulator("brazo_2dof/Solver Configuration_1");

  // Terminate for Atomic SubSystem: '<Root>/Subs_Torque'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&brazo_2dof_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Subs_Torque'

  // Terminate for SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    brazo_2dof_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    brazo_2dof_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("brazo_2dof/Solver Configuration_1");

  // Terminate for Atomic SubSystem: '<S7>/Pub_Pos'
  // Terminate for MATLABSystem: '<S18>/SinkBlock'
  matlabCodegenHandle_matlabCod_c(&brazo_2dof_DW.obj_n);

  // End of Terminate for SubSystem: '<S7>/Pub_Pos'
}

//
// File trailer for generated code.
//
// [EOF]
//
