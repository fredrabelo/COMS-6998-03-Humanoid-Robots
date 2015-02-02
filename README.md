# COMS 6998-03 HUMANOID ROBOTS, SPRING 2015
# Columbia University



## setting up the environment

### workspace
> git clone or copy and paste 'humanoids_robots' on /home
 
> catkin_make

## testing the xamples
### bring up Gazebo
> roslaunch pr2_gazebo pr2_empty_world.launch

### if testing the move_arm code, bring up moveit
> roslaunch pr2_moveit_config move_group.launch

### compile, source and run code
> source devel/setup.bash

> rosrun humanoids_robots <example>


### As for the for the homework:
bring up Gazebo, table and coke
> roslaunch humanoids_robots pr2_gazebo_tablewithobject.launch

### then you will have to work on your own code. 
* you will have to create a new package "hw1" and a new launch file "everything.launch"
* your launch file may include above launch file and your(s) node(s)
* We will execute roslaunch hw1 everything.launch
