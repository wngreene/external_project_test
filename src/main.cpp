/**
 * Copyright 2018 Massachusetts Institute of Technology
 *
 * @file main.cpp
 * @author W. Nicholas Greene
 * @date 2018-01-04 17:48:28 (Thu)
 */

#include <iostream>

#include <external_project_test/external_project_test.hpp>

int main(int argc, char *argv[]) {
  std::cout << external_project_test::blah() << std::endl;
  std::cout << external_project_test::blah2() << std::endl;
  return 0;
}
