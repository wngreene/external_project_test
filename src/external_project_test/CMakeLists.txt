add_library(external_project_test SHARED
  external_project_test.hpp
  external_project_test.cpp)
target_include_directories(external_project_test PUBLIC ${PROJECT_SOURCE_DIR}/src)

find_package(PkgConfig REQUIRED) # For projects with pkg-config files.
pkg_check_modules(EIGEN3 REQUIRED eigen3>=3.2)
target_include_directories(external_project_test PUBLIC ${EIGEN3_INCLUDE_DIRS})
