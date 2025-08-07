#pragma once
#include"rectangle.h"

class square: public rectangle {
    private:
        float side;
    public:
        square(float side  = 1.0);
        square(const square& other);
        float get_area()const override final;
        float get_perimeter()const override final;
};