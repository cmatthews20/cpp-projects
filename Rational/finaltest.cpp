
// Test for Rational class

#include <iostream>
#include "Rational.h"
//#include "Rational.cpp" if files do not link properly
using namespace  std;

/* Although it is not implemented in this project,
 * it would be beneficial to maintain a rational number in reduced form such that its numerator and denominator
 * are coprime. Reasons: 1. Rational number is easier to read 2. Numerator/denominator may become too large to
 * store in regular int type (a mechanism/function to decrease size would help) */

int main() {

    // Default constructor test
    Rational defaultObj;
    cout <<"defaultObj: " << ": "<< defaultObj << defaultObj.toDouble() << endl;

    // Non-default constructors test
    Rational x(3,4);
    Rational y(4,5);

    // Non-compound operators
    Rational multiplication = x*y;
    Rational additition = x+y;
    Rational subtraction = x-y;
    Rational division = x/y;

    // Output Stream operator tested here and throughout. Values printed are used to monitor success of tests
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // All these operators also test compound operators (they are used in non-compound operator implementation)
    // toDouble also tested after each operation
    cout <<  "Multiply: " << multiplication  << ": " << multiplication.toDouble() << endl;
    cout <<  "Add: " << additition << ": " << additition.toDouble() << endl;
    cout <<  "Substract: " << subtraction << ": " << subtraction.toDouble() << endl;
    cout <<  "Divide: " << division  << ": " << division.toDouble() << endl;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // Testing copy constructor
    Rational z(x);
    cout << "z: " << z << endl;

    // Testing copy assignment operator
    Rational copy = x;
    cout << "copy: " << copy << endl;

    // Testing move constructor
    Rational moved(move(x)); // Since we used reference, full move not completed
    cout << "moved: " << moved << endl;
    cout << "x: " << x << endl; // Normally, x shouldn't exist anymore and 'x' 'moved' into "moved" object

    // Testing move assignment operator
    Rational moveAssign = move(x); // Since we used reference, full move not completed
    cout << "moveAssign: " << moveAssign << endl; // Normally, x shouldn't exist anymore

    // Testing istream
    Rational input; //declare rational object to be inputted
    cin >> input;
    cout << "input: " << input << endl;

// Can't test destructor; it gets automatically called normally but in this intance it is a trivial destructor

}
