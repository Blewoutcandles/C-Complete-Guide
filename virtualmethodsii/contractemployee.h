#pragma once

#include "employee.h"

class ContractEmployee : public EMPLOYEE{
    private :
        int overtime_hours;
        float overtime_rate;
    public:
        ContractEmployee(std:: string name, float salary, int overtime_hours, float overtime_rate);
        int get_overtime_hours() const;
        float get_overtime_rate() const;
        float get_total_salary() const ;
        
};