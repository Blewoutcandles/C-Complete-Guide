#pragma once

#include "employee.h"
#include "fulltimeemployee.h"

class ContractEmployee : public FULLTIMEEMPLOYEE{
    private :
        int overtime_hours;
        float overtime_rate;
    public:
        ContractEmployee(string name, float salary, float bonus_percent, int overtime_hours, float overtime_rate);
        float get_total_salary() const override final;
};