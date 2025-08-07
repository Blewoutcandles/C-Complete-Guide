#include "fulltimeemployee.h"

FULLTIMEEMPLOYEE :: FULLTIMEEMPLOYEE(string name,float salary,float basebonus_percent):
    name(name), employeetype("fulltime"), basesalary(salary),basebonus_percent(basebonus_percent){

}
 string FULLTIMEEMPLOYEE :: get_name()const {
    return name;
 }

string FULLTIMEEMPLOYEE ::get_employeetype()const {
    return employeetype;
}

float FULLTIMEEMPLOYEE :: get_salary() const {
    cout <<"FUlltime employee  : get_salary()" << get_name() << endl;
    return basesalary + basesalary *basebonus_percent *0.01;
}

 float FULLTIMEEMPLOYEE :: get_stock_compensation() const{
    return 0;
 }

float FULLTIMEEMPLOYEE ::  get_total_compensation()const{
    cout << "Fulltimeemployee: get_total_compensation()" << get_name() << endl;
    return get_salary() + get_stock_compensation();
}