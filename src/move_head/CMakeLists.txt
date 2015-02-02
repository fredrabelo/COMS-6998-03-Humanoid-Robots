add_executable(move_head src/move_head.cpp)
target_link_libraries(move_head ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS move_head DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
