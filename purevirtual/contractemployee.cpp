#include"contractemployee.h"

ContractEmployee :: ContractEmployee(string name, float salary, float bonus_percent, int overtime_hours, float overtime_rate):
    FULLTIMEEMPLOYEE(name, salary, bonus_percent), overtime_hours(overtime_hours), overtime_rate(overtime_rate){

}

float ContractEmployee :: get_stock_compensation() const{
    return overtime_hours * overtime_rate;
}