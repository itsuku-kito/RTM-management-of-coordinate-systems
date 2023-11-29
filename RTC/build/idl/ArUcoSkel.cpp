// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file ArUcoSkel.cpp 
 * @brief ArUco server skeleton wrapper
 * @date Mon Nov 13 19:57:13 2023 
 *
 */

#include "ArUcoSkel.h"

#if defined ORB_IS_TAO
#  include "ArUcoC.cpp"
#  include "ArUcoS.cpp"
#elif defined ORB_IS_OMNIORB
#  include "ArUcoSK.cc"
#  include "ArUcoDynSK.cc"
//#  include "ArUcoUtil.cpp"
#elif defined ORB_IS_MICO
#  include "ArUco.cc"
#  include "ArUco_skel.cc"
#elif defined ORB_IS_ORBIT2
#  include "ArUco-cpp-stubs.cc"
#  include "ArUco-cpp-skels.cc"
#elif defined ORB_IS_RTORB
// #  include "OpenRTM-aist-decls.h"
#  include "ArUco-common.c"
#  include "ArUco-skels.c"
#  include "ArUco-skelimpl.c"
#elif defined ORB_IS_ORBEXPRESS
#  include "ArUco.cc"
#  include "ArUco_c.cc"
#else
#  error "NO ORB defined"
#endif

// end of ArUcoSkel.cpp
