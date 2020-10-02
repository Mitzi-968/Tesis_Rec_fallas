#!/usr/bin/env python
import sys
import rospy
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState

def callback_pos(msg):
	global Pos
	Pos = [0, 0]
	if len(msg.data) == 2:
		for i in range(len(msg.data)):
			Pos[i] = msg.data[i]

def js_pub():
	print "Publishing joint_states"
	rospy.init_node('js_pub')

	jointStates = JointState()
	jointStates.name = ["joint A", "joint B"]
	jointStates.position = [0, 0]

	pubJointStates = rospy.Publisher("/joint_states", JointState, queue_size=1)
	subPos = rospy.Subscriber("/pos", Float64MultiArray, callback_pos)

	loop = rospy.Rate(10)

	global Pos
	Pos = [0, 0]

	while not rospy.is_shutdown():
		for i in range(len(Pos)):
			jointStates.position[i] = Pos[i]
		jointStates.header.stamp = rospy.Time.now()
		pubJointStates.publish(jointStates)
		loop.sleep()

if __name__ == '__main__':
    try:
        js_pub()
    except rospy.ROSInterruptException:
        pass