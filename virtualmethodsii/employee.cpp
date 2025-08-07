#include "employee.h"

EMPLOYEE :: EMPLOYEE(string name, string employeetype, float  salary):
    name(name),employeetype(employeetype), salary(salary){
    // cout <<"Constructor is invoked : " << name << endl;
    // cout << "total salary " << get_total_salary() << endl;
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

float EMPLOYEE :: get_total_salary(float bonus_percent)const{
    cout << "Employee: get_total_salary() " << name <<  " " << bonus_percent << endl;
    cout << salary * bonus_percent *0.01 << endl;
    return salary+salary * bonus_percent *0.01;
}



EMPLOYEE :: ~EMPLOYEE(){
    // cout << "Destructor of the employee class" << endl;
    // cout << "Totalsalary" << get_total_salary() << endl;
}