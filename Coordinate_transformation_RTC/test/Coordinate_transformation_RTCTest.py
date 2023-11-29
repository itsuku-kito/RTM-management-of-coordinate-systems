#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -*- Python -*-

# <rtc-template block="description">
"""
 @file Coordinate_transformation_RTCTest.py
 @brief ModuleDescription
 @date $Date$


"""
# </rtc-template>

from __future__ import print_function
import sys
import time
sys.path.append(".")

# Import RTM module
import RTC
import OpenRTM_aist


# Import Service implementation class
# <rtc-template block="service_impl">

import Coordinate_transformation_RTC

# </rtc-template>

# Import Service stub modules
# <rtc-template block="consumer_import">
# </rtc-template>


# This module's spesification
# <rtc-template block="module_spec">
coordinate_transformation_rtctest_spec = ["implementation_id", "Coordinate_transformation_RTCTest", 
         "type_name",         "Coordinate_transformation_RTCTest", 
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
# @class Coordinate_transformation_RTCTest
# @brief ModuleDescription
# 
# 
# </rtc-template>
class Coordinate_transformation_RTCTest(OpenRTM_aist.DataFlowComponentBase):
    
    ##
    # @brief constructor
    # @param manager Maneger Object
    # 
    def __init__(self, manager):
        OpenRTM_aist.DataFlowComponentBase.__init__(self, manager)

        self._d_transformed_coordinates = OpenRTM_aist.instantiateDataType(RTC.TimedFloatSeq)
        """
        """
        self._transformed_coordinatesIn = OpenRTM_aist.InPort("transformed_coordinates", self._d_transformed_coordinates)
        self._d_pre_transformation_coordinates = OpenRTM_aist.instantiateDataType(RTC.TimedPoint3D)
        """
        """
        self._pre_transformation_coordinatesOut = OpenRTM_aist.OutPort("pre_transformation_coordinates", self._d_pre_transformation_coordinates)


        


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
        self.addInPort("transformed_coordinates",self._transformed_coordinatesIn)
        
        # Set OutPort buffers
        self.addOutPort("pre_transformation_coordinates",self._pre_transformation_coordinatesOut)
        
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
    
    #    ##
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
    
        return RTC.RTC_OK
    
    ###
    ##
    ## The aborting action when main logic error occurred.
    ##
    ## @param ec_id target ExecutionContext Id
    ##
    ## @return RTC::ReturnCode_t
    #    #
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
    
    def runTest(self):
        return True

def RunTest():
    manager = OpenRTM_aist.Manager.instance()
    comp = manager.getComponent("Coordinate_transformation_RTCTest0")
    if comp is None:
        print('Component get failed.', file=sys.stderr)
        return False
    return comp.runTest()

def Coordinate_transformation_RTCTestInit(manager):
    profile = OpenRTM_aist.Properties(defaults_str=coordinate_transformation_rtctest_spec)
    manager.registerFactory(profile,
                            Coordinate_transformation_RTCTest,
                            OpenRTM_aist.Delete)

def MyModuleInit(manager):
    Coordinate_transformation_RTCTestInit(manager)
    Coordinate_transformation_RTC.Coordinate_transformation_RTCInit(manager)

    # Create a component
    comp = manager.createComponent("Coordinate_transformation_RTCTest")

def main():
    mgr = OpenRTM_aist.Manager.init(sys.argv)
    mgr.setModuleInitProc(MyModuleInit)
    mgr.activateManager()
    mgr.runManager(True)

    ret = RunTest()
    mgr.shutdown()

    if ret:
        sys.exit(0)
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()

