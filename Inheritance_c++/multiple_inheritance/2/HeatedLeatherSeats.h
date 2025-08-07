#pragma once

#include"HeatedSeats.h"
#include"LeatherSeats.h"

using std :: cout;
using std :: string;

class HeatedLeatherSeats : public HeatedSeats, public LeatherSeats{
    public:
        HeatedLeatherSeats(float heated_seats_price, float leather_seats_price,\
 int max_temperature, string color);
};