#include"contractemployee.h"

ContractEmployee :: ContractEmployee(string name, float salary, int overtime_hours, float overtime_rate):
    EMPLOYEE(name,"contract", salary), overtime_hours(overtime_hours), overtime_rate(overtime_rate){

}

int ContractEmployee :: get_overtime_hours() const{
    return overtime_hours;
}

float ContractEmployee :: get_overtime_rate() const{
    return overtime_rate;
}

float ContractEmployee :: get_total_salary() const{

    cout << "contract employee get_total_salary () "<< get_name()<< endl;
    return get_salary() + overtime_hours *overtime_rate; 
}

const ContractEmployee& ContractEmployee :: increase_overtime_and_return_this(){
    overtime_hours  = overtime_hours + 100;
    return *this;
}