#include"fulltimeemployee.h"
// #include"contractemployee.h"
#include"Engineeringemployee.h"

void display_totalsalary(const EMPLOYEE& emp_ref){
    cout << emp_ref.get_total_salary()  << endl;
}
int main(){
    EMPLOYEE joan("Joan","parttime",20000);
    FULLTIMEEMPLOYEE emp_janice("Janice",50000,5.5);
    EngineeringEmployee johndy("Jasmine",40000, 5.5, 100, 1000);
    // ContractEmployee Terence("Terence",60000,10,200);
    // cout << "***************Employee***************" << endl;
    // cout << joan.get_total_salary() << endl;
    // cout << joan.get_name() <<" " << emp_janice.get_salary() << endl;
    // cout << "***************Full Time Employee***************"  << endl; 
    // cout << emp_janice.get_total_salary() << endl;
    // cout <<"*****************Contract employee************" << endl;
    // cout <<Terence.get_total_salary() <<endl;
    // display_totalsalary(&joan);
    // display_totalsalary(&emp_janice);
    // display_totalsalary(&Terence);
    //if usage of the virtual keyword in the baseclass employee is prohibited or restricted
    // then the entire program would collapse maintaining that ensures the smooth flow of the funtion
    //and its associative operation
    //next checking with the references
//now with the separate function in the base class
    // joan.display_get_salary();
    // emp_janice.display_get_salary();
    // Terence.display_get_salary();

    // EMPLOYEE *joanpointer(&joan);
    // EMPLOYEE *emp_janice_pointer(&emp_janice);
    // EMPLOYEE *terencepointer(&Terence);
    // cout << "pointer based invoking " << endl;
    // joanpointer -> display_get_salary();
    // emp_janice_pointer -> display_get_salary();
    // terencepointer -> display_get_salary();
    //what if we remove rthe virtual keyword from the base class
    //now the display_get_salary() method have invoked the base class method rather than their
    //specific individual classes this happens to output the base class values like the salary
    //and  the names rather than the updated values from the derived class.

    EMPLOYEE &joanpointer(joan);
    EMPLOYEE &emp_janice_pointer(emp_janice);
    EMPLOYEE &emp_johndy(johndy);
    johndy.display_get_salary();
    // EMPLOYEE &terencepointer(Terence);
    display_totalsalary(joan.increase_salary_and_return_this());
    display_totalsalary(emp_janice.increase_salary_and_return_this());
    // display_totalsalary(Terence.increase_overtime_and_return_this());

    return 0;
}