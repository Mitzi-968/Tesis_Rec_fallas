//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: brazo_2dof_types.h
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
#ifndef RTW_HEADER_brazo_2dof_types_h_
#define RTW_HEADER_brazo_2dof_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_brazo_2dof_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_brazo_2dof_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_brazo_2dof_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_brazo_2dof_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_brazo_2dof_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_brazo_2dof_std_msgs_Float64MultiArray_

// MsgType=std_msgs/Float64MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real_T Data[2];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_brazo_2dof_std_msgs_MultiArrayLayout Layout;
} SL_Bus_brazo_2dof_std_msgs_Float64MultiArray;

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

#ifndef typedef_emxArray_char_T_brazo_2dof_T
#define typedef_emxArray_char_T_brazo_2dof_T

typedef struct emxArray_char_T emxArray_char_T_brazo_2dof_T;

#endif                                 //typedef_emxArray_char_T_brazo_2dof_T

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

#ifndef typedef_emxArray_real_T_brazo_2dof_T
#define typedef_emxArray_real_T_brazo_2dof_T

typedef struct emxArray_real_T emxArray_real_T_brazo_2dof_T;

#endif                                 //typedef_emxArray_real_T_brazo_2dof_T

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

#ifndef typedef_sZ4qujjIct524SVh4CXhxvG_brazo_T
#define typedef_sZ4qujjIct524SVh4CXhxvG_brazo_T

typedef struct tag_sZ4qujjIct524SVh4CXhxvG sZ4qujjIct524SVh4CXhxvG_brazo_T;

#endif                                 //typedef_sZ4qujjIct524SVh4CXhxvG_brazo_T

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

#ifndef typedef_sGoOVDSFGVYEhLxENxeJvlE_brazo_T
#define typedef_sGoOVDSFGVYEhLxENxeJvlE_brazo_T

typedef struct tag_sGoOVDSFGVYEhLxENxeJvlE sGoOVDSFGVYEhLxENxeJvlE_brazo_T;

#endif                                 //typedef_sGoOVDSFGVYEhLxENxeJvlE_brazo_T

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
  sZ4qujjIct524SVh4CXhxvG_brazo_T Bodies[3];
  sGoOVDSFGVYEhLxENxeJvlE_brazo_T Joints[3];
};

#endif                                 //struct_tag_sLdQy3a99kz5HkGz1jLUdAH

#ifndef typedef_sLdQy3a99kz5HkGz1jLUdAH_brazo_T
#define typedef_sLdQy3a99kz5HkGz1jLUdAH_brazo_T

typedef struct tag_sLdQy3a99kz5HkGz1jLUdAH sLdQy3a99kz5HkGz1jLUdAH_brazo_T;

#endif                                 //typedef_sLdQy3a99kz5HkGz1jLUdAH_brazo_T

#ifndef typedef_f_cell_wrap_brazo_2dof_T
#define typedef_f_cell_wrap_brazo_2dof_T

typedef struct {
  real_T f1[36];
} f_cell_wrap_brazo_2dof_T;

#endif                                 //typedef_f_cell_wrap_brazo_2dof_T

#ifndef typedef_rigidBodyJoint_brazo_2dof_T
#define typedef_rigidBodyJoint_brazo_2dof_T

typedef struct {
  emxArray_char_T_brazo_2dof_T *Type;
  emxArray_real_T_brazo_2dof_T *MotionSubspace;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
} rigidBodyJoint_brazo_2dof_T;

#endif                                 //typedef_rigidBodyJoint_brazo_2dof_T

#ifndef typedef_g_robotics_manip_internal_Rig_T
#define typedef_g_robotics_manip_internal_Rig_T

typedef struct {
  real_T Index;
  rigidBodyJoint_brazo_2dof_T JointInternal;
  real_T ParentIndex;
  real_T SpatialInertia[36];
} g_robotics_manip_internal_Rig_T;

#endif                                 //typedef_g_robotics_manip_internal_Rig_T

#ifndef typedef_f_robotics_manip_internal_Rig_T
#define typedef_f_robotics_manip_internal_Rig_T

typedef struct {
  rigidBodyJoint_brazo_2dof_T JointInternal;
} f_robotics_manip_internal_Rig_T;

#endif                                 //typedef_f_robotics_manip_internal_Rig_T

#ifndef typedef_h_robotics_manip_internal_Rig_T
#define typedef_h_robotics_manip_internal_Rig_T

typedef struct {
  real_T NumBodies;
  f_robotics_manip_internal_Rig_T Base;
  real_T Gravity[3];
  g_robotics_manip_internal_Rig_T *Bodies[2];
  real_T VelocityNumber;
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

#ifndef typedef_emxArray_f_cell_wrap_brazo_2d_T
#define typedef_emxArray_f_cell_wrap_brazo_2d_T

typedef struct {
  f_cell_wrap_brazo_2dof_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_f_cell_wrap_brazo_2d_T;

#endif                                 //typedef_emxArray_f_cell_wrap_brazo_2d_T

// Parameters (default storage)
typedef struct P_brazo_2dof_T_ P_brazo_2dof_T;

// Forward declaration for rtModel
typedef struct tag_RTM_brazo_2dof_T RT_MODEL_brazo_2dof_T;

#endif                                 // RTW_HEADER_brazo_2dof_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
