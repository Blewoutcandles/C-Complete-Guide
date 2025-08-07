#include "deptstream.h"
using namespace std;
//the above implementation can also be implemented using the below means:
using std :: istream;
using std :: ostream;
using std :: operator <<;
using std :: operator >>;

int main(){
float  num; string name;
    // istream& stream = operator>>(cin , num);//this is wrong since free function are for the not the built in type
    // istream& stream = operator>>(cin, name);
    // istream& stream1 = stream >> num;
    // istream& stream2 = stream.operator>>(num);//builtin type so invoking with one operator is enough
    //the above operators are provided by the c++ language itself
    // department dep(name,num);
    // department dep_copy;
    // cin >> dep_copy ;
    // cout << dep << endl;
    // cout << dep_copy << endl;
    istream& stream = operator >> (cin, name);
    stream.operator >> (num);//the above one is custom type so separate functino calling is required
    //The below one does not require separate funcition calling since it is a built in type
    //the avove two calling of the operator may not be defined but the definition of function may take 
    //place if the department class is involved with any other parameter or class itself
    department dep(name,num);
    department dep_copy;
    dep_copy = dep;
    // dep = dep;
    // department dp_copy{dep};
    cout << dep;
    cout << dep_copy;
    //calling is similar to the operator << (cout, dep);
    // cout << dp_copy << endl;
// constructor of the noduesform being called
// Creating the noduesform 
// INvoking the copy constructor of the department class
// The name of the customer is jack And the salary of the person is 987
// Amount to be payed1200


// The name of the customer is jack And the salary of the person is 987
// Amount to be payed
/*here the destructors are not called since because of the credit object being 
deleted more than once in this case you have to make sure to create two separate
credit card class pointer using new keyword rather than one*/

    return 0;
}