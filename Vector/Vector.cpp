
#include "Vector.h"
#include <cmath>

// default constructor (initialize all components to 0.0f)
template<std::size_t N>
Vector<N>::Vector(){
    for(int i = 0; i < N; i++){
        components[i] = 0.0f;
    }
}

// copy constructor
template<std::size_t N>
Vector<N>::Vector(const Vector<N>& other){
    for(int i = 0; i < N; i++){
        components[i] = other.components[i];
    }
}

// dot product with other Vector v
template<std::size_t N>
float Vector<N>::dot(Vector<N> v){
    float dotprod = 0;
    for(int i = 0; i < N; i++){
        dotprod = dotprod + (components[i]*v.components[i]);
    }
    return dotprod;
}

// magnitude of this Vector
template<std::size_t N>
float Vector<N>::magnitude(){
    float sumOfSquares = 0;
    for (int i = 0; i < N; i++){
        float square = components[i] * components[i];
        sumOfSquares += square;
    }
    return sqrt(sumOfSquares);
}

//get the ith component of this Vector (indexing should begin at 0)
template<std::size_t N>
float Vector<N>::getComponent(int i) const{
    return components[i];
}

// set the ith component of this Vector (indexing should begin at 0)
template<std::size_t N>
bool Vector<N>::setComponent(int i, float value){
    components[i] = value;
    return true;
}
