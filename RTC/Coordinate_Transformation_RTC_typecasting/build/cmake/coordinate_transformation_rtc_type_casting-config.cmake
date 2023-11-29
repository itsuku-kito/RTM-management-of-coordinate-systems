# Coordinate_transformation_RTC_type_casting CMake config file
#
# This file sets the following variables:
# Coordinate_transformation_RTC_type_casting_FOUND - Always TRUE.
# Coordinate_transformation_RTC_type_casting_INCLUDE_DIRS - Directories containing the Coordinate_transformation_RTC_type_casting include files.
# Coordinate_transformation_RTC_type_casting_IDL_DIRS - Directories containing the Coordinate_transformation_RTC_type_casting IDL files.
# Coordinate_transformation_RTC_type_casting_LIBRARIES - Libraries needed to use Coordinate_transformation_RTC_type_casting.
# Coordinate_transformation_RTC_type_casting_DEFINITIONS - Compiler flags for Coordinate_transformation_RTC_type_casting.
# Coordinate_transformation_RTC_type_casting_VERSION - The version of Coordinate_transformation_RTC_type_casting found.
# Coordinate_transformation_RTC_type_casting_VERSION_MAJOR - The major version of Coordinate_transformation_RTC_type_casting found.
# Coordinate_transformation_RTC_type_casting_VERSION_MINOR - The minor version of Coordinate_transformation_RTC_type_casting found.
# Coordinate_transformation_RTC_type_casting_VERSION_REVISION - The revision version of Coordinate_transformation_RTC_type_casting found.
# Coordinate_transformation_RTC_type_casting_VERSION_CANDIDATE - The candidate version of Coordinate_transformation_RTC_type_casting found.

message(STATUS "Found Coordinate_transformation_RTC_type_casting-")
set(Coordinate_transformation_RTC_type_casting_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(Coordinate_transformation_RTC_type_casting_INCLUDE_DIRS
#    "/usr/local/include/coordinate_transformation_rtc_type_casting-"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(Coordinate_transformation_RTC_type_casting_IDL_DIRS
#    "/usr/local/include/coordinate_transformation_rtc_type_casting-/idl")
set(Coordinate_transformation_RTC_type_casting_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(Coordinate_transformation_RTC_type_casting_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(Coordinate_transformation_RTC_type_casting_LIBRARIES
        "/usr/local//libcoordinate_transformation_rtc_type_casting.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(Coordinate_transformation_RTC_type_casting_LIBRARIES
        "/usr/local//libcoordinate_transformation_rtc_type_casting.so"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(Coordinate_transformation_RTC_type_casting_DEFINITIONS ${<dependency>_DEFINITIONS})

set(Coordinate_transformation_RTC_type_casting_VERSION )
set(Coordinate_transformation_RTC_type_casting_VERSION_MAJOR )
set(Coordinate_transformation_RTC_type_casting_VERSION_MINOR )
set(Coordinate_transformation_RTC_type_casting_VERSION_REVISION )
set(Coordinate_transformation_RTC_type_casting_VERSION_CANDIDATE )

