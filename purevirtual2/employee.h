#pragma once

#include<iostream>
#include<string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class EMPLOYEE{
    private:
        string name;
        string employeetype;
    public:
        EMPLOYEE(string name,string employeetype);
        /*The employee class constructor since now it is a abstract class it should not be invoked by any others apart from the derived 
        classes, and similarly in the main.cpp the employee class could not be passed as an parameter (call by value) or as a return 
        value*/
        string get_name()const;
        string get_employeetype()const;
        float virtual get_salary()const = 0;
        float virtual get_stock_compensation() const = 0;
        //here the pure virtual function which is of above definition does not have a body of its own in the base class, however it needs
        //be overriden in the derived class. The classes which contains the pure virtual function is known as "abstract class".
        //Here the get_total_compensation() willinvoke the two virtual function of the respective derived classes.

        float get_total_compensation() const;      
    };   