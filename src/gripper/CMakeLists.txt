add_executable(gripper src/gripper.cpp)
target_link_libraries(gripper ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS gripper DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
