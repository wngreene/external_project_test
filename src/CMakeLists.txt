add_subdirectory(./external_project_test)

add_executable(main main.cpp)
target_link_libraries(main external_project_test)
