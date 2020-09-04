#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block brazo_2dof/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_brazo_2dof_std_msgs_Float64MultiArray> Sub_brazo_2dof_35;

void slros_node_init(int argc, char** argv);

#endif
