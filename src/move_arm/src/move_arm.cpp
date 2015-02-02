#include <moveit/move_group_interface/move_group.h>
#include <iostream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "move arm example");
  ros::NodeHandle node_handle;  
  ros::AsyncSpinner spinner(1);
  spinner.start();

  // Part of the robot to move

  moveit::planning_interface::MoveGroup group("left_arm");



  // as an example, we can set a random target
	  //group.setRandomTarget();


// # but here is how to set a specific pose goal

	// right arm
  geometry_msgs::Pose target_pose1;
  target_pose1.orientation.w = 1.0;
  target_pose1.position.x = 0.28;
  target_pose1.position.y = 0.7;
  target_pose1.position.z = 1.0;
  group.setPoseTarget(target_pose1);



  // plan the motion and then move the group to the sampled target 
  group.move();


  return 0;
}
