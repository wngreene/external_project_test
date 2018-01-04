add_library(external_project_test SHARED
  external_project_test.hpp
  external_project_test.cpp)
target_include_directories(external_project_test PUBLIC ${PROJECT_SOURCE_DIR}/src)
