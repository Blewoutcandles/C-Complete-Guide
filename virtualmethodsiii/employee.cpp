#include "employee.h"

EMPLOYEE :: EMPLOYEE(string name, string employeetype, float  salary):
    name(name),employeetype(employeetype), salary(salary){
    // cout <<"Constructor is invoked : " << name << endl;
    // cout << "total salary " << get_total_salary() << endl;
    }

string EMPLOYEE :: get_name()const{
    return name;
}
       
float EMPLOYEE :: get_salary()const{
    return salary;
}

float EMPLOYEE :: get_total_salary()const{
    cout << "Employee: get_total_salary() " << name  << endl;
    return salary;
}

// EMPLOYEE :: ~EMPLOYEE(){
//     cout << "Destructor of the employee class" << endl;
//     cout << "Totalsalary" << get_total_salary() << endl;
// }