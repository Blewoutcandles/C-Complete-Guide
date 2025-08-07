#pragma once

#include"employee.h"

class FULLTIMEEMPLOYEE: public EMPLOYEE{
    private :
        float bonus_percent;
    public:
        FULLTIMEEMPLOYEE(std :: string name, float salary,float bonus_percent);
        float get_bonus_percent() const;
        float get_total_salary() const override;   
//usign the override keyword on the get_total_salary() making to overide the one in the base class
//this override function should be used for the function which is already in the base class or else 
//error like non virtual member function overriding the virtual member from the base class may generate 
//so be careful with the usage
//proper usage of the override keyword:
//maintain the const keyword and make sure the member function from the base class matches \
 member function with the derived class
        const FULLTIMEEMPLOYEE& increase_salary_and_return_this();
};