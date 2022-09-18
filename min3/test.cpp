#include <iostream>
#include "min3.cpp"
#include "Point2.h"

int main() {

    std::cout << min3("a","b","c") << std::endl;
    std::cout << min3(1,0,2) << std::endl;
    std::cout << min3(1.5,0.5,3.0) << std::endl;




    Point2<int> point;  // (0,0)
    Point2<int> m(1,2);
    point += m;
    cout << point << endl;

    cin >> point;

    cout << point << endl;

}
