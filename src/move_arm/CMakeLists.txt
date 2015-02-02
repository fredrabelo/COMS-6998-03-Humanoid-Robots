add_executable(move_arm src/move_arm.cpp)
target_link_libraries(move_arm ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS move_arm DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
