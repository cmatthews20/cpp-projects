//
// Created by Cole on 2021-11-04.
//

#include "Counter.h"

Counter::Counter(int initvalue)
{
    countval = initvalue;
    numCounters++;
}

Counter::~Counter()
{
    numCounters--;
}

int Counter::getValue()
{
    return countval;
}

int Counter::getNumCounters()
{
    return numCounters;
}

Counter& Counter::operator++()
{
    countval++;
    return *this;
}

Counter& Counter::operator++(int)
{
    countval++;
    return *this;
}