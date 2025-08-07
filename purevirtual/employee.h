#pragma once

#include<iostream>
#include<string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class EMPLOYEE{
    protected:
        EMPLOYEE() = default;
    public:
        float virtual get_salary()const = 0;
        string virtual get_name()const =  0;
        string virtual get_employeetype()const = 0;
        float virtual get_stock_compensation() const = 0;
        float virtual get_total_compensation() const = 0;    //here equals 0 means that the
        //body of the function does not exist here and it is mandatory for the abstract class
        //if all the functions are virtual with in the base class then it is known as interfaces  
    };   