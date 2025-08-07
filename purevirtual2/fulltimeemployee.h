#pragma once

#include"employee.h"

class FULLTIMEEMPLOYEE : public EMPLOYEE{
    private :
        float basebonus_percent;
        float basesalary;
    public:
        FULLTIMEEMPLOYEE(std :: string name, float salary,float basebonus_percent);
        float get_salary() const override;
        float get_stock_compensation() const override;
};