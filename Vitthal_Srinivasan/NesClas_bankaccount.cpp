#include "NesClas_bankaccount.h"

//here we could add the constructor of the class CreditCard but we have to use two resolution operator
// bankaccount (outer class) :: CreditCard(innerclass) :: (constructor type of CreditCard)CreditCard
//since we have implemented the constructor as an inline in the NesClas_bankaccount.h we don't really have to 
// do the above case here
using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;
using std :: to_string;
//implementing the constructor class here
bankaccount :: bankaccount (string name, float balance):
    name(name), balance(balance), credit_card("maestro", 1999){//accessing the CreditCard name and limit through
    //credit_card object initializer
    }
bool bankaccount :: pay_off_credit(){

        return true;

    return false;
}

bool bankaccount :: buy_on_credit(float amount){
    if(amount > 0 && credit_card.current_limit >= amount){
        credit_card.current_limit -= amount;
        string transaction = "The amount debited using credit card is:"+to_string(amount)+ "The remaining cash in credit card"+\
        to_string(credit_card.current_limit);
        return true;
    }
    string transaction = "Insufficient Credit Card limit";
    transaction_log.push_back(transaction);
    return false;
} 

void bankaccount :: display_transaction_report() const {
    for(auto transaction : transaction_log){
        cout << transaction << endl;
    }
}

bool bankaccount :: withdraw(float amount){
    if(balance >= amount){
        balance -= amount;
        cout << "The Amount "<< amount<<" Depited from your bankaccount." << endl;
        cout << "The New account balance is : " << balance << endl;
        return true;
    }
    else{
        cout << "Insufficient balance mate deposit some amount " << endl;
        return false;
    }
}

bool bankaccount :: deposit(float amount){
    if(amount >=0 ){
        cout << "The Amount deposited is " << amount << endl;
        balance += amount;
        cout << "New Account balance is " << balance << endl;
        return true;
    }
    cout <<"No change in bank balance are you trying to play in here" << endl;
    return false;
}