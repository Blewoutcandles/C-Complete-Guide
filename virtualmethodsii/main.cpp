#include"fulltimeemployee.h"

void display_total_salary( const EMPLOYEE& emp_ref){
    cout << emp_ref.get_total_salary()  << endl;
}
int main(){
//    EMPLOYEE *emp_joan = new FULLTIMEEMPLOYEE{"joan",50000, 4};
//    EMPLOYEE*emp_janice =  new FULLTIMEEMPLOYEE ("janice",40000, 9);
//    cout << " Fulltime employee " << endl;
//    display_total_salary(*emp_joan);
//    cout << "fulltime employee" << endl;
//    display_total_salary(*emp_janice);
//    delete emp_joan;
//    delete emp_janice;
//    Destructor of the employee class
// Destructor of the employee class
//the above issue is spoken in the employee.h

    // ContractEmployee emp_janice{"janice", 6000, 10,200};
    // cout << "employee name :  "<< emp_janice.get_name() << endl;
    // cout << "Total salary of the employee : " <<emp_janice.get_total_salary() << endl;
    // cout << "************copy constructor`" << endl;
    // display_total_salary(emp_janice);

    EMPLOYEE emp_joan{"joan","PARTTIME",20000};
    FULLTIMEEMPLOYEE emp_janice("janice",50000, 3);
    // cout << emp_joan.get_total_salary() << endl;
    // cout << emp_janice.get_total_salary() << endl;

    display_total_salary(emp_joan);
    display_total_salary(emp_janice);
    // display_total_salary(emp_joan);
    // display_total_salary(emp_janice);

    /*here when using the default parameter in the get_total_salary() we could see in the ouput
    Employee: get_total_salary() joan 2
400
20400
FulltimeEmployee :basebonuspercent janice2
5 2500
52500
the final bonus percent  = 5 which is the basebonuspercent= 3 + bonus_percent from the baes class = 2
and its not taking from the derived class this is not dynamically resolved since the display function para
meter is the const EMPLOYEE& emp_ref so the default parameter from the base class is being taken rather than
the FULLTIMEEMPLOYEE CLASS default parameter.
this is an error scenario 
if all the class variables resides in the stack and the dispaly function parameter is not of reference type 
then static dispatch may perform the abovve program correctly.
conclusion: do not  use the reference operator when using the default parameters in the member function
of the respective classes
*/

    return 0;   
}