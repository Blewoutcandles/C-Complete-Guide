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

        const ContractEmployee& increase_overtime_and_return_this();
        /*it will not give any errors since contractemployee itself is the derived class of the base class
        and also this is the special case of pointers since the employee is the parent class of the 
        contractemployee modification of this function to const contractemployee& increase_overtime_and _
        return_this() also proceeds without error(actually casting is done indirectly by the compiler)*/
};