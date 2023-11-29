// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  Coordinate_transformation_RTC_type_castingTest.cpp
 * @brief ModuleDescription (test code)
 *
 */
// </rtc-template>

#include "Coordinate_transformation_RTC_type_castingTest.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const coordinate_transformation_rtc_type_casting_spec[] =
#else
static const char* coordinate_transformation_rtc_type_casting_spec[] =
#endif
  {
    "implementation_id", "Coordinate_transformation_RTC_type_castingTest",
    "type_name",         "Coordinate_transformation_RTC_type_castingTest",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "VenderName",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
Coordinate_transformation_RTC_type_castingTest::Coordinate_transformation_RTC_type_castingTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_arUcoPose3DOut("arUcoPose3D", m_arUcoPose3D),
    m_TimedPose3DIn("TimedPose3D", m_TimedPose3D)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
Coordinate_transformation_RTC_type_castingTest::~Coordinate_transformation_RTC_type_castingTest()
{
}



RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("TimedPose3D", m_TimedPose3DIn);
  
  // Set OutPort buffer
  addOutPort("arUcoPose3D", m_arUcoPose3DOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onExecute(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_castingTest::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


bool Coordinate_transformation_RTC_type_castingTest::runTest()
{
    return true;
}


extern "C"
{
 
  void Coordinate_transformation_RTC_type_castingTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(coordinate_transformation_rtc_type_casting_spec);
    manager->registerFactory(profile,
                             RTC::Create<Coordinate_transformation_RTC_type_castingTest>,
                             RTC::Delete<Coordinate_transformation_RTC_type_castingTest>);
  }
  
}
