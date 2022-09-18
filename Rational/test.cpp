#include <iostream>
#include "Rational.h"
using namespace  std;

int main() {


    Rational x(2,3);
    Rational y(4,3);

    cout <<  "Multiply: " << (x*y)  << ": " << (x*y).toDouble() << endl;
    cout <<  "Add: " << (x+y).toDouble() << endl;
    cout <<  "Substract: " << (x-y).toDouble() << endl;
    cout <<  "Divide: " << (x/y).toDouble() << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    x+=y;

    cout <<  "Add x+=y: " << x.toDouble() << endl;

    x-=y;
    cout <<  "Subtract x-=y: " << x.toDouble() << endl;

    Rational z(x);  // copy construcotr

    Rational zz = x; // asignment overload


    Rational xy(std::move(x));  // move constructor

    Rational xyz = std::move(x); // move assignemtn operator

    cout << "x: " << x;


}
