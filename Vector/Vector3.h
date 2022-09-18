// My Vector3.h submission for A5
// Cole Matthews, 202034476

#pragma once

#include "Vector.cpp"

// Class for a 3D vector. Inherits Vector template class.
class Vector3 : public Vector<3> {
public:
    Vector3 cross(const Vector3& v);
};