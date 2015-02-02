
# testing provided examples
# bring up Gazebo
roslaunch pr2_gazebo pr2_empty_world.launch

# bring up moveit
roslaunch pr2_moveit_config move_group.launch

# compile, source and run code
catkin make
source devel/setup.bash
rosrun humanoids_robots <example>


# and for the homework:

roslaunch humanoids_robots pr2_gazebo_tablewithobject.launch

# then you will have to work on your own code. 
# You will have your own launch file that may include the above and also launches your node for moving the robot and picking up the coke

