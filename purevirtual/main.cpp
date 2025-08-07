#include"contractemployee.h"
#include"employee.h"
#include"fulltimeemployee.h"

int main(){
    // FULLTIMEEMPLOYEE emp_joa{"Joe",50000,7};
    ContractEmployee emp_nina{"Nina", 70000,10,30,500};
    
    // cout << "----------FULLTIMEEMPLOYEE-------------" << endl;
    // cout <<"Total compensation : " << emp_joa.get_total_compensation() << endl;
    
    cout << "-----------ContractEmployee------------" << endl;
    cout << "Total compensation : " << emp_nina.get_total_compensation() << endl;


    return 0;   
}