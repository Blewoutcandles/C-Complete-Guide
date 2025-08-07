#include "creditcard.h"

using std :: cout;
using std :: endl;
using std :: string;
using std :: vector;

CreditCard :: CreditCard(string name, float limit):
    name(name), limit(limit){
        cout << "INVOking the constructor" << limit << endl;
    }

void CreditCard :: set_limit(float limit){
    this -> limit = limit;
}

void CreditCard :: get_creditlimit() {
    cout<< limit << endl;
}
void CreditCard :: get_name() {
    cout <<  name << endl;
}



CreditCard :: ~CreditCard(){
    cout << "invoking the deconstructor action revoked" << endl;
}