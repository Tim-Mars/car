#include <iostream>
#include <vector>
#include <array>

#ifndef car_h
#define car_h

class Car{
    private:    
        bool operable;
        int milage;
        std::vector<std::array> {};

    public:
        bool isOperable(Car& c);
        int getMilage();
};
#endif