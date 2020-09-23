//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: CtrlP_Tray_Poli_ROS_types.h
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
#ifndef RTW_HEADER_CtrlP_Tray_Poli_ROS_types_h_
#define RTW_HEADER_CtrlP_Tray_Poli_ROS_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray_

// MsgType=std_msgs/Float64MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real_T Data[2];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_MultiArrayLayout Layout;
} SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_wEaJ8LY3tnk5oO3usYUbWE_
#define DEFINED_TYPEDEF_FOR_struct_wEaJ8LY3tnk5oO3usYUbWE_

typedef struct {
  real_T NameLength;
  uint8_T Name[6];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[2];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
} struct_wEaJ8LY3tnk5oO3usYUbWE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_o0IUHl9fQTmfwOrlxOCIeH_
#define DEFINED_TYPEDEF_FOR_struct_o0IUHl9fQTmfwOrlxOCIeH_

typedef struct {
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[7];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
} struct_o0IUHl9fQTmfwOrlxOCIeH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_aUcH2XF5seUL3rWMB23yZE_
#define DEFINED_TYPEDEF_FOR_struct_aUcH2XF5seUL3rWMB23yZE_

typedef struct {
  real_T NumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[4];
  real_T VelocityDoFMap[4];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[4];
  struct_wEaJ8LY3tnk5oO3usYUbWE Bodies[3];
  struct_o0IUHl9fQTmfwOrlxOCIeH Joints[3];
} struct_aUcH2XF5seUL3rWMB23yZE;

#endif

#ifndef struct_tag_s2V4wgN1Ko8QCEjxJz4YaSF
#define struct_tag_s2V4wgN1Ko8QCEjxJz4YaSF

struct tag_s2V4wgN1Ko8QCEjxJz4YaSF
{
  uint32_T VelocityBoundaryCondition;
};

#endif                                 //struct_tag_s2V4wgN1Ko8QCEjxJz4YaSF

#ifndef typedef_s2V4wgN1Ko8QCEjxJz4YaSF_CtrlP_T
#define typedef_s2V4wgN1Ko8QCEjxJz4YaSF_CtrlP_T

typedef struct tag_s2V4wgN1Ko8QCEjxJz4YaSF s2V4wgN1Ko8QCEjxJz4YaSF_CtrlP_T;

#endif                                 //typedef_s2V4wgN1Ko8QCEjxJz4YaSF_CtrlP_T

#ifndef struct_tag_sw4569AEcf1J24gCESOFByG
#define struct_tag_sw4569AEcf1J24gCESOFByG

struct tag_sw4569AEcf1J24gCESOFByG
{
  real_T VelocityBoundaryCondition;
};

#endif                                 //struct_tag_sw4569AEcf1J24gCESOFByG

#ifndef typedef_sw4569AEcf1J24gCESOFByG_CtrlP_T
#define typedef_sw4569AEcf1J24gCESOFByG_CtrlP_T

typedef struct tag_sw4569AEcf1J24gCESOFByG sw4569AEcf1J24gCESOFByG_CtrlP_T;

#endif                                 //typedef_sw4569AEcf1J24gCESOFByG_CtrlP_T

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_char_T

#ifndef typedef_emxArray_char_T_CtrlP_Tray_Po_T
#define typedef_emxArray_char_T_CtrlP_Tray_Po_T

typedef struct emxArray_char_T emxArray_char_T_CtrlP_Tray_Po_T;

#endif                                 //typedef_emxArray_char_T_CtrlP_Tray_Po_T

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_real_T

#ifndef typedef_emxArray_real_T_CtrlP_Tray_Po_T
#define typedef_emxArray_real_T_CtrlP_Tray_Po_T

typedef struct emxArray_real_T emxArray_real_T_CtrlP_Tray_Po_T;

#endif                                 //typedef_emxArray_real_T_CtrlP_Tray_Po_T

#ifndef typedef_struct_T_CtrlP_Tray_Poli_ROS_T
#define typedef_struct_T_CtrlP_Tray_Poli_ROS_T

typedef struct {
  char_T Value[8];
} struct_T_CtrlP_Tray_Poli_ROS_T;

#endif                                 //typedef_struct_T_CtrlP_Tray_Poli_ROS_T

#ifndef struct_tag_so4pBuofLXIy3ixtLNBoZq
#define struct_tag_so4pBuofLXIy3ixtLNBoZq

struct tag_so4pBuofLXIy3ixtLNBoZq
{
  char_T PartialMatching[6];
};

#endif                                 //struct_tag_so4pBuofLXIy3ixtLNBoZq

#ifndef typedef_so4pBuofLXIy3ixtLNBoZq_CtrlP__T
#define typedef_so4pBuofLXIy3ixtLNBoZq_CtrlP__T

typedef struct tag_so4pBuofLXIy3ixtLNBoZq so4pBuofLXIy3ixtLNBoZq_CtrlP__T;

#endif                                 //typedef_so4pBuofLXIy3ixtLNBoZq_CtrlP__T

#ifndef typedef_c_cell_wrap_CtrlP_Tray_Poli_R_T
#define typedef_c_cell_wrap_CtrlP_Tray_Poli_R_T

typedef struct {
  uint32_T f1[8];
} c_cell_wrap_CtrlP_Tray_Poli_R_T;

#endif                                 //typedef_c_cell_wrap_CtrlP_Tray_Poli_R_T

#ifndef struct_tag_sZ4qujjIct524SVh4CXhxvG
#define struct_tag_sZ4qujjIct524SVh4CXhxvG

struct tag_sZ4qujjIct524SVh4CXhxvG
{
  real_T NameLength;
  uint8_T Name[6];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[2];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
};

#endif                                 //struct_tag_sZ4qujjIct524SVh4CXhxvG

#ifndef typedef_sZ4qujjIct524SVh4CXhxvG_CtrlP_T
#define typedef_sZ4qujjIct524SVh4CXhxvG_CtrlP_T

typedef struct tag_sZ4qujjIct524SVh4CXhxvG sZ4qujjIct524SVh4CXhxvG_CtrlP_T;

#endif                                 //typedef_sZ4qujjIct524SVh4CXhxvG_CtrlP_T

#ifndef struct_tag_sGoOVDSFGVYEhLxENxeJvlE
#define struct_tag_sGoOVDSFGVYEhLxENxeJvlE

struct tag_sGoOVDSFGVYEhLxENxeJvlE
{
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[7];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
};

#endif                                 //struct_tag_sGoOVDSFGVYEhLxENxeJvlE

#ifndef typedef_sGoOVDSFGVYEhLxENxeJvlE_CtrlP_T
#define typedef_sGoOVDSFGVYEhLxENxeJvlE_CtrlP_T

typedef struct tag_sGoOVDSFGVYEhLxENxeJvlE sGoOVDSFGVYEhLxENxeJvlE_CtrlP_T;

#endif                                 //typedef_sGoOVDSFGVYEhLxENxeJvlE_CtrlP_T

#ifndef struct_tag_sLdQy3a99kz5HkGz1jLUdAH
#define struct_tag_sLdQy3a99kz5HkGz1jLUdAH

struct tag_sLdQy3a99kz5HkGz1jLUdAH
{
  real_T NumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[4];
  real_T VelocityDoFMap[4];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[4];
  sZ4qujjIct524SVh4CXhxvG_CtrlP_T Bodies[3];
  sGoOVDSFGVYEhLxENxeJvlE_CtrlP_T Joints[3];
};

#endif                                 //struct_tag_sLdQy3a99kz5HkGz1jLUdAH

#ifndef typedef_sLdQy3a99kz5HkGz1jLUdAH_CtrlP_T
#define typedef_sLdQy3a99kz5HkGz1jLUdAH_CtrlP_T

typedef struct tag_sLdQy3a99kz5HkGz1jLUdAH sLdQy3a99kz5HkGz1jLUdAH_CtrlP_T;

#endif                                 //typedef_sLdQy3a99kz5HkGz1jLUdAH_CtrlP_T

#ifndef typedef_e_cell_wrap_CtrlP_Tray_Poli_R_T
#define typedef_e_cell_wrap_CtrlP_Tray_Poli_R_T

typedef struct {
  real_T f1[36];
} e_cell_wrap_CtrlP_Tray_Poli_R_T;

#endif                                 //typedef_e_cell_wrap_CtrlP_Tray_Poli_R_T

#ifndef typedef_rigidBodyJoint_CtrlP_Tray_Pol_T
#define typedef_rigidBodyJoint_CtrlP_Tray_Pol_T

typedef struct {
  emxArray_char_T_CtrlP_Tray_Po_T *Type;
  emxArray_real_T_CtrlP_Tray_Po_T *MotionSubspace;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
} rigidBodyJoint_CtrlP_Tray_Pol_T;

#endif                                 //typedef_rigidBodyJoint_CtrlP_Tray_Pol_T

#ifndef typedef_g_robotics_manip_internal_Rig_T
#define typedef_g_robotics_manip_internal_Rig_T

typedef struct {
  real_T Index;
  rigidBodyJoint_CtrlP_Tray_Pol_T JointInternal;
  real_T ParentIndex;
  real_T SpatialInertia[36];
} g_robotics_manip_internal_Rig_T;

#endif                                 //typedef_g_robotics_manip_internal_Rig_T

#ifndef typedef_f_robotics_manip_internal_Rig_T
#define typedef_f_robotics_manip_internal_Rig_T

typedef struct {
  rigidBodyJoint_CtrlP_Tray_Pol_T JointInternal;
} f_robotics_manip_internal_Rig_T;

#endif                                 //typedef_f_robotics_manip_internal_Rig_T

#ifndef typedef_h_robotics_manip_internal_Rig_T
#define typedef_h_robotics_manip_internal_Rig_T

typedef struct {
  real_T NumBodies;
  f_robotics_manip_internal_Rig_T Base;
  real_T Gravity[3];
  g_robotics_manip_internal_Rig_T *Bodies[2];
  real_T PositionDoFMap[4];
  real_T VelocityDoFMap[4];
} h_robotics_manip_internal_Rig_T;

#endif                                 //typedef_h_robotics_manip_internal_Rig_T

#ifndef typedef_robotics_slmanip_internal_blo_T
#define typedef_robotics_slmanip_internal_blo_T

typedef struct {
  int32_T isInitialized;
  h_robotics_manip_internal_Rig_T TreeInternal;
} robotics_slmanip_internal_blo_T;

#endif                                 //typedef_robotics_slmanip_internal_blo_T

#ifndef typedef_emxArray_e_cell_wrap_CtrlP_Tr_T
#define typedef_emxArray_e_cell_wrap_CtrlP_Tr_T

typedef struct {
  e_cell_wrap_CtrlP_Tray_Poli_R_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_e_cell_wrap_CtrlP_Tr_T;

#endif                                 //typedef_emxArray_e_cell_wrap_CtrlP_Tr_T

#ifndef typedef_robotics_slcore_internal_bloc_T
#define typedef_robotics_slcore_internal_bloc_T

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  c_cell_wrap_CtrlP_Tray_Poli_R_T inputVarSize;
  real_T Waypoints[12];
  real_T TimePoints[6];
  real_T VelocityBoundaryCondition[12];
  real_T AccelerationBoundaryCondition[10];
} robotics_slcore_internal_bloc_T;

#endif                                 //typedef_robotics_slcore_internal_bloc_T

// Parameters (default storage)
typedef struct P_CtrlP_Tray_Poli_ROS_T_ P_CtrlP_Tray_Poli_ROS_T;

// Forward declaration for rtModel
typedef struct tag_RTM_CtrlP_Tray_Poli_ROS_T RT_MODEL_CtrlP_Tray_Poli_ROS_T;

#endif                               // RTW_HEADER_CtrlP_Tray_Poli_ROS_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
