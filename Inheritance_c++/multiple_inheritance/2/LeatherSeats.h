#pragma once

#include"Accessory.h"

class LeatherSeats : public virtual Accessory{
    private:
        std :: string color;
    public:
        LeatherSeats(float price, std :: string color);
        std :: string get_color() const;
};