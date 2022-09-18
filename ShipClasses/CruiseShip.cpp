
#include "CruiseShip.hpp"
#include <iostream>


// Default Constructor.
CruiseShip::CruiseShip() : Ship() {
    maxPassengers = 0;
}

// Constructor
CruiseShip::CruiseShip(std::string initShipName, std::string initYear, int initMaxP) : Ship( initShipName, initYear){
    maxPassengers = initMaxP;
}

// Copy Constructor.
CruiseShip::CruiseShip(const CruiseShip& other) : Ship(other){
    maxPassengers = other.maxPassengers;
}

// Move Constructor.
CruiseShip::CruiseShip(CruiseShip&& other) : Ship(other){
    maxPassengers = other.maxPassengers;
}

// Copy assignment Constructor.
CruiseShip& CruiseShip::operator=(const CruiseShip & other){
    Ship::operator=(other);
    maxPassengers = other.maxPassengers;
    return *this;
}

// Move assignment operator.
CruiseShip& CruiseShip::operator=(CruiseShip && other) {
    Ship::operator=(other);
    maxPassengers = other.maxPassengers;
    return *this;
}

// setter for maxPassengers.
void CruiseShip::setMaxPassengers(int newMaxP){
    maxPassengers = newMaxP;
}

// getter for maxPassengers.
int CruiseShip::getMaxPassengers(){
    return maxPassengers;
}

// PrintS function to override virtual printS function in Ship class.
void CruiseShip::printS() {
    std::cout << "Ship's name: " << getShipName() << ", max passengers: " << getMaxPassengers() << "\n";
}
