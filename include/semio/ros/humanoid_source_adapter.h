#ifndef _SEMIO_ROS_HUMANOIDSOURCEADAPTER_H_
#define _SEMIO_ROS_HUMANOIDSOURCEADAPTER_H_

#include <semio/ros/humanoid_source_ros.h>
#include <semio/recognition/humanoid_source_virtual.h>
#include <semio/recognition/humanoid_source_NiTE.h>

#include <ros/node_handle.h>

namespace semio
{

namespace ros
{

class HumanoidSourceAdapter
{
protected:
    ::ros::NodeHandle & _nh_rel;
    std::string _default_source;

public:
    HumanoidSourceAdapter( ::ros::NodeHandle & nh_rel, std::string const & default_source = "nite" );

    HumanoidSource::Ptr getHumanoidSource( std::string const & source = "param" );
};

}

}
#endif // _SEMIO_ROS_HUMANOIDSOURCEADAPTER_H_
