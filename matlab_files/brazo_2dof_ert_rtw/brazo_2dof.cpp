//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: brazo_2dof.cpp
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
static void brazo_2dof_emxInit_real_T(emxArray_real_T_brazo_2dof_T **pEmxArray,
  int32_T numDimensions);
static void brazo__emxEnsureCapacity_real_T(emxArray_real_T_brazo_2dof_T
  *emxArray, int32_T oldNumel);
static void brazo_2dof_emxInit_f_cell_wrap(emxArray_f_cell_wrap_brazo_2d_T
  **pEmxArray, int32_T numDimensions);
static void b_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_brazo_2d_T
  *emxArray, int32_T oldNumel);
static void brazo_2dof_emxInit_char_T(emxArray_char_T_brazo_2dof_T **pEmxArray,
  int32_T numDimensions);
static void brazo__emxEnsureCapacity_char_T(emxArray_char_T_brazo_2dof_T
  *emxArray, int32_T oldNumel);
static void brazo_2dof_emxFree_char_T(emxArray_char_T_brazo_2dof_T **pEmxArray);
static void br_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_brazo_2dof_T
  *obj, real_T ax[3]);
static void brazo_2dof_normalizeRows(const real_T matrix[3], real_T
  normRowMatrix[3]);
static void brazo_2dof_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyT_c(const rigidBodyJoint_brazo_2dof_T
  *obj, const real_T q_data[], const int32_T *q_size, real_T T[16]);
static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_brazo_2dof_T
  *obj, real_T T[16]);
static void brazo_2dof_tforminv(const real_T T[16], real_T Tinv[16]);
static void brazo_2dof_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void brazo_2dof_emxFree_real_T(emxArray_real_T_brazo_2dof_T **pEmxArray);
static void brazo_2dof_emxFree_f_cell_wrap(emxArray_f_cell_wrap_brazo_2d_T
  **pEmxArray);
static void RigidBodyTreeDynamics_massMatri(h_robotics_manip_internal_Rig_T
  *robot, const real_T q[2], emxArray_real_T_brazo_2dof_T *H,
  emxArray_real_T_brazo_2dof_T *lambda);
static void RigidBodyTreeDynamics_inverseDy(h_robotics_manip_internal_Rig_T
  *robot, const real_T q[2], const real_T qdot[2], const
  emxArray_real_T_brazo_2dof_T *qddot, const real_T fext[12], real_T tau[2]);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj);
static void br_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_brazo_2dof_T *pStruct);
static void emxFreeStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_g_robotics_manip_(g_robotics_manip_internal_Rig_T
  *pStruct);
static void br_emxInitStruct_rigidBodyJoint(rigidBodyJoint_brazo_2dof_T *pStruct);
static void emxInitStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_h_robotics_manip_(h_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_g_robotics_manip_(g_robotics_manip_internal_Rig_T
  *pStruct);
static g_robotics_manip_internal_Rig_T *brazo_2dof_RigidBody_RigidBody
  (g_robotics_manip_internal_Rig_T *obj);
static g_robotics_manip_internal_Rig_T *brazo_2do_RigidBody_RigidBody_c
  (g_robotics_manip_internal_Rig_T *obj);
static f_robotics_manip_internal_Rig_T *brazo_2d_RigidBody_RigidBody_cr
  (f_robotics_manip_internal_Rig_T *obj);
static h_robotics_manip_internal_Rig_T *bra_RigidBodyTree_RigidBodyTree
  (h_robotics_manip_internal_Rig_T *obj, g_robotics_manip_internal_Rig_T *iobj_0,
   g_robotics_manip_internal_Rig_T *iobj_1);

// Projection for root system: '<Root>'
void brazo_2dof_projection(void)
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
  tmp_1[0] = 0;
  tmp_0[0] = brazo_2dof_B.INPUT_1_1_1[0];
  tmp_0[1] = brazo_2dof_B.INPUT_1_1_1[1];
  tmp_0[2] = brazo_2dof_B.INPUT_1_1_1[2];
  tmp_0[3] = brazo_2dof_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = brazo_2dof_B.INPUT_2_1_1[0];
  tmp_0[5] = brazo_2dof_B.INPUT_2_1_1[1];
  tmp_0[6] = brazo_2dof_B.INPUT_2_1_1[2];
  tmp_0[7] = brazo_2dof_B.INPUT_2_1_1[3];
  tmp_1[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
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
  int_T nXc = 8;
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

static void brazo_2dof_emxInit_real_T(emxArray_real_T_brazo_2dof_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_brazo_2dof_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_brazo_2dof_T *)malloc(sizeof
    (emxArray_real_T_brazo_2dof_T));
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

static void brazo__emxEnsureCapacity_real_T(emxArray_real_T_brazo_2dof_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  brazo_2dof_B.newNumel_o = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    brazo_2dof_B.newNumel_o *= emxArray->size[i];
  }

  if (brazo_2dof_B.newNumel_o > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < brazo_2dof_B.newNumel_o) {
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

static void brazo_2dof_emxInit_f_cell_wrap(emxArray_f_cell_wrap_brazo_2d_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_brazo_2d_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_f_cell_wrap_brazo_2d_T *)malloc(sizeof
    (emxArray_f_cell_wrap_brazo_2d_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_brazo_2dof_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void b_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_brazo_2d_T
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

    newData = calloc(static_cast<uint32_T>(i), sizeof(f_cell_wrap_brazo_2dof_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_brazo_2dof_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_brazo_2dof_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void brazo_2dof_emxInit_char_T(emxArray_char_T_brazo_2dof_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_char_T_brazo_2dof_T *emxArray;
  *pEmxArray = (emxArray_char_T_brazo_2dof_T *)malloc(sizeof
    (emxArray_char_T_brazo_2dof_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (brazo_2dof_B.i_f = 0; brazo_2dof_B.i_f < numDimensions; brazo_2dof_B.i_f
       ++) {
    emxArray->size[brazo_2dof_B.i_f] = 0;
  }
}

static void brazo__emxEnsureCapacity_char_T(emxArray_char_T_brazo_2dof_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  brazo_2dof_B.newNumel = 1;
  for (brazo_2dof_B.i_p = 0; brazo_2dof_B.i_p < emxArray->numDimensions;
       brazo_2dof_B.i_p++) {
    brazo_2dof_B.newNumel *= emxArray->size[brazo_2dof_B.i_p];
  }

  if (brazo_2dof_B.newNumel > emxArray->allocatedSize) {
    brazo_2dof_B.i_p = emxArray->allocatedSize;
    if (brazo_2dof_B.i_p < 16) {
      brazo_2dof_B.i_p = 16;
    }

    while (brazo_2dof_B.i_p < brazo_2dof_B.newNumel) {
      if (brazo_2dof_B.i_p > 1073741823) {
        brazo_2dof_B.i_p = MAX_int32_T;
      } else {
        brazo_2dof_B.i_p <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(brazo_2dof_B.i_p), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = brazo_2dof_B.i_p;
    emxArray->canFreeData = true;
  }
}

static void brazo_2dof_emxFree_char_T(emxArray_char_T_brazo_2dof_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_brazo_2dof_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_brazo_2dof_T *)NULL;
  }
}

static void br_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_brazo_2dof_T
  *obj, real_T ax[3])
{
  emxArray_char_T_brazo_2dof_T *a;
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  brazo_2dof_emxInit_char_T(&a, 2);
  brazo_2dof_B.b_kstr_c = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = obj->Type->size[1];
  brazo__emxEnsureCapacity_char_T(a, brazo_2dof_B.b_kstr_c);
  brazo_2dof_B.loop_ub_p = obj->Type->size[0] * obj->Type->size[1] - 1;
  for (brazo_2dof_B.b_kstr_c = 0; brazo_2dof_B.b_kstr_c <=
       brazo_2dof_B.loop_ub_p; brazo_2dof_B.b_kstr_c++) {
    a->data[brazo_2dof_B.b_kstr_c] = obj->Type->data[brazo_2dof_B.b_kstr_c];
  }

  for (brazo_2dof_B.b_kstr_c = 0; brazo_2dof_B.b_kstr_c < 8;
       brazo_2dof_B.b_kstr_c++) {
    brazo_2dof_B.b_n[brazo_2dof_B.b_kstr_c] = tmp[brazo_2dof_B.b_kstr_c];
  }

  brazo_2dof_B.b_bool_o = false;
  if (a->size[1] == 8) {
    brazo_2dof_B.b_kstr_c = 1;
    do {
      exitg1 = 0;
      if (brazo_2dof_B.b_kstr_c - 1 < 8) {
        brazo_2dof_B.loop_ub_p = brazo_2dof_B.b_kstr_c - 1;
        if (a->data[brazo_2dof_B.loop_ub_p] !=
            brazo_2dof_B.b_n[brazo_2dof_B.loop_ub_p]) {
          exitg1 = 1;
        } else {
          brazo_2dof_B.b_kstr_c++;
        }
      } else {
        brazo_2dof_B.b_bool_o = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (brazo_2dof_B.b_bool_o) {
    guard1 = true;
  } else {
    brazo_2dof_B.b_kstr_c = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->Type->size[1];
    brazo__emxEnsureCapacity_char_T(a, brazo_2dof_B.b_kstr_c);
    brazo_2dof_B.loop_ub_p = obj->Type->size[0] * obj->Type->size[1] - 1;
    for (brazo_2dof_B.b_kstr_c = 0; brazo_2dof_B.b_kstr_c <=
         brazo_2dof_B.loop_ub_p; brazo_2dof_B.b_kstr_c++) {
      a->data[brazo_2dof_B.b_kstr_c] = obj->Type->data[brazo_2dof_B.b_kstr_c];
    }

    for (brazo_2dof_B.b_kstr_c = 0; brazo_2dof_B.b_kstr_c < 9;
         brazo_2dof_B.b_kstr_c++) {
      brazo_2dof_B.b_l[brazo_2dof_B.b_kstr_c] = tmp_0[brazo_2dof_B.b_kstr_c];
    }

    brazo_2dof_B.b_bool_o = false;
    if (a->size[1] == 9) {
      brazo_2dof_B.b_kstr_c = 1;
      do {
        exitg1 = 0;
        if (brazo_2dof_B.b_kstr_c - 1 < 9) {
          brazo_2dof_B.loop_ub_p = brazo_2dof_B.b_kstr_c - 1;
          if (a->data[brazo_2dof_B.loop_ub_p] !=
              brazo_2dof_B.b_l[brazo_2dof_B.loop_ub_p]) {
            exitg1 = 1;
          } else {
            brazo_2dof_B.b_kstr_c++;
          }
        } else {
          brazo_2dof_B.b_bool_o = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (brazo_2dof_B.b_bool_o) {
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

  brazo_2dof_emxFree_char_T(&a);
}

static void brazo_2dof_normalizeRows(const real_T matrix[3], real_T
  normRowMatrix[3])
{
  real_T b;
  b = 1.0 / sqrt((matrix[0] * matrix[0] + matrix[1] * matrix[1]) + matrix[2] *
                 matrix[2]);
  normRowMatrix[0] = matrix[0] * b;
  normRowMatrix[1] = matrix[1] * b;
  normRowMatrix[2] = matrix[2] * b;
}

static void brazo_2dof_cat(real_T varargin_1, real_T varargin_2, real_T
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

static void rigidBodyJoint_transformBodyT_c(const rigidBodyJoint_brazo_2dof_T
  *obj, const real_T q_data[], const int32_T *q_size, real_T T[16])
{
  emxArray_char_T_brazo_2dof_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  brazo_2dof_emxInit_char_T(&switch_expression, 2);
  brazo_2dof_B.b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  brazo__emxEnsureCapacity_char_T(switch_expression, brazo_2dof_B.b_kstr);
  brazo_2dof_B.loop_ub_c = obj->Type->size[0] * obj->Type->size[1] - 1;
  for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr <= brazo_2dof_B.loop_ub_c;
       brazo_2dof_B.b_kstr++) {
    switch_expression->data[brazo_2dof_B.b_kstr] = obj->Type->
      data[brazo_2dof_B.b_kstr];
  }

  for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 5; brazo_2dof_B.b_kstr++)
  {
    brazo_2dof_B.b_c[brazo_2dof_B.b_kstr] = tmp[brazo_2dof_B.b_kstr];
  }

  brazo_2dof_B.b_bool_e = false;
  if (switch_expression->size[1] == 5) {
    brazo_2dof_B.b_kstr = 1;
    do {
      exitg1 = 0;
      if (brazo_2dof_B.b_kstr - 1 < 5) {
        brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr - 1;
        if (switch_expression->data[brazo_2dof_B.loop_ub_c] !=
            brazo_2dof_B.b_c[brazo_2dof_B.loop_ub_c]) {
          exitg1 = 1;
        } else {
          brazo_2dof_B.b_kstr++;
        }
      } else {
        brazo_2dof_B.b_bool_e = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (brazo_2dof_B.b_bool_e) {
    brazo_2dof_B.b_kstr = 0;
  } else {
    for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 8; brazo_2dof_B.b_kstr++)
    {
      brazo_2dof_B.b_bj[brazo_2dof_B.b_kstr] = tmp_0[brazo_2dof_B.b_kstr];
    }

    brazo_2dof_B.b_bool_e = false;
    if (switch_expression->size[1] == 8) {
      brazo_2dof_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (brazo_2dof_B.b_kstr - 1 < 8) {
          brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr - 1;
          if (switch_expression->data[brazo_2dof_B.loop_ub_c] !=
              brazo_2dof_B.b_bj[brazo_2dof_B.loop_ub_c]) {
            exitg1 = 1;
          } else {
            brazo_2dof_B.b_kstr++;
          }
        } else {
          brazo_2dof_B.b_bool_e = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (brazo_2dof_B.b_bool_e) {
      brazo_2dof_B.b_kstr = 1;
    } else {
      brazo_2dof_B.b_kstr = -1;
    }
  }

  brazo_2dof_emxFree_char_T(&switch_expression);
  switch (brazo_2dof_B.b_kstr) {
   case 0:
    memset(&brazo_2dof_B.TJ[0], 0, sizeof(real_T) << 4U);
    brazo_2dof_B.TJ[0] = 1.0;
    brazo_2dof_B.TJ[5] = 1.0;
    brazo_2dof_B.TJ[10] = 1.0;
    brazo_2dof_B.TJ[15] = 1.0;
    break;

   case 1:
    br_rigidBodyJoint_get_JointAxis(obj, brazo_2dof_B.v);
    brazo_2dof_B.result_data[0] = brazo_2dof_B.v[0];
    brazo_2dof_B.result_data[1] = brazo_2dof_B.v[1];
    brazo_2dof_B.result_data[2] = brazo_2dof_B.v[2];
    if (0 <= (*q_size != 0) - 1) {
      brazo_2dof_B.result_data[3] = q_data[0];
    }

    brazo_2dof_normalizeRows(&brazo_2dof_B.result_data[0], brazo_2dof_B.v);
    brazo_2dof_B.cth = cos(brazo_2dof_B.result_data[3]);
    brazo_2dof_B.sth = sin(brazo_2dof_B.result_data[3]);
    brazo_2dof_B.tempR_tmp = brazo_2dof_B.v[1] * brazo_2dof_B.v[0] * (1.0 -
      brazo_2dof_B.cth);
    brazo_2dof_B.tempR_tmp_b = brazo_2dof_B.v[2] * brazo_2dof_B.sth;
    brazo_2dof_B.tempR_tmp_d = brazo_2dof_B.v[2] * brazo_2dof_B.v[0] * (1.0 -
      brazo_2dof_B.cth);
    brazo_2dof_B.tempR_tmp_e = brazo_2dof_B.v[1] * brazo_2dof_B.sth;
    brazo_2dof_B.tempR_tmp_bj = brazo_2dof_B.v[2] * brazo_2dof_B.v[1] * (1.0 -
      brazo_2dof_B.cth);
    brazo_2dof_B.sth *= brazo_2dof_B.v[0];
    brazo_2dof_cat(brazo_2dof_B.v[0] * brazo_2dof_B.v[0] * (1.0 -
      brazo_2dof_B.cth) + brazo_2dof_B.cth, brazo_2dof_B.tempR_tmp -
                   brazo_2dof_B.tempR_tmp_b, brazo_2dof_B.tempR_tmp_d +
                   brazo_2dof_B.tempR_tmp_e, brazo_2dof_B.tempR_tmp +
                   brazo_2dof_B.tempR_tmp_b, brazo_2dof_B.v[1] * brazo_2dof_B.v
                   [1] * (1.0 - brazo_2dof_B.cth) + brazo_2dof_B.cth,
                   brazo_2dof_B.tempR_tmp_bj - brazo_2dof_B.sth,
                   brazo_2dof_B.tempR_tmp_d - brazo_2dof_B.tempR_tmp_e,
                   brazo_2dof_B.tempR_tmp_bj + brazo_2dof_B.sth, brazo_2dof_B.v
                   [2] * brazo_2dof_B.v[2] * (1.0 - brazo_2dof_B.cth) +
                   brazo_2dof_B.cth, brazo_2dof_B.tempR);
    for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 3; brazo_2dof_B.b_kstr++)
    {
      brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr + 1;
      brazo_2dof_B.R_g[brazo_2dof_B.loop_ub_c - 1] = brazo_2dof_B.tempR
        [(brazo_2dof_B.loop_ub_c - 1) * 3];
      brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr + 1;
      brazo_2dof_B.R_g[brazo_2dof_B.loop_ub_c + 2] = brazo_2dof_B.tempR
        [(brazo_2dof_B.loop_ub_c - 1) * 3 + 1];
      brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr + 1;
      brazo_2dof_B.R_g[brazo_2dof_B.loop_ub_c + 5] = brazo_2dof_B.tempR
        [(brazo_2dof_B.loop_ub_c - 1) * 3 + 2];
    }

    memset(&brazo_2dof_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 3; brazo_2dof_B.b_kstr++)
    {
      brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr << 2;
      brazo_2dof_B.TJ[brazo_2dof_B.loop_ub_c] = brazo_2dof_B.R_g[3 *
        brazo_2dof_B.b_kstr];
      brazo_2dof_B.TJ[brazo_2dof_B.loop_ub_c + 1] = brazo_2dof_B.R_g[3 *
        brazo_2dof_B.b_kstr + 1];
      brazo_2dof_B.TJ[brazo_2dof_B.loop_ub_c + 2] = brazo_2dof_B.R_g[3 *
        brazo_2dof_B.b_kstr + 2];
    }

    brazo_2dof_B.TJ[15] = 1.0;
    break;

   default:
    br_rigidBodyJoint_get_JointAxis(obj, brazo_2dof_B.v);
    memset(&brazo_2dof_B.tempR[0], 0, 9U * sizeof(real_T));
    brazo_2dof_B.tempR[0] = 1.0;
    brazo_2dof_B.tempR[4] = 1.0;
    brazo_2dof_B.tempR[8] = 1.0;
    for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 3; brazo_2dof_B.b_kstr++)
    {
      brazo_2dof_B.loop_ub_c = brazo_2dof_B.b_kstr << 2;
      brazo_2dof_B.TJ[brazo_2dof_B.loop_ub_c] = brazo_2dof_B.tempR[3 *
        brazo_2dof_B.b_kstr];
      brazo_2dof_B.TJ[brazo_2dof_B.loop_ub_c + 1] = brazo_2dof_B.tempR[3 *
        brazo_2dof_B.b_kstr + 1];
      brazo_2dof_B.TJ[brazo_2dof_B.loop_ub_c + 2] = brazo_2dof_B.tempR[3 *
        brazo_2dof_B.b_kstr + 2];
      brazo_2dof_B.TJ[brazo_2dof_B.b_kstr + 12] =
        brazo_2dof_B.v[brazo_2dof_B.b_kstr] * q_data[0];
    }

    brazo_2dof_B.TJ[3] = 0.0;
    brazo_2dof_B.TJ[7] = 0.0;
    brazo_2dof_B.TJ[11] = 0.0;
    brazo_2dof_B.TJ[15] = 1.0;
    break;
  }

  for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 16; brazo_2dof_B.b_kstr++)
  {
    brazo_2dof_B.a[brazo_2dof_B.b_kstr] = obj->
      JointToParentTransform[brazo_2dof_B.b_kstr];
  }

  for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 16; brazo_2dof_B.b_kstr++)
  {
    brazo_2dof_B.b[brazo_2dof_B.b_kstr] = obj->
      ChildToJointTransform[brazo_2dof_B.b_kstr];
  }

  for (brazo_2dof_B.b_kstr = 0; brazo_2dof_B.b_kstr < 4; brazo_2dof_B.b_kstr++)
  {
    for (brazo_2dof_B.loop_ub_c = 0; brazo_2dof_B.loop_ub_c < 4;
         brazo_2dof_B.loop_ub_c++) {
      brazo_2dof_B.a_tmp_tmp = brazo_2dof_B.loop_ub_c << 2;
      brazo_2dof_B.a_tmp = brazo_2dof_B.b_kstr + brazo_2dof_B.a_tmp_tmp;
      brazo_2dof_B.a_m[brazo_2dof_B.a_tmp] = 0.0;
      brazo_2dof_B.a_m[brazo_2dof_B.a_tmp] +=
        brazo_2dof_B.TJ[brazo_2dof_B.a_tmp_tmp] *
        brazo_2dof_B.a[brazo_2dof_B.b_kstr];
      brazo_2dof_B.a_m[brazo_2dof_B.a_tmp] +=
        brazo_2dof_B.TJ[brazo_2dof_B.a_tmp_tmp + 1] *
        brazo_2dof_B.a[brazo_2dof_B.b_kstr + 4];
      brazo_2dof_B.a_m[brazo_2dof_B.a_tmp] +=
        brazo_2dof_B.TJ[brazo_2dof_B.a_tmp_tmp + 2] *
        brazo_2dof_B.a[brazo_2dof_B.b_kstr + 8];
      brazo_2dof_B.a_m[brazo_2dof_B.a_tmp] +=
        brazo_2dof_B.TJ[brazo_2dof_B.a_tmp_tmp + 3] *
        brazo_2dof_B.a[brazo_2dof_B.b_kstr + 12];
    }

    for (brazo_2dof_B.loop_ub_c = 0; brazo_2dof_B.loop_ub_c < 4;
         brazo_2dof_B.loop_ub_c++) {
      brazo_2dof_B.a_tmp_tmp = brazo_2dof_B.loop_ub_c << 2;
      brazo_2dof_B.a_tmp = brazo_2dof_B.b_kstr + brazo_2dof_B.a_tmp_tmp;
      T[brazo_2dof_B.a_tmp] = 0.0;
      T[brazo_2dof_B.a_tmp] += brazo_2dof_B.b[brazo_2dof_B.a_tmp_tmp] *
        brazo_2dof_B.a_m[brazo_2dof_B.b_kstr];
      T[brazo_2dof_B.a_tmp] += brazo_2dof_B.b[brazo_2dof_B.a_tmp_tmp + 1] *
        brazo_2dof_B.a_m[brazo_2dof_B.b_kstr + 4];
      T[brazo_2dof_B.a_tmp] += brazo_2dof_B.b[brazo_2dof_B.a_tmp_tmp + 2] *
        brazo_2dof_B.a_m[brazo_2dof_B.b_kstr + 8];
      T[brazo_2dof_B.a_tmp] += brazo_2dof_B.b[brazo_2dof_B.a_tmp_tmp + 3] *
        brazo_2dof_B.a_m[brazo_2dof_B.b_kstr + 12];
    }
  }
}

static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_brazo_2dof_T
  *obj, real_T T[16])
{
  emxArray_char_T_brazo_2dof_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  brazo_2dof_emxInit_char_T(&switch_expression, 2);
  brazo_2dof_B.b_kstr_o = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  brazo__emxEnsureCapacity_char_T(switch_expression, brazo_2dof_B.b_kstr_o);
  brazo_2dof_B.loop_ub_i = obj->Type->size[0] * obj->Type->size[1] - 1;
  for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o <=
       brazo_2dof_B.loop_ub_i; brazo_2dof_B.b_kstr_o++) {
    switch_expression->data[brazo_2dof_B.b_kstr_o] = obj->Type->
      data[brazo_2dof_B.b_kstr_o];
  }

  for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 5;
       brazo_2dof_B.b_kstr_o++) {
    brazo_2dof_B.b_m3[brazo_2dof_B.b_kstr_o] = tmp[brazo_2dof_B.b_kstr_o];
  }

  brazo_2dof_B.b_bool_l = false;
  if (switch_expression->size[1] == 5) {
    brazo_2dof_B.b_kstr_o = 1;
    do {
      exitg1 = 0;
      if (brazo_2dof_B.b_kstr_o - 1 < 5) {
        brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o - 1;
        if (switch_expression->data[brazo_2dof_B.loop_ub_i] !=
            brazo_2dof_B.b_m3[brazo_2dof_B.loop_ub_i]) {
          exitg1 = 1;
        } else {
          brazo_2dof_B.b_kstr_o++;
        }
      } else {
        brazo_2dof_B.b_bool_l = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (brazo_2dof_B.b_bool_l) {
    brazo_2dof_B.b_kstr_o = 0;
  } else {
    for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 8;
         brazo_2dof_B.b_kstr_o++) {
      brazo_2dof_B.b_bs[brazo_2dof_B.b_kstr_o] = tmp_0[brazo_2dof_B.b_kstr_o];
    }

    brazo_2dof_B.b_bool_l = false;
    if (switch_expression->size[1] == 8) {
      brazo_2dof_B.b_kstr_o = 1;
      do {
        exitg1 = 0;
        if (brazo_2dof_B.b_kstr_o - 1 < 8) {
          brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o - 1;
          if (switch_expression->data[brazo_2dof_B.loop_ub_i] !=
              brazo_2dof_B.b_bs[brazo_2dof_B.loop_ub_i]) {
            exitg1 = 1;
          } else {
            brazo_2dof_B.b_kstr_o++;
          }
        } else {
          brazo_2dof_B.b_bool_l = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (brazo_2dof_B.b_bool_l) {
      brazo_2dof_B.b_kstr_o = 1;
    } else {
      brazo_2dof_B.b_kstr_o = -1;
    }
  }

  brazo_2dof_emxFree_char_T(&switch_expression);
  switch (brazo_2dof_B.b_kstr_o) {
   case 0:
    memset(&brazo_2dof_B.TJ_k[0], 0, sizeof(real_T) << 4U);
    brazo_2dof_B.TJ_k[0] = 1.0;
    brazo_2dof_B.TJ_k[5] = 1.0;
    brazo_2dof_B.TJ_k[10] = 1.0;
    brazo_2dof_B.TJ_k[15] = 1.0;
    break;

   case 1:
    br_rigidBodyJoint_get_JointAxis(obj, brazo_2dof_B.v_l);
    brazo_2dof_B.v_d[0] = brazo_2dof_B.v_l[0];
    brazo_2dof_B.v_d[1] = brazo_2dof_B.v_l[1];
    brazo_2dof_B.v_d[2] = brazo_2dof_B.v_l[2];
    brazo_2dof_normalizeRows(brazo_2dof_B.v_d, brazo_2dof_B.v_l);
    brazo_2dof_B.tempR_tmp_j = brazo_2dof_B.v_l[1] * brazo_2dof_B.v_l[0] * 0.0;
    brazo_2dof_B.tempR_tmp_o = brazo_2dof_B.v_l[2] * brazo_2dof_B.v_l[0] * 0.0;
    brazo_2dof_B.tempR_tmp_n = brazo_2dof_B.v_l[2] * brazo_2dof_B.v_l[1] * 0.0;
    brazo_2dof_cat(brazo_2dof_B.v_l[0] * brazo_2dof_B.v_l[0] * 0.0 + 1.0,
                   brazo_2dof_B.tempR_tmp_j - brazo_2dof_B.v_l[2] * 0.0,
                   brazo_2dof_B.tempR_tmp_o + brazo_2dof_B.v_l[1] * 0.0,
                   brazo_2dof_B.tempR_tmp_j + brazo_2dof_B.v_l[2] * 0.0,
                   brazo_2dof_B.v_l[1] * brazo_2dof_B.v_l[1] * 0.0 + 1.0,
                   brazo_2dof_B.tempR_tmp_n - brazo_2dof_B.v_l[0] * 0.0,
                   brazo_2dof_B.tempR_tmp_o - brazo_2dof_B.v_l[1] * 0.0,
                   brazo_2dof_B.tempR_tmp_n + brazo_2dof_B.v_l[0] * 0.0,
                   brazo_2dof_B.v_l[2] * brazo_2dof_B.v_l[2] * 0.0 + 1.0,
                   brazo_2dof_B.tempR_m);
    for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 3;
         brazo_2dof_B.b_kstr_o++) {
      brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o + 1;
      brazo_2dof_B.R_g1[brazo_2dof_B.loop_ub_i - 1] = brazo_2dof_B.tempR_m
        [(brazo_2dof_B.loop_ub_i - 1) * 3];
      brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o + 1;
      brazo_2dof_B.R_g1[brazo_2dof_B.loop_ub_i + 2] = brazo_2dof_B.tempR_m
        [(brazo_2dof_B.loop_ub_i - 1) * 3 + 1];
      brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o + 1;
      brazo_2dof_B.R_g1[brazo_2dof_B.loop_ub_i + 5] = brazo_2dof_B.tempR_m
        [(brazo_2dof_B.loop_ub_i - 1) * 3 + 2];
    }

    memset(&brazo_2dof_B.TJ_k[0], 0, sizeof(real_T) << 4U);
    for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 3;
         brazo_2dof_B.b_kstr_o++) {
      brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o << 2;
      brazo_2dof_B.TJ_k[brazo_2dof_B.loop_ub_i] = brazo_2dof_B.R_g1[3 *
        brazo_2dof_B.b_kstr_o];
      brazo_2dof_B.TJ_k[brazo_2dof_B.loop_ub_i + 1] = brazo_2dof_B.R_g1[3 *
        brazo_2dof_B.b_kstr_o + 1];
      brazo_2dof_B.TJ_k[brazo_2dof_B.loop_ub_i + 2] = brazo_2dof_B.R_g1[3 *
        brazo_2dof_B.b_kstr_o + 2];
    }

    brazo_2dof_B.TJ_k[15] = 1.0;
    break;

   default:
    br_rigidBodyJoint_get_JointAxis(obj, brazo_2dof_B.v_l);
    memset(&brazo_2dof_B.tempR_m[0], 0, 9U * sizeof(real_T));
    brazo_2dof_B.tempR_m[0] = 1.0;
    brazo_2dof_B.tempR_m[4] = 1.0;
    brazo_2dof_B.tempR_m[8] = 1.0;
    for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 3;
         brazo_2dof_B.b_kstr_o++) {
      brazo_2dof_B.loop_ub_i = brazo_2dof_B.b_kstr_o << 2;
      brazo_2dof_B.TJ_k[brazo_2dof_B.loop_ub_i] = brazo_2dof_B.tempR_m[3 *
        brazo_2dof_B.b_kstr_o];
      brazo_2dof_B.TJ_k[brazo_2dof_B.loop_ub_i + 1] = brazo_2dof_B.tempR_m[3 *
        brazo_2dof_B.b_kstr_o + 1];
      brazo_2dof_B.TJ_k[brazo_2dof_B.loop_ub_i + 2] = brazo_2dof_B.tempR_m[3 *
        brazo_2dof_B.b_kstr_o + 2];
      brazo_2dof_B.TJ_k[brazo_2dof_B.b_kstr_o + 12] =
        brazo_2dof_B.v_l[brazo_2dof_B.b_kstr_o] * 0.0;
    }

    brazo_2dof_B.TJ_k[3] = 0.0;
    brazo_2dof_B.TJ_k[7] = 0.0;
    brazo_2dof_B.TJ_k[11] = 0.0;
    brazo_2dof_B.TJ_k[15] = 1.0;
    break;
  }

  for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 16;
       brazo_2dof_B.b_kstr_o++) {
    brazo_2dof_B.a_c[brazo_2dof_B.b_kstr_o] = obj->
      JointToParentTransform[brazo_2dof_B.b_kstr_o];
  }

  for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 16;
       brazo_2dof_B.b_kstr_o++) {
    brazo_2dof_B.b_b[brazo_2dof_B.b_kstr_o] = obj->
      ChildToJointTransform[brazo_2dof_B.b_kstr_o];
  }

  for (brazo_2dof_B.b_kstr_o = 0; brazo_2dof_B.b_kstr_o < 4;
       brazo_2dof_B.b_kstr_o++) {
    for (brazo_2dof_B.loop_ub_i = 0; brazo_2dof_B.loop_ub_i < 4;
         brazo_2dof_B.loop_ub_i++) {
      brazo_2dof_B.a_tmp_tmp_i = brazo_2dof_B.loop_ub_i << 2;
      brazo_2dof_B.a_tmp_f = brazo_2dof_B.b_kstr_o + brazo_2dof_B.a_tmp_tmp_i;
      brazo_2dof_B.a_p[brazo_2dof_B.a_tmp_f] = 0.0;
      brazo_2dof_B.a_p[brazo_2dof_B.a_tmp_f] +=
        brazo_2dof_B.TJ_k[brazo_2dof_B.a_tmp_tmp_i] *
        brazo_2dof_B.a_c[brazo_2dof_B.b_kstr_o];
      brazo_2dof_B.a_p[brazo_2dof_B.a_tmp_f] +=
        brazo_2dof_B.TJ_k[brazo_2dof_B.a_tmp_tmp_i + 1] *
        brazo_2dof_B.a_c[brazo_2dof_B.b_kstr_o + 4];
      brazo_2dof_B.a_p[brazo_2dof_B.a_tmp_f] +=
        brazo_2dof_B.TJ_k[brazo_2dof_B.a_tmp_tmp_i + 2] *
        brazo_2dof_B.a_c[brazo_2dof_B.b_kstr_o + 8];
      brazo_2dof_B.a_p[brazo_2dof_B.a_tmp_f] +=
        brazo_2dof_B.TJ_k[brazo_2dof_B.a_tmp_tmp_i + 3] *
        brazo_2dof_B.a_c[brazo_2dof_B.b_kstr_o + 12];
    }

    for (brazo_2dof_B.loop_ub_i = 0; brazo_2dof_B.loop_ub_i < 4;
         brazo_2dof_B.loop_ub_i++) {
      brazo_2dof_B.a_tmp_tmp_i = brazo_2dof_B.loop_ub_i << 2;
      brazo_2dof_B.a_tmp_f = brazo_2dof_B.b_kstr_o + brazo_2dof_B.a_tmp_tmp_i;
      T[brazo_2dof_B.a_tmp_f] = 0.0;
      T[brazo_2dof_B.a_tmp_f] += brazo_2dof_B.b_b[brazo_2dof_B.a_tmp_tmp_i] *
        brazo_2dof_B.a_p[brazo_2dof_B.b_kstr_o];
      T[brazo_2dof_B.a_tmp_f] += brazo_2dof_B.b_b[brazo_2dof_B.a_tmp_tmp_i + 1] *
        brazo_2dof_B.a_p[brazo_2dof_B.b_kstr_o + 4];
      T[brazo_2dof_B.a_tmp_f] += brazo_2dof_B.b_b[brazo_2dof_B.a_tmp_tmp_i + 2] *
        brazo_2dof_B.a_p[brazo_2dof_B.b_kstr_o + 8];
      T[brazo_2dof_B.a_tmp_f] += brazo_2dof_B.b_b[brazo_2dof_B.a_tmp_tmp_i + 3] *
        brazo_2dof_B.a_p[brazo_2dof_B.b_kstr_o + 12];
    }
  }
}

static void brazo_2dof_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (brazo_2dof_B.i4 = 0; brazo_2dof_B.i4 < 3; brazo_2dof_B.i4++) {
    brazo_2dof_B.R_n[3 * brazo_2dof_B.i4] = T[brazo_2dof_B.i4];
    brazo_2dof_B.R_n[3 * brazo_2dof_B.i4 + 1] = T[brazo_2dof_B.i4 + 4];
    brazo_2dof_B.R_n[3 * brazo_2dof_B.i4 + 2] = T[brazo_2dof_B.i4 + 8];
  }

  for (brazo_2dof_B.i4 = 0; brazo_2dof_B.i4 < 9; brazo_2dof_B.i4++) {
    brazo_2dof_B.R_p[brazo_2dof_B.i4] = -brazo_2dof_B.R_n[brazo_2dof_B.i4];
  }

  for (brazo_2dof_B.i4 = 0; brazo_2dof_B.i4 < 3; brazo_2dof_B.i4++) {
    brazo_2dof_B.Tinv_tmp = brazo_2dof_B.i4 << 2;
    Tinv[brazo_2dof_B.Tinv_tmp] = brazo_2dof_B.R_n[3 * brazo_2dof_B.i4];
    Tinv[brazo_2dof_B.Tinv_tmp + 1] = brazo_2dof_B.R_n[3 * brazo_2dof_B.i4 + 1];
    Tinv[brazo_2dof_B.Tinv_tmp + 2] = brazo_2dof_B.R_n[3 * brazo_2dof_B.i4 + 2];
    Tinv[brazo_2dof_B.i4 + 12] = brazo_2dof_B.R_p[brazo_2dof_B.i4 + 6] * T[14] +
      (brazo_2dof_B.R_p[brazo_2dof_B.i4 + 3] * T[13] +
       brazo_2dof_B.R_p[brazo_2dof_B.i4] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void brazo_2dof_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  brazo_2dof_B.dv5[0] = 0.0;
  brazo_2dof_B.dv5[3] = -T[14];
  brazo_2dof_B.dv5[6] = T[13];
  brazo_2dof_B.dv5[1] = T[14];
  brazo_2dof_B.dv5[4] = 0.0;
  brazo_2dof_B.dv5[7] = -T[12];
  brazo_2dof_B.dv5[2] = -T[13];
  brazo_2dof_B.dv5[5] = T[12];
  brazo_2dof_B.dv5[8] = 0.0;
  for (brazo_2dof_B.i2 = 0; brazo_2dof_B.i2 < 3; brazo_2dof_B.i2++) {
    for (brazo_2dof_B.X_tmp = 0; brazo_2dof_B.X_tmp < 3; brazo_2dof_B.X_tmp++) {
      brazo_2dof_B.X_tmp_l = brazo_2dof_B.i2 + 3 * brazo_2dof_B.X_tmp;
      brazo_2dof_B.dv6[brazo_2dof_B.X_tmp_l] = 0.0;
      brazo_2dof_B.i3 = brazo_2dof_B.X_tmp << 2;
      brazo_2dof_B.dv6[brazo_2dof_B.X_tmp_l] += T[brazo_2dof_B.i3] *
        brazo_2dof_B.dv5[brazo_2dof_B.i2];
      brazo_2dof_B.dv6[brazo_2dof_B.X_tmp_l] += T[brazo_2dof_B.i3 + 1] *
        brazo_2dof_B.dv5[brazo_2dof_B.i2 + 3];
      brazo_2dof_B.dv6[brazo_2dof_B.X_tmp_l] += T[brazo_2dof_B.i3 + 2] *
        brazo_2dof_B.dv5[brazo_2dof_B.i2 + 6];
      X[brazo_2dof_B.X_tmp + 6 * brazo_2dof_B.i2] = T[(brazo_2dof_B.i2 << 2) +
        brazo_2dof_B.X_tmp];
      X[brazo_2dof_B.X_tmp + 6 * (brazo_2dof_B.i2 + 3)] = 0.0;
    }
  }

  for (brazo_2dof_B.i2 = 0; brazo_2dof_B.i2 < 3; brazo_2dof_B.i2++) {
    X[6 * brazo_2dof_B.i2 + 3] = brazo_2dof_B.dv6[3 * brazo_2dof_B.i2];
    brazo_2dof_B.X_tmp = brazo_2dof_B.i2 << 2;
    brazo_2dof_B.X_tmp_l = 6 * (brazo_2dof_B.i2 + 3);
    X[brazo_2dof_B.X_tmp_l + 3] = T[brazo_2dof_B.X_tmp];
    X[6 * brazo_2dof_B.i2 + 4] = brazo_2dof_B.dv6[3 * brazo_2dof_B.i2 + 1];
    X[brazo_2dof_B.X_tmp_l + 4] = T[brazo_2dof_B.X_tmp + 1];
    X[6 * brazo_2dof_B.i2 + 5] = brazo_2dof_B.dv6[3 * brazo_2dof_B.i2 + 2];
    X[brazo_2dof_B.X_tmp_l + 5] = T[brazo_2dof_B.X_tmp + 2];
  }
}

static void brazo_2dof_emxFree_real_T(emxArray_real_T_brazo_2dof_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_brazo_2dof_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_brazo_2dof_T *)NULL;
  }
}

static void brazo_2dof_emxFree_f_cell_wrap(emxArray_f_cell_wrap_brazo_2d_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_brazo_2d_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_brazo_2dof_T *)NULL) && (*pEmxArray
        )->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_brazo_2d_T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMatri(h_robotics_manip_internal_Rig_T
  *robot, const real_T q[2], emxArray_real_T_brazo_2dof_T *H,
  emxArray_real_T_brazo_2dof_T *lambda)
{
  emxArray_f_cell_wrap_brazo_2d_T *Ic;
  emxArray_f_cell_wrap_brazo_2d_T *X;
  emxArray_real_T_brazo_2dof_T *lambda_;
  emxArray_real_T_brazo_2dof_T *Si;
  emxArray_real_T_brazo_2dof_T *Fi;
  emxArray_real_T_brazo_2dof_T *Sj;
  emxArray_real_T_brazo_2dof_T *Hji;
  emxArray_real_T_brazo_2dof_T *s;
  g_robotics_manip_internal_Rig_T *obj;
  emxArray_char_T_brazo_2dof_T *a;
  emxArray_real_T_brazo_2dof_T *a_0;
  emxArray_real_T_brazo_2dof_T *B;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T exitg1;
  int32_T exitg2;
  brazo_2dof_B.nb_j = robot->NumBodies;
  brazo_2dof_B.vNum_f = robot->VelocityNumber;
  brazo_2dof_B.nm1d2 = H->size[0] * H->size[1];
  brazo_2dof_B.b_i = static_cast<int32_T>(brazo_2dof_B.vNum_f);
  H->size[0] = brazo_2dof_B.b_i;
  H->size[1] = brazo_2dof_B.b_i;
  brazo__emxEnsureCapacity_real_T(H, brazo_2dof_B.nm1d2);
  brazo_2dof_B.n_a = brazo_2dof_B.b_i * brazo_2dof_B.b_i - 1;
  for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
       brazo_2dof_B.nm1d2++) {
    H->data[brazo_2dof_B.nm1d2] = 0.0;
  }

  brazo_2dof_emxInit_real_T(&lambda_, 2);
  brazo_2dof_B.nm1d2 = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  brazo_2dof_B.unnamed_idx_1_o = static_cast<int32_T>(brazo_2dof_B.nb_j);
  lambda_->size[1] = brazo_2dof_B.unnamed_idx_1_o;
  brazo__emxEnsureCapacity_real_T(lambda_, brazo_2dof_B.nm1d2);
  brazo_2dof_B.idx = brazo_2dof_B.unnamed_idx_1_o - 1;
  for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.idx;
       brazo_2dof_B.nm1d2++) {
    lambda_->data[brazo_2dof_B.nm1d2] = 0.0;
  }

  brazo_2dof_B.nm1d2 = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = brazo_2dof_B.b_i;
  brazo__emxEnsureCapacity_real_T(lambda, brazo_2dof_B.nm1d2);
  brazo_2dof_B.n_a = brazo_2dof_B.b_i - 1;
  for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
       brazo_2dof_B.nm1d2++) {
    lambda->data[brazo_2dof_B.nm1d2] = 0.0;
  }

  brazo_2dof_emxInit_f_cell_wrap(&Ic, 2);
  brazo_2dof_emxInit_f_cell_wrap(&X, 2);
  brazo_2dof_B.nm1d2 = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = brazo_2dof_B.unnamed_idx_1_o;
  b_emxEnsureCapacity_f_cell_wrap(Ic, brazo_2dof_B.nm1d2);
  brazo_2dof_B.nm1d2 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = brazo_2dof_B.unnamed_idx_1_o;
  b_emxEnsureCapacity_f_cell_wrap(X, brazo_2dof_B.nm1d2);
  for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i <= brazo_2dof_B.idx;
       brazo_2dof_B.b_i++) {
    for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 36; brazo_2dof_B.nm1d2++)
    {
      Ic->data[brazo_2dof_B.b_i].f1[brazo_2dof_B.nm1d2] = robot->
        Bodies[brazo_2dof_B.b_i]->SpatialInertia[brazo_2dof_B.nm1d2];
    }

    brazo_2dof_B.vNum_f = robot->PositionDoFMap[brazo_2dof_B.b_i];
    brazo_2dof_B.p_idx_1 = robot->PositionDoFMap[brazo_2dof_B.b_i + 2];
    if (brazo_2dof_B.p_idx_1 < brazo_2dof_B.vNum_f) {
      obj = robot->Bodies[brazo_2dof_B.b_i];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, brazo_2dof_B.T_c);
    } else {
      if (brazo_2dof_B.vNum_f > brazo_2dof_B.p_idx_1) {
        brazo_2dof_B.unnamed_idx_1_o = 0;
        brazo_2dof_B.nm1d2 = -1;
      } else {
        brazo_2dof_B.unnamed_idx_1_o = static_cast<int32_T>(brazo_2dof_B.vNum_f)
          - 1;
        brazo_2dof_B.nm1d2 = static_cast<int32_T>(brazo_2dof_B.p_idx_1) - 1;
      }

      obj = robot->Bodies[brazo_2dof_B.b_i];
      brazo_2dof_B.q_size_tmp = brazo_2dof_B.nm1d2 -
        brazo_2dof_B.unnamed_idx_1_o;
      brazo_2dof_B.q_size_l = brazo_2dof_B.q_size_tmp + 1;
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.q_size_tmp;
           brazo_2dof_B.nm1d2++) {
        brazo_2dof_B.q_data_d[brazo_2dof_B.nm1d2] =
          q[brazo_2dof_B.unnamed_idx_1_o + brazo_2dof_B.nm1d2];
      }

      rigidBodyJoint_transformBodyT_c(&obj->JointInternal, brazo_2dof_B.q_data_d,
        &brazo_2dof_B.q_size_l, brazo_2dof_B.T_c);
    }

    brazo_2dof_tforminv(brazo_2dof_B.T_c, brazo_2dof_B.dv);
    brazo_2dof_tformToSpatialXform(brazo_2dof_B.dv, X->data[brazo_2dof_B.b_i].f1);
  }

  brazo_2dof_B.idx = static_cast<int32_T>(((-1.0 - brazo_2dof_B.nb_j) + 1.0) /
    -1.0) - 1;
  brazo_2dof_emxInit_real_T(&Si, 2);
  brazo_2dof_emxInit_real_T(&Fi, 2);
  brazo_2dof_emxInit_real_T(&Sj, 2);
  brazo_2dof_emxInit_real_T(&Hji, 2);
  brazo_2dof_emxInit_char_T(&a, 2);
  brazo_2dof_emxInit_real_T(&a_0, 2);
  brazo_2dof_emxInit_real_T(&B, 2);
  for (brazo_2dof_B.unnamed_idx_1_o = 0; brazo_2dof_B.unnamed_idx_1_o <=
       brazo_2dof_B.idx; brazo_2dof_B.unnamed_idx_1_o++) {
    brazo_2dof_B.pid_tmp = static_cast<int32_T>(brazo_2dof_B.nb_j + -
      static_cast<real_T>(brazo_2dof_B.unnamed_idx_1_o));
    brazo_2dof_B.q_size_tmp = brazo_2dof_B.pid_tmp - 1;
    brazo_2dof_B.pid = robot->Bodies[brazo_2dof_B.q_size_tmp]->ParentIndex;
    brazo_2dof_B.vNum_f = robot->VelocityDoFMap[brazo_2dof_B.pid_tmp - 1];
    brazo_2dof_B.p_idx_1 = robot->VelocityDoFMap[brazo_2dof_B.pid_tmp + 1];
    if (brazo_2dof_B.pid > 0.0) {
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 6; brazo_2dof_B.nm1d2++)
      {
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          brazo_2dof_B.n_a = brazo_2dof_B.nm1d2 + 6 * brazo_2dof_B.b_i;
          brazo_2dof_B.X[brazo_2dof_B.n_a] = 0.0;
          for (brazo_2dof_B.cb = 0; brazo_2dof_B.cb < 6; brazo_2dof_B.cb++) {
            brazo_2dof_B.X[brazo_2dof_B.n_a] += X->data[brazo_2dof_B.q_size_tmp]
              .f1[6 * brazo_2dof_B.nm1d2 + brazo_2dof_B.cb] * Ic->
              data[brazo_2dof_B.q_size_tmp].f1[6 * brazo_2dof_B.b_i +
              brazo_2dof_B.cb];
          }
        }
      }

      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 6; brazo_2dof_B.nm1d2++)
      {
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          brazo_2dof_B.b_idx_0_a = 0.0;
          for (brazo_2dof_B.cb = 0; brazo_2dof_B.cb < 6; brazo_2dof_B.cb++) {
            brazo_2dof_B.b_idx_0_a += brazo_2dof_B.X[6 * brazo_2dof_B.cb +
              brazo_2dof_B.nm1d2] * X->data[brazo_2dof_B.q_size_tmp].f1[6 *
              brazo_2dof_B.b_i + brazo_2dof_B.cb];
          }

          brazo_2dof_B.cb = 6 * brazo_2dof_B.b_i + brazo_2dof_B.nm1d2;
          Ic->data[static_cast<int32_T>(brazo_2dof_B.pid) - 1]
            .f1[brazo_2dof_B.cb] += brazo_2dof_B.b_idx_0_a;
        }
      }

      lambda_->data[brazo_2dof_B.q_size_tmp] = brazo_2dof_B.pid;
      if (lambda_->data[brazo_2dof_B.q_size_tmp] > 0.0) {
        for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 5; brazo_2dof_B.nm1d2
             ++) {
          brazo_2dof_B.b_md[brazo_2dof_B.nm1d2] = tmp[brazo_2dof_B.nm1d2];
        }
      }

      exitg1 = false;
      while ((!exitg1) && (lambda_->data[brazo_2dof_B.q_size_tmp] > 0.0)) {
        obj = robot->Bodies[static_cast<int32_T>(lambda_->
          data[brazo_2dof_B.q_size_tmp]) - 1];
        brazo_2dof_B.nm1d2 = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = obj->JointInternal.Type->size[1];
        brazo__emxEnsureCapacity_char_T(a, brazo_2dof_B.nm1d2);
        brazo_2dof_B.n_a = obj->JointInternal.Type->size[0] *
          obj->JointInternal.Type->size[1] - 1;
        for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
             brazo_2dof_B.nm1d2++) {
          a->data[brazo_2dof_B.nm1d2] = obj->JointInternal.Type->
            data[brazo_2dof_B.nm1d2];
        }

        brazo_2dof_B.b_bool_h = false;
        if (a->size[1] == 5) {
          brazo_2dof_B.nm1d2 = 1;
          do {
            exitg2 = 0;
            if (brazo_2dof_B.nm1d2 - 1 < 5) {
              brazo_2dof_B.n_a = brazo_2dof_B.nm1d2 - 1;
              if (a->data[brazo_2dof_B.n_a] !=
                  brazo_2dof_B.b_md[brazo_2dof_B.n_a]) {
                exitg2 = 1;
              } else {
                brazo_2dof_B.nm1d2++;
              }
            } else {
              brazo_2dof_B.b_bool_h = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (brazo_2dof_B.b_bool_h) {
          lambda_->data[brazo_2dof_B.q_size_tmp] = robot->Bodies
            [static_cast<int32_T>(lambda_->data[brazo_2dof_B.q_size_tmp]) - 1]
            ->ParentIndex;
        } else {
          exitg1 = true;
        }
      }
    }

    brazo_2dof_B.b_idx_0_a = robot->VelocityDoFMap[brazo_2dof_B.pid_tmp - 1];
    brazo_2dof_B.b_idx_1_j = robot->VelocityDoFMap[brazo_2dof_B.pid_tmp + 1];
    if (brazo_2dof_B.b_idx_0_a <= brazo_2dof_B.b_idx_1_j) {
      obj = robot->Bodies[brazo_2dof_B.q_size_tmp];
      brazo_2dof_B.nm1d2 = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      brazo__emxEnsureCapacity_real_T(Si, brazo_2dof_B.nm1d2);
      brazo_2dof_B.n_a = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
           brazo_2dof_B.nm1d2++) {
        Si->data[brazo_2dof_B.nm1d2] = obj->JointInternal.MotionSubspace->
          data[brazo_2dof_B.nm1d2];
      }

      brazo_2dof_B.n_a = Si->size[1] - 1;
      brazo_2dof_B.nm1d2 = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      brazo__emxEnsureCapacity_real_T(Fi, brazo_2dof_B.nm1d2);
      for (brazo_2dof_B.b_j = 0; brazo_2dof_B.b_j <= brazo_2dof_B.n_a;
           brazo_2dof_B.b_j++) {
        brazo_2dof_B.pid_tmp = brazo_2dof_B.b_j * 6 - 1;
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          Fi->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i) + 1] = 0.0;
        }

        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          brazo_2dof_B.aoffset_e = brazo_2dof_B.b_i * 6 - 1;
          brazo_2dof_B.temp = Si->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i)
            + 1];
          for (brazo_2dof_B.c_i_a = 0; brazo_2dof_B.c_i_a < 6;
               brazo_2dof_B.c_i_a++) {
            brazo_2dof_B.i_a = brazo_2dof_B.c_i_a + 1;
            brazo_2dof_B.nm1d2 = brazo_2dof_B.pid_tmp + brazo_2dof_B.i_a;
            Fi->data[brazo_2dof_B.nm1d2] += Ic->data[brazo_2dof_B.q_size_tmp]
              .f1[brazo_2dof_B.aoffset_e + brazo_2dof_B.i_a] * brazo_2dof_B.temp;
          }
        }
      }

      if (brazo_2dof_B.vNum_f > brazo_2dof_B.p_idx_1) {
        brazo_2dof_B.pid_tmp = 0;
        brazo_2dof_B.cb = 0;
      } else {
        brazo_2dof_B.pid_tmp = static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1;
        brazo_2dof_B.cb = static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1;
      }

      brazo_2dof_B.nm1d2 = a_0->size[0] * a_0->size[1];
      a_0->size[0] = Si->size[1];
      a_0->size[1] = 6;
      brazo__emxEnsureCapacity_real_T(a_0, brazo_2dof_B.nm1d2);
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 6; brazo_2dof_B.nm1d2++)
      {
        brazo_2dof_B.n_a = Si->size[1];
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.n_a;
             brazo_2dof_B.b_i++) {
          a_0->data[brazo_2dof_B.b_i + a_0->size[0] * brazo_2dof_B.nm1d2] =
            Si->data[6 * brazo_2dof_B.b_i + brazo_2dof_B.nm1d2];
        }
      }

      brazo_2dof_B.m_i = a_0->size[0];
      brazo_2dof_B.n_a = Fi->size[1] - 1;
      brazo_2dof_B.nm1d2 = Hji->size[0] * Hji->size[1];
      Hji->size[0] = a_0->size[0];
      Hji->size[1] = Fi->size[1];
      brazo__emxEnsureCapacity_real_T(Hji, brazo_2dof_B.nm1d2);
      for (brazo_2dof_B.b_j = 0; brazo_2dof_B.b_j <= brazo_2dof_B.n_a;
           brazo_2dof_B.b_j++) {
        brazo_2dof_B.coffset = brazo_2dof_B.b_j * brazo_2dof_B.m_i - 1;
        brazo_2dof_B.boffset = brazo_2dof_B.b_j * 6 - 1;
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.m_i;
             brazo_2dof_B.b_i++) {
          Hji->data[(brazo_2dof_B.coffset + brazo_2dof_B.b_i) + 1] = 0.0;
        }

        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          brazo_2dof_B.aoffset_e = brazo_2dof_B.b_i * brazo_2dof_B.m_i - 1;
          brazo_2dof_B.temp = Fi->data[(brazo_2dof_B.boffset + brazo_2dof_B.b_i)
            + 1];
          for (brazo_2dof_B.c_i_a = 0; brazo_2dof_B.c_i_a < brazo_2dof_B.m_i;
               brazo_2dof_B.c_i_a++) {
            brazo_2dof_B.i_a = brazo_2dof_B.c_i_a + 1;
            brazo_2dof_B.nm1d2 = brazo_2dof_B.coffset + brazo_2dof_B.i_a;
            Hji->data[brazo_2dof_B.nm1d2] += a_0->data[brazo_2dof_B.aoffset_e +
              brazo_2dof_B.i_a] * brazo_2dof_B.temp;
          }
        }
      }

      brazo_2dof_B.n_a = Hji->size[1];
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < brazo_2dof_B.n_a;
           brazo_2dof_B.nm1d2++) {
        brazo_2dof_B.b_j = Hji->size[0];
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.b_j;
             brazo_2dof_B.b_i++) {
          H->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i) + H->size[0] *
            (brazo_2dof_B.cb + brazo_2dof_B.nm1d2)] = Hji->data[Hji->size[0] *
            brazo_2dof_B.nm1d2 + brazo_2dof_B.b_i];
        }
      }

      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 6; brazo_2dof_B.nm1d2++)
      {
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          brazo_2dof_B.X[brazo_2dof_B.b_i + 6 * brazo_2dof_B.nm1d2] = X->
            data[brazo_2dof_B.q_size_tmp].f1[6 * brazo_2dof_B.b_i +
            brazo_2dof_B.nm1d2];
        }
      }

      brazo_2dof_B.nm1d2 = B->size[0] * B->size[1];
      B->size[0] = 6;
      B->size[1] = Fi->size[1];
      brazo__emxEnsureCapacity_real_T(B, brazo_2dof_B.nm1d2);
      brazo_2dof_B.n_a = Fi->size[0] * Fi->size[1] - 1;
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
           brazo_2dof_B.nm1d2++) {
        B->data[brazo_2dof_B.nm1d2] = Fi->data[brazo_2dof_B.nm1d2];
      }

      brazo_2dof_B.n_a = Fi->size[1];
      brazo_2dof_B.nm1d2 = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = brazo_2dof_B.n_a;
      brazo__emxEnsureCapacity_real_T(Fi, brazo_2dof_B.nm1d2);
      for (brazo_2dof_B.b_j = 0; brazo_2dof_B.b_j < brazo_2dof_B.n_a;
           brazo_2dof_B.b_j++) {
        brazo_2dof_B.pid_tmp = brazo_2dof_B.b_j * 6 - 1;
        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          Fi->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i) + 1] = 0.0;
        }

        for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
          brazo_2dof_B.aoffset_e = brazo_2dof_B.b_i * 6 - 1;
          brazo_2dof_B.temp = B->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i)
            + 1];
          for (brazo_2dof_B.c_i_a = 0; brazo_2dof_B.c_i_a < 6;
               brazo_2dof_B.c_i_a++) {
            brazo_2dof_B.i_a = brazo_2dof_B.c_i_a + 1;
            brazo_2dof_B.nm1d2 = brazo_2dof_B.pid_tmp + brazo_2dof_B.i_a;
            Fi->data[brazo_2dof_B.nm1d2] +=
              brazo_2dof_B.X[brazo_2dof_B.aoffset_e + brazo_2dof_B.i_a] *
              brazo_2dof_B.temp;
          }
        }
      }

      while (brazo_2dof_B.pid > 0.0) {
        brazo_2dof_B.b_i = static_cast<int32_T>(brazo_2dof_B.pid);
        brazo_2dof_B.q_size_tmp = brazo_2dof_B.b_i - 1;
        obj = robot->Bodies[brazo_2dof_B.q_size_tmp];
        brazo_2dof_B.nm1d2 = Sj->size[0] * Sj->size[1];
        Sj->size[0] = 6;
        Sj->size[1] = obj->JointInternal.MotionSubspace->size[1];
        brazo__emxEnsureCapacity_real_T(Sj, brazo_2dof_B.nm1d2);
        brazo_2dof_B.n_a = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
             brazo_2dof_B.nm1d2++) {
          Sj->data[brazo_2dof_B.nm1d2] = obj->JointInternal.MotionSubspace->
            data[brazo_2dof_B.nm1d2];
        }

        brazo_2dof_B.b_idx_0_a = robot->VelocityDoFMap[brazo_2dof_B.b_i - 1];
        brazo_2dof_B.b_idx_1_j = robot->VelocityDoFMap[brazo_2dof_B.b_i + 1];
        if (brazo_2dof_B.b_idx_0_a <= brazo_2dof_B.b_idx_1_j) {
          brazo_2dof_B.nm1d2 = a_0->size[0] * a_0->size[1];
          a_0->size[0] = Sj->size[1];
          a_0->size[1] = 6;
          brazo__emxEnsureCapacity_real_T(a_0, brazo_2dof_B.nm1d2);
          for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 6;
               brazo_2dof_B.nm1d2++) {
            brazo_2dof_B.n_a = Sj->size[1];
            for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.n_a;
                 brazo_2dof_B.b_i++) {
              a_0->data[brazo_2dof_B.b_i + a_0->size[0] * brazo_2dof_B.nm1d2] =
                Sj->data[6 * brazo_2dof_B.b_i + brazo_2dof_B.nm1d2];
            }
          }

          brazo_2dof_B.m_i = a_0->size[0];
          brazo_2dof_B.n_a = Fi->size[1] - 1;
          brazo_2dof_B.nm1d2 = Hji->size[0] * Hji->size[1];
          Hji->size[0] = a_0->size[0];
          Hji->size[1] = Fi->size[1];
          brazo__emxEnsureCapacity_real_T(Hji, brazo_2dof_B.nm1d2);
          for (brazo_2dof_B.b_j = 0; brazo_2dof_B.b_j <= brazo_2dof_B.n_a;
               brazo_2dof_B.b_j++) {
            brazo_2dof_B.coffset = brazo_2dof_B.b_j * brazo_2dof_B.m_i - 1;
            brazo_2dof_B.boffset = brazo_2dof_B.b_j * 6 - 1;
            for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.m_i;
                 brazo_2dof_B.b_i++) {
              Hji->data[(brazo_2dof_B.coffset + brazo_2dof_B.b_i) + 1] = 0.0;
            }

            for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++)
            {
              brazo_2dof_B.aoffset_e = brazo_2dof_B.b_i * brazo_2dof_B.m_i - 1;
              brazo_2dof_B.temp = Fi->data[(brazo_2dof_B.boffset +
                brazo_2dof_B.b_i) + 1];
              for (brazo_2dof_B.c_i_a = 0; brazo_2dof_B.c_i_a < brazo_2dof_B.m_i;
                   brazo_2dof_B.c_i_a++) {
                brazo_2dof_B.i_a = brazo_2dof_B.c_i_a + 1;
                brazo_2dof_B.nm1d2 = brazo_2dof_B.coffset + brazo_2dof_B.i_a;
                Hji->data[brazo_2dof_B.nm1d2] += a_0->
                  data[brazo_2dof_B.aoffset_e + brazo_2dof_B.i_a] *
                  brazo_2dof_B.temp;
              }
            }
          }

          if (brazo_2dof_B.b_idx_0_a > brazo_2dof_B.b_idx_1_j) {
            brazo_2dof_B.pid_tmp = 0;
          } else {
            brazo_2dof_B.pid_tmp = static_cast<int32_T>(brazo_2dof_B.b_idx_0_a)
              - 1;
          }

          if (brazo_2dof_B.vNum_f > brazo_2dof_B.p_idx_1) {
            brazo_2dof_B.cb = 0;
          } else {
            brazo_2dof_B.cb = static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1;
          }

          brazo_2dof_B.n_a = Hji->size[1];
          for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < brazo_2dof_B.n_a;
               brazo_2dof_B.nm1d2++) {
            brazo_2dof_B.b_j = Hji->size[0];
            for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.b_j;
                 brazo_2dof_B.b_i++) {
              H->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i) + H->size[0] *
                (brazo_2dof_B.cb + brazo_2dof_B.nm1d2)] = Hji->data[Hji->size[0]
                * brazo_2dof_B.nm1d2 + brazo_2dof_B.b_i];
            }
          }

          if (brazo_2dof_B.vNum_f > brazo_2dof_B.p_idx_1) {
            brazo_2dof_B.pid_tmp = 0;
          } else {
            brazo_2dof_B.pid_tmp = static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1;
          }

          if (brazo_2dof_B.b_idx_0_a > brazo_2dof_B.b_idx_1_j) {
            brazo_2dof_B.cb = 0;
          } else {
            brazo_2dof_B.cb = static_cast<int32_T>(brazo_2dof_B.b_idx_0_a) - 1;
          }

          brazo_2dof_B.n_a = Hji->size[0];
          for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < brazo_2dof_B.n_a;
               brazo_2dof_B.nm1d2++) {
            brazo_2dof_B.b_j = Hji->size[1];
            for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < brazo_2dof_B.b_j;
                 brazo_2dof_B.b_i++) {
              H->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i) + H->size[0] *
                (brazo_2dof_B.cb + brazo_2dof_B.nm1d2)] = Hji->data[Hji->size[0]
                * brazo_2dof_B.b_i + brazo_2dof_B.nm1d2];
            }
          }
        }

        for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < 6; brazo_2dof_B.nm1d2
             ++) {
          for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
            brazo_2dof_B.X[brazo_2dof_B.b_i + 6 * brazo_2dof_B.nm1d2] = X->
              data[brazo_2dof_B.q_size_tmp].f1[6 * brazo_2dof_B.b_i +
              brazo_2dof_B.nm1d2];
          }
        }

        brazo_2dof_B.nm1d2 = B->size[0] * B->size[1];
        B->size[0] = 6;
        B->size[1] = Fi->size[1];
        brazo__emxEnsureCapacity_real_T(B, brazo_2dof_B.nm1d2);
        brazo_2dof_B.n_a = Fi->size[0] * Fi->size[1] - 1;
        for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
             brazo_2dof_B.nm1d2++) {
          B->data[brazo_2dof_B.nm1d2] = Fi->data[brazo_2dof_B.nm1d2];
        }

        brazo_2dof_B.n_a = Fi->size[1];
        brazo_2dof_B.nm1d2 = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = brazo_2dof_B.n_a;
        brazo__emxEnsureCapacity_real_T(Fi, brazo_2dof_B.nm1d2);
        for (brazo_2dof_B.b_j = 0; brazo_2dof_B.b_j < brazo_2dof_B.n_a;
             brazo_2dof_B.b_j++) {
          brazo_2dof_B.pid_tmp = brazo_2dof_B.b_j * 6 - 1;
          for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
            Fi->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i) + 1] = 0.0;
          }

          for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i < 6; brazo_2dof_B.b_i++) {
            brazo_2dof_B.aoffset_e = brazo_2dof_B.b_i * 6 - 1;
            brazo_2dof_B.temp = B->data[(brazo_2dof_B.pid_tmp + brazo_2dof_B.b_i)
              + 1];
            for (brazo_2dof_B.c_i_a = 0; brazo_2dof_B.c_i_a < 6;
                 brazo_2dof_B.c_i_a++) {
              brazo_2dof_B.i_a = brazo_2dof_B.c_i_a + 1;
              brazo_2dof_B.nm1d2 = brazo_2dof_B.pid_tmp + brazo_2dof_B.i_a;
              Fi->data[brazo_2dof_B.nm1d2] +=
                brazo_2dof_B.X[brazo_2dof_B.aoffset_e + brazo_2dof_B.i_a] *
                brazo_2dof_B.temp;
            }
          }
        }

        brazo_2dof_B.pid = robot->Bodies[brazo_2dof_B.q_size_tmp]->ParentIndex;
      }
    }
  }

  brazo_2dof_emxFree_real_T(&B);
  brazo_2dof_emxFree_real_T(&a_0);
  brazo_2dof_emxFree_char_T(&a);
  brazo_2dof_emxFree_real_T(&Hji);
  brazo_2dof_emxFree_real_T(&Sj);
  brazo_2dof_emxFree_real_T(&Fi);
  brazo_2dof_emxFree_real_T(&Si);
  brazo_2dof_emxFree_f_cell_wrap(&X);
  brazo_2dof_emxFree_f_cell_wrap(&Ic);
  brazo_2dof_B.mask[0] = (robot->VelocityDoFMap[0] <= robot->VelocityDoFMap[2]);
  brazo_2dof_B.mask[1] = (robot->VelocityDoFMap[1] <= robot->VelocityDoFMap[3]);
  brazo_2dof_B.idx = 0;
  brazo_2dof_B.nm1d2 = 1;
  exitg1 = false;
  while ((!exitg1) && (brazo_2dof_B.nm1d2 - 1 < 2)) {
    if (brazo_2dof_B.mask[brazo_2dof_B.nm1d2 - 1]) {
      brazo_2dof_B.idx++;
      brazo_2dof_B.ii_data[brazo_2dof_B.idx - 1] = brazo_2dof_B.nm1d2;
      if (brazo_2dof_B.idx >= 2) {
        exitg1 = true;
      } else {
        brazo_2dof_B.nm1d2++;
      }
    } else {
      brazo_2dof_B.nm1d2++;
    }
  }

  if (1 > brazo_2dof_B.idx) {
    brazo_2dof_B.idx = 0;
  }

  for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < brazo_2dof_B.idx;
       brazo_2dof_B.nm1d2++) {
    brazo_2dof_B.nonFixedIndices_data[brazo_2dof_B.nm1d2] =
      brazo_2dof_B.ii_data[brazo_2dof_B.nm1d2];
  }

  brazo_2dof_B.idx--;
  brazo_2dof_emxInit_real_T(&s, 2);
  for (brazo_2dof_B.unnamed_idx_1_o = 0; brazo_2dof_B.unnamed_idx_1_o <=
       brazo_2dof_B.idx; brazo_2dof_B.unnamed_idx_1_o++) {
    brazo_2dof_B.vNum_f = robot->
      VelocityDoFMap[brazo_2dof_B.nonFixedIndices_data[brazo_2dof_B.unnamed_idx_1_o]
      - 1];
    brazo_2dof_B.p_idx_1 = robot->
      VelocityDoFMap[brazo_2dof_B.nonFixedIndices_data[brazo_2dof_B.unnamed_idx_1_o]
      + 1];
    if (rtIsNaN(brazo_2dof_B.vNum_f) || rtIsNaN(brazo_2dof_B.p_idx_1)) {
      brazo_2dof_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      brazo__emxEnsureCapacity_real_T(s, brazo_2dof_B.nm1d2);
      s->data[0] = (rtNaN);
    } else if (brazo_2dof_B.p_idx_1 < brazo_2dof_B.vNum_f) {
      s->size[0] = 1;
      s->size[1] = 0;
    } else if ((rtIsInf(brazo_2dof_B.vNum_f) || rtIsInf(brazo_2dof_B.p_idx_1)) &&
               (brazo_2dof_B.vNum_f == brazo_2dof_B.p_idx_1)) {
      brazo_2dof_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      brazo__emxEnsureCapacity_real_T(s, brazo_2dof_B.nm1d2);
      s->data[0] = (rtNaN);
    } else if (floor(brazo_2dof_B.vNum_f) == brazo_2dof_B.vNum_f) {
      brazo_2dof_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      brazo_2dof_B.n_a = static_cast<int32_T>(floor(brazo_2dof_B.p_idx_1 -
        brazo_2dof_B.vNum_f));
      s->size[1] = brazo_2dof_B.n_a + 1;
      brazo__emxEnsureCapacity_real_T(s, brazo_2dof_B.nm1d2);
      for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 <= brazo_2dof_B.n_a;
           brazo_2dof_B.nm1d2++) {
        s->data[brazo_2dof_B.nm1d2] = brazo_2dof_B.vNum_f + static_cast<real_T>
          (brazo_2dof_B.nm1d2);
      }
    } else {
      brazo_2dof_B.nb_j = floor((brazo_2dof_B.p_idx_1 - brazo_2dof_B.vNum_f) +
        0.5);
      brazo_2dof_B.pid = brazo_2dof_B.vNum_f + brazo_2dof_B.nb_j;
      brazo_2dof_B.b_idx_0_a = brazo_2dof_B.pid - brazo_2dof_B.p_idx_1;
      brazo_2dof_B.b_idx_1_j = fabs(brazo_2dof_B.vNum_f);
      brazo_2dof_B.temp = fabs(brazo_2dof_B.p_idx_1);
      if ((brazo_2dof_B.b_idx_1_j > brazo_2dof_B.temp) || rtIsNaN
          (brazo_2dof_B.temp)) {
        brazo_2dof_B.temp = brazo_2dof_B.b_idx_1_j;
      }

      if (fabs(brazo_2dof_B.b_idx_0_a) < 4.4408920985006262E-16 *
          brazo_2dof_B.temp) {
        brazo_2dof_B.nb_j++;
        brazo_2dof_B.pid = brazo_2dof_B.p_idx_1;
      } else if (brazo_2dof_B.b_idx_0_a > 0.0) {
        brazo_2dof_B.pid = (brazo_2dof_B.nb_j - 1.0) + brazo_2dof_B.vNum_f;
      } else {
        brazo_2dof_B.nb_j++;
      }

      if (brazo_2dof_B.nb_j >= 0.0) {
        brazo_2dof_B.nm1d2 = static_cast<int32_T>(brazo_2dof_B.nb_j);
      } else {
        brazo_2dof_B.nm1d2 = 0;
      }

      brazo_2dof_B.n_a = brazo_2dof_B.nm1d2 - 1;
      brazo_2dof_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = brazo_2dof_B.n_a + 1;
      brazo__emxEnsureCapacity_real_T(s, brazo_2dof_B.nm1d2);
      if (brazo_2dof_B.n_a + 1 > 0) {
        s->data[0] = brazo_2dof_B.vNum_f;
        if (brazo_2dof_B.n_a + 1 > 1) {
          s->data[brazo_2dof_B.n_a] = brazo_2dof_B.pid;
          brazo_2dof_B.nm1d2 = brazo_2dof_B.n_a / 2;
          brazo_2dof_B.q_size_tmp = brazo_2dof_B.nm1d2 - 2;
          for (brazo_2dof_B.b_i = 0; brazo_2dof_B.b_i <= brazo_2dof_B.q_size_tmp;
               brazo_2dof_B.b_i++) {
            brazo_2dof_B.pid_tmp = brazo_2dof_B.b_i + 1;
            s->data[brazo_2dof_B.pid_tmp] = brazo_2dof_B.vNum_f +
              static_cast<real_T>(brazo_2dof_B.pid_tmp);
            s->data[brazo_2dof_B.n_a - brazo_2dof_B.pid_tmp] = brazo_2dof_B.pid
              - static_cast<real_T>(brazo_2dof_B.pid_tmp);
          }

          if (brazo_2dof_B.nm1d2 << 1 == brazo_2dof_B.n_a) {
            s->data[brazo_2dof_B.nm1d2] = (brazo_2dof_B.vNum_f +
              brazo_2dof_B.pid) / 2.0;
          } else {
            s->data[brazo_2dof_B.nm1d2] = brazo_2dof_B.vNum_f +
              static_cast<real_T>(brazo_2dof_B.nm1d2);
            s->data[brazo_2dof_B.nm1d2 + 1] = brazo_2dof_B.pid -
              static_cast<real_T>(brazo_2dof_B.nm1d2);
          }
        }
      }
    }

    if (brazo_2dof_B.vNum_f > brazo_2dof_B.p_idx_1) {
      brazo_2dof_B.q_size_tmp = 0;
    } else {
      brazo_2dof_B.q_size_tmp = static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1;
    }

    brazo_2dof_B.n_a = s->size[1];
    for (brazo_2dof_B.nm1d2 = 0; brazo_2dof_B.nm1d2 < brazo_2dof_B.n_a;
         brazo_2dof_B.nm1d2++) {
      lambda->data[brazo_2dof_B.q_size_tmp + brazo_2dof_B.nm1d2] = s->
        data[brazo_2dof_B.nm1d2] - 1.0;
    }

    if (lambda_->
        data[brazo_2dof_B.nonFixedIndices_data[brazo_2dof_B.unnamed_idx_1_o] - 1]
        == 0.0) {
      lambda->data[static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1] = 0.0;
    } else {
      brazo_2dof_B.nm1d2 = static_cast<int32_T>(lambda_->
        data[brazo_2dof_B.nonFixedIndices_data[brazo_2dof_B.unnamed_idx_1_o] - 1]);
      brazo_2dof_B.b_idx_1_j = robot->VelocityDoFMap[brazo_2dof_B.nm1d2 + 1];
      lambda->data[static_cast<int32_T>(brazo_2dof_B.vNum_f) - 1] =
        brazo_2dof_B.b_idx_1_j;
    }
  }

  brazo_2dof_emxFree_real_T(&s);
  brazo_2dof_emxFree_real_T(&lambda_);
}

static void RigidBodyTreeDynamics_inverseDy(h_robotics_manip_internal_Rig_T
  *robot, const real_T q[2], const real_T qdot[2], const
  emxArray_real_T_brazo_2dof_T *qddot, const real_T fext[12], real_T tau[2])
{
  emxArray_f_cell_wrap_brazo_2d_T *X;
  emxArray_f_cell_wrap_brazo_2d_T *Xtree;
  emxArray_real_T_brazo_2dof_T *vJ;
  emxArray_real_T_brazo_2dof_T *vB;
  emxArray_real_T_brazo_2dof_T *aB;
  emxArray_real_T_brazo_2dof_T *f;
  emxArray_real_T_brazo_2dof_T *S;
  emxArray_real_T_brazo_2dof_T *qddoti;
  g_robotics_manip_internal_Rig_T *obj;
  emxArray_char_T_brazo_2dof_T *a;
  emxArray_real_T_brazo_2dof_T *a_0;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  brazo_2dof_B.a0[0] = 0.0;
  brazo_2dof_B.a0[1] = 0.0;
  brazo_2dof_B.a0[2] = 0.0;
  brazo_2dof_B.a0[3] = -robot->Gravity[0];
  brazo_2dof_B.a0[4] = -robot->Gravity[1];
  brazo_2dof_B.a0[5] = -robot->Gravity[2];
  brazo_2dof_emxInit_real_T(&vJ, 2);
  brazo_2dof_B.nb = robot->NumBodies;
  brazo_2dof_B.b_k_h = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  brazo_2dof_B.unnamed_idx_1 = static_cast<int32_T>(brazo_2dof_B.nb);
  vJ->size[1] = brazo_2dof_B.unnamed_idx_1;
  brazo__emxEnsureCapacity_real_T(vJ, brazo_2dof_B.b_k_h);
  brazo_2dof_B.loop_ub_tmp = 6 * brazo_2dof_B.unnamed_idx_1 - 1;
  for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.loop_ub_tmp;
       brazo_2dof_B.b_k_h++) {
    vJ->data[brazo_2dof_B.b_k_h] = 0.0;
  }

  brazo_2dof_emxInit_real_T(&vB, 2);
  brazo_2dof_B.b_k_h = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = brazo_2dof_B.unnamed_idx_1;
  brazo__emxEnsureCapacity_real_T(vB, brazo_2dof_B.b_k_h);
  for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.loop_ub_tmp;
       brazo_2dof_B.b_k_h++) {
    vB->data[brazo_2dof_B.b_k_h] = 0.0;
  }

  brazo_2dof_emxInit_real_T(&aB, 2);
  brazo_2dof_B.b_k_h = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = brazo_2dof_B.unnamed_idx_1;
  brazo__emxEnsureCapacity_real_T(aB, brazo_2dof_B.b_k_h);
  for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.loop_ub_tmp;
       brazo_2dof_B.b_k_h++) {
    aB->data[brazo_2dof_B.b_k_h] = 0.0;
  }

  tau[0] = 0.0;
  tau[1] = 0.0;
  brazo_2dof_emxInit_f_cell_wrap(&X, 2);
  brazo_2dof_emxInit_f_cell_wrap(&Xtree, 2);
  brazo_2dof_B.loop_ub_tmp = brazo_2dof_B.unnamed_idx_1 - 1;
  brazo_2dof_B.b_k_h = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = brazo_2dof_B.unnamed_idx_1;
  b_emxEnsureCapacity_f_cell_wrap(Xtree, brazo_2dof_B.b_k_h);
  brazo_2dof_B.b_k_h = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = brazo_2dof_B.unnamed_idx_1;
  b_emxEnsureCapacity_f_cell_wrap(X, brazo_2dof_B.b_k_h);
  for (brazo_2dof_B.b_k = 0; brazo_2dof_B.b_k <= brazo_2dof_B.loop_ub_tmp;
       brazo_2dof_B.b_k++) {
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 36; brazo_2dof_B.b_k_h++)
    {
      Xtree->data[brazo_2dof_B.b_k].f1[brazo_2dof_B.b_k_h] = 0.0;
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++) {
      Xtree->data[brazo_2dof_B.b_k].f1[brazo_2dof_B.b_k_h + 6 *
        brazo_2dof_B.b_k_h] = 1.0;
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 36; brazo_2dof_B.b_k_h++)
    {
      X->data[brazo_2dof_B.b_k].f1[brazo_2dof_B.b_k_h] = 0.0;
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++) {
      X->data[brazo_2dof_B.b_k].f1[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.b_k_h] =
        1.0;
    }
  }

  brazo_2dof_emxInit_real_T(&f, 2);
  brazo_2dof_B.b_k_h = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = brazo_2dof_B.unnamed_idx_1;
  brazo__emxEnsureCapacity_real_T(f, brazo_2dof_B.b_k_h);
  brazo_2dof_emxInit_real_T(&S, 2);
  brazo_2dof_emxInit_real_T(&qddoti, 1);
  if (0 <= brazo_2dof_B.loop_ub_tmp) {
    brazo_2dof_B.dv2[0] = 0.0;
    brazo_2dof_B.dv2[4] = 0.0;
    brazo_2dof_B.dv2[8] = 0.0;
  }

  for (brazo_2dof_B.unnamed_idx_1 = 0; brazo_2dof_B.unnamed_idx_1 <=
       brazo_2dof_B.loop_ub_tmp; brazo_2dof_B.unnamed_idx_1++) {
    obj = robot->Bodies[brazo_2dof_B.unnamed_idx_1];
    brazo_2dof_B.b_k_h = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    brazo__emxEnsureCapacity_real_T(S, brazo_2dof_B.b_k_h);
    brazo_2dof_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.b_k;
         brazo_2dof_B.b_k_h++) {
      S->data[brazo_2dof_B.b_k_h] = obj->JointInternal.MotionSubspace->
        data[brazo_2dof_B.b_k_h];
    }

    brazo_2dof_B.a_idx_0 = robot->PositionDoFMap[brazo_2dof_B.unnamed_idx_1];
    brazo_2dof_B.a_idx_1 = robot->PositionDoFMap[brazo_2dof_B.unnamed_idx_1 + 2];
    brazo_2dof_B.b_idx_0 = robot->VelocityDoFMap[brazo_2dof_B.unnamed_idx_1];
    brazo_2dof_B.b_idx_1 = robot->VelocityDoFMap[brazo_2dof_B.unnamed_idx_1 + 2];
    if (brazo_2dof_B.a_idx_1 < brazo_2dof_B.a_idx_0) {
      obj = robot->Bodies[brazo_2dof_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, brazo_2dof_B.T);
      brazo_2dof_B.b_k_h = qddoti->size[0];
      qddoti->size[0] = 1;
      brazo__emxEnsureCapacity_real_T(qddoti, brazo_2dof_B.b_k_h);
      qddoti->data[0] = 0.0;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        vJ->data[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (brazo_2dof_B.a_idx_0 > brazo_2dof_B.a_idx_1) {
        brazo_2dof_B.inner = 0;
        brazo_2dof_B.m = -1;
      } else {
        brazo_2dof_B.inner = static_cast<int32_T>(brazo_2dof_B.a_idx_0) - 1;
        brazo_2dof_B.m = static_cast<int32_T>(brazo_2dof_B.a_idx_1) - 1;
      }

      if (brazo_2dof_B.b_idx_0 > brazo_2dof_B.b_idx_1) {
        brazo_2dof_B.p_tmp = 0;
        brazo_2dof_B.o_tmp = 0;
        brazo_2dof_B.aoffset = 0;
        brazo_2dof_B.b_k = -1;
      } else {
        brazo_2dof_B.p_tmp = static_cast<int32_T>(brazo_2dof_B.b_idx_0) - 1;
        brazo_2dof_B.o_tmp = static_cast<int32_T>(brazo_2dof_B.b_idx_1);
        brazo_2dof_B.aoffset = brazo_2dof_B.p_tmp;
        brazo_2dof_B.b_k = brazo_2dof_B.o_tmp - 1;
      }

      brazo_2dof_B.b_k_h = qddoti->size[0];
      brazo_2dof_B.b_k -= brazo_2dof_B.aoffset;
      qddoti->size[0] = brazo_2dof_B.b_k + 1;
      brazo__emxEnsureCapacity_real_T(qddoti, brazo_2dof_B.b_k_h);
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.b_k;
           brazo_2dof_B.b_k_h++) {
        qddoti->data[brazo_2dof_B.b_k_h] = qddot->data[brazo_2dof_B.aoffset +
          brazo_2dof_B.b_k_h];
      }

      obj = robot->Bodies[brazo_2dof_B.unnamed_idx_1];
      brazo_2dof_B.m -= brazo_2dof_B.inner;
      brazo_2dof_B.q_size = brazo_2dof_B.m + 1;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.m;
           brazo_2dof_B.b_k_h++) {
        brazo_2dof_B.q_data[brazo_2dof_B.b_k_h] = q[brazo_2dof_B.inner +
          brazo_2dof_B.b_k_h];
      }

      rigidBodyJoint_transformBodyT_c(&obj->JointInternal, brazo_2dof_B.q_data,
        &brazo_2dof_B.q_size, brazo_2dof_B.T);
      if ((S->size[1] == 1) || (brazo_2dof_B.o_tmp - brazo_2dof_B.p_tmp == 1)) {
        for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h
             ++) {
          brazo_2dof_B.aoffset = brazo_2dof_B.b_k_h + 6 *
            brazo_2dof_B.unnamed_idx_1;
          vJ->data[brazo_2dof_B.aoffset] = 0.0;
          brazo_2dof_B.b_k = S->size[1];
          for (brazo_2dof_B.inner = 0; brazo_2dof_B.inner < brazo_2dof_B.b_k;
               brazo_2dof_B.inner++) {
            vJ->data[brazo_2dof_B.aoffset] += S->data[6 * brazo_2dof_B.inner +
              brazo_2dof_B.b_k_h] * qdot[brazo_2dof_B.p_tmp + brazo_2dof_B.inner];
          }
        }
      } else {
        brazo_2dof_B.inner = S->size[1] - 1;
        for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h
             ++) {
          vJ->data[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.unnamed_idx_1] = 0.0;
        }

        for (brazo_2dof_B.b_k = 0; brazo_2dof_B.b_k <= brazo_2dof_B.inner;
             brazo_2dof_B.b_k++) {
          brazo_2dof_B.aoffset = brazo_2dof_B.b_k * 6 - 1;
          for (brazo_2dof_B.c_i = 0; brazo_2dof_B.c_i < 6; brazo_2dof_B.c_i++) {
            brazo_2dof_B.b_k_h = 6 * brazo_2dof_B.unnamed_idx_1 +
              brazo_2dof_B.c_i;
            vJ->data[brazo_2dof_B.b_k_h] += S->data[(brazo_2dof_B.aoffset +
              brazo_2dof_B.c_i) + 1] * qdot[brazo_2dof_B.p_tmp +
              brazo_2dof_B.b_k];
          }
        }
      }
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.R_c[3 * brazo_2dof_B.b_k_h] =
        brazo_2dof_B.T[brazo_2dof_B.b_k_h];
      brazo_2dof_B.R_c[3 * brazo_2dof_B.b_k_h + 1] =
        brazo_2dof_B.T[brazo_2dof_B.b_k_h + 4];
      brazo_2dof_B.R_c[3 * brazo_2dof_B.b_k_h + 2] =
        brazo_2dof_B.T[brazo_2dof_B.b_k_h + 8];
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 9; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.R_f[brazo_2dof_B.b_k_h] =
        -brazo_2dof_B.R_c[brazo_2dof_B.b_k_h];
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.p_tmp = brazo_2dof_B.b_k_h << 2;
      brazo_2dof_B.Tinv[brazo_2dof_B.p_tmp] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h];
      brazo_2dof_B.Tinv[brazo_2dof_B.p_tmp + 1] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h + 1];
      brazo_2dof_B.Tinv[brazo_2dof_B.p_tmp + 2] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h + 2];
      brazo_2dof_B.Tinv[brazo_2dof_B.b_k_h + 12] =
        brazo_2dof_B.R_f[brazo_2dof_B.b_k_h + 6] * brazo_2dof_B.T[14] +
        (brazo_2dof_B.R_f[brazo_2dof_B.b_k_h + 3] * brazo_2dof_B.T[13] +
         brazo_2dof_B.R_f[brazo_2dof_B.b_k_h] * brazo_2dof_B.T[12]);
    }

    brazo_2dof_B.Tinv[3] = 0.0;
    brazo_2dof_B.Tinv[7] = 0.0;
    brazo_2dof_B.Tinv[11] = 0.0;
    brazo_2dof_B.Tinv[15] = 1.0;
    brazo_2dof_B.dv2[3] = -brazo_2dof_B.Tinv[14];
    brazo_2dof_B.dv2[6] = brazo_2dof_B.Tinv[13];
    brazo_2dof_B.dv2[1] = brazo_2dof_B.Tinv[14];
    brazo_2dof_B.dv2[7] = -brazo_2dof_B.Tinv[12];
    brazo_2dof_B.dv2[2] = -brazo_2dof_B.Tinv[13];
    brazo_2dof_B.dv2[5] = brazo_2dof_B.Tinv[12];
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 3;
           brazo_2dof_B.aoffset++) {
        brazo_2dof_B.inner = brazo_2dof_B.b_k_h + 3 * brazo_2dof_B.aoffset;
        brazo_2dof_B.dv3[brazo_2dof_B.inner] = 0.0;
        brazo_2dof_B.p_tmp = brazo_2dof_B.aoffset << 2;
        brazo_2dof_B.dv3[brazo_2dof_B.inner] +=
          brazo_2dof_B.Tinv[brazo_2dof_B.p_tmp] *
          brazo_2dof_B.dv2[brazo_2dof_B.b_k_h];
        brazo_2dof_B.dv3[brazo_2dof_B.inner] +=
          brazo_2dof_B.Tinv[brazo_2dof_B.p_tmp + 1] *
          brazo_2dof_B.dv2[brazo_2dof_B.b_k_h + 3];
        brazo_2dof_B.dv3[brazo_2dof_B.inner] +=
          brazo_2dof_B.Tinv[brazo_2dof_B.p_tmp + 2] *
          brazo_2dof_B.dv2[brazo_2dof_B.b_k_h + 6];
      }
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.aoffset = brazo_2dof_B.b_k_h << 2;
      X->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h] =
        brazo_2dof_B.Tinv[brazo_2dof_B.aoffset];
      X->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 1] =
        brazo_2dof_B.Tinv[brazo_2dof_B.aoffset + 1];
      X->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 2] =
        brazo_2dof_B.Tinv[brazo_2dof_B.aoffset + 2];
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.aoffset = 6 * (brazo_2dof_B.b_k_h + 3);
      X->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.aoffset] = 0.0;
      X->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.aoffset + 1] = 0.0;
      X->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.aoffset + 2] = 0.0;
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      X->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 3] =
        brazo_2dof_B.dv3[3 * brazo_2dof_B.b_k_h];
      X->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 4] =
        brazo_2dof_B.dv3[3 * brazo_2dof_B.b_k_h + 1];
      X->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 5] =
        brazo_2dof_B.dv3[3 * brazo_2dof_B.b_k_h + 2];
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.aoffset = brazo_2dof_B.b_k_h << 2;
      brazo_2dof_B.inner = 6 * (brazo_2dof_B.b_k_h + 3);
      X->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.inner + 3] =
        brazo_2dof_B.Tinv[brazo_2dof_B.aoffset];
      X->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.inner + 4] =
        brazo_2dof_B.Tinv[brazo_2dof_B.aoffset + 1];
      X->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.inner + 5] =
        brazo_2dof_B.Tinv[brazo_2dof_B.aoffset + 2];
    }

    brazo_2dof_B.a_idx_0 = robot->Bodies[brazo_2dof_B.unnamed_idx_1]
      ->ParentIndex;
    if (brazo_2dof_B.a_idx_0 > 0.0) {
      brazo_2dof_B.m = static_cast<int32_T>(brazo_2dof_B.a_idx_0);
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.a_idx_1 = 0.0;
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.a_idx_1 += vB->data[(brazo_2dof_B.m - 1) * 6 +
            brazo_2dof_B.aoffset] * X->data[brazo_2dof_B.unnamed_idx_1].f1[6 *
            brazo_2dof_B.aoffset + brazo_2dof_B.b_k_h];
        }

        brazo_2dof_B.vJ[brazo_2dof_B.b_k_h] = vJ->data[6 *
          brazo_2dof_B.unnamed_idx_1 + brazo_2dof_B.b_k_h] +
          brazo_2dof_B.a_idx_1;
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        vB->data[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.unnamed_idx_1] =
          brazo_2dof_B.vJ[brazo_2dof_B.b_k_h];
      }

      if ((S->size[1] == 1) || (qddoti->size[0] == 1)) {
        for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h
             ++) {
          brazo_2dof_B.y[brazo_2dof_B.b_k_h] = 0.0;
          brazo_2dof_B.b_k = S->size[1];
          for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < brazo_2dof_B.b_k;
               brazo_2dof_B.aoffset++) {
            brazo_2dof_B.a_idx_1 = S->data[6 * brazo_2dof_B.aoffset +
              brazo_2dof_B.b_k_h] * qddoti->data[brazo_2dof_B.aoffset] +
              brazo_2dof_B.y[brazo_2dof_B.b_k_h];
            brazo_2dof_B.y[brazo_2dof_B.b_k_h] = brazo_2dof_B.a_idx_1;
          }
        }
      } else {
        brazo_2dof_B.inner = S->size[1] - 1;
        for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h
             ++) {
          brazo_2dof_B.y[brazo_2dof_B.b_k_h] = 0.0;
        }

        for (brazo_2dof_B.b_k = 0; brazo_2dof_B.b_k <= brazo_2dof_B.inner;
             brazo_2dof_B.b_k++) {
          brazo_2dof_B.aoffset = brazo_2dof_B.b_k * 6 - 1;
          for (brazo_2dof_B.c_i = 0; brazo_2dof_B.c_i < 6; brazo_2dof_B.c_i++) {
            brazo_2dof_B.a_idx_1 = S->data[(brazo_2dof_B.aoffset +
              brazo_2dof_B.c_i) + 1] * qddoti->data[brazo_2dof_B.b_k] +
              brazo_2dof_B.y[brazo_2dof_B.c_i];
            brazo_2dof_B.y[brazo_2dof_B.c_i] = brazo_2dof_B.a_idx_1;
          }
        }
      }

      brazo_2dof_B.R_c[0] = 0.0;
      brazo_2dof_B.p_tmp = 6 * brazo_2dof_B.unnamed_idx_1 + 2;
      brazo_2dof_B.R_c[3] = -vB->data[brazo_2dof_B.p_tmp];
      brazo_2dof_B.b_k_h = 6 * brazo_2dof_B.unnamed_idx_1 + 1;
      brazo_2dof_B.R_c[6] = vB->data[brazo_2dof_B.b_k_h];
      brazo_2dof_B.R_c[1] = vB->data[brazo_2dof_B.p_tmp];
      brazo_2dof_B.R_c[4] = 0.0;
      brazo_2dof_B.R_c[7] = -vB->data[6 * brazo_2dof_B.unnamed_idx_1];
      brazo_2dof_B.R_c[2] = -vB->data[brazo_2dof_B.b_k_h];
      brazo_2dof_B.R_c[5] = vB->data[6 * brazo_2dof_B.unnamed_idx_1];
      brazo_2dof_B.R_c[8] = 0.0;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.b_I[6 * brazo_2dof_B.b_k_h] = brazo_2dof_B.R_c[3 *
          brazo_2dof_B.b_k_h];
        brazo_2dof_B.p_tmp = 6 * (brazo_2dof_B.b_k_h + 3);
        brazo_2dof_B.b_I[brazo_2dof_B.p_tmp] = 0.0;
        brazo_2dof_B.b_I[6 * brazo_2dof_B.b_k_h + 1] = brazo_2dof_B.R_c[3 *
          brazo_2dof_B.b_k_h + 1];
        brazo_2dof_B.b_I[brazo_2dof_B.p_tmp + 1] = 0.0;
        brazo_2dof_B.b_I[6 * brazo_2dof_B.b_k_h + 2] = brazo_2dof_B.R_c[3 *
          brazo_2dof_B.b_k_h + 2];
        brazo_2dof_B.b_I[brazo_2dof_B.p_tmp + 2] = 0.0;
      }

      brazo_2dof_B.b_I[3] = 0.0;
      brazo_2dof_B.p_tmp = 6 * brazo_2dof_B.unnamed_idx_1 + 5;
      brazo_2dof_B.b_I[9] = -vB->data[brazo_2dof_B.p_tmp];
      brazo_2dof_B.b_k_h = 6 * brazo_2dof_B.unnamed_idx_1 + 4;
      brazo_2dof_B.b_I[15] = vB->data[brazo_2dof_B.b_k_h];
      brazo_2dof_B.b_I[4] = vB->data[brazo_2dof_B.p_tmp];
      brazo_2dof_B.b_I[10] = 0.0;
      brazo_2dof_B.p_tmp = 6 * brazo_2dof_B.unnamed_idx_1 + 3;
      brazo_2dof_B.b_I[16] = -vB->data[brazo_2dof_B.p_tmp];
      brazo_2dof_B.b_I[5] = -vB->data[brazo_2dof_B.b_k_h];
      brazo_2dof_B.b_I[11] = vB->data[brazo_2dof_B.p_tmp];
      brazo_2dof_B.b_I[17] = 0.0;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.p_tmp = 6 * (brazo_2dof_B.b_k_h + 3);
        brazo_2dof_B.b_I[brazo_2dof_B.p_tmp + 3] = brazo_2dof_B.R_c[3 *
          brazo_2dof_B.b_k_h];
        brazo_2dof_B.b_I[brazo_2dof_B.p_tmp + 4] = brazo_2dof_B.R_c[3 *
          brazo_2dof_B.b_k_h + 1];
        brazo_2dof_B.b_I[brazo_2dof_B.p_tmp + 5] = brazo_2dof_B.R_c[3 *
          brazo_2dof_B.b_k_h + 2];
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.a_idx_1 = 0.0;
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.a_idx_1 += aB->data[(brazo_2dof_B.m - 1) * 6 +
            brazo_2dof_B.aoffset] * X->data[brazo_2dof_B.unnamed_idx_1].f1[6 *
            brazo_2dof_B.aoffset + brazo_2dof_B.b_k_h];
        }

        brazo_2dof_B.vJ[brazo_2dof_B.b_k_h] = brazo_2dof_B.a_idx_1 +
          brazo_2dof_B.y[brazo_2dof_B.b_k_h];
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.y[brazo_2dof_B.b_k_h] = 0.0;
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.a_idx_1 = brazo_2dof_B.b_I[6 * brazo_2dof_B.aoffset +
            brazo_2dof_B.b_k_h] * vJ->data[6 * brazo_2dof_B.unnamed_idx_1 +
            brazo_2dof_B.aoffset] + brazo_2dof_B.y[brazo_2dof_B.b_k_h];
          brazo_2dof_B.y[brazo_2dof_B.b_k_h] = brazo_2dof_B.a_idx_1;
        }
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        aB->data[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.unnamed_idx_1] =
          brazo_2dof_B.vJ[brazo_2dof_B.b_k_h] +
          brazo_2dof_B.y[brazo_2dof_B.b_k_h];
      }

      brazo_2dof_B.R_f[0] = 0.0;
      brazo_2dof_B.R_f[3] = -brazo_2dof_B.T[14];
      brazo_2dof_B.R_f[6] = brazo_2dof_B.T[13];
      brazo_2dof_B.R_f[1] = brazo_2dof_B.T[14];
      brazo_2dof_B.R_f[4] = 0.0;
      brazo_2dof_B.R_f[7] = -brazo_2dof_B.T[12];
      brazo_2dof_B.R_f[2] = -brazo_2dof_B.T[13];
      brazo_2dof_B.R_f[5] = brazo_2dof_B.T[12];
      brazo_2dof_B.R_f[8] = 0.0;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 3;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.inner = brazo_2dof_B.b_k_h + 3 * brazo_2dof_B.aoffset;
          brazo_2dof_B.dv4[brazo_2dof_B.inner] = 0.0;
          brazo_2dof_B.p_tmp = brazo_2dof_B.aoffset << 2;
          brazo_2dof_B.dv4[brazo_2dof_B.inner] +=
            brazo_2dof_B.T[brazo_2dof_B.p_tmp] *
            brazo_2dof_B.R_f[brazo_2dof_B.b_k_h];
          brazo_2dof_B.dv4[brazo_2dof_B.inner] +=
            brazo_2dof_B.T[brazo_2dof_B.p_tmp + 1] *
            brazo_2dof_B.R_f[brazo_2dof_B.b_k_h + 3];
          brazo_2dof_B.dv4[brazo_2dof_B.inner] +=
            brazo_2dof_B.T[brazo_2dof_B.p_tmp + 2] *
            brazo_2dof_B.R_f[brazo_2dof_B.b_k_h + 6];
          brazo_2dof_B.b_I[brazo_2dof_B.aoffset + 6 * brazo_2dof_B.b_k_h] =
            brazo_2dof_B.T[(brazo_2dof_B.b_k_h << 2) + brazo_2dof_B.aoffset];
          brazo_2dof_B.b_I[brazo_2dof_B.aoffset + 6 * (brazo_2dof_B.b_k_h + 3)] =
            0.0;
        }
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.b_I[6 * brazo_2dof_B.b_k_h + 3] = brazo_2dof_B.dv4[3 *
          brazo_2dof_B.b_k_h];
        brazo_2dof_B.p_tmp = brazo_2dof_B.b_k_h << 2;
        brazo_2dof_B.inner = 6 * (brazo_2dof_B.b_k_h + 3);
        brazo_2dof_B.b_I[brazo_2dof_B.inner + 3] =
          brazo_2dof_B.T[brazo_2dof_B.p_tmp];
        brazo_2dof_B.b_I[6 * brazo_2dof_B.b_k_h + 4] = brazo_2dof_B.dv4[3 *
          brazo_2dof_B.b_k_h + 1];
        brazo_2dof_B.b_I[brazo_2dof_B.inner + 4] =
          brazo_2dof_B.T[brazo_2dof_B.p_tmp + 1];
        brazo_2dof_B.b_I[6 * brazo_2dof_B.b_k_h + 5] = brazo_2dof_B.dv4[3 *
          brazo_2dof_B.b_k_h + 2];
        brazo_2dof_B.b_I[brazo_2dof_B.inner + 5] =
          brazo_2dof_B.T[brazo_2dof_B.p_tmp + 2];
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.p_tmp = brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.aoffset;
          brazo_2dof_B.Xtree[brazo_2dof_B.p_tmp] = 0.0;
          for (brazo_2dof_B.inner = 0; brazo_2dof_B.inner < 6;
               brazo_2dof_B.inner++) {
            brazo_2dof_B.Xtree[brazo_2dof_B.p_tmp] += Xtree->data
              [static_cast<int32_T>(brazo_2dof_B.a_idx_0) - 1].f1[6 *
              brazo_2dof_B.inner + brazo_2dof_B.b_k_h] * brazo_2dof_B.b_I[6 *
              brazo_2dof_B.aoffset + brazo_2dof_B.inner];
          }
        }
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 36; brazo_2dof_B.b_k_h++)
      {
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.b_k_h] =
          brazo_2dof_B.Xtree[brazo_2dof_B.b_k_h];
      }
    } else {
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.aoffset = 6 * brazo_2dof_B.unnamed_idx_1 +
          brazo_2dof_B.b_k_h;
        vB->data[brazo_2dof_B.aoffset] = vJ->data[brazo_2dof_B.aoffset];
      }

      if ((S->size[1] == 1) || (qddoti->size[0] == 1)) {
        for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h
             ++) {
          brazo_2dof_B.y[brazo_2dof_B.b_k_h] = 0.0;
          brazo_2dof_B.b_k = S->size[1];
          for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < brazo_2dof_B.b_k;
               brazo_2dof_B.aoffset++) {
            brazo_2dof_B.a_idx_1 = S->data[6 * brazo_2dof_B.aoffset +
              brazo_2dof_B.b_k_h] * qddoti->data[brazo_2dof_B.aoffset] +
              brazo_2dof_B.y[brazo_2dof_B.b_k_h];
            brazo_2dof_B.y[brazo_2dof_B.b_k_h] = brazo_2dof_B.a_idx_1;
          }
        }
      } else {
        brazo_2dof_B.inner = S->size[1] - 1;
        for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h
             ++) {
          brazo_2dof_B.y[brazo_2dof_B.b_k_h] = 0.0;
        }

        for (brazo_2dof_B.b_k = 0; brazo_2dof_B.b_k <= brazo_2dof_B.inner;
             brazo_2dof_B.b_k++) {
          brazo_2dof_B.aoffset = brazo_2dof_B.b_k * 6 - 1;
          for (brazo_2dof_B.c_i = 0; brazo_2dof_B.c_i < 6; brazo_2dof_B.c_i++) {
            brazo_2dof_B.a_idx_1 = S->data[(brazo_2dof_B.aoffset +
              brazo_2dof_B.c_i) + 1] * qddoti->data[brazo_2dof_B.b_k] +
              brazo_2dof_B.y[brazo_2dof_B.c_i];
            brazo_2dof_B.y[brazo_2dof_B.c_i] = brazo_2dof_B.a_idx_1;
          }
        }
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.a_idx_1 = 0.0;
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.a_idx_1 += X->data[brazo_2dof_B.unnamed_idx_1].f1[6 *
            brazo_2dof_B.aoffset + brazo_2dof_B.b_k_h] *
            brazo_2dof_B.a0[brazo_2dof_B.aoffset];
        }

        aB->data[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.unnamed_idx_1] =
          brazo_2dof_B.a_idx_1 + brazo_2dof_B.y[brazo_2dof_B.b_k_h];
      }

      brazo_2dof_B.R_f[0] = 0.0;
      brazo_2dof_B.R_f[3] = -brazo_2dof_B.T[14];
      brazo_2dof_B.R_f[6] = brazo_2dof_B.T[13];
      brazo_2dof_B.R_f[1] = brazo_2dof_B.T[14];
      brazo_2dof_B.R_f[4] = 0.0;
      brazo_2dof_B.R_f[7] = -brazo_2dof_B.T[12];
      brazo_2dof_B.R_f[2] = -brazo_2dof_B.T[13];
      brazo_2dof_B.R_f[5] = brazo_2dof_B.T[12];
      brazo_2dof_B.R_f[8] = 0.0;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 3;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.inner = brazo_2dof_B.b_k_h + 3 * brazo_2dof_B.aoffset;
          brazo_2dof_B.dv4[brazo_2dof_B.inner] = 0.0;
          brazo_2dof_B.p_tmp = brazo_2dof_B.aoffset << 2;
          brazo_2dof_B.dv4[brazo_2dof_B.inner] +=
            brazo_2dof_B.T[brazo_2dof_B.p_tmp] *
            brazo_2dof_B.R_f[brazo_2dof_B.b_k_h];
          brazo_2dof_B.dv4[brazo_2dof_B.inner] +=
            brazo_2dof_B.T[brazo_2dof_B.p_tmp + 1] *
            brazo_2dof_B.R_f[brazo_2dof_B.b_k_h + 3];
          brazo_2dof_B.dv4[brazo_2dof_B.inner] +=
            brazo_2dof_B.T[brazo_2dof_B.p_tmp + 2] *
            brazo_2dof_B.R_f[brazo_2dof_B.b_k_h + 6];
        }
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.aoffset = brazo_2dof_B.b_k_h << 2;
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h] =
          brazo_2dof_B.T[brazo_2dof_B.aoffset];
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 1] =
          brazo_2dof_B.T[brazo_2dof_B.aoffset + 1];
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 2] =
          brazo_2dof_B.T[brazo_2dof_B.aoffset + 2];
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.aoffset = 6 * (brazo_2dof_B.b_k_h + 3);
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.aoffset] = 0.0;
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.aoffset + 1] =
          0.0;
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.aoffset + 2] =
          0.0;
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 3] =
          brazo_2dof_B.dv4[3 * brazo_2dof_B.b_k_h];
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 4] =
          brazo_2dof_B.dv4[3 * brazo_2dof_B.b_k_h + 1];
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 * brazo_2dof_B.b_k_h + 5] =
          brazo_2dof_B.dv4[3 * brazo_2dof_B.b_k_h + 2];
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.aoffset = brazo_2dof_B.b_k_h << 2;
        brazo_2dof_B.inner = 6 * (brazo_2dof_B.b_k_h + 3);
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.inner + 3] =
          brazo_2dof_B.T[brazo_2dof_B.aoffset];
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.inner + 4] =
          brazo_2dof_B.T[brazo_2dof_B.aoffset + 1];
        Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[brazo_2dof_B.inner + 5] =
          brazo_2dof_B.T[brazo_2dof_B.aoffset + 2];
      }
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 36; brazo_2dof_B.b_k_h++)
    {
      brazo_2dof_B.b_I[brazo_2dof_B.b_k_h] = robot->
        Bodies[brazo_2dof_B.unnamed_idx_1]->SpatialInertia[brazo_2dof_B.b_k_h];
    }

    brazo_2dof_B.R_c[0] = 0.0;
    brazo_2dof_B.p_tmp = 6 * brazo_2dof_B.unnamed_idx_1 + 2;
    brazo_2dof_B.R_c[3] = -vB->data[brazo_2dof_B.p_tmp];
    brazo_2dof_B.b_k_h = 6 * brazo_2dof_B.unnamed_idx_1 + 1;
    brazo_2dof_B.R_c[6] = vB->data[brazo_2dof_B.b_k_h];
    brazo_2dof_B.R_c[1] = vB->data[brazo_2dof_B.p_tmp];
    brazo_2dof_B.R_c[4] = 0.0;
    brazo_2dof_B.R_c[7] = -vB->data[6 * brazo_2dof_B.unnamed_idx_1];
    brazo_2dof_B.R_c[2] = -vB->data[brazo_2dof_B.b_k_h];
    brazo_2dof_B.R_c[5] = vB->data[6 * brazo_2dof_B.unnamed_idx_1];
    brazo_2dof_B.R_c[8] = 0.0;
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.R[6 * brazo_2dof_B.b_k_h] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h];
      brazo_2dof_B.R[6 * brazo_2dof_B.b_k_h + 1] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h + 1];
      brazo_2dof_B.R[6 * brazo_2dof_B.b_k_h + 2] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h + 2];
    }

    brazo_2dof_B.R[18] = 0.0;
    brazo_2dof_B.p_tmp = 6 * brazo_2dof_B.unnamed_idx_1 + 5;
    brazo_2dof_B.R[24] = -vB->data[brazo_2dof_B.p_tmp];
    brazo_2dof_B.b_k_h = 6 * brazo_2dof_B.unnamed_idx_1 + 4;
    brazo_2dof_B.R[30] = vB->data[brazo_2dof_B.b_k_h];
    brazo_2dof_B.R[19] = vB->data[brazo_2dof_B.p_tmp];
    brazo_2dof_B.R[25] = 0.0;
    brazo_2dof_B.p_tmp = 6 * brazo_2dof_B.unnamed_idx_1 + 3;
    brazo_2dof_B.R[31] = -vB->data[brazo_2dof_B.p_tmp];
    brazo_2dof_B.R[20] = -vB->data[brazo_2dof_B.b_k_h];
    brazo_2dof_B.R[26] = vB->data[brazo_2dof_B.p_tmp];
    brazo_2dof_B.R[32] = 0.0;
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 3; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.R[6 * brazo_2dof_B.b_k_h + 3] = 0.0;
      brazo_2dof_B.p_tmp = 6 * (brazo_2dof_B.b_k_h + 3);
      brazo_2dof_B.R[brazo_2dof_B.p_tmp + 3] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h];
      brazo_2dof_B.R[6 * brazo_2dof_B.b_k_h + 4] = 0.0;
      brazo_2dof_B.R[brazo_2dof_B.p_tmp + 4] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h + 1];
      brazo_2dof_B.R[6 * brazo_2dof_B.b_k_h + 5] = 0.0;
      brazo_2dof_B.R[brazo_2dof_B.p_tmp + 5] = brazo_2dof_B.R_c[3 *
        brazo_2dof_B.b_k_h + 2];
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.b_I_l[brazo_2dof_B.b_k_h] = 0.0;
      for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
           brazo_2dof_B.aoffset++) {
        brazo_2dof_B.a_idx_0 = brazo_2dof_B.b_I[6 * brazo_2dof_B.aoffset +
          brazo_2dof_B.b_k_h] * vB->data[6 * brazo_2dof_B.unnamed_idx_1 +
          brazo_2dof_B.aoffset] + brazo_2dof_B.b_I_l[brazo_2dof_B.b_k_h];
        brazo_2dof_B.b_I_l[brazo_2dof_B.b_k_h] = brazo_2dof_B.a_idx_0;
      }
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.b_I_j[brazo_2dof_B.b_k_h] = 0.0;
      for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
           brazo_2dof_B.aoffset++) {
        brazo_2dof_B.a_idx_0 = brazo_2dof_B.b_I[6 * brazo_2dof_B.aoffset +
          brazo_2dof_B.b_k_h] * aB->data[6 * brazo_2dof_B.unnamed_idx_1 +
          brazo_2dof_B.aoffset] + brazo_2dof_B.b_I_j[brazo_2dof_B.b_k_h];
        brazo_2dof_B.b_I_j[brazo_2dof_B.b_k_h] = brazo_2dof_B.a_idx_0;
      }
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.R_d[brazo_2dof_B.b_k_h] = 0.0;
      for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
           brazo_2dof_B.aoffset++) {
        brazo_2dof_B.R_d[brazo_2dof_B.b_k_h] += brazo_2dof_B.R[6 *
          brazo_2dof_B.aoffset + brazo_2dof_B.b_k_h] *
          brazo_2dof_B.b_I_l[brazo_2dof_B.aoffset];
      }
    }

    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.a_idx_1 = 0.0;
      for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
           brazo_2dof_B.aoffset++) {
        brazo_2dof_B.a_idx_1 += Xtree->data[brazo_2dof_B.unnamed_idx_1].f1[6 *
          brazo_2dof_B.b_k_h + brazo_2dof_B.aoffset] * fext[6 *
          brazo_2dof_B.unnamed_idx_1 + brazo_2dof_B.aoffset];
      }

      f->data[brazo_2dof_B.b_k_h + 6 * brazo_2dof_B.unnamed_idx_1] =
        (brazo_2dof_B.b_I_j[brazo_2dof_B.b_k_h] +
         brazo_2dof_B.R_d[brazo_2dof_B.b_k_h]) - brazo_2dof_B.a_idx_1;
    }
  }

  brazo_2dof_emxFree_real_T(&aB);
  brazo_2dof_emxFree_real_T(&vB);
  brazo_2dof_emxFree_real_T(&vJ);
  brazo_2dof_emxFree_f_cell_wrap(&Xtree);
  brazo_2dof_B.loop_ub_tmp = static_cast<int32_T>(((-1.0 - brazo_2dof_B.nb) +
    1.0) / -1.0) - 1;
  brazo_2dof_emxInit_char_T(&a, 2);
  brazo_2dof_emxInit_real_T(&a_0, 2);
  if (0 <= brazo_2dof_B.loop_ub_tmp) {
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 5; brazo_2dof_B.b_k_h++) {
      brazo_2dof_B.b_m[brazo_2dof_B.b_k_h] = tmp[brazo_2dof_B.b_k_h];
    }
  }

  for (brazo_2dof_B.p_tmp = 0; brazo_2dof_B.p_tmp <= brazo_2dof_B.loop_ub_tmp;
       brazo_2dof_B.p_tmp++) {
    brazo_2dof_B.a_idx_0 = brazo_2dof_B.nb + -static_cast<real_T>
      (brazo_2dof_B.p_tmp);
    brazo_2dof_B.inner = static_cast<int32_T>(brazo_2dof_B.a_idx_0);
    brazo_2dof_B.o_tmp = brazo_2dof_B.inner - 1;
    obj = robot->Bodies[brazo_2dof_B.o_tmp];
    brazo_2dof_B.b_k_h = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->JointInternal.Type->size[1];
    brazo__emxEnsureCapacity_char_T(a, brazo_2dof_B.b_k_h);
    brazo_2dof_B.b_k = obj->JointInternal.Type->size[0] *
      obj->JointInternal.Type->size[1] - 1;
    for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.b_k;
         brazo_2dof_B.b_k_h++) {
      a->data[brazo_2dof_B.b_k_h] = obj->JointInternal.Type->
        data[brazo_2dof_B.b_k_h];
    }

    brazo_2dof_B.b_bool = false;
    if (a->size[1] == 5) {
      brazo_2dof_B.b_k_h = 1;
      do {
        exitg1 = 0;
        if (brazo_2dof_B.b_k_h - 1 < 5) {
          brazo_2dof_B.unnamed_idx_1 = brazo_2dof_B.b_k_h - 1;
          if (a->data[brazo_2dof_B.unnamed_idx_1] !=
              brazo_2dof_B.b_m[brazo_2dof_B.unnamed_idx_1]) {
            exitg1 = 1;
          } else {
            brazo_2dof_B.b_k_h++;
          }
        } else {
          brazo_2dof_B.b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!brazo_2dof_B.b_bool) {
      obj = robot->Bodies[brazo_2dof_B.o_tmp];
      brazo_2dof_B.b_k_h = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      brazo__emxEnsureCapacity_real_T(S, brazo_2dof_B.b_k_h);
      brazo_2dof_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <= brazo_2dof_B.b_k;
           brazo_2dof_B.b_k_h++) {
        S->data[brazo_2dof_B.b_k_h] = obj->JointInternal.MotionSubspace->
          data[brazo_2dof_B.b_k_h];
      }

      brazo_2dof_B.b_k_h = a_0->size[0] * a_0->size[1];
      a_0->size[0] = S->size[1];
      a_0->size[1] = 6;
      brazo__emxEnsureCapacity_real_T(a_0, brazo_2dof_B.b_k_h);
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.b_k = S->size[1];
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < brazo_2dof_B.b_k;
             brazo_2dof_B.aoffset++) {
          a_0->data[brazo_2dof_B.aoffset + a_0->size[0] * brazo_2dof_B.b_k_h] =
            S->data[6 * brazo_2dof_B.aoffset + brazo_2dof_B.b_k_h];
        }
      }

      brazo_2dof_B.m = a_0->size[0] - 1;
      brazo_2dof_B.b_k_h = qddoti->size[0];
      qddoti->size[0] = a_0->size[0];
      brazo__emxEnsureCapacity_real_T(qddoti, brazo_2dof_B.b_k_h);
      for (brazo_2dof_B.unnamed_idx_1 = 0; brazo_2dof_B.unnamed_idx_1 <=
           brazo_2dof_B.m; brazo_2dof_B.unnamed_idx_1++) {
        qddoti->data[brazo_2dof_B.unnamed_idx_1] = 0.0;
      }

      for (brazo_2dof_B.b_k = 0; brazo_2dof_B.b_k < 6; brazo_2dof_B.b_k++) {
        brazo_2dof_B.aoffset = (brazo_2dof_B.m + 1) * brazo_2dof_B.b_k - 1;
        for (brazo_2dof_B.c_i = 0; brazo_2dof_B.c_i <= brazo_2dof_B.m;
             brazo_2dof_B.c_i++) {
          qddoti->data[brazo_2dof_B.c_i] += f->data[(static_cast<int32_T>
            (brazo_2dof_B.a_idx_0) - 1) * 6 + brazo_2dof_B.b_k] * a_0->data
            [(brazo_2dof_B.aoffset + brazo_2dof_B.c_i) + 1];
        }
      }

      brazo_2dof_B.b_idx_0 = robot->VelocityDoFMap[brazo_2dof_B.inner - 1];
      brazo_2dof_B.b_idx_1 = robot->VelocityDoFMap[brazo_2dof_B.inner + 1];
      if (brazo_2dof_B.b_idx_0 > brazo_2dof_B.b_idx_1) {
        brazo_2dof_B.m = 0;
        brazo_2dof_B.b_k_h = 0;
      } else {
        brazo_2dof_B.m = static_cast<int32_T>(brazo_2dof_B.b_idx_0) - 1;
        brazo_2dof_B.b_k_h = static_cast<int32_T>(brazo_2dof_B.b_idx_1);
      }

      brazo_2dof_B.unnamed_idx_1 = brazo_2dof_B.b_k_h - brazo_2dof_B.m;
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h <
           brazo_2dof_B.unnamed_idx_1; brazo_2dof_B.b_k_h++) {
        tau[brazo_2dof_B.m + brazo_2dof_B.b_k_h] = qddoti->
          data[brazo_2dof_B.b_k_h];
      }
    }

    brazo_2dof_B.a_idx_0 = robot->Bodies[brazo_2dof_B.o_tmp]->ParentIndex;
    if (brazo_2dof_B.a_idx_0 > 0.0) {
      brazo_2dof_B.m = static_cast<int32_T>(brazo_2dof_B.a_idx_0);
      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        brazo_2dof_B.a_idx_1 = 0.0;
        for (brazo_2dof_B.aoffset = 0; brazo_2dof_B.aoffset < 6;
             brazo_2dof_B.aoffset++) {
          brazo_2dof_B.a_idx_1 += f->data[(brazo_2dof_B.inner - 1) * 6 +
            brazo_2dof_B.aoffset] * X->data[brazo_2dof_B.o_tmp].f1[6 *
            brazo_2dof_B.b_k_h + brazo_2dof_B.aoffset];
        }

        brazo_2dof_B.a0[brazo_2dof_B.b_k_h] = f->data[(brazo_2dof_B.m - 1) * 6 +
          brazo_2dof_B.b_k_h] + brazo_2dof_B.a_idx_1;
      }

      for (brazo_2dof_B.b_k_h = 0; brazo_2dof_B.b_k_h < 6; brazo_2dof_B.b_k_h++)
      {
        f->data[brazo_2dof_B.b_k_h + 6 * (brazo_2dof_B.m - 1)] =
          brazo_2dof_B.a0[brazo_2dof_B.b_k_h];
      }
    }
  }

  brazo_2dof_emxFree_real_T(&a_0);
  brazo_2dof_emxFree_char_T(&a);
  brazo_2dof_emxFree_real_T(&qddoti);
  brazo_2dof_emxFree_real_T(&S);
  brazo_2dof_emxFree_real_T(&f);
  brazo_2dof_emxFree_f_cell_wrap(&X);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void br_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_brazo_2dof_T *pStruct)
{
  brazo_2dof_emxFree_char_T(&pStruct->Type);
  brazo_2dof_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct)
{
  br_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
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
  br_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void br_emxInitStruct_rigidBodyJoint(rigidBodyJoint_brazo_2dof_T *pStruct)
{
  brazo_2dof_emxInit_char_T(&pStruct->Type, 2);
  brazo_2dof_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_f_robotics_manip_(f_robotics_manip_internal_Rig_T
  *pStruct)
{
  br_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
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
  br_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static g_robotics_manip_internal_Rig_T *brazo_2dof_RigidBody_RigidBody
  (g_robotics_manip_internal_Rig_T *obj)
{
  g_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_brazo_2dof_T *switch_expression;
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
  brazo__emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  brazo_2dof_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  brazo__emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  brazo_2dof_emxFree_char_T(&switch_expression);
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
  brazo__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  brazo__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static g_robotics_manip_internal_Rig_T *brazo_2do_RigidBody_RigidBody_c
  (g_robotics_manip_internal_Rig_T *obj)
{
  g_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_brazo_2dof_T *switch_expression;
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
  brazo__emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  brazo_2dof_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  brazo__emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  brazo_2dof_emxFree_char_T(&switch_expression);
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
  brazo__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  brazo__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static f_robotics_manip_internal_Rig_T *brazo_2d_RigidBody_RigidBody_cr
  (f_robotics_manip_internal_Rig_T *obj)
{
  f_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_brazo_2dof_T *switch_expression;
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  b_obj = obj;
  brazo_2dof_B.b_kstr_g = obj->JointInternal.Type->size[0] *
    obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  brazo__emxEnsureCapacity_char_T(obj->JointInternal.Type, brazo_2dof_B.b_kstr_g);
  for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 5;
       brazo_2dof_B.b_kstr_g++) {
    obj->JointInternal.Type->data[brazo_2dof_B.b_kstr_g] =
      tmp[brazo_2dof_B.b_kstr_g];
  }

  brazo_2dof_emxInit_char_T(&switch_expression, 2);
  brazo_2dof_B.b_kstr_g = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  brazo__emxEnsureCapacity_char_T(switch_expression, brazo_2dof_B.b_kstr_g);
  brazo_2dof_B.loop_ub_co = obj->JointInternal.Type->size[0] *
    obj->JointInternal.Type->size[1] - 1;
  for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g <=
       brazo_2dof_B.loop_ub_co; brazo_2dof_B.b_kstr_g++) {
    switch_expression->data[brazo_2dof_B.b_kstr_g] = obj->
      JointInternal.Type->data[brazo_2dof_B.b_kstr_g];
  }

  for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 8;
       brazo_2dof_B.b_kstr_g++) {
    brazo_2dof_B.b_ln[brazo_2dof_B.b_kstr_g] = tmp_0[brazo_2dof_B.b_kstr_g];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    brazo_2dof_B.b_kstr_g = 1;
    do {
      exitg1 = 0;
      if (brazo_2dof_B.b_kstr_g - 1 < 8) {
        brazo_2dof_B.loop_ub_co = brazo_2dof_B.b_kstr_g - 1;
        if (switch_expression->data[brazo_2dof_B.loop_ub_co] !=
            brazo_2dof_B.b_ln[brazo_2dof_B.loop_ub_co]) {
          exitg1 = 1;
        } else {
          brazo_2dof_B.b_kstr_g++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    brazo_2dof_B.b_kstr_g = 0;
  } else {
    for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 9;
         brazo_2dof_B.b_kstr_g++) {
      brazo_2dof_B.b_o[brazo_2dof_B.b_kstr_g] = tmp_1[brazo_2dof_B.b_kstr_g];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      brazo_2dof_B.b_kstr_g = 1;
      do {
        exitg1 = 0;
        if (brazo_2dof_B.b_kstr_g - 1 < 9) {
          brazo_2dof_B.loop_ub_co = brazo_2dof_B.b_kstr_g - 1;
          if (switch_expression->data[brazo_2dof_B.loop_ub_co] !=
              brazo_2dof_B.b_o[brazo_2dof_B.loop_ub_co]) {
            exitg1 = 1;
          } else {
            brazo_2dof_B.b_kstr_g++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      brazo_2dof_B.b_kstr_g = 1;
    } else {
      brazo_2dof_B.b_kstr_g = -1;
    }
  }

  brazo_2dof_emxFree_char_T(&switch_expression);
  switch (brazo_2dof_B.b_kstr_g) {
   case 0:
    brazo_2dof_B.iv2[0] = 0;
    brazo_2dof_B.iv2[1] = 0;
    brazo_2dof_B.iv2[2] = 1;
    brazo_2dof_B.iv2[3] = 0;
    brazo_2dof_B.iv2[4] = 0;
    brazo_2dof_B.iv2[5] = 0;
    for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 6;
         brazo_2dof_B.b_kstr_g++) {
      brazo_2dof_B.msubspace_data[brazo_2dof_B.b_kstr_g] =
        brazo_2dof_B.iv2[brazo_2dof_B.b_kstr_g];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    brazo_2dof_B.iv2[0] = 0;
    brazo_2dof_B.iv2[1] = 0;
    brazo_2dof_B.iv2[2] = 0;
    brazo_2dof_B.iv2[3] = 0;
    brazo_2dof_B.iv2[4] = 0;
    brazo_2dof_B.iv2[5] = 1;
    for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 6;
         brazo_2dof_B.b_kstr_g++) {
      brazo_2dof_B.msubspace_data[brazo_2dof_B.b_kstr_g] =
        brazo_2dof_B.iv2[brazo_2dof_B.b_kstr_g];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 6;
         brazo_2dof_B.b_kstr_g++) {
      brazo_2dof_B.msubspace_data[brazo_2dof_B.b_kstr_g] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  brazo_2dof_B.b_kstr_g = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  brazo__emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace,
    brazo_2dof_B.b_kstr_g);
  for (brazo_2dof_B.b_kstr_g = 0; brazo_2dof_B.b_kstr_g < 6;
       brazo_2dof_B.b_kstr_g++) {
    obj->JointInternal.MotionSubspace->data[brazo_2dof_B.b_kstr_g] =
      brazo_2dof_B.msubspace_data[brazo_2dof_B.b_kstr_g];
  }

  return b_obj;
}

static h_robotics_manip_internal_Rig_T *bra_RigidBodyTree_RigidBodyTree
  (h_robotics_manip_internal_Rig_T *obj, g_robotics_manip_internal_Rig_T *iobj_0,
   g_robotics_manip_internal_Rig_T *iobj_1)
{
  h_robotics_manip_internal_Rig_T *b_obj;
  b_obj = obj;
  obj->Bodies[0] = brazo_2dof_RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = brazo_2do_RigidBody_RigidBody_c(iobj_1);
  obj->Bodies[1]->Index = 2.0;
  obj->NumBodies = 2.0;
  obj->Gravity[0] = 0.0;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = -9.80665;
  obj->VelocityNumber = 2.0;
  obj->PositionDoFMap[0] = 1.0;
  obj->PositionDoFMap[1] = 2.0;
  obj->PositionDoFMap[2] = 1.0;
  obj->PositionDoFMap[3] = 2.0;
  obj->VelocityDoFMap[0] = 1.0;
  obj->VelocityDoFMap[1] = 2.0;
  obj->VelocityDoFMap[2] = 1.0;
  obj->VelocityDoFMap[3] = 2.0;
  brazo_2d_RigidBody_RigidBody_cr(&obj->Base);
  return b_obj;
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
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    robotics_slmanip_internal_blo_T *obj;
    emxArray_real_T_brazo_2dof_T *L;
    emxArray_real_T_brazo_2dof_T *H;
    emxArray_real_T_brazo_2dof_T *lambda;
    emxArray_real_T_brazo_2dof_T *H_0;
    emxArray_real_T_brazo_2dof_T *tmp;

    // SignalConversion generated from: '<S1>/MATLAB System'
    memset(&brazo_2dof_B.TmpSignalConversionAtMATLAB[0], 0, 12U * sizeof(real_T));

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
    brazo_2dof_B.b_p = false;
    simulationData->mData->mFoundZcEvents = brazo_2dof_B.b_p;
    brazo_2dof_B.b_p = rtmIsMajorTimeStep(brazo_2dof_M);
    simulationData->mData->mIsMajorTimeStep = brazo_2dof_B.b_p;
    brazo_2dof_B.b_varargout_1 = false;
    simulationData->mData->mIsSolverAssertCheck = brazo_2dof_B.b_varargout_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    brazo_2dof_B.b_varargout_1 = rtsiIsSolverComputingJacobian
      (&brazo_2dof_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = brazo_2dof_B.b_varargout_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    brazo_2dof_B.iv1[0] = 0;
    brazo_2dof_B.dv7[0] = brazo_2dof_B.INPUT_1_1_1[0];
    brazo_2dof_B.dv7[1] = brazo_2dof_B.INPUT_1_1_1[1];
    brazo_2dof_B.dv7[2] = brazo_2dof_B.INPUT_1_1_1[2];
    brazo_2dof_B.dv7[3] = brazo_2dof_B.INPUT_1_1_1[3];
    brazo_2dof_B.iv1[1] = 4;
    brazo_2dof_B.dv7[4] = brazo_2dof_B.INPUT_2_1_1[0];
    brazo_2dof_B.dv7[5] = brazo_2dof_B.INPUT_2_1_1[1];
    brazo_2dof_B.dv7[6] = brazo_2dof_B.INPUT_2_1_1[2];
    brazo_2dof_B.dv7[7] = brazo_2dof_B.INPUT_2_1_1[3];
    brazo_2dof_B.iv1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv7[0];
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
    brazo_2dof_B.j_j = ne_simulator_method((NeslSimulator *)
      brazo_2dof_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (brazo_2dof_B.j_j != 0) {
      brazo_2dof_B.b_varargout_1 = error_buffer_is_empty(rtmGetErrorStatus
        (brazo_2dof_M));
      if (brazo_2dof_B.b_varargout_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of SimscapeExecutionBlock: '<S15>/STATE_1'
    if (rtmIsMajorTimeStep(brazo_2dof_M)) {
      // Outputs for Atomic SubSystem: '<Root>/Subscribe'
      // MATLABSystem: '<S7>/SourceBlock' incorporates:
      //   Inport: '<S16>/In1'

      brazo_2dof_SystemCore_step(&brazo_2dof_B.b_varargout_1,
        brazo_2dof_B.b_varargout_2_Data,
        &brazo_2dof_B.b_varargout_2_Data_SL_Info_Curr,
        &brazo_2dof_B.b_varargout_2_Data_SL_Info_Rece,
        &brazo_2dof_B.b_varargout_2_Layout_DataOffset,
        brazo_2dof_B.b_varargout_2_Layout_Dim,
        &brazo_2dof_B.b_varargout_2_Layout_Dim_SL_Inf,
        &brazo_2dof_B.b_varargout_2_Layout_Dim_SL_I_f);

      // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S16>/Enable'

      if (brazo_2dof_B.b_varargout_1) {
        brazo_2dof_B.In1.Data[0] = brazo_2dof_B.b_varargout_2_Data[0];
        brazo_2dof_B.In1.Data[1] = brazo_2dof_B.b_varargout_2_Data[1];
        brazo_2dof_B.In1.Data_SL_Info.CurrentLength =
          brazo_2dof_B.b_varargout_2_Data_SL_Info_Curr;
        brazo_2dof_B.In1.Data_SL_Info.ReceivedLength =
          brazo_2dof_B.b_varargout_2_Data_SL_Info_Rece;
        brazo_2dof_B.In1.Layout.DataOffset =
          brazo_2dof_B.b_varargout_2_Layout_DataOffset;
        memcpy(&brazo_2dof_B.In1.Layout.Dim[0],
               &brazo_2dof_B.b_varargout_2_Layout_Dim[0], sizeof
               (SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension) << 4U);
        brazo_2dof_B.In1.Layout.Dim_SL_Info.CurrentLength =
          brazo_2dof_B.b_varargout_2_Layout_Dim_SL_Inf;
        brazo_2dof_B.In1.Layout.Dim_SL_Info.ReceivedLength =
          brazo_2dof_B.b_varargout_2_Layout_Dim_SL_I_f;
      }

      // End of MATLABSystem: '<S7>/SourceBlock'
      // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subscribe'
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

    // Integrator: '<Root>/JointVel_FD'
    brazo_2dof_B.JointVel_FD[0] = brazo_2dof_X.JointVel_FD_CSTATE[0];
    brazo_2dof_B.JointVel_FD[1] = brazo_2dof_X.JointVel_FD_CSTATE[1];
    brazo_2dof_emxInit_real_T(&H, 2);
    brazo_2dof_emxInit_real_T(&lambda, 2);
    brazo_2dof_emxInit_real_T(&tmp, 1);

    // MATLABSystem: '<S1>/MATLAB System' incorporates:
    //   Integrator: '<Root>/JointPos_FD'

    obj = &brazo_2dof_DW.obj;
    RigidBodyTreeDynamics_massMatri(&brazo_2dof_DW.obj.TreeInternal,
      brazo_2dof_X.JointPos_FD_CSTATE, H, lambda);
    brazo_2dof_B.vNum = obj->TreeInternal.VelocityNumber;
    brazo_2dof_B.j_j = tmp->size[0];
    brazo_2dof_B.loop_ub = static_cast<int32_T>(brazo_2dof_B.vNum);
    tmp->size[0] = brazo_2dof_B.loop_ub;
    brazo__emxEnsureCapacity_real_T(tmp, brazo_2dof_B.j_j);
    for (brazo_2dof_B.j_j = 0; brazo_2dof_B.j_j < brazo_2dof_B.loop_ub;
         brazo_2dof_B.j_j++) {
      tmp->data[brazo_2dof_B.j_j] = 0.0;
    }

    RigidBodyTreeDynamics_inverseDy(&obj->TreeInternal,
      brazo_2dof_X.JointPos_FD_CSTATE, brazo_2dof_B.JointVel_FD, tmp,
      brazo_2dof_B.TmpSignalConversionAtMATLAB, brazo_2dof_B.MATLABSystem);
    brazo_2dof_emxFree_real_T(&tmp);

    // MATLABSystem: '<S1>/MATLAB System'
    brazo_2dof_B.MATLABSystem[0] = brazo_2dof_B.In1.Data[0] -
      brazo_2dof_B.MATLABSystem[0];
    brazo_2dof_B.MATLABSystem[1] = brazo_2dof_B.In1.Data[1] -
      brazo_2dof_B.MATLABSystem[1];
    if ((H->size[0] == 0) || (H->size[1] == 0)) {
      brazo_2dof_B.iend = 0;
    } else {
      brazo_2dof_B.u0 = H->size[0];
      brazo_2dof_B.iend = H->size[1];
      if (brazo_2dof_B.u0 > brazo_2dof_B.iend) {
        brazo_2dof_B.iend = brazo_2dof_B.u0;
      }
    }

    brazo_2dof_emxInit_real_T(&H_0, 2);

    // MATLABSystem: '<S1>/MATLAB System'
    brazo_2dof_B.j_j = H_0->size[0] * H_0->size[1];
    H_0->size[0] = H->size[0];
    H_0->size[1] = H->size[1];
    brazo__emxEnsureCapacity_real_T(H_0, brazo_2dof_B.j_j);
    brazo_2dof_B.u0 = H->size[0] * H->size[1] - 1;
    for (brazo_2dof_B.j_j = 0; brazo_2dof_B.j_j <= brazo_2dof_B.u0;
         brazo_2dof_B.j_j++) {
      H_0->data[brazo_2dof_B.j_j] = H->data[brazo_2dof_B.j_j];
    }

    brazo_2dof_emxFree_real_T(&H);

    // MATLABSystem: '<S1>/MATLAB System'
    brazo_2dof_B.n = static_cast<int32_T>(((-1.0 - static_cast<real_T>
      (brazo_2dof_B.iend)) + 1.0) / -1.0) - 1;
    for (brazo_2dof_B.u0 = 0; brazo_2dof_B.u0 <= brazo_2dof_B.n; brazo_2dof_B.u0
         ++) {
      brazo_2dof_B.j = static_cast<real_T>(brazo_2dof_B.iend) +
        -static_cast<real_T>(brazo_2dof_B.u0);
      brazo_2dof_B.j_j = static_cast<int32_T>(brazo_2dof_B.j);
      brazo_2dof_B.MATLABSystem_tmp = brazo_2dof_B.j_j - 1;
      H_0->data[(static_cast<int32_T>(brazo_2dof_B.j) + H_0->size[0] * (
                  static_cast<int32_T>(brazo_2dof_B.j) - 1)) - 1] = sqrt
        (H_0->data[(brazo_2dof_B.MATLABSystem_tmp * H_0->size[0] +
                    brazo_2dof_B.j_j) - 1]);
      brazo_2dof_B.k = lambda->data[brazo_2dof_B.MATLABSystem_tmp];
      while (brazo_2dof_B.k > 0.0) {
        brazo_2dof_B.i = static_cast<int32_T>(brazo_2dof_B.k) - 1;
        H_0->data[(static_cast<int32_T>(brazo_2dof_B.j) + H_0->size[0] * (
                    static_cast<int32_T>(brazo_2dof_B.k) - 1)) - 1] = H_0->data
          [(brazo_2dof_B.i * H_0->size[0] + brazo_2dof_B.j_j) - 1] / H_0->data
          [((static_cast<int32_T>(brazo_2dof_B.j) - 1) * H_0->size[0] +
            static_cast<int32_T>(brazo_2dof_B.j)) - 1];
        brazo_2dof_B.k = lambda->data[brazo_2dof_B.i];
      }

      brazo_2dof_B.k = lambda->data[brazo_2dof_B.MATLABSystem_tmp];
      while (brazo_2dof_B.k > 0.0) {
        brazo_2dof_B.j = brazo_2dof_B.k;
        while (brazo_2dof_B.j > 0.0) {
          brazo_2dof_B.MATLABSystem_tmp = static_cast<int32_T>(brazo_2dof_B.j) -
            1;
          H_0->data[(static_cast<int32_T>(brazo_2dof_B.k) + H_0->size[0] * (
                      static_cast<int32_T>(brazo_2dof_B.j) - 1)) - 1] =
            H_0->data[(brazo_2dof_B.MATLABSystem_tmp * H_0->size[0] +
                       static_cast<int32_T>(brazo_2dof_B.k)) - 1] - H_0->data[((
            static_cast<int32_T>(brazo_2dof_B.k) - 1) * H_0->size[0] +
            brazo_2dof_B.j_j) - 1] * H_0->data[((static_cast<int32_T>
            (brazo_2dof_B.j) - 1) * H_0->size[0] + brazo_2dof_B.j_j) - 1];
          brazo_2dof_B.j = lambda->data[brazo_2dof_B.MATLABSystem_tmp];
        }

        brazo_2dof_B.k = lambda->data[static_cast<int32_T>(brazo_2dof_B.k) - 1];
      }
    }

    brazo_2dof_emxInit_real_T(&L, 2);

    // MATLABSystem: '<S1>/MATLAB System'
    brazo_2dof_B.j_j = L->size[0] * L->size[1];
    L->size[0] = H_0->size[0];
    L->size[1] = H_0->size[1];
    brazo__emxEnsureCapacity_real_T(L, brazo_2dof_B.j_j);
    brazo_2dof_B.u0 = H_0->size[0] * H_0->size[1] - 1;
    for (brazo_2dof_B.j_j = 0; brazo_2dof_B.j_j <= brazo_2dof_B.u0;
         brazo_2dof_B.j_j++) {
      L->data[brazo_2dof_B.j_j] = H_0->data[brazo_2dof_B.j_j];
    }

    brazo_2dof_B.n = H_0->size[1];
    if ((H_0->size[0] == 0) || (H_0->size[1] == 0) || (1 >= H_0->size[1])) {
    } else {
      brazo_2dof_B.iend = 0;
      for (brazo_2dof_B.j_j = 2; brazo_2dof_B.j_j <= brazo_2dof_B.n;
           brazo_2dof_B.j_j++) {
        for (brazo_2dof_B.u0 = 0; brazo_2dof_B.u0 <= brazo_2dof_B.iend;
             brazo_2dof_B.u0++) {
          L->data[brazo_2dof_B.u0 + L->size[0] * (brazo_2dof_B.j_j - 1)] = 0.0;
        }

        if (brazo_2dof_B.iend + 1 < H_0->size[0]) {
          brazo_2dof_B.iend++;
        }
      }
    }

    brazo_2dof_emxFree_real_T(&H_0);

    // MATLABSystem: '<S1>/MATLAB System'
    brazo_2dof_B.n = static_cast<int32_T>(((-1.0 - brazo_2dof_B.vNum) + 1.0) /
      -1.0) - 1;
    for (brazo_2dof_B.u0 = 0; brazo_2dof_B.u0 <= brazo_2dof_B.n; brazo_2dof_B.u0
         ++) {
      brazo_2dof_B.j_j = static_cast<int32_T>(brazo_2dof_B.vNum +
        -static_cast<real_T>(brazo_2dof_B.u0));
      brazo_2dof_B.iend = brazo_2dof_B.j_j - 1;
      brazo_2dof_B.MATLABSystem[brazo_2dof_B.iend] /= L->data[(brazo_2dof_B.iend
        * L->size[0] + brazo_2dof_B.j_j) - 1];
      brazo_2dof_B.j = lambda->data[brazo_2dof_B.iend];
      while (brazo_2dof_B.j > 0.0) {
        brazo_2dof_B.MATLABSystem_tmp = static_cast<int32_T>(brazo_2dof_B.j) - 1;
        brazo_2dof_B.MATLABSystem[brazo_2dof_B.MATLABSystem_tmp] -= L->data
          [(brazo_2dof_B.MATLABSystem_tmp * L->size[0] + brazo_2dof_B.j_j) - 1] *
          brazo_2dof_B.MATLABSystem[brazo_2dof_B.iend];
        brazo_2dof_B.j = lambda->data[brazo_2dof_B.MATLABSystem_tmp];
      }
    }

    brazo_2dof_B.loop_ub--;
    for (brazo_2dof_B.u0 = 0; brazo_2dof_B.u0 <= brazo_2dof_B.loop_ub;
         brazo_2dof_B.u0++) {
      brazo_2dof_B.j = lambda->data[brazo_2dof_B.u0];
      while (brazo_2dof_B.j > 0.0) {
        brazo_2dof_B.iend = static_cast<int32_T>(brazo_2dof_B.j) - 1;
        brazo_2dof_B.MATLABSystem[brazo_2dof_B.u0] -= L->data[brazo_2dof_B.iend *
          L->size[0] + brazo_2dof_B.u0] *
          brazo_2dof_B.MATLABSystem[brazo_2dof_B.iend];
        brazo_2dof_B.j = lambda->data[brazo_2dof_B.iend];
      }

      brazo_2dof_B.MATLABSystem[brazo_2dof_B.u0] /= L->data[L->size[0] *
        brazo_2dof_B.u0 + brazo_2dof_B.u0];
    }

    brazo_2dof_emxFree_real_T(&lambda);
    brazo_2dof_emxFree_real_T(&L);

    // SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'
    simulationData = (NeslSimulationData *)brazo_2dof_DW.OUTPUT_1_0_SimData;
    brazo_2dof_B.time_h = brazo_2dof_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time_h;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &brazo_2dof_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &brazo_2dof_DW.OUTPUT_1_0_Modes;
    brazo_2dof_B.b_varargout_1 = false;
    simulationData->mData->mFoundZcEvents = brazo_2dof_B.b_varargout_1;
    simulationData->mData->mIsMajorTimeStep = brazo_2dof_B.b_p;
    brazo_2dof_B.b_p = false;
    simulationData->mData->mIsSolverAssertCheck = brazo_2dof_B.b_p;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    brazo_2dof_B.iv[0] = 0;
    brazo_2dof_B.dv1[0] = brazo_2dof_B.INPUT_1_1_1[0];
    brazo_2dof_B.dv1[1] = brazo_2dof_B.INPUT_1_1_1[1];
    brazo_2dof_B.dv1[2] = brazo_2dof_B.INPUT_1_1_1[2];
    brazo_2dof_B.dv1[3] = brazo_2dof_B.INPUT_1_1_1[3];
    brazo_2dof_B.iv[1] = 4;
    brazo_2dof_B.dv1[4] = brazo_2dof_B.INPUT_2_1_1[0];
    brazo_2dof_B.dv1[5] = brazo_2dof_B.INPUT_2_1_1[1];
    brazo_2dof_B.dv1[6] = brazo_2dof_B.INPUT_2_1_1[2];
    brazo_2dof_B.dv1[7] = brazo_2dof_B.INPUT_2_1_1[3];
    brazo_2dof_B.iv[2] = 8;
    brazo_2dof_B.dv1[8] = brazo_2dof_B.STATE_1[0];
    brazo_2dof_B.dv1[9] = brazo_2dof_B.STATE_1[1];
    brazo_2dof_B.dv1[10] = brazo_2dof_B.STATE_1[2];
    brazo_2dof_B.dv1[11] = brazo_2dof_B.STATE_1[3];
    brazo_2dof_B.iv[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &brazo_2dof_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &brazo_2dof_B.iv[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &brazo_2dof_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    brazo_2dof_B.j_j = ne_simulator_method((NeslSimulator *)
      brazo_2dof_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (brazo_2dof_B.j_j != 0) {
      brazo_2dof_B.b_p = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (brazo_2dof_B.b_p) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }
  }

  if (rtmIsMajorTimeStep(brazo_2dof_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[8];
    int_T tmp_1[3];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
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
    tmp_1[0] = 0;
    tmp_0[0] = brazo_2dof_B.INPUT_1_1_1[0];
    tmp_0[1] = brazo_2dof_B.INPUT_1_1_1[1];
    tmp_0[2] = brazo_2dof_B.INPUT_1_1_1[2];
    tmp_0[3] = brazo_2dof_B.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = brazo_2dof_B.INPUT_2_1_1[0];
    tmp_0[5] = brazo_2dof_B.INPUT_2_1_1[1];
    tmp_0[6] = brazo_2dof_B.INPUT_2_1_1[2];
    tmp_0[7] = brazo_2dof_B.INPUT_2_1_1[3];
    tmp_1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
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
  real_T tmp_0[8];
  int_T tmp_1[3];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
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
  tmp_1[0] = 0;
  tmp_0[0] = brazo_2dof_B.INPUT_1_1_1[0];
  tmp_0[1] = brazo_2dof_B.INPUT_1_1_1[1];
  tmp_0[2] = brazo_2dof_B.INPUT_1_1_1[2];
  tmp_0[3] = brazo_2dof_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = brazo_2dof_B.INPUT_2_1_1[0];
  tmp_0[5] = brazo_2dof_B.INPUT_2_1_1[1];
  tmp_0[6] = brazo_2dof_B.INPUT_2_1_1[2];
  tmp_0[7] = brazo_2dof_B.INPUT_2_1_1[3];
  tmp_1[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 4;
  simulationData->mData->mDx.mX = &_rtXdot->brazo_2dofjoint_ARzq[0];
  diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)brazo_2dof_DW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(brazo_2dof_M, msg);
    }
  }

  // End of Derivatives for SimscapeExecutionBlock: '<S15>/STATE_1'

  // Derivatives for Integrator: '<Root>/JointPos_FD'
  _rtXdot->JointPos_FD_CSTATE[0] = brazo_2dof_B.JointVel_FD[0];

  // Derivatives for Integrator: '<Root>/JointVel_FD'
  _rtXdot->JointVel_FD_CSTATE[0] = brazo_2dof_B.MATLABSystem[0];

  // Derivatives for Integrator: '<Root>/JointPos_FD'
  _rtXdot->JointPos_FD_CSTATE[1] = brazo_2dof_B.JointVel_FD[1];

  // Derivatives for Integrator: '<Root>/JointVel_FD'
  _rtXdot->JointVel_FD_CSTATE[1] = brazo_2dof_B.MATLABSystem[1];
}

// Model initialize function
void brazo_2dof_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

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
    char *msg;
    NeslSimulationData *simulationData;
    boolean_T tmp_1;
    static const char_T tmp_2[7] = { '/', 't', 'o', 'r', 'q', 'u', 'e' };

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
    brazo_2dof_B.modelParameters.mRTWModifiedTimeStamp = 5.21023892E+8;
    brazo_2dof_B.d = 0.001;
    brazo_2dof_B.modelParameters.mSolverTolerance = brazo_2dof_B.d;
    brazo_2dof_B.d = 0.002;
    brazo_2dof_B.modelParameters.mFixedStepSize = brazo_2dof_B.d;
    tmp_0 = false;
    brazo_2dof_B.modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    brazo_2dof_B.i1 = nesl_initialize_simulator((NeslSimulator *)
      brazo_2dof_DW.STATE_1_Simulator, &brazo_2dof_B.modelParameters,
      diagnosticManager);
    if (brazo_2dof_B.i1 != 0) {
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
    brazo_2dof_B.time_tmp_n = brazo_2dof_M->Timing.t[0];
    brazo_2dof_B.time_i = brazo_2dof_B.time_tmp_n;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time_i;
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
    brazo_2dof_B.i1 = ne_simulator_method((NeslSimulator *)
      brazo_2dof_DW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE, simulationData,
      diagnosticManager);
    if (brazo_2dof_B.i1 != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S15>/STATE_1'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S7>/SourceBlock'
    brazo_2dof_DW.obj_g.matlabCodegenIsDeleted = true;
    brazo_2dof_DW.obj_g.isInitialized = 0;
    brazo_2dof_DW.obj_g.matlabCodegenIsDeleted = false;
    brazo_2dof_DW.obj_g.isSetupComplete = false;
    brazo_2dof_DW.obj_g.isInitialized = 1;
    for (brazo_2dof_B.i1 = 0; brazo_2dof_B.i1 < 7; brazo_2dof_B.i1++) {
      brazo_2dof_B.cv[brazo_2dof_B.i1] = tmp_2[brazo_2dof_B.i1];
    }

    brazo_2dof_B.cv[7] = '\x00';
    Sub_brazo_2dof_35.createSubscriber(brazo_2dof_B.cv, 1);
    brazo_2dof_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'
    emxInitStruct_robotics_slmanip_(&brazo_2dof_DW.obj);
    emxInitStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_0);
    emxInitStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_3);
    emxInitStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_2);
    emxInitStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_1);

    // Start for MATLABSystem: '<S1>/MATLAB System'
    brazo_2dof_DW.obj.isInitialized = 0;
    brazo_2dof_DW.obj.isInitialized = 1;
    bra_RigidBodyTree_RigidBodyTree(&brazo_2dof_DW.obj.TreeInternal,
      &brazo_2dof_DW.gobj_0, &brazo_2dof_DW.gobj_3);

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
    brazo_2dof_B.modelParameters_g.mSolverType = NE_SOLVER_TYPE_DAE;
    brazo_2dof_B.modelParameters_g.mSolverTolerance = 0.001;
    brazo_2dof_B.modelParameters_g.mVariableStepSolver = false;
    brazo_2dof_B.modelParameters_g.mFixedStepSize = 0.002;
    brazo_2dof_B.modelParameters_g.mStartTime = 0.0;
    brazo_2dof_B.modelParameters_g.mLoadInitialState = false;
    brazo_2dof_B.modelParameters_g.mUseSimState = false;
    brazo_2dof_B.modelParameters_g.mLinTrimCompile = false;
    brazo_2dof_B.modelParameters_g.mLoggingMode = SSC_LOGGING_NONE;
    brazo_2dof_B.modelParameters_g.mRTWModifiedTimeStamp = 5.21023892E+8;
    brazo_2dof_B.d = 0.001;
    brazo_2dof_B.modelParameters_g.mSolverTolerance = brazo_2dof_B.d;
    brazo_2dof_B.d = 0.002;
    brazo_2dof_B.modelParameters_g.mFixedStepSize = brazo_2dof_B.d;
    tmp_1 = false;
    brazo_2dof_B.modelParameters_g.mVariableStepSolver = tmp_1;
    diagnosticManager = (NeuDiagnosticManager *)brazo_2dof_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    brazo_2dof_B.i1 = nesl_initialize_simulator((NeslSimulator *)
      brazo_2dof_DW.OUTPUT_1_0_Simulator, &brazo_2dof_B.modelParameters_g,
      diagnosticManager);
    if (brazo_2dof_B.i1 != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)brazo_2dof_DW.OUTPUT_1_0_SimData;
    brazo_2dof_B.time_o = brazo_2dof_B.time_tmp_n;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &brazo_2dof_B.time_o;
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
    brazo_2dof_B.i1 = ne_simulator_method((NeslSimulator *)
      brazo_2dof_DW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (brazo_2dof_B.i1 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(brazo_2dof_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // InitializeConditions for SimscapeExecutionBlock: '<S15>/STATE_1'
    tmp_0 = false;
    if (tmp_0) {
      brazo_2dof_B.i1 = strcmp("ode3", rtsiGetSolverName
        (&brazo_2dof_M->solverInfo));
      if (brazo_2dof_B.i1 != 0) {
        msg = solver_mismatch_message("ode3", rtsiGetSolverName
          (&brazo_2dof_M->solverInfo));
        rtmSetErrorStatus(brazo_2dof_M, msg);
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S15>/STATE_1'

    // InitializeConditions for Integrator: '<Root>/JointPos_FD'
    brazo_2dof_X.JointPos_FD_CSTATE[0] = brazo_2dof_P.JointPos_FD_IC[0];

    // InitializeConditions for Integrator: '<Root>/JointVel_FD'
    brazo_2dof_X.JointVel_FD_CSTATE[0] = brazo_2dof_P.JointVel_FD_IC;

    // InitializeConditions for Integrator: '<Root>/JointPos_FD'
    brazo_2dof_X.JointPos_FD_CSTATE[1] = brazo_2dof_P.JointPos_FD_IC[1];

    // InitializeConditions for Integrator: '<Root>/JointVel_FD'
    brazo_2dof_X.JointVel_FD_CSTATE[1] = brazo_2dof_P.JointVel_FD_IC;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S16>/Out1'
    brazo_2dof_B.In1 = brazo_2dof_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
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

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&brazo_2dof_DW.obj_g);

  // End of Terminate for SubSystem: '<Root>/Subscribe'
  emxFreeStruct_robotics_slmanip_(&brazo_2dof_DW.obj);
  emxFreeStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_0);
  emxFreeStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_3);
  emxFreeStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_2);
  emxFreeStruct_g_robotics_manip_(&brazo_2dof_DW.gobj_1);

  // Terminate for SimscapeExecutionBlock: '<S15>/OUTPUT_1_0'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    brazo_2dof_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    brazo_2dof_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("brazo_2dof/Solver Configuration_1");
}

//
// File trailer for generated code.
//
// [EOF]
//
