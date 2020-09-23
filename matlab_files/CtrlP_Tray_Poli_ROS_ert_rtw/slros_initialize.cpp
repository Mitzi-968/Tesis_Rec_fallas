#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "CtrlP_Tray_Poli_ROS";

// For Block CtrlP_Tray_Poli_ROS/Subs_Pos
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray> Sub_CtrlP_Tray_Poli_ROS_177;

// For Block CtrlP_Tray_Poli_ROS/Pub_Torque
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_CtrlP_Tray_Poli_ROS_std_msgs_Float64MultiArray> Pub_CtrlP_Tray_Poli_ROS_182;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

