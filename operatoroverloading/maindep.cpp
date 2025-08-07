#include "Department.h"


int main(){
    Department ECE("Mint","cloud",50, 2000000.00);
    Department BUS("Mint","computing",23,500000);
    // Department HR("Mint","Process",2,20000);

    // ECE.show();
    // BUS.show();

    //  Department ECE_BUS = ECE + BUS;
    // Department *ECE_BUS = ECE + BUS;
    // (ECE +=  BUS) += HR;
    // (ECE +=  BUS)+= HR;//merged the BUS and the HR TO THE ECE but BUS and HR remains unchanged
    /*NOTE  : (ECE +=  BUS) += HR; for this if functino is like the below that return the value type instead of reference 
    the changes will not reflect tot he ECE
    Department operator +=(const Department& other);*/
    Department cloud = ECE + BUS;//this returns the value type no changes to the dept
    ECE.show();//operator += overloader
    BUS.show();
    // HR.show();
    cloud.show();

    ECE +=  BUS;//this will change the content of the ECE
    ECE.show();
    // BUS.show();

    /*output:
    Organization : Mint
Department :cloud + computing + Process
Total Number of Employees : 2520000
Salary Budget : 75
**********************
Organization : Mint
Department :computing
Total Number of Employees : 500000
Salary Budget : 23
**********************
Organization : Mint
Department :Process
Total Number of Employees : 20000
Salary Budget : 2*/

    // ECE_BUS.show();
    // ECE_BUS->show();

    // delete(ECE_BUS);
    return 0;
}
