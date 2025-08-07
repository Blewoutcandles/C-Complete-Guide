#include "fulltimeemployee.h"

FULLTIMEEMPLOYEE :: FULLTIMEEMPLOYEE(string name,float salary,float bonus_percent):
    EMPLOYEE(name, "fulltime",salary),basebonus_percent(bonus_percent){

}

float FULLTIMEEMPLOYEE :: get_total_salary() const {
    cout <<"FUlltime employee  : get_total_salary()" << get_name() << endl;
    float basic_salary = EMPLOYEE :: get_total_salary();
    return basic_salary + basic_salary *basebonus_percent *0.01;
}
