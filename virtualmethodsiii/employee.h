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
        float salary;
    public:
        EMPLOYEE(string name,string employeetype, float salary);
        string get_name()const;
        float get_salary()const;
        float  virtual get_total_salary() const;      
    };   