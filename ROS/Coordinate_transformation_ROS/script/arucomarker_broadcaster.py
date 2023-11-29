#!/usr/bin/env python3  
import rospy
import tf
from std_msgs.msg import Float32MultiArray

def marker_pose(data):   
    br_1 = tf.TransformBroadcaster()
    br_2 = tf.TransformBroadcaster()
    tf_result = tf.transformations.quaternion_from_euler(0,0,0)
    
    
    br_1.sendTransform((data.data[1], data.data[2], data.data[3]),
                       (tf_result),
                       rospy.Time.now(),
                       "aruco_id1",
                       "cam_1")

def main():
    rospy.init_node('arucomarker_broadcaster')
    
    while not rospy.is_shutdown():
        rospy.Subscriber('markerData', Float32MultiArray, marker_pose, queue_size=1)

        rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass