#include "Point2.h"

template<class T>
Point2<T>::Point2(){ // default constructor
    _x = 0;
    _y = 0;
}

template<class T>
Point2<T>::Point2(const T &x, const T &y){ // non default constructor
    _x = x;
    _y = y;
}

template<class T>
const T &Point2<T>::x() const{  // x getter
    return _x;
}

template<class T>
const T &Point2<T>::y() const{  // y getter
    return _y;
}

template<class T>
Point2<T> &Point2<T>::operator+=(const Point2<T> &other) { // compound addition operator overload
    _x += other._x;
    _y += other._y;
    return *this;
}

template<class T>
Point2<T> &Point2<T>::operator-=(const Point2<T> &other) { // compound subtraction operator overload
    _x -= other._x;
    _y -= other._y;
    return *this;
}

// expected types to be used in template (not required for autograder)
template class Point2<int>;
template class Point2<double>;
template class Point2<long>;
template class Point2<float>;
template class Point2<short>;