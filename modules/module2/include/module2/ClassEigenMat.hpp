#ifndef HELLO_CMAKE_HPP
#define HELLO_CMAKE_HPP

#include "Eigen/Dense"

class ClassEigenMat
{
public:
    ClassEigenMat() = default;
private:
    Eigen::Matrix3d eigen_mat_;
};

#endif

