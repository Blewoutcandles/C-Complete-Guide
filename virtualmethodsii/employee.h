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
        string get_employee_type() const;
        float  virtual get_total_salary(float bonus_percent1 = 2) const;      
        virtual ~EMPLOYEE();
        //the above virtual function to the destruction class symbolize that the 
        //whenever the object are initialized as pointers to the class
        //then we have to iimplement the separate destruction function for the 
        //classes (each), so when in time of destruction the derived classes will be 
        //destructed later the base class. 
        //in doing so, the derived class which containes the base class creates the 
        //base class then will not delete it aftre the destruction fo the whole class
        //itself. this is why we use the virtual keyword to make the compiler to 
        //understand that to follow dynamic dispatching to rectify the issue by deleting 
        //the base class without skipping it from the above example

        //the above can also be done in 
        // virtual ~EMPLOYEE()  =   default;
        //by the time in the output console we could see only the destructors of the 
        // fulltimeemployee class since the compiler takes care of eh destruction of
        //the base class
};   