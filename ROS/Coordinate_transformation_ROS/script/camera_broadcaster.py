#!/usr/bin/env python3  
import rospy
import tf

if __name__ == '__main__':
    rospy.init_node('camera_tf_broadcaster')
    br = tf.TransformBroadcaster()
    rate = rospy.Rate(1000.0)
    tf_result = tf.transformations.quaternion_from_euler(-1.57, 0.0, 1.57 )#z->y->x
    while not rospy.is_shutdown():
        br.sendTransform((0.18, 0.21, 0.21),
                         (tf_result),
                         rospy.Time.now(),
                         "camera_frame",
                         "world")
        rate.sleep()