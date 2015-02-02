add_executable(drive_base src/drive_base.cpp)
target_link_libraries(drive_base ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS drive_base DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
