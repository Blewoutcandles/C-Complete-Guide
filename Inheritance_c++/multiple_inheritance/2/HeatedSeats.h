#pragma once

#include"Accessory.h"

class HeatedSeats: public virtual Accessory{
    private:
        int max_temperature;
    public:
        HeatedSeats(float price, int max_temperature);
        int get_max_temperature() const;
};