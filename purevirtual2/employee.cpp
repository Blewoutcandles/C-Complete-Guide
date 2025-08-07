#include "employee.h"

EMPLOYEE :: EMPLOYEE(string name, string employeetype):
    name(name),employeetype(employeetype){
/*note: no virtual function should not be called here which leads to undefined behaviour and would be statically resolved 
since the virtual functions do not have a body in the baseclass itself*/
    }

string EMPLOYEE :: get_name()const{
    return name;
}
       
string EMPLOYEE :: get_employeetype()const{
    return employeetype;
}

float EMPLOYEE :: get_total_compensation() const{
    return get_salary() + get_stock_compensation();
}

