#pragma once

#include"employee.h"

class FULLTIMEEMPLOYEE : public EMPLOYEE{
    private :
        string name;
        string employeetype;
        float basebonus_percent;
        float basesalary;
    public:
        FULLTIMEEMPLOYEE(string name, float salary,float basebonus_percent);
        float get_salary() const override;
        string get_name()const override;
        string get_employeetype()const override;
        float get_stock_compensation() const override;
        float get_total_compensation() const override;
};