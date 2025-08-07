#include "fulltimeemployee.h"

FULLTIMEEMPLOYEE :: FULLTIMEEMPLOYEE(string name,float salary,float bonus_percent):
    EMPLOYEE(name, "fulltime",salary),basebonus_percent(bonus_percent){

}

float FULLTIMEEMPLOYEE :: get_total_salary(float bonus_percent) const {
    cout << "FulltimeEmployee :basebonuspercent " << get_name() << bonus_percent<< endl;
    float final_bonus_percent = basebonus_percent + bonus_percent;
    cout << final_bonus_percent << " " << get_salary()*final_bonus_percent*0.01 << endl;
    return get_salary() + get_salary()*final_bonus_percent*0.01;
}

FULLTIMEEMPLOYEE :: ~FULLTIMEEMPLOYEE(){
    // cout << "Destruction of the fulltime class" << endl;
}