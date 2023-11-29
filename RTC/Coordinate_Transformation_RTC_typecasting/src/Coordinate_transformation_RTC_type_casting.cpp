// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  Coordinate_transformation_RTC_type_casting.cpp
 * @brief ModuleDescription
 *
 */
// </rtc-template>

#include "Coordinate_transformation_RTC_type_casting.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const coordinate_transformation_rtc_type_casting_spec[] =
#else
static const char* coordinate_transformation_rtc_type_casting_spec[] =
#endif
  {
    "implementation_id", "Coordinate_transformation_RTC_type_casting",
    "type_name",         "Coordinate_transformation_RTC_type_casting",
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
Coordinate_transformation_RTC_type_casting::Coordinate_transformation_RTC_type_casting(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_arUcoPose3DIn("arUcoPose3D", m_arUcoPose3D),
    m_TimedPose3DOut("TimedPose3D", m_TimedPose3D)
    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
Coordinate_transformation_RTC_type_casting::~Coordinate_transformation_RTC_type_casting()
{
}



RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("arUcoPose3D", m_arUcoPose3DIn);
  
  // Set OutPort buffer
  addOutPort("TimedPose3D", m_TimedPose3DOut);

  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onExecute(RTC::UniqueId /*ec_id*/)
{
  if(m_arUcoPose3DIn.isNew())
  {
    std::cout <<"Received Maker"<<std::endl;
    m_arUcoPose3DIn.read();
    m_TimedPose3D.data.x = m_arUcoPose3D.translates[0].x;
    m_TimedPose3D.data.y = m_arUcoPose3D.translates[0].y;
    m_TimedPose3D.data.z = m_arUcoPose3D.translates[0].z;

    m_TimedPose3DOut.write();

  }
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t Coordinate_transformation_RTC_type_casting::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}



extern "C"
{
 
  void Coordinate_transformation_RTC_type_castingInit(RTC::Manager* manager)
  {
    coil::Properties profile(coordinate_transformation_rtc_type_casting_spec);
    manager->registerFactory(profile,
                             RTC::Create<Coordinate_transformation_RTC_type_casting>,
                             RTC::Delete<Coordinate_transformation_RTC_type_casting>);
  }
  
}
