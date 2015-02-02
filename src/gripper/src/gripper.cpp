#include <ros/ros.h>
#include <pr2_controllers_msgs/Pr2GripperCommand.h>
#include <actionlib/client/simple_action_client.h>

class Gripper{
private:
  ros::NodeHandle nh_;
  ros::Publisher r_gripper_;

public:
  //Action client initialization
  Gripper(ros::NodeHandle &nh){
    nh_ = nh;
    r_gripper_ = nh_.advertise<pr2_controllers_msgs::Pr2GripperCommand>("/r_gripper_controller/command", 1);
  }

  ~Gripper(){
  }

  //Open the gripper
  void open(){

    ROS_INFO("Opening Gripper");

    bool done = false;
    pr2_controllers_msgs::Pr2GripperCommand gripper_cmd;
    gripper_cmd.position = 0.08;
    gripper_cmd.max_effort = -1.0;

    int a = 0;
    while(a < 10000000)
    {
      r_gripper_.publish(gripper_cmd);
      a++;
    }
  }

  //Close the gripper
  void close(){
    
    ROS_INFO("Closing Gripper");

    bool done = false;
    pr2_controllers_msgs::Pr2GripperCommand gripper_cmd;
    gripper_cmd.position = 0.0;
    gripper_cmd.max_effort = 50.0;

    int a = 0;
    while(a < 10000000)
    {
      r_gripper_.publish(gripper_cmd);
      a++;
    }
  }
};

int main(int argc, char** argv){
  ros::init(argc, argv, "simple_gripper");
  ros::NodeHandle nh;

  Gripper gripper(nh);

  gripper.open();
  gripper.close();

  return 0;
}
