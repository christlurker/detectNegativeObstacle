// Generated by gencpp from file detecter/RectangleTarget.msg
// DO NOT EDIT!


#ifndef DETECTER_MESSAGE_RECTANGLETARGET_H
#define DETECTER_MESSAGE_RECTANGLETARGET_H


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
struct RectangleTarget_
{
  typedef RectangleTarget_<ContainerAllocator> Type;

  RectangleTarget_()
    : header()
    , image_width(0)
    , image_height(0)
    , focal_lenth_x(0)
    , focal_lenth_y(0)
    , rec_height()
    , rec_width()
    , rotation_angle()
    , tar()
    , rectangle_activate(0)
    , rectangle_terminate(0)  {
    }
  RectangleTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , image_width(0)
    , image_height(0)
    , focal_lenth_x(0)
    , focal_lenth_y(0)
    , rec_height(_alloc)
    , rec_width(_alloc)
    , rotation_angle(_alloc)
    , tar(_alloc)
    , rectangle_activate(0)
    , rectangle_terminate(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _image_width_type;
  _image_width_type image_width;

   typedef uint32_t _image_height_type;
  _image_height_type image_height;

   typedef uint32_t _focal_lenth_x_type;
  _focal_lenth_x_type focal_lenth_x;

   typedef uint32_t _focal_lenth_y_type;
  _focal_lenth_y_type focal_lenth_y;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _rec_height_type;
  _rec_height_type rec_height;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _rec_width_type;
  _rec_width_type rec_width;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _rotation_angle_type;
  _rotation_angle_type rotation_angle;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _tar_type;
  _tar_type tar;

   typedef uint32_t _rectangle_activate_type;
  _rectangle_activate_type rectangle_activate;

   typedef uint32_t _rectangle_terminate_type;
  _rectangle_terminate_type rectangle_terminate;




  typedef boost::shared_ptr< ::detecter::RectangleTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::detecter::RectangleTarget_<ContainerAllocator> const> ConstPtr;

}; // struct RectangleTarget_

typedef ::detecter::RectangleTarget_<std::allocator<void> > RectangleTarget;

typedef boost::shared_ptr< ::detecter::RectangleTarget > RectangleTargetPtr;
typedef boost::shared_ptr< ::detecter::RectangleTarget const> RectangleTargetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::detecter::RectangleTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::detecter::RectangleTarget_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::detecter::RectangleTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::detecter::RectangleTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detecter::RectangleTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detecter::RectangleTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detecter::RectangleTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detecter::RectangleTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::detecter::RectangleTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f60e5877768aea4644154e667135f8c5";
  }

  static const char* value(const ::detecter::RectangleTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf60e5877768aea46ULL;
  static const uint64_t static_value2 = 0x44154e667135f8c5ULL;
};

template<class ContainerAllocator>
struct DataType< ::detecter::RectangleTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "detecter/RectangleTarget";
  }

  static const char* value(const ::detecter::RectangleTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::detecter::RectangleTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header       header\n\
uint32                image_width\n\
uint32                image_height\n\
uint32                focal_lenth_x\n\
uint32                focal_lenth_y\n\
uint32[]              rec_height\n\
uint32[]              rec_width\n\
float32[]             rotation_angle\n\
geometry_msgs/Point   tar\n\
uint32 rectangle_activate\n\
uint32 rectangle_terminate\n\
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

  static const char* value(const ::detecter::RectangleTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::detecter::RectangleTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.image_width);
      stream.next(m.image_height);
      stream.next(m.focal_lenth_x);
      stream.next(m.focal_lenth_y);
      stream.next(m.rec_height);
      stream.next(m.rec_width);
      stream.next(m.rotation_angle);
      stream.next(m.tar);
      stream.next(m.rectangle_activate);
      stream.next(m.rectangle_terminate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RectangleTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::detecter::RectangleTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::detecter::RectangleTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "image_width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.image_width);
    s << indent << "image_height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.image_height);
    s << indent << "focal_lenth_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.focal_lenth_x);
    s << indent << "focal_lenth_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.focal_lenth_y);
    s << indent << "rec_height[]" << std::endl;
    for (size_t i = 0; i < v.rec_height.size(); ++i)
    {
      s << indent << "  rec_height[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.rec_height[i]);
    }
    s << indent << "rec_width[]" << std::endl;
    for (size_t i = 0; i < v.rec_width.size(); ++i)
    {
      s << indent << "  rec_width[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.rec_width[i]);
    }
    s << indent << "rotation_angle[]" << std::endl;
    for (size_t i = 0; i < v.rotation_angle.size(); ++i)
    {
      s << indent << "  rotation_angle[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.rotation_angle[i]);
    }
    s << indent << "tar: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.tar);
    s << indent << "rectangle_activate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.rectangle_activate);
    s << indent << "rectangle_terminate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.rectangle_terminate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DETECTER_MESSAGE_RECTANGLETARGET_H
