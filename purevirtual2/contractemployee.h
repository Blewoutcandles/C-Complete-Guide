#pragma once

#include "fulltimeemployee.h"

class ContractEmployee : public FULLTIMEEMPLOYEE{
    private :
        int overtime_hours;
        float overtime_rate;
    public:
        ContractEmployee(string name, float salary, float bonus_percent, int overtime_hours, float overtime_rate);
        float get_stock_compensation() const override final;
};