#include "Bankaccount.h"

int main(){
    BANKACCOUNT thomas("thomas", 1200000);
    BANKACCOUNT thomascopy;
    thomascopy = thomas;//here thomascopy inherits the same ccpoint from the thomas
    //so both hold the same address for the credit card object
    //to mitigate the issue__> implement the operator=() userdefined
    cout << thomas << endl;
    cout << "*****************************" << endl;
    cout << thomascopy << endl;
}