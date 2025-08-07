#pragma once

#include"employee.h"

class FULLTIMEEMPLOYEE : public EMPLOYEE{
    private :
        float basebonus_percent;
    public:
        FULLTIMEEMPLOYEE(std :: string name, float salary,float basebonus_percent);
        float get_total_salary() const override;  
};