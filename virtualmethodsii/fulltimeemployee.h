#pragma once

#include"employee.h"

class FULLTIMEEMPLOYEE final: public EMPLOYEE{
    private :zz
        float basebonus_percent;
    public:
        FULLTIMEEMPLOYEE(std :: string name, float salary,float basebonus_percent);
        float get_total_salary(float bonus_percent = 8) const override final; //the final here specifies that the get_total_salary as
        //different implementations in the derived class cannot be done further below the inheritance hierarchy  
        ~FULLTIMEEMPLOYEE();
};