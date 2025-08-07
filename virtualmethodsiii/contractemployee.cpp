#include"contractemployee.h"

ContractEmployee :: ContractEmployee(string name, float salary, float bonus_percent, int overtime_hours, float overtime_rate):
    FULLTIMEEMPLOYEE(name, salary, bonus_percent), overtime_hours(overtime_hours), overtime_rate(overtime_rate){

}

float ContractEmployee :: get_total_salary() const{ 
    cout << "contract employee get_total_salary () "<< get_name()<< endl;

    float base_plus_bonus_salary = FULLTIMEEMPLOYEE :: get_total_salary();
    return base_plus_bonus_salary + overtime_hours *overtime_rate; 
}
