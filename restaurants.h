#ifndef RESTAURANTS_H
#define RESTAURANTS_H

#include "foods.h"
#include <array>

class Restaurants
{
private:
    int r_id = 0;

public:
    char r_name[32];
    char r_address[256];
    std::array<Foods, 100> r_menu;
    //Implement kinda storage for Foods.
    Restaurants();
};

#endif // RESTAURANTS_H
