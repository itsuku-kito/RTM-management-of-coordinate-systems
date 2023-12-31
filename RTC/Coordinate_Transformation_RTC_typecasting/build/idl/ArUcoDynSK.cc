// This file is generated by omniidl (C++ backend) - omniORB_4_2. Do not edit.

#include "ArUco.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_2_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::PR_structMember _0RL_structmember_arUco_mpixelPoint2D[] = {
  {"x", CORBA::TypeCode::PR_long_tc()},
  {"y", CORBA::TypeCode::PR_long_tc()}
};

#ifdef _0RL_tc_arUco_mpixelPoint2D
#  undef _0RL_tc_arUco_mpixelPoint2D
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_mpixelPoint2D = CORBA::TypeCode::PR_struct_tc("IDL:arUco/pixelPoint2D:1.0", "pixelPoint2D", _0RL_structmember_arUco_mpixelPoint2D, 2, &_0RL_tcTrack);

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_pixelPoint2D = _0RL_tc_arUco_mpixelPoint2D;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_pixelPoint2D = _0RL_tc_arUco_mpixelPoint2D;
#endif






static CORBA::PR_structMember _0RL_structmember_arUco_mmarkerCorner[] = {
  {"point1", _0RL_tc_arUco_mpixelPoint2D},
  {"point2", _0RL_tc_arUco_mpixelPoint2D},
  {"point3", _0RL_tc_arUco_mpixelPoint2D},
  {"point4", _0RL_tc_arUco_mpixelPoint2D}
};

#ifdef _0RL_tc_arUco_mmarkerCorner
#  undef _0RL_tc_arUco_mmarkerCorner
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_mmarkerCorner = CORBA::TypeCode::PR_struct_tc("IDL:arUco/markerCorner:1.0", "markerCorner", _0RL_structmember_arUco_mmarkerCorner, 4, &_0RL_tcTrack);





#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_markerCorner = _0RL_tc_arUco_mmarkerCorner;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_markerCorner = _0RL_tc_arUco_mmarkerCorner;
#endif


static CORBA::PR_structMember _0RL_structmember_RTC_mTime[] = {
  {"sec", CORBA::TypeCode::PR_ulong_tc()},
  {"nsec", CORBA::TypeCode::PR_ulong_tc()}
};

#ifdef _0RL_tc_RTC_mTime
#  undef _0RL_tc_RTC_mTime
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mTime = CORBA::TypeCode::PR_struct_tc("IDL:RTC/Time:1.0", "Time", _0RL_structmember_RTC_mTime, 2, &_0RL_tcTrack);






static CORBA::PR_structMember _0RL_structmember_arUco_marUcoPoint2D[] = {
  {"tm", _0RL_tc_RTC_mTime},
  {"ids", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_long_tc(), &_0RL_tcTrack)},
  {"markerCorners", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_arUco_mmarkerCorner, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_arUco_marUcoPoint2D
#  undef _0RL_tc_arUco_marUcoPoint2D
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_marUcoPoint2D = CORBA::TypeCode::PR_struct_tc("IDL:arUco/arUcoPoint2D:1.0", "arUcoPoint2D", _0RL_structmember_arUco_marUcoPoint2D, 3, &_0RL_tcTrack);







#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_arUcoPoint2D = _0RL_tc_arUco_marUcoPoint2D;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_arUcoPoint2D = _0RL_tc_arUco_marUcoPoint2D;
#endif


static CORBA::PR_structMember _0RL_structmember_arUco_mrotationMat[] = {
  {"R11", CORBA::TypeCode::PR_double_tc()},
  {"R12", CORBA::TypeCode::PR_double_tc()},
  {"R13", CORBA::TypeCode::PR_double_tc()},
  {"R21", CORBA::TypeCode::PR_double_tc()},
  {"R22", CORBA::TypeCode::PR_double_tc()},
  {"R23", CORBA::TypeCode::PR_double_tc()},
  {"R31", CORBA::TypeCode::PR_double_tc()},
  {"R32", CORBA::TypeCode::PR_double_tc()},
  {"R33", CORBA::TypeCode::PR_double_tc()}
};

#ifdef _0RL_tc_arUco_mrotationMat
#  undef _0RL_tc_arUco_mrotationMat
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_mrotationMat = CORBA::TypeCode::PR_struct_tc("IDL:arUco/rotationMat:1.0", "rotationMat", _0RL_structmember_arUco_mrotationMat, 9, &_0RL_tcTrack);

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_rotationMat = _0RL_tc_arUco_mrotationMat;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_rotationMat = _0RL_tc_arUco_mrotationMat;
#endif




static CORBA::PR_structMember _0RL_structmember_RTC_mVector3D[] = {
  {"x", CORBA::TypeCode::PR_double_tc()},
  {"y", CORBA::TypeCode::PR_double_tc()},
  {"z", CORBA::TypeCode::PR_double_tc()}
};

#ifdef _0RL_tc_RTC_mVector3D
#  undef _0RL_tc_RTC_mVector3D
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mVector3D = CORBA::TypeCode::PR_struct_tc("IDL:RTC/Vector3D:1.0", "Vector3D", _0RL_structmember_RTC_mVector3D, 3, &_0RL_tcTrack);

static CORBA::PR_structMember _0RL_structmember_arUco_marUcoPose3D[] = {
  {"tm", _0RL_tc_RTC_mTime},
  {"ids", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_long_tc(), &_0RL_tcTrack)},
  {"rotations", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_arUco_mrotationMat, &_0RL_tcTrack)},
  {"translates", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_RTC_mVector3D, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_arUco_marUcoPose3D
#  undef _0RL_tc_arUco_marUcoPose3D
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_marUcoPose3D = CORBA::TypeCode::PR_struct_tc("IDL:arUco/arUcoPose3D:1.0", "arUcoPose3D", _0RL_structmember_arUco_marUcoPose3D, 4, &_0RL_tcTrack);




#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_arUcoPose3D = _0RL_tc_arUco_marUcoPose3D;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_arUcoPose3D = _0RL_tc_arUco_marUcoPose3D;
#endif









static const char* _0RL_enumMember_Img_mColorFormat[] = { "CF_UNKNOWN", "CF_RGB", "CF_GRAY", "CF_JPEG", "CF_PNG", "RGB", "RLE8", "RLE", "RAW", "RGBA", "RGBT", "AYUV", "CLJR", "CYUV", "GREY", "IRAW", "IUYV", "IY41", "IYU1", "IYU2", "HDYC", "UYNV", "UYVP", "V210", "V422", "V655", "VYUV", "YUNV", "YVYU", "Y41P", "Y211", "Y41T", "Y42T", "YUVP", "Y800", "Y8", "Y16" };
static CORBA::TypeCode_ptr _0RL_tc_Img_mColorFormat = CORBA::TypeCode::PR_enum_tc("IDL:Img/ColorFormat:1.0", "ColorFormat", _0RL_enumMember_Img_mColorFormat, 37, &_0RL_tcTrack);
static CORBA::PR_structMember _0RL_structmember_Img_mImageData[] = {
  {"width", CORBA::TypeCode::PR_long_tc()},
  {"height", CORBA::TypeCode::PR_long_tc()},
  {"format", _0RL_tc_Img_mColorFormat},
  {"raw_data", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_octet_tc(), &_0RL_tcTrack)}
};

#ifdef _0RL_tc_Img_mImageData
#  undef _0RL_tc_Img_mImageData
#endif
static CORBA::TypeCode_ptr _0RL_tc_Img_mImageData = CORBA::TypeCode::PR_struct_tc("IDL:Img/ImageData:1.0", "ImageData", _0RL_structmember_Img_mImageData, 4, &_0RL_tcTrack);

static CORBA::PR_structMember _0RL_structmember_Img_mCameraIntrinsicParameter[] = {
  {"matrix_element", CORBA::TypeCode::PR_array_tc(5, CORBA::TypeCode::PR_double_tc(), &_0RL_tcTrack)},
  {"distortion_coefficient", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_double_tc(), &_0RL_tcTrack)}
};

#ifdef _0RL_tc_Img_mCameraIntrinsicParameter
#  undef _0RL_tc_Img_mCameraIntrinsicParameter
#endif
static CORBA::TypeCode_ptr _0RL_tc_Img_mCameraIntrinsicParameter = CORBA::TypeCode::PR_struct_tc("IDL:Img/CameraIntrinsicParameter:1.0", "CameraIntrinsicParameter", _0RL_structmember_Img_mCameraIntrinsicParameter, 2, &_0RL_tcTrack);

static CORBA::TypeCode_ptr _0RL_tc_Img_mMat44 = CORBA::TypeCode::PR_alias_tc("IDL:Img/Mat44:1.0", "Mat44", CORBA::TypeCode::PR_array_tc(4, CORBA::TypeCode::PR_array_tc(4, CORBA::TypeCode::PR_double_tc(), &_0RL_tcTrack), &_0RL_tcTrack), &_0RL_tcTrack);


static CORBA::PR_structMember _0RL_structmember_Img_mCameraImage[] = {
  {"captured_time", _0RL_tc_RTC_mTime},
  {"image", _0RL_tc_Img_mImageData},
  {"intrinsic", _0RL_tc_Img_mCameraIntrinsicParameter},
  {"extrinsic", _0RL_tc_Img_mMat44}
};

#ifdef _0RL_tc_Img_mCameraImage
#  undef _0RL_tc_Img_mCameraImage
#endif
static CORBA::TypeCode_ptr _0RL_tc_Img_mCameraImage = CORBA::TypeCode::PR_struct_tc("IDL:Img/CameraImage:1.0", "CameraImage", _0RL_structmember_Img_mCameraImage, 4, &_0RL_tcTrack);



static CORBA::PR_structMember _0RL_structmember_arUco_marUcoDataImage[] = {
  {"tm", _0RL_tc_RTC_mTime},
  {"ids", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_long_tc(), &_0RL_tcTrack)},
  {"markerCorners", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_arUco_mmarkerCorner, &_0RL_tcTrack)},
  {"data", _0RL_tc_Img_mCameraImage},
  {"rotations", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_arUco_mrotationMat, &_0RL_tcTrack)},
  {"translates", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_RTC_mVector3D, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_arUco_marUcoDataImage
#  undef _0RL_tc_arUco_marUcoDataImage
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_marUcoDataImage = CORBA::TypeCode::PR_struct_tc("IDL:arUco/arUcoDataImage:1.0", "arUcoDataImage", _0RL_structmember_arUco_marUcoDataImage, 6, &_0RL_tcTrack);













#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_arUcoDataImage = _0RL_tc_arUco_marUcoDataImage;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_arUcoDataImage = _0RL_tc_arUco_marUcoDataImage;
#endif










static CORBA::PR_structMember _0RL_structmember_arUco_marUcoData[] = {
  {"tm", _0RL_tc_RTC_mTime},
  {"ids", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_long_tc(), &_0RL_tcTrack)},
  {"markerCorners", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_arUco_mmarkerCorner, &_0RL_tcTrack)},
  {"rotations", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_arUco_mrotationMat, &_0RL_tcTrack)},
  {"translates", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_RTC_mVector3D, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_arUco_marUcoData
#  undef _0RL_tc_arUco_marUcoData
#endif
static CORBA::TypeCode_ptr _0RL_tc_arUco_marUcoData = CORBA::TypeCode::PR_struct_tc("IDL:arUco/arUcoData:1.0", "arUcoData", _0RL_structmember_arUco_marUcoData, 5, &_0RL_tcTrack);









#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace arUco { 
  const ::CORBA::TypeCode_ptr _tc_arUcoData = _0RL_tc_arUco_marUcoData;
} 
#else
const ::CORBA::TypeCode_ptr arUco::_tc_arUcoData = _0RL_tc_arUco_marUcoData;
#endif


static void _0RL_arUco_mpixelPoint2D_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::pixelPoint2D* _p = (arUco::pixelPoint2D*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_mpixelPoint2D_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::pixelPoint2D* _p = new arUco::pixelPoint2D;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_mpixelPoint2D_destructor_fn(void* _v)
{
  arUco::pixelPoint2D* _p = (arUco::pixelPoint2D*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::pixelPoint2D& _s)
{
  arUco::pixelPoint2D* _p = new arUco::pixelPoint2D(_s);
  _a.PR_insert(_0RL_tc_arUco_mpixelPoint2D,
               _0RL_arUco_mpixelPoint2D_marshal_fn,
               _0RL_arUco_mpixelPoint2D_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::pixelPoint2D* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_mpixelPoint2D,
               _0RL_arUco_mpixelPoint2D_marshal_fn,
               _0RL_arUco_mpixelPoint2D_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::pixelPoint2D*& _sp)
{
  return _a >>= (const arUco::pixelPoint2D*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::pixelPoint2D*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_mpixelPoint2D,
                    _0RL_arUco_mpixelPoint2D_unmarshal_fn,
                    _0RL_arUco_mpixelPoint2D_marshal_fn,
                    _0RL_arUco_mpixelPoint2D_destructor_fn,
                    _v)) {
    _sp = (const arUco::pixelPoint2D*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_arUco_mmarkerCorner_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::markerCorner* _p = (arUco::markerCorner*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_mmarkerCorner_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::markerCorner* _p = new arUco::markerCorner;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_mmarkerCorner_destructor_fn(void* _v)
{
  arUco::markerCorner* _p = (arUco::markerCorner*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::markerCorner& _s)
{
  arUco::markerCorner* _p = new arUco::markerCorner(_s);
  _a.PR_insert(_0RL_tc_arUco_mmarkerCorner,
               _0RL_arUco_mmarkerCorner_marshal_fn,
               _0RL_arUco_mmarkerCorner_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::markerCorner* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_mmarkerCorner,
               _0RL_arUco_mmarkerCorner_marshal_fn,
               _0RL_arUco_mmarkerCorner_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::markerCorner*& _sp)
{
  return _a >>= (const arUco::markerCorner*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::markerCorner*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_mmarkerCorner,
                    _0RL_arUco_mmarkerCorner_unmarshal_fn,
                    _0RL_arUco_mmarkerCorner_marshal_fn,
                    _0RL_arUco_mmarkerCorner_destructor_fn,
                    _v)) {
    _sp = (const arUco::markerCorner*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_arUco_marUcoPoint2D_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::arUcoPoint2D* _p = (arUco::arUcoPoint2D*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_marUcoPoint2D_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::arUcoPoint2D* _p = new arUco::arUcoPoint2D;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_marUcoPoint2D_destructor_fn(void* _v)
{
  arUco::arUcoPoint2D* _p = (arUco::arUcoPoint2D*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::arUcoPoint2D& _s)
{
  arUco::arUcoPoint2D* _p = new arUco::arUcoPoint2D(_s);
  _a.PR_insert(_0RL_tc_arUco_marUcoPoint2D,
               _0RL_arUco_marUcoPoint2D_marshal_fn,
               _0RL_arUco_marUcoPoint2D_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::arUcoPoint2D* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_marUcoPoint2D,
               _0RL_arUco_marUcoPoint2D_marshal_fn,
               _0RL_arUco_marUcoPoint2D_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::arUcoPoint2D*& _sp)
{
  return _a >>= (const arUco::arUcoPoint2D*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::arUcoPoint2D*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_marUcoPoint2D,
                    _0RL_arUco_marUcoPoint2D_unmarshal_fn,
                    _0RL_arUco_marUcoPoint2D_marshal_fn,
                    _0RL_arUco_marUcoPoint2D_destructor_fn,
                    _v)) {
    _sp = (const arUco::arUcoPoint2D*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_arUco_mrotationMat_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::rotationMat* _p = (arUco::rotationMat*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_mrotationMat_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::rotationMat* _p = new arUco::rotationMat;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_mrotationMat_destructor_fn(void* _v)
{
  arUco::rotationMat* _p = (arUco::rotationMat*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::rotationMat& _s)
{
  arUco::rotationMat* _p = new arUco::rotationMat(_s);
  _a.PR_insert(_0RL_tc_arUco_mrotationMat,
               _0RL_arUco_mrotationMat_marshal_fn,
               _0RL_arUco_mrotationMat_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::rotationMat* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_mrotationMat,
               _0RL_arUco_mrotationMat_marshal_fn,
               _0RL_arUco_mrotationMat_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::rotationMat*& _sp)
{
  return _a >>= (const arUco::rotationMat*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::rotationMat*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_mrotationMat,
                    _0RL_arUco_mrotationMat_unmarshal_fn,
                    _0RL_arUco_mrotationMat_marshal_fn,
                    _0RL_arUco_mrotationMat_destructor_fn,
                    _v)) {
    _sp = (const arUco::rotationMat*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_arUco_marUcoPose3D_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::arUcoPose3D* _p = (arUco::arUcoPose3D*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_marUcoPose3D_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::arUcoPose3D* _p = new arUco::arUcoPose3D;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_marUcoPose3D_destructor_fn(void* _v)
{
  arUco::arUcoPose3D* _p = (arUco::arUcoPose3D*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::arUcoPose3D& _s)
{
  arUco::arUcoPose3D* _p = new arUco::arUcoPose3D(_s);
  _a.PR_insert(_0RL_tc_arUco_marUcoPose3D,
               _0RL_arUco_marUcoPose3D_marshal_fn,
               _0RL_arUco_marUcoPose3D_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::arUcoPose3D* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_marUcoPose3D,
               _0RL_arUco_marUcoPose3D_marshal_fn,
               _0RL_arUco_marUcoPose3D_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::arUcoPose3D*& _sp)
{
  return _a >>= (const arUco::arUcoPose3D*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::arUcoPose3D*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_marUcoPose3D,
                    _0RL_arUco_marUcoPose3D_unmarshal_fn,
                    _0RL_arUco_marUcoPose3D_marshal_fn,
                    _0RL_arUco_marUcoPose3D_destructor_fn,
                    _v)) {
    _sp = (const arUco::arUcoPose3D*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_arUco_marUcoDataImage_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::arUcoDataImage* _p = (arUco::arUcoDataImage*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_marUcoDataImage_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::arUcoDataImage* _p = new arUco::arUcoDataImage;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_marUcoDataImage_destructor_fn(void* _v)
{
  arUco::arUcoDataImage* _p = (arUco::arUcoDataImage*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::arUcoDataImage& _s)
{
  arUco::arUcoDataImage* _p = new arUco::arUcoDataImage(_s);
  _a.PR_insert(_0RL_tc_arUco_marUcoDataImage,
               _0RL_arUco_marUcoDataImage_marshal_fn,
               _0RL_arUco_marUcoDataImage_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::arUcoDataImage* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_marUcoDataImage,
               _0RL_arUco_marUcoDataImage_marshal_fn,
               _0RL_arUco_marUcoDataImage_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::arUcoDataImage*& _sp)
{
  return _a >>= (const arUco::arUcoDataImage*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::arUcoDataImage*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_marUcoDataImage,
                    _0RL_arUco_marUcoDataImage_unmarshal_fn,
                    _0RL_arUco_marUcoDataImage_marshal_fn,
                    _0RL_arUco_marUcoDataImage_destructor_fn,
                    _v)) {
    _sp = (const arUco::arUcoDataImage*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_arUco_marUcoData_marshal_fn(cdrStream& _s, void* _v)
{
  arUco::arUcoData* _p = (arUco::arUcoData*)_v;
  *_p >>= _s;
}
static void _0RL_arUco_marUcoData_unmarshal_fn(cdrStream& _s, void*& _v)
{
  arUco::arUcoData* _p = new arUco::arUcoData;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_arUco_marUcoData_destructor_fn(void* _v)
{
  arUco::arUcoData* _p = (arUco::arUcoData*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const arUco::arUcoData& _s)
{
  arUco::arUcoData* _p = new arUco::arUcoData(_s);
  _a.PR_insert(_0RL_tc_arUco_marUcoData,
               _0RL_arUco_marUcoData_marshal_fn,
               _0RL_arUco_marUcoData_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, arUco::arUcoData* _sp)
{
  _a.PR_insert(_0RL_tc_arUco_marUcoData,
               _0RL_arUco_marUcoData_marshal_fn,
               _0RL_arUco_marUcoData_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, arUco::arUcoData*& _sp)
{
  return _a >>= (const arUco::arUcoData*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const arUco::arUcoData*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_arUco_marUcoData,
                    _0RL_arUco_marUcoData_unmarshal_fn,
                    _0RL_arUco_marUcoData_marshal_fn,
                    _0RL_arUco_marUcoData_destructor_fn,
                    _v)) {
    _sp = (const arUco::arUcoData*)_v;
    return 1;
  }
  return 0;
}

