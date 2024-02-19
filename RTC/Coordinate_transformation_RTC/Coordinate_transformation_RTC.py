#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -*- Python -*-

# <rtc-template block="description">
"""
 @file Coordinate_transformation_RTC.py
 @brief ModuleDescription
 @date $Date$


"""


# </rtc-template>

import sys
import time
import datetime

import xml.etree.ElementTree as ET
import numpy as np
import pyquaternion
from pyquaternion import Quaternion
from anytree import Node, RenderTree
sys.path.append(".")

# Import RTM module
import RTC
import OpenRTM_aist

import arUco

# Import Service implementation class
# <rtc-template block="service_impl">

# </rtc-template>
 #URDFファイルを指定
tree = ET.parse('open_manipulator.urdf')#読み込むURDFファイルの名前に変更
root = tree.getroot()


# すでに表示したジョイントの名前を格納するセット
displayed_joint_names = set()
# リストを格納するための変数
joint_data = []
link_data = []
R_links = []
R_joints =[]
joint_datas = []
R_tree = []
# 変換行列と回転行列の初期化
R_joint = np.identity(4)
R_link = np.identity(4)


# 表示する深さを指定
display_depth = 7  # 例として7としていますが、必要に応じて変更してください

# Import Service stub modules
# <rtc-template block="consumer_import">
# </rtc-template>


# This module's spesification
# <rtc-template block="module_spec">
coordinate_transformation_rtc_spec = ["implementation_id", "Coordinate_transformation_RTC", 
         "type_name",         "Coordinate_transformation_RTC", 
         "description",       "ModuleDescription", 
         "version",           "1.0.0", 
         "vendor",            "VenderName", 
         "category",          "Category", 
         "activity_type",     "COMMUTATIVE", 
         "max_instance",      "1", 
         "language",          "Python", 
         "lang_type",         "SCRIPT",
         "conf.default.reference_transformation_ID", "0",
         "conf.default.result_transformation_ID", "1",

         "conf.__widget__.reference_transformation_ID", "text",
         "conf.__widget__.result_transformation_ID", "text",

         "conf.__type__.reference_transformation_ID", "int",
         "conf.__type__.result_transformation_ID", "int",

         ""]
# </rtc-template>

# <rtc-template block="component_description">
##
# @class Coordinate_transformation_RTC
# @brief ModuleDescription
# 
# 
# </rtc-template>
class Coordinate_transformation_RTC(OpenRTM_aist.DataFlowComponentBase):
	
    ##
    # @brief constructor
    # @param manager Maneger Object
    # 
    def __init__(self, manager):
        OpenRTM_aist.DataFlowComponentBase.__init__(self, manager)

        self._d_pre_transformation_coordinates1 = OpenRTM_aist.instantiateDataType(RTC.TimedPoint3D)
        """
        """
        self._pre_transformation_coordinates1In = OpenRTM_aist.InPort("pre_transformation_coordinates1", self._d_pre_transformation_coordinates1)
        self._d_pre_transformation_coordinates2 = OpenRTM_aist.instantiateDataType(arUco.arUcoPose3D)
        """
        """
        self._pre_transformation_coordinates2In = OpenRTM_aist.InPort("pre_transformation_coordinates2", self._d_pre_transformation_coordinates2)
        self._d_transformed_coordinates = OpenRTM_aist.instantiateDataType(RTC.TimedPoint3D)
        """
        """
        self._transformed_coordinatesOut = OpenRTM_aist.OutPort("transformed_coordinates", self._d_transformed_coordinates)


		


        # initialize of configuration-data.
        # <rtc-template block="init_conf_param">
        """
        
         - Name:  reference_transformation_ID
         - DefaultValue: 0
        """
        self._reference_transformation_ID = [0]
        """
        
         - Name:  result_transformation_ID
         - DefaultValue: 1
        """
        self._result_transformation_ID = [1]
		
        # </rtc-template>


		 
    ##
    #
    # The initialize action (on CREATED->ALIVE transition)
    # 
    # @return RTC::ReturnCode_t
    # 
    #
    def onInitialize(self):
        # Bind variables and configuration variable
        self.bindParameter("reference_transformation_ID", self._reference_transformation_ID, "0")
        self.bindParameter("result_transformation_ID", self._result_transformation_ID, "1")
		
        # Set InPort buffers
        self.addInPort("pre_transformation_coordinates1",self._pre_transformation_coordinates1In)
        self.addInPort("pre_transformation_coordinates2",self._pre_transformation_coordinates2In)
		
        # Set OutPort buffers
        self.addOutPort("transformed_coordinates",self._transformed_coordinatesOut)
		
        # Set service provider to Ports
		
        # Set service consumers to Ports
		
        # Set CORBA Service Ports
		
        return RTC.RTC_OK
	
    ###
    ## 
    ## The finalize action (on ALIVE->END transition)
    ## 
    ## @return RTC::ReturnCode_t
    #
    ## 
    #def onFinalize(self):
    #

    #    return RTC.RTC_OK
	
    ###
    ##
    ## The startup action when ExecutionContext startup
    ## 
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##
    ##
    #def onStartup(self, ec_id):
    #
    #    return RTC.RTC_OK
	
    ###
    ##
    ## The shutdown action when ExecutionContext stop
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##
    ##
    #def onShutdown(self, ec_id):
    #
    #    return RTC.RTC_OK
	
    ##
    #
    # The activated action (Active state entry action)
    #
    # @param ec_id target ExecutionContext Id
    # 
    # @return RTC::ReturnCode_t
    #
    #
    def onActivated(self, ec_id):
    
        return RTC.RTC_OK
	
    ##
    #
    # The deactivated action (Active state exit action)
    #
    # @param ec_id target ExecutionContext Id
    #
    # @return RTC::ReturnCode_t
    #
    #
    def onDeactivated(self, ec_id):
    
        return RTC.RTC_OK
	
    ##
    #
    # The execution action that is invoked periodically
    #
    # @param ec_id target ExecutionContext Id
    #
    # @return RTC::ReturnCode_t
    #
    #
    def onExecute(self, ec_id):

        #１
        
        if self._pre_transformation_coordinates1In.isNew() :
            print("Received Maker")
            pose = self._pre_transformation_coordinates1In.read()
            print(pose)
            
            pose_X = pose.translates[0].x
            pose_Y = pose.translates[0].y
            pose_Z = pose.translates[0].z

            poseIn = np.array([pose_X,pose_Y,pose_Z,1],dtype = "float")#入力データ
            print(poseIn)
            
            display_links_and_joints(root)

            tree_dict = check_matching_child_parent(joint_datas)

            # 最上位の親ノードを取得
            root_node = [node for node in tree_dict.values() if node.parent is None][0]

            display_tree(root_node)

            # 親ノードのデータを取得
            parent_data = root_node.name

            # 指定された深さまでの子ノードを表示
            display_children(root_node, display_depth)

            R_result = matrix_calculation(R_tree)

            poseOut = np.dot(R_result,poseIn)
            print(poseOut)
            self._d_transformed_coordinates.data = poseOut#出力データ

            print(self._d_transformed_coordinates)
            self._transformed_coordinatesOut.write()

        #2

        if self._pre_transformation_coordinates2In.isNew() :
            
            pose = self._pre_transformation_coordinates2In.read()
            
            
            pose_X = pose.translates[0].x
            pose_Y = pose.translates[0].y
            pose_Z = pose.translates[0].z

            poseIn = np.array([pose_X,pose_Y,pose_Z,1],dtype = "float")#入力データ
            
            display_links_and_joints(root)

            tree_dict = check_matching_child_parent(joint_datas)

            # 最上位の親ノードを取得
            root_node = [node for node in tree_dict.values() if node.parent is None][0]

            display_tree(root_node)

            # 親ノードのデータを取得
            parent_data = root_node.name

            # 指定された深さまでの子ノードを表示
            display_children(root_node, display_depth)

            R_result = matrix_calculation(R_tree)

            poseOut = np.dot(R_result,poseIn)
            self._d_transformed_coordinates.data.x = poseOut[0]#出力データ
            self._d_transformed_coordinates.data.y = poseOut[1]
            self._d_transformed_coordinates.data.z = poseOut[2]

            self._transformed_coordinatesOut.write() 
    
        return RTC.RTC_OK
	
    ###
    ##
    ## The aborting action when main logic error occurred.
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##
    ##
    #def onAborting(self, ec_id):
    #
    #    return RTC.RTC_OK
	
    ###
    ##
    ## The error action in ERROR state
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##
    ##
    #def onError(self, ec_id):
    #
    #    return RTC.RTC_OK
	
    ###
    ##
    ## The reset action that is invoked resetting
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##
    ##
    #def onReset(self, ec_id):
    #
    #    return RTC.RTC_OK
	
    ###
    ##
    ## The state update action that is invoked after onExecute() action
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##

    ##
    #def onStateUpdate(self, ec_id):
    #
    #    return RTC.RTC_OK
	
    ###
    ##
    ## The action that is invoked when execution context's rate is changed
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    ##
    ##
    #def onRateChanged(self, ec_id):
    #
    #    return RTC.RTC_OK
	
def display_links_and_joints(element, indentation=""):
    if element.tag == 'joint':
        display_joint_information(element)
    for child in element:
        display_links_and_joints(child, indentation + "  ")

def display_joint_information(element):
        joint_name = element.attrib.get('name', 'N/A')
        rpy = None  # rpyを初期化
        if joint_name not in displayed_joint_names:
            displayed_joint_names.add(joint_name)#jointの名前取得
            parent_link = element.find('./parent')
            child_link = element.find('./child')
            parent_name = parent_link.attrib.get('link', 'N/A')#親リンク取得
            child_name = child_link.attrib.get('link', 'N/A')#子リンク取得
            if parent_link is not None and child_link is not None:
                origin = element.find('./origin')
                axis = element.find('./axis')
                if origin is not None:
                    joint_rpy_str = origin.get('rpy', 'N/A')#rpy取得
                    joint_xyz_str = origin.get('xyz', 'N/A')#xyz取得
                    joint_rpy = [float(val) for val in joint_rpy_str.split()] if joint_rpy_str != 'N/A' else None
                    joint_xyz = [float(val) for val in joint_xyz_str.split()] if joint_xyz_str != 'N/A' else None
                    if axis is not None:
                       rpy_str = axis.get('xyz', 'N/A')
                       rpy = [float(val) for val in rpy_str.split()] if rpy_str != 'N/A' else None
            rotation_matrix = compute_rotation_matrix(joint_rpy)#回転行列取得
            R_joint[:3, :3] = rotation_matrix
            R_joint[:3, 3] = joint_xyz
            joint_data = ([joint_name, parent_name, child_name, joint_rpy, joint_xyz, np.copy(R_joint)])
            joint_datas.append(joint_data)
        
        return True

def compute_rotation_matrix(rpy):
    roll, pitch, yaw = rpy
    return np.array([
        [np.cos(yaw) * np.cos(pitch), np.cos(yaw) * np.sin(pitch) * np.sin(roll) - np.sin(yaw) * np.cos(roll), np.cos(yaw) * np.sin(pitch) * np.cos(roll) + np.sin(yaw) * np.sin(roll)],
        [np.sin(yaw) * np.cos(pitch), np.sin(yaw) * np.sin(pitch) * np.sin(roll) + np.cos(yaw) * np.cos(roll), np.sin(yaw) * np.sin(pitch) * np.cos(roll) - np.cos(yaw) * np.sin(roll)],
        [-np.sin(pitch), np.cos(pitch) * np.sin(roll), np.cos(pitch) * np.cos(roll)]
    ])

def matrix_calculation(Rs) :
    result = Rs[0]
    for i in range(0,1):
        result = np.dot(result, Rs[i])#変換行列導出
    return result	

def check_matching_child_parent(joint_datas):
    # ツリーを格納する辞書
    tree_dict = {}

    for i in range(len(joint_datas)):
        child_name = joint_datas[i][1]  # i番目のジョイントの子リンクの名前
        for j in range(len(joint_datas)):
            if i != j:
                if child_name == joint_datas[j][2]:
                    parent_name = joint_datas[j][0]
                    child_name = joint_datas[i][0]

                    # 親ノードがまだ辞書に存在しない場合、新しくノードを作成
                    if parent_name not in tree_dict:
                        tree_dict[parent_name] = Node(joint_datas[j][5])

                    # 子ノードを親ノードの下に追加
                    if child_name not in tree_dict:
                        tree_dict[child_name] = Node(joint_datas[i][5], parent=tree_dict[parent_name])
    return tree_dict

# ツリーの表示
def display_tree(root_node):
    for pre, fill, node in RenderTree(root_node):
        print(f"{pre}{node.name}")

def display_children(node, depth, current_depth=0):
    if current_depth <= depth:
        print("  " * current_depth, node.name)

        R_tree.append(node.name)

        for child in node.children:
            display_children(child, depth, current_depth + 1)


def Coordinate_transformation_RTCInit(manager):
    profile = OpenRTM_aist.Properties(defaults_str=coordinate_transformation_rtc_spec)
    manager.registerFactory(profile,
                            Coordinate_transformation_RTC,
                            OpenRTM_aist.Delete)

def MyModuleInit(manager):
    Coordinate_transformation_RTCInit(manager)

    # create instance_name option for createComponent()
    instance_name = [i for i in sys.argv if "--instance_name=" in i]
    if instance_name:
        args = instance_name[0].replace("--", "?")
    else:
        args = ""
  
    # Create a component
    comp = manager.createComponent("Coordinate_transformation_RTC" + args)

def main():
    # remove --instance_name= option
    argv = [i for i in sys.argv if not "--instance_name=" in i]
    # Initialize manager
    mgr = OpenRTM_aist.Manager.init(sys.argv)
    mgr.setModuleInitProc(MyModuleInit)
    mgr.activateManager()
    mgr.runManager()

if __name__ == "__main__":
    main()

