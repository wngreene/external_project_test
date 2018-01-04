cmake_minimum_required(VERSION 3.4.1)

project(external_project_test)

include(ExternalProject)
ExternalProject_Add(eigen
  HG_REPOSITORY https://bitbucket.org/eigen/eigen
  HG_TAG 3.2.10
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX})

ExternalProject_Add(external_project_test
  DEPENDS eigen
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX})
