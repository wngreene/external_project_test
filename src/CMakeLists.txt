cmake_minimum_required(VERSION 3.4.1)

add_subdirectory(./external_project_test)

add_executable(main main.cpp)
target_link_libraries(main external_project_test)

install(TARGETS main
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)
