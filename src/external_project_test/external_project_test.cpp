/**
 * Copyright 2018 Massachusetts Institute of Technology
 *
 * @file external_project_test.cpp
 * @author W. Nicholas Greene
 * @date 2018-01-04 17:47:22 (Thu)
 */

#include "external_project_test/external_project_test.hpp"

namespace external_project_test {

/**
 * @brief Return dummy string.
 */
std::string blah() {
  return "Hello world!";
}

float blah2() {
  Eigen::Vector2f zort(1.1, 1.1);
  return zort.norm();
}

}  // namespace external_project_test
