#!/usr/bin/env python

import sys, math, copy
import rospy, tf, geometry_msgs.msg

import moveit_commander 
from geometry_msgs.msg import Pose, Quaternion, PoseStamped
from tf.transformations import quaternion_from_euler
from open_manipulator_msgs.msg import JointPosition
from open_manipulator_msgs.srv import SetJointPosition

#/mikata_arm/goal_tool_controlサービスが利用可能になるまで待ち
rospy.wait_for_service('/mikata_arm/goal_tool_control')
#OpenManipulatorアームに関節位置を送信するためのサービスプロキシ（gr）を設定
gr = rospy.ServiceProxy('/mikata_arm/goal_tool_control', SetJointPosition)
jp = JointPosition()
jp.position = []
jp.joint_name = []


#クオータニオン導出
def euler_to_quaternion(role, pitch, yaw):
	q = quaternion_from_euler(role, pitch, yaw)
	return Quaternion(q[0], q[1], q[2], q[3])

def gripper(posi):
    # グリッパーを制御してその位置を設定
    jp.joint_name.append('gripper')
    jp.position.append(posi)
    res = gr('', jp, 0.0)
    print('Gripper Call')

def listener():
    rospy.init_node("listener", anonymous=True)
    # トピック1のサブスクライバを定義
    rospy.Subscriber("transformed_coordinates", Float32MultiArray, position1)
    # ノードを実行し、新しいメッセージを受信するまで続ける
    rospy.spin()

def main():

    # configuration for moveit
    robot = moveit_commander.RobotCommander()

    print("robot group:", robot.get_group_names())
    #group name
    arm = moveit_commander.MoveGroupCommander("arm")
    print("robot current state:", arm.get_current_joint_values())
    #joint name
    print("arm joint name:", robot.get_joint_names("arm"))
    print ("")

    arm.set_pose_reference_frame("world")

    rospy.loginfo("Gripper Init")
    print("gripper")
    gripper(0.7)

    rospy.sleep(3)

    rospy.loginfo("Start InitPose")
    joint_goal = arm.get_current_joint_values()
    for i in range(0,len(joint_goal)):
      joint_goal[i] = 0
    joint_goal[1] = -1.18
    joint_goal[2] = 0.80
    joint_goal[4] = 0.568 
    arm.set_max_velocity_scaling_factor(0.2)
    arm.go(joint_goal, wait=True)

# Aruco Pose2
    rospy.loginfo("Aruco Pose2")
    print("arm current pose states:", arm.get_current_pose().pose)
    q = tf.transformations.quaternion_from_euler(0.0, -3.14, 1.57)
    aruco_pose = Pose()
    aruco_pose.position.x = position1.data[0]
    aruco_pose.position.y = position1.data[1]
    aruco_pose.position.z = position1.data[2]+0.05
    arm.set_joint_value_target(aruco_pose, True)
    arm.go(aruco_pose,wait=True)
    rospy.loginfo("Goal Aruco Pose2")

    rospy.sleep(3)

    gripper(-0.7)

    # wait
    rospy.sleep(3.0)

    rospy.loginfo("Back InitPose")
    joint_goal = arm.get_current_joint_values()
    for i in range(0,len(joint_goal)):
      joint_goal[i] = 0
    joint_goal[1] = -1.18
    joint_goal[2] = 0.80
    joint_goal[4] = 0.568 
    arm.set_max_velocity_scaling_factor(0.2)
    arm.go(joint_goal, wait=True)

    print("Finish!")


if __name__ == '__main__':

  rospy.init_node( "manipulation", anonymous=True )

  try:
      main()
  except (rospy.ROSInterruptException):
      pass

"""
if __name__ == '__main__':
    global transa
    global transb
    node_name = "manip_node"
    rospy.init_node( node_name, anonymous=True )

    rate = rospy.Rate(10.0) 
    #manipA()

    while not rospy.is_shutdown():
        try:
            (transa,rota) = listenera.lookupTransform('/world', '/marker_frame', rospy.Time(0))
            #(transb,rotb) = listenerb.lookupTransform('/world', '/start_pos', rospy.Time(0))
            main()
        except (rospy.ROSInterruptException, tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
            continue
"""