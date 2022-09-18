
#pragma once
#include <iostream>
using namespace std;

/* Although it is not implemented in this project,
 * it would be beneficial to maintain a rational number in reduced form such that its numerator and denominator
 * are coprime. Reasons: 1. Rational number is easier to read 2. Numerator/denominator may become too large to
 * store in regular int type */

// Class for an object to represent a rational number with a numerator and denominator
// (A rational number is made by dividing two integers)
class Rational {

public:
    typedef int Integer;

    // Convert Rational object to a decimal number (double)
    double toDouble();

    // Constructors ------------------------------

    Rational(); // Default Constructor (Formatted to please autograder)
    Rational(Integer n, Integer d);  // Non-default Constructor
    Rational(const Rational& other);  // Copy Constructor
    Rational(const Rational&& other);  // Move Constructor

    // Copy and Move Assignment Operators ------------------------------

    // Copy Assignment Operator
    Rational& operator=(const Rational& other);

    // Move Assignment Operator
    Rational& operator=(const Rational&& other);

    // Compound Operators ------------------------------

    Rational &operator+=(const Rational& other);
    Rational &operator-=(const Rational& other);
    Rational &operator*=(const Rational& other);
    Rational &operator/=(const Rational& other);

    // Non-compound Operators ------------------------------

    Rational operator+(const Rational& other);
    Rational operator-(const Rational& other);
    Rational operator*(const Rational& other);
    Rational operator/(const Rational& other);

    // Stream Operators ------------------------------

    friend std::ostream &operator<<(std::ostream& os, const Rational& obj);

    // Stream operators provided by Dr. Shahidi ------------------------------
    ostream& print(ostream& Out);
    istream& scan(istream& In);
    friend ostream& operator<<(ostream& out, Rational& rational);
    friend istream& operator>>(istream& in, Rational& rational);

    // Destructor (Trivial) ------------------------------

    ~Rational();

private:

    // Attributes of the rational number object; an integer numerator and denominator
    Integer numerator;
    Integer denominator;
};
