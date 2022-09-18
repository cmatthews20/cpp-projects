
#ifndef CruiseShip_hpp
#define CruiseShip_hpp

#include <stdio.h>
#include "Ship.hpp"

// Class derived from Ship

class CruiseShip : public Ship {
public:
    
    CruiseShip();
    
    CruiseShip(std::string initShipName, std::string initYear, int initMaxP);
    
    CruiseShip(const CruiseShip&);
    
    CruiseShip(CruiseShip&&);
    
    CruiseShip& operator=(const CruiseShip&);
    
    CruiseShip& operator=(CruiseShip&&);
    
    void setMaxPassengers(int newMaxP);
    
    int getMaxPassengers();
    
    void printS() override;
    
private:
    int maxPassengers;
};

#endif /* CruiseShip_hpp */
