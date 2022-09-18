
#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include <string>

class Ship {
public:
    
    Ship();
    
    Ship(const std::string initShipName, const std::string initYear);
    
    Ship(const Ship&);
    
    Ship(Ship&&);
    
    Ship& operator=(const Ship&);
    
    Ship& operator=(Ship&&);
    
    void setShipName(std::string newShipName);
    
    std::string getShipName();
    
    void setYear(std::string newYear);
    
    std::string getYear();
    
    virtual void printS();
    
private:
    std::string shipName;
    std::string year;
};

#endif /* Ship_hpp */
