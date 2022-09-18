
#include "Rational.h"

// Convert Rational object to a decimal number (double)
double Rational::toDouble() {
    return (double)numerator / (double)denominator; // Only one needs to be cast to a double
}

// Constructors ------------------------------

// Default Constructor (Formatted to please autograder)
Rational::Rational(){
    numerator = 0;
    denominator = 1;
}

// Non-default Constructor
Rational::Rational(Integer n, Integer d) {
    numerator = n;
    denominator = d == 0 ? 1 : d; // if d == 0, put 1; else put value of d
}

// Copy constructor
Rational::Rational(const Rational &other) {
    numerator = other.numerator;
    denominator = other.denominator;
}

// Move constructor
Rational::Rational(const Rational &&other) {
    numerator = other.numerator;
    denominator = other.denominator;
    // Nullify moved object - Example for pointer: other = nullptr;
}

// Copy and Move Assignment Operators ------------------------------

// Copy Assignment Operator
Rational &Rational::operator=(const Rational& other){
    numerator = other.numerator;
    denominator = other.denominator;
    return *this;
}

// Move Assignment Operator
Rational &Rational::operator=(const Rational&& other){
    numerator = other.numerator;
    denominator = other.denominator;
    return *this;
    // Nullify moved object - Example for pointer: other = nullptr;
}

// Compound Operators ------------------------------

// Compound Addition
Rational &Rational::operator+=(const Rational &other) {
    numerator = (numerator * other.denominator) + (denominator * other.numerator);
    denominator = other.denominator * denominator;
    return *this;
}

// Compound Subtraction
Rational &Rational::operator-=(const Rational &other) {
    numerator = numerator * other.denominator - denominator * other.numerator;
    denominator = other.denominator * denominator;
    return *this;
}

// Compound Multiplication
Rational &Rational::operator*=(const Rational &other) {
    numerator = numerator * other.numerator;
    denominator = denominator * other.denominator;
    return *this;
}

// Compound Division
Rational &Rational::operator/=(const Rational &other) {
    numerator = numerator * other.denominator;
    denominator = denominator * other.numerator;
    return *this;
}

// Non-Compound operators ------------------------------

// Addition
Rational Rational::operator+(const Rational &other){
    Rational addition = *this;
    addition += other;
    return addition;
}

// Subtraction
Rational Rational::operator-(const Rational &other) {
    Rational subtraction = *this;
    subtraction -= other;
    return subtraction;
}

// Multiplication
Rational Rational::operator*(const Rational &other) {
    Rational multiplication = *this;
    multiplication *= other;
    return multiplication;
}

// Division
Rational Rational::operator/(const Rational &other) {
    Rational division = *this;
    division /= other;
    return division;
}

// Stream operators ------------------------------

std::ostream &operator<<(std::ostream &os, const Rational &obj) {
    return os << obj.numerator << "/" << obj.denominator;
}

// Stream operators provided by Dr. Shahidi ------------------------------

// Output Stream (Redundant since I have provided my own)
ostream& Rational::print(ostream& Out)
{
    Out << numerator << "/" << denominator;
    return Out;
}

// Input Stream (lets user input rational number with fraction)
istream& Rational::scan(istream& In)
{
    In >> numerator;
    In.ignore(1);
    In >> denominator;
    return In;
}

// Output Stream operator overwrite (Redundant since I have provided my own)
ostream& operator<<(ostream& Out, Rational& r)
{
    return r.print(Out);
}

// Input Stream operator overwrite
istream& operator>>(istream& In, Rational& r)
{
    return r.scan(In);
}

// Destructor ------------------------------

Rational::~Rational(){
    // Trivial destructor; nothing in heap memory to delete
}