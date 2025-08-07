#include "Department2.h"
using namespace std;

int main(){
    Department engineering("Mint","engineering",500000, 200);
    Department operations("Mint","operations",10000,50);
    Department hr("Mint", "hr",20000,3);
    engineering.show();
    ++engineering;
    cout << "******************After preincrement****************" << endl;
    engineering.show();

    // operations.show();
    // Department vet = operations++;
    /*this vet = operations++
    which in this case store the operations in the vet and later increment the 
    operations as you can see in the function that, copy of the operators is
    being done first and returned to the vet and corresponding increment to
    the operations*/
    // vet.show();
    // cout << "******************After post increment****************" << endl; 
    // operations.show();

    /*doing miscellanous task eg: ++a = b and  b = a++*/
    // ++engineering = operations;
    // engineering.show();//see the enginnering values are last and the operations values are inserted into the 
    // // engineering object
    // engineering = operations++;
    // engineering.show();
    // Department merged_dept = engineering + operations;
    // merged_dept.show();
    // engineering.show();
    // engineering += operations;
    // cout << "After calling the engineering+=operations" << endl;
    // engineering.show();

    // // Department merged_dept = engineering + operations;
    // // cout<<"Merged department" << endl;
    // // merged_dept.show();
    // engineering++++;
    //this is error because since the post fix function returns the
    //const reference type so we could not change
    ++++engineering;
    engineering.show();
    //luckily tis could be done in pre incremenet operator function
    (++engineering)++;
    engineering.show();//this would work since the below doesnot
    // ++engineering++;//this does not work because of the operator 
    //precedance working from right to left.
    //from right postincrement returns const and then preincrement calls 
    //returning in error
    return 0;
}