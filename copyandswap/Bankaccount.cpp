#include "Bankaccount.h"

using std :: swap;
BANKACCOUNT :: BANKACCOUNT(string name, float salary):
    name(name), salary(salary){
        cout << "BANKACCOUNT CONSTRUCTOR WITH PARAMETER" << endl;
        ccpoint = new CREDITCARD(name,salary);
}

BANKACCOUNT :: BANKACCOUNT(BANKACCOUNT& other):
    name(other.name), salary(other.salary){
        cout << "****************************************" << endl;
        ccpoint = new CREDITCARD((other.ccpoint) -> get_name(), (other.ccpoint)->get_limit());
        cout << "COPY CONSTRUCTOR OF BANKACCOUNT" << endl;
        cout << "****************************************" << endl;
    }


void BANKACCOUNT :: swap(BANKACCOUNT &other){
   std :: swap(this->name, other.name);
   std :: swap(this->salary, other.salary);
   std :: swap(*(this -> ccpoint), *(other.ccpoint));
}
BANKACCOUNT :: ~BANKACCOUNT(){
    delete ccpoint;
    ccpoint = nullptr;
    cout << "**************************************************" << endl;
    cout <<"Destructing object"<< endl;
}

BANKACCOUNT :: BANKACCOUNT():
    name(" "),salary(0){
        cout << "Invoking the default operator"<<endl;
        ccpoint  = new CREDITCARD(" ", 0);
    }
