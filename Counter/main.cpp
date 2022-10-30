#include "Counter.h"
#include <iostream>
#include <string>

using namespace std;

int Counter::numCounters = 0;

int main()
{
    {
        Counter c;
        std::cout << c.getValue() << std::endl;
        std::cout << Counter::getNumCounters() << std::endl;
    }
    std::cout << Counter::getNumCounters() << std::endl;
    Counter d;
    std::cout << Counter::getNumCounters() << std::endl;
    Counter c2;
    std::cout << Counter::getNumCounters() << std::endl;
}