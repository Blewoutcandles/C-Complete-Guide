#include "bankaccount2.h"


Bankaccount :: Bankaccount(float balance, string name, int account_id):
        balance(balance), name(name), account_id(account_id){
        }

float Bankaccount :: get_balance() const{
    return balance;
}

bool Bankaccount :: buy_on_balance(float amount){
    if(balance >= amount){
        balance -= amount;
        return true;
    }
    cout << "Sorry mate insufficient balance" << endl;
    return false;
}

void Bankaccount :: show(){
    cout << "balance is " << this-> balance << "\nAccount holder name " << this->name << "\nAccount id " \
    << this->account_id << endl;
}
