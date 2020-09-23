#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block CtrlP_Tray_Poli_ROS/Subs_Pos
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray> Sub_CtrlP_Tray_Poli_ROS_177;

// For Block CtrlP_Tray_Poli_ROS/Pub_Torque
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray> Pub_CtrlP_Tray_Poli_ROS_182;

void slros_node_init(int argc, char** argv);

#endif
