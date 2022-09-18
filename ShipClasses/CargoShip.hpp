
#ifndef CargoShip_hpp
#define CargoShip_hpp

#include <stdio.h>
#include "Ship.hpp"

class CargoShip : public Ship {
public:
    
    CargoShip();
    
    CargoShip(std::string initShipName, std::string initYear, int newCargo);
    
    CargoShip(const CargoShip&);
    
    CargoShip(CargoShip&&);
    
    CargoShip& operator=(const CargoShip&);
    
    CargoShip& operator=(CargoShip&&);
    
    void setCargoCap(int newCargoCap);
    
    int getCargoCap();
    
    void printS() override;
    
private:
    int cargoCap;
    
};

#endif /* CargoShip_hpp */
