#pragma once
#include <iostream>

// Template class for a point in 2d space. Converted from RealPoint2
template <class T>
class Point2 {
private:

    //x and y coordinates. need to have different name than x() and y() functions
    T _x, _y;

public:

    Point2(); // default constructor
    Point2(const T &x, const T &y); // non default constructor

    const T &x() const; // getter
    const T &y() const; // getter

    Point2<T> &operator+=(const Point2& p); // compound operator overload
    Point2<T> &operator-=(const Point2& p); // compound operator overload

    friend std::ostream& operator<<(std::ostream& out, const Point2<T>& p){ // output stream operator overload
        return out << "(" << p.x() << ", " << p.y() << ")";
    }

    friend std::istream& operator<<(std::istream& in, Point2<T>& p){ // input stream operator overload
        in >> p._x;
        in >> p._y;
        return in;
    }
};