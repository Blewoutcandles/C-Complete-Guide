#pragma once

#include "fulltimeemployee.h"

class EngineeringEmployee : public FULLTIMEEMPLOYEE{
    private:
        int num_of_stocks;
        float stock_price;
    public:
        EngineeringEmployee(std :: string name, float salary, float  bonus_percent,\
         int num_of_stocks, float stock_price);
        float get_total_salary()const override;
};