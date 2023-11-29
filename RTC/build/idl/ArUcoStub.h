// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file ArUcoStub.h 
 * @brief ArUco client stub header wrapper code
 * @date Mon Nov 13 19:57:13 2023 
 *
 */

#ifndef ARUCOSTUB_H
#define ARUCOSTUB_H


#include <rtm/config_rtc.h>
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#if   defined ORB_IS_TAO
#  include "ArUcoC.h"
#elif defined ORB_IS_OMNIORB
#  if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#    ifdef USE_stub_in_nt_dll
#        undef USE_stub_in_nt_dll
#    endif
#    ifdef OpenRTM_IMPORT_SYMBOL
#        define USE_stub_in_nt_dll
#    endif
#  endif
#  include "ArUco.hh"
#elif defined ORB_IS_MICO
#  include "ArUco.h"
#elif defined ORB_IS_ORBIT2
#  include "ArUco-cpp-stubs.h"
#elif defined ORB_IS_RTORB
#  include "ArUco.h"
#elif defined ORB_IS_ORBEXPRESS
#  include "ArUco_c.h"
#else
#  error "NO ORB defined"
#endif

#endif // ARUCOSTUB_H
