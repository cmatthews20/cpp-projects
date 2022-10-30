//
// Created by Cole on 2021-11-04.
//

#pragma once
class Counter
{
public:
    static int numCounters;
    Counter(int initvalue = 0);

    ~Counter();

    int getValue();

    static int getNumCounters();

    Counter& operator++();

    Counter& operator++(int);

private:
    int countval;
};