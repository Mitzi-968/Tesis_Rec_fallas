#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Float64MultiArray.h>
#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "torques_node");
  std::cout << "Publicando torques...>" << std::endl;
  std_msgs::Float64MultiArray tor_msg;

  ros::NodeHandle n;
  ros::Publisher  tor_pub = n.advertise<std_msgs::Float64MultiArray>("/torque", 10);

  ros::Rate loop(60);
  tor_msg.data.resize(2);
  while (ros::ok())
  {
    tor_msg.data[0] = 0;
    tor_msg.data[1] = 0;

    tor_pub.publish(tor_msg);
    std::cout << "Publicando torques...>" << std::endl;
    //ROS_INFO("I heard: [%d]", tor_msg.data[0];

    loop.sleep();    
    ros::spinOnce();
  }
  return 0;
}