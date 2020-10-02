#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "brazo_2dof";

// For Block brazo_2dof/Subs_Torque
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_brazo_2dof_std_msgs_Float64MultiArray> Sub_brazo_2dof_35;

// For Block brazo_2dof/Subsystem/Pub_Pos
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_brazo_2dof_std_msgs_Float64MultiArray> Pub_brazo_2dof_56;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

