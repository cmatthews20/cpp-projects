
#include "Ship.hpp"
#include <iostream>

// Default Constructor
Ship::Ship(){
    shipName = "";
    year = "0000";
}

// Constructor.
Ship::Ship(const std::string initShipName, const std::string initYear ){
    shipName = initShipName;
    year = initYear;
}

// Copy constructor
Ship::Ship(const Ship& other){
    shipName = other.shipName;
    year = other.year;
}

// Move Constructor.
Ship::Ship(Ship&& other){
    shipName = other.shipName;
    year = other.year;
}

// Copy assignment operator
Ship& Ship::operator=(const Ship & other){
    shipName = other.shipName;
    year = other.year;
    return *this;
}

// Move assignment operator
Ship& Ship::operator=(Ship && other){
    shipName = other.shipName;
    year = other.year;
    return *this;
}

// print the shipName and Year
void Ship::printS(){
    std::cout << "Ship's name: " << shipName << ", year it was built: " << year << "\n";
}

// Mutate the shipName
void Ship::setShipName(std::string newShipName){
    shipName = newShipName;
};

// getShipName
std::string Ship::getShipName(){
    return shipName;
}

// setYear
void Ship::setYear(std::string newYear){
    year = newYear;
}

// getYear
std::string Ship::getYear(){
    return year;
}
