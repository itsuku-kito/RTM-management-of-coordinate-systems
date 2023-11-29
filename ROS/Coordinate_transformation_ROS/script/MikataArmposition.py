#! /usr/bin/env python3
# -*- coding: utf-8 -*-

import rospy,tf, tf2_ros
import sys, math, copy
import rospy
import time
import moveit_commander
import moveit_msgs.msg
from geometry_msgs.msg import *
from std_msgs.msg import Float32MultiArray
from open_manipulator_msgs.msg import JointPosition
from open_manipulator_msgs.srv import SetJointPosition

rospy.wait_for_service('/mikata_arm/goal_tool_control')

gripper = rospy.ServiceProxy('/mikata_arm/goal_tool_control', SetJointPosition)
jp = JointPosition()
jp.position = []
jp.joint_name = []

def gripper(posi):

  jp.joint_name.append('gripper')
  jp.position.append(posi)
  #res = gripper('', jp, 0.0)
  print('Gripper Call')

def listener():
    rospy.init_node("listener", anonymous=True)
    # トピック1のサブスクライバを定義
    rospy.Subscriber("transformed_coordinates", Float32MultiArray, position1)
    # ノードを実行し、新しいメッセージを受信するまで続ける
    rospy.spin()

def position1(data):
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
    #gripper(0.7)

    rospy.sleep(3)
    print(data)

    rospy.loginfo("Start InitPose")
    joint_goal = arm.get_current_joint_values()
    for i in range(0,len(joint_goal)):
      joint_goal[i] = 0
    joint_goal[1] = -1.18
    joint_goal[2] = 0.80
    joint_goal[4] = 0.568 
    arm.set_max_velocity_scaling_factor(0.2)
    arm.go(joint_goal, wait=True)
    
    arm.set_end_effector_link("end_effector_link")
    joint_goal = PoseStamped()
    # wait
    rospy.sleep(3.0)
#
    quat = tf.transformations.quaternion_from_euler(0, -3.14, -1.57)
   
    # Pose 

    rospy.loginfo("Pick Pose")

    pose_target_1 = Pose()
    pose_target_1.position.x = 0.322
    pose_target_1.position.y = 0.0
    pose_target_1.position.z = 0.25
    pose_target_1.orientation.x = -0.002
    pose_target_1.orientation.y = 0.0368
    pose_target_1.orientation.z = 0
    pose_target_1.orientation.w =  0.9993

    rospy.loginfo( "Set Target to Pose:\n{}".format( pose_target_1 ) )
    arm.set_pose_target( pose_target_1 )
    arm.go()
    print("arm current pose states:", arm.get_current_pose().pose)
    print ("Pick Pose Finished")

    rospy.loginfo( "Start Pose Target 2")
    pose_target_2 = Pose()

    pose_target_2.position.x = data.data[0]
    pose_target_2.position.y = data.data[1]
    pose_target_2.position.z = 0.129

    pose_target_2.orientation.x = -0.003
    pose_target_2.orientation.y = 0.013
    pose_target_2.orientation.z = -0.0089
    pose_target_2.orientation.w =  0.9998
    
    rospy.loginfo( "Set Target to Pose:\n{}".format( pose_target_2 ) )
    arm.set_pose_target( pose_target_2 )
    arm.go()

    # Compute Cartesian path
    (plan, fraction) = arm.compute_cartesian_path([pose_target_1, pose_target_2], 0.01, 0.0)
    
    """
    joint_goal = PoseStamped()
    joint_goal.pose.position.x = data.data[0]
    joint_goal.pose.position.y = data.data[1]
    joint_goal.pose.position.z = data.data[2]
    joint_goal.pose.orientation.x = quat[0]
    joint_goal.pose.orientation.y = quat[1]
    joint_goal.pose.orientation.z = quat[2]
    joint_goal.pose.orientation.w = quat[3]
    

    
    joint_goal = PoseStamped()
    joint_goal.pose.position.x = 0.341
    joint_goal.pose.position.y = -0.093
    joint_goal.pose.position.z = 0.108
    joint_goal.pose.orientation.x = quat[0]
    joint_goal.pose.orientation.y = quat[1]
    joint_goal.pose.orientation.z = quat[2]
    joint_goal.pose.orientation.w = quat[3]
    arm.set_pose_target(joint_goal)
    arm.go()
    print("arm current pose states:", arm.get_current_pose().pose)
    print ("Pick Pose Finished")
    
    
    #arm.set_position_target([0.341,-0.0933,0.1087])
    #arm.set_position_target([data.data[0],data.data[1],data.data[2]])

    arm.go()
    print ("Pick Pose Finished")
    
    rospy.loginfo("Start Pose")
    joint_goal = arm.get_current_joint_values()
    joint_goal[0] = 0
    joint_goal[1] = 0
    joint_goal[2] = 0
    joint_goal[3] = 0
    joint_goal[4] = 0.0
    joint_goal[5] = 0.0
    arm.go(joint_goal, wait=True)
    """
    print ("Start Pose Finished")
       
if __name__ == '__main__':

   listener()
   rate = rospy.Rate(10.0) 
   rate.sleep()