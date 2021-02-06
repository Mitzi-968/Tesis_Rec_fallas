#! /usr/bin/env python
# remember to make this file executable (`chmod +x`) before trying to run it

import rospy
from std_srvs.srv import Trigger, TriggerRequest

# init a node as usual
rospy.init_node('just_service_client')

# wait for this service to be running
# Ideally, this service should run 24/7, but remember it's fake :) 
rospy.wait_for_service('/fake_911')

# Create the connection to the service. Remeber it's a Trigger service
just_service = rospy.ServiceProxy('/fake_911', Trigger)

# Create an object of type TriggerRequest. We need a TriggerRequest for a Trigger service
# We don't need to pass any argument because it doesn't take any
just = TriggerRequest()

# Now send the request through the connection
result = just_service(just)

# Done, let's see the result!
print result