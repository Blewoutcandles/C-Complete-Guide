#include "fulltimeemployee.h"

FULLTIMEEMPLOYEE :: FULLTIMEEMPLOYEE(string name,float salary,float basebonus_percent):
    EMPLOYEE(name, "fulltime"),basesalary(salary),basebonus_percent(basebonus_percent){

}

float FULLTIMEEMPLOYEE :: get_salary() const {
    cout <<"FUlltime employee  : get_salary()" << get_name() << endl;
    return basesalary + basesalary *basebonus_percent *0.01;
}

float FULLTIMEEMPLOYEE ::  get_stock_compensation()const{
    cout << "Fulltimeemployee: get_stock_compensation()" << get_name() << endl;
    return 0;
}