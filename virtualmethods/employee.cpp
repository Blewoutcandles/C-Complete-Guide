#include "employee.h"

EMPLOYEE :: EMPLOYEE(string name, string employeetype, float  salary):
    name(name),employeetype(employeetype), salary(salary){

    }

string EMPLOYEE :: get_name()const{
    return name;
}
string EMPLOYEE :: get_employee_type() const{
    return employeetype;
}
       
float EMPLOYEE :: get_salary()const{
    return salary;
}

float EMPLOYEE :: get_total_salary()const{
    cout << "Employee: get_total_salary() " << name << endl;
    return salary;
}

void EMPLOYEE :: display_get_salary() const{
    cout << get_total_salary() << endl;
}

const EMPLOYEE& EMPLOYEE :: increase_salary_and_return_this(){
    salary = salary+10000;
    return *this;
}