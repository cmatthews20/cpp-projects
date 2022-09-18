
#include "task4.hpp"
#include <iostream>

// function to test the Ship, CruiseShip, and CargoShip classes.
void task4(){
    std::cout << "Starting the task 4 test" << "\n";
    
    Ship* shipPArray[3] = {new Ship("SS ECE", "2025"), new CruiseShip("Sunshine", "2015", 200), new CargoShip("SS C", "1960", 400)
    };
    
    for (int i = 0; i < 3; i++){
        shipPArray[i]->printS();
    }
    
    std::cout << "Finished the task 4 test" << "\n";
}
