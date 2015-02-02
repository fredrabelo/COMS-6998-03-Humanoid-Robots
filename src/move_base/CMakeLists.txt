add_executable(move_base src/move_base.cpp)
target_link_libraries(move_base ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS move_base DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
