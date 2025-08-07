#include "fulltimeemployee.h"

FULLTIMEEMPLOYEE :: FULLTIMEEMPLOYEE(string name,float salary,float bonus_percent):
    EMPLOYEE(name, "fulltime",salary),bonus_percent(bonus_percent){

}

float FULLTIMEEMPLOYEE :: get_bonus_percent() const{
    return bonus_percent;
}
float FULLTIMEEMPLOYEE :: get_total_salary() const {
    cout << "FulltimeEmployee : get_total_salary() " << get_name() << endl;
    return get_salary() + get_salary()*bonus_percent*0.01;
}


const FULLTIMEEMPLOYEE& FULLTIMEEMPLOYEE :: increase_salary_and_return_this(){
    bonus_percent = bonus_percent + 4.5;
    return *this;
}