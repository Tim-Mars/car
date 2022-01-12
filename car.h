#include <iostream>
#include <vector>

#ifndef car_h
#define car_h

class Car{
    private:    
        bool operable;
        int milage;
    public:
        bool isOperable(Car& c);
        int getMilage();
};
#endif