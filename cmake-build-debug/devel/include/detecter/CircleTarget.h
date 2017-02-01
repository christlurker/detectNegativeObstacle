// Generated by gencpp from file detecter/CircleTarget.msg
// DO NOT EDIT!


#ifndef DETECTER_MESSAGE_CIRCLETARGET_H
#define DETECTER_MESSAGE_CIRCLETARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace detecter
{
template <class ContainerAllocator>
struct CircleTarget_
{
  typedef CircleTarget_<ContainerAllocator> Type;

  CircleTarget_()
    : header()
    , state(0)
    , image_width(0)
    , image_height(0)
    , focal_lenth_x(0)
    , focal_lenth_y(0)
    , radius(0)
    , tar()
    , circle_activate(0)
    , circle_terminate(0)  {
    }
  CircleTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)
    , image_width(0)
    , image_height(0)
    , focal_lenth_x(0)
    , focal_lenth_y(0)
    , radius(0)
    , tar(_alloc)
    , circle_activate(0)
    , circle_terminate(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _state_type;
  _state_type state;

   typedef uint32_t _image_width_type;
  _image_width_type image_width;

   typedef uint32_t _image_height_type;
  _image_height_type image_height;

   typedef uint32_t _focal_lenth_x_type;
  _focal_lenth_x_type focal_lenth_x;

   typedef uint32_t _focal_lenth_y_type;
  _focal_lenth_y_type focal_lenth_y;

   typedef uint32_t _radius_type;
  _radius_type radius;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _tar_type;
  _tar_type tar;

   typedef uint32_t _circle_activate_type;
  _circle_activate_type circle_activate;

   typedef uint32_t _circle_terminate_type;
  _circle_terminate_type circle_terminate;




  typedef boost::shared_ptr< ::detecter::CircleTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::detecter::CircleTarget_<ContainerAllocator> const> ConstPtr;

}; // struct CircleTarget_

typedef ::detecter::CircleTarget_<std::allocator<void> > CircleTarget;

typedef boost::shared_ptr< ::detecter::CircleTarget > CircleTargetPtr;
typedef boost::shared_ptr< ::detecter::CircleTarget const> CircleTargetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::detecter::CircleTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::detecter::CircleTarget_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace detecter

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'detecter': ['/home/zh/catkin_ws/src/detecter/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::detecter::CircleTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::detecter::CircleTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detecter::CircleTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detecter::CircleTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detecter::CircleTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detecter::CircleTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::detecter::CircleTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4649eea1cd700deadefc0a369ee806b6";
  }

  static const char* value(const ::detecter::CircleTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4649eea1cd700deaULL;
  static const uint64_t static_value2 = 0xdefc0a369ee806b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::detecter::CircleTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "detecter/CircleTarget";
  }

  static const char* value(const ::detecter::CircleTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::detecter::CircleTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
uint32 state\n\
uint32 image_width\n\
uint32 image_height\n\
uint32 focal_lenth_x\n\
uint32 focal_lenth_y\n\
uint32 radius\n\
geometry_msgs/Point tar\n\
uint32 circle_activate\n\
uint32 circle_terminate\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::detecter::CircleTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::detecter::CircleTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.image_width);
      stream.next(m.image_height);
      stream.next(m.focal_lenth_x);
      stream.next(m.focal_lenth_y);
      stream.next(m.radius);
      stream.next(m.tar);
      stream.next(m.circle_activate);
      stream.next(m.circle_terminate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CircleTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::detecter::CircleTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::detecter::CircleTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.state);
    s << indent << "image_width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.image_width);
    s << indent << "image_height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.image_height);
    s << indent << "focal_lenth_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.focal_lenth_x);
    s << indent << "focal_lenth_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.focal_lenth_y);
    s << indent << "radius: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.radius);
    s << indent << "tar: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.tar);
    s << indent << "circle_activate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.circle_activate);
    s << indent << "circle_terminate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.circle_terminate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DETECTER_MESSAGE_CIRCLETARGET_H
