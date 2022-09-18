
#include "CargoShip.hpp"
#include <iostream>

// Default Constructor.
CargoShip::CargoShip() : Ship() {
    cargoCap = 0;
}

// Constructor
CargoShip::CargoShip(std::string initShipName, std::string initYear, int initMaxP) : Ship( initShipName, initYear){
    cargoCap = initMaxP;
}

// Copy Constructor.
CargoShip::CargoShip(const CargoShip& other) : Ship(other){
    cargoCap = other.cargoCap;
}

// Move Constructor.
CargoShip::CargoShip(CargoShip&& other) : Ship(other){
    cargoCap = other.cargoCap;
}

// Copy assignment Constructor.
CargoShip& CargoShip::operator=(const CargoShip& other){
    Ship::operator=(other);
    cargoCap = other.cargoCap;
    return *this;
}

// Move assignment operator.
CargoShip& CargoShip::operator=(CargoShip&& other) {
    Ship::operator=(other);
    cargoCap = other.cargoCap;
    return *this;
}

// getter for cargoCap.
int CargoShip::getCargoCap(){
    return cargoCap;
}

// setter for cargoCap.
void CargoShip::setCargoCap(int newCargoCap){
    cargoCap = newCargoCap;
}

// PrintS function to override virtual printS function in Ship class.
void CargoShip::printS() {
    std::cout << "Ship's name: " << getShipName() << ", max cargo capacity: " << getCargoCap() << "\n";
}
