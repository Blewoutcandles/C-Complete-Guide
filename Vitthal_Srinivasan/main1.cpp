#include "bankaccount1.h"

using std ::cout;
using std :: endl;

// void display_transaction_report(const Bankaccount &bank_account){//in this function no need of Bankaccount :: since it is a friend of the 
// //Bankaccount class
//     cout << "Account Details : " << bank_account.name << "\nCurrent balance : " << bank_account.balance << endl;  
//     cout <<"Transaction Details" << endl;
//     for(auto variable : bank_account.transactionlog){//this is a private class in the Bankaccount class how are we accessing it then using friend
//     //keyword
//         cout << variable << endl;
//     }
// } moving this to bankaccount1.cpp also will not cause any problem
int main(){
    Bankaccount Starlight {"Rani", 9999.561};
    Starlight.display();
    Starlight.update_credit_card("Ranni");
    Starlight.update_credit_card_limit(3000);
    Starlight.display();
    // Starlight.withdraw(1200);
    // Starlight.deposit(12000);
    // display_transaction_report(Starlight);/*NOTE: Reduce the usage of the keyword frined since itvioates the data hiding and data abstraction*/
    //instead use getter and setter functions to get the variables of the Bankaccount class
    return 0;

}