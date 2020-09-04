#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "brazo_2dof";

// For Block brazo_2dof/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_brazo_2dof_std_msgs_Float64MultiArray> Sub_brazo_2dof_35;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

