// My Vector3.cpp submission for A5
// Cole Matthews, 202034476

#include "Vector3.h"

// Computes and returns the cross product of two 3D vectors
Vector3 Vector3::cross(const Vector3 &v){
    float a1 = getComponent(0);
    float a2 = getComponent(1);
    float a3 = getComponent(2);
    
    float b1 = v.getComponent(0);
    float b2 = v.getComponent(1);
    float b3 = v.getComponent(2);
    
    float c1 = a2*b3 - a3*b2;
    float c2 = a3*b1 - a1*b3;
    float c3 = a1*b2 - a2*b1;
    
    Vector3 result;
    
    result.setComponent(0, c1);
    result.setComponent(1, c2);
    result.setComponent(2, c3);
    
    return result;
    
}
