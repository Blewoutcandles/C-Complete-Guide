#include"contractemployee.h"

void display_total_salary( const EMPLOYEE& emp_ref){
    cout << emp_ref.get_total_salary()  << endl;
}
int main(){
    ContractEmployee emp_nina{"Nina", 70000,10,30,500};
    // cout << "---------------CONTRACTEMPLOYEE -------------------" << endl;
    // cout <<"Total salary : " << emp_nina.get_total_salary() << endl;

    float base_salary  = emp_nina.EMPLOYEE ::get_total_salary();
    float base_salary_plus_bonus = emp_nina.FULLTIMEEMPLOYEE :: get_total_salary();
    float base_salary_plus_bonus_plus_stock= emp_nina.get_total_salary();
    cout << "-----------Contract Employee-------------" << endl;
    cout << "salary" << base_salary << endl;
    cout << "bonus" << base_salary_plus_bonus - base_salary << endl;
    cout << "stock" << base_salary_plus_bonus_plus_stock - base_salary_plus_bonus << endl; 
    return 0;   
}