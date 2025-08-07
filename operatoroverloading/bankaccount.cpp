#include "bankaccount.h"
using namespace std ;


Bankaccount :: Bankaccount(float balance, float credit_point):
        balance(balance), credit_point(credit_point){

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
void Bankaccount :: set_credit_score(float credit_point){
    this -> credit_point += credit_point;
}


int Bankaccount :: compare(const Bankaccount& person) const{
    if(balance>person.balance){
        return 1;
    }
    else if(balance == person.balance)
        return 0;
    else 
        return -1;
}


// bool Bankaccount :: operator <(Bankaccount& person) const{
//     if(balance < person.balance)
//         return true;
//     return false;
// }

// bool Bankaccount :: operator =(Bankaccount& person) const{
//     if(balance == person.balance)
//         return true;
//     return false;
// }

// bool Bankaccount :: operator <(int amount) const{
//     if(this-> balance > amount){
//         return true;
//     }
//     return false;
// }

//  bool  operator<(const Bankaccount& first, const Bankaccount& second){
//     return first.get_balance() - second.get_balance() < 0 ? true : false;
// }//it is a friend function not a member of the class bankaccount

