#ifndef VILMACONTROLER_ROSSIDE_H
#define VILMACONTROLER_ROSSIDE_H
#include <ros/ros.h>
#include "gazebo_msgs/GetModelState.h"
#include "gazebo_msgs/SetModelState.h"
#include "gazebo_msgs/ModelState.h"
#include "gazebo_msgs/GetPhysicsProperties.h"
#include <stdio.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Int8.h>
#include <geometry_msgs/Point32.h>
#include <sensor_msgs/PointCloud.h>
#include <sensor_msgs/Imu.h>
#include <time.h>
#include <gazebo/math/gzmath.hh>
#include <gazebo/physics/physics.hh>
#include <sensor_msgs/NavSatFix.h>
#include <QDebug>
class VilmaControler_ROS
{
public:

    std_msgs::Float64 gas_pedal_state, brake_pedal_state,hand_brake_state,hand_wheel_state;
    std_msgs::Float64 br_wheel_speed,bl_wheel_speed,fl_wheel_speed,fr_wheel_speed;
    sensor_msgs::NavSatFix car_gps_state;
    std_msgs::Int8 gears;
    ros::Publisher gas_pedalpub, brake_pedalpub, hand_brakepub,hand_wheelpub, gears_pub;
    ros::Subscriber gas_pedalsub, brake_pedalsub, hand_brakesub, hand_wheelsub;
    ros::Subscriber bl_wheel, br_wheel, fl_wheel, fr_wheel,gears_sub;
    ros::Subscriber points_sub,modelstatesub,imu_sub;
    ros::ServiceClient gmscl;
    gazebo_msgs::GetModelState getmodelstate; //stores call message to query for model state.
    gazebo_msgs::ModelState modelstate;
    sensor_msgs::Imu imu_data;
    ros::NodeHandle rosNode;
    void callback1();
    ros::Timer timer1;
    int obstacle_ahead;
    gazebo::math::Quaternion imudata_to_euler();
    void receive_gas_pedal_data(const std_msgs::Float64::ConstPtr& msg);
    void receive_brake_pedal_data(const std_msgs::Float64::ConstPtr& msg);
    void receive_hand_brake_data(const std_msgs::Float64::ConstPtr& msg);
    void receive_hand_wheel_data(const std_msgs::Float64::ConstPtr& msg);
    void receive_back_left_wheel_speed(const std_msgs::Float64::ConstPtr& msg);
    void receive_back_right_wheel_speed(const std_msgs::Float64::ConstPtr& msg);
    void receive_front_left_wheel_speed(const std_msgs::Float64::ConstPtr& msg);
    void receive_front_right_wheel_speed(const std_msgs::Float64::ConstPtr& msg);
    void receive_gears_state(const std_msgs::Int8::ConstPtr& msg);
    void receive_model_physical_state();
    void receive_gps_state(sensor_msgs::NavSatFix gps_state);
    void receive_imu_data(sensor_msgs::Imu data);
    void receive_points(sensor_msgs::PointCloud cloud);
    void use_Steering(float value);
    void set_gears(int gear);
    void use_hand_brake();
    void reset_state();
    void accelerate(float amount_to_increase);
    void set_gas_pedal(float value);
    void set_brake_pedal(float value);
    void deaccelerate(float amount_to_decrease);
    void maintain_speed();
    void reorientate_to_angle(float z);
    int reorientate_to_pose(float x, float y);
    boost::thread_group tgroup;
    int thread_count;
    void init();

};




#endif
