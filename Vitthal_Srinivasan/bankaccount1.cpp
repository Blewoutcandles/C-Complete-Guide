#include"bankaccount1.h"

using std :: cout;
using std :: string;
using std :: endl;
using std :: to_string;

Bankaccount :: Bankaccount(string name, float balance):
    name(name), balance(balance),credit_card{"Maestro", 1999}{

 }
// bool Bankaccount :: withdraw(float amount){
//     if(this ->  balance >= amount){
//         balance -= amount;
//         string transaction = "Withdrawal Amount : "+to_string(amount) +" New balance : " +to_string(balance);
        
//         transactionlog.push_back(transaction);
//         return true;
//     }
//     string transaction ="Insufficient balance : " + to_string(balance)+"!! Dont spend more than you earn";
//     transactionlog.push_back(transaction);
//     return false;

// }

// bool Bankaccount :: deposit(float amount){
//     this -> balance += amount;
//     string transaction = "Amount Deposited : " +to_string(amount) + " New balance : " +to_string(balance);
//     transactionlog.push_back(transaction);
//     return true;
// }
// void display_transaction_report(const Bankaccount &bank_account){//in this function no need of Bankaccount :: since it is a friend of the 
// //Bankaccount class
//     cout << "Account Details : " << bank_account.name << "\nCurrent balance : " << bank_account.balance << endl;  
//     cout <<"Transaction Details" << endl;
//     for(auto variable : bank_account.transactionlog){//this is a private class in the Bankaccount class how are we accessing it then using friend
//     //keyword
//         cout << variable << endl;
//     }
// }


// Bankaccount :: ~Bankaccount(){
//     cout << "Destructor of Bankaccount class" << endl;
// }

void Bankaccount:: update_credit_card(std:: string n){
    credit_card.name = n;
}

void Bankaccount:: update_credit_card_limit(float l){
    credit_card.limit = l;
}

void Bankaccount:: display() const{
    cout <<"----------BankAccount Details--------------"<< endl;
    cout<< "Account Name " << name;
    cout<< "Account Balance " << balance<< endl;
    cout<<"------------Credit Card Details-------------"<< endl;
    cout<<"Credit Card Name " <<credit_card.name;
    cout << "Credit Card Limit" << credit_card.limit << endl; 
}

//what's mean by constructor chaining?

// invoking various constructors from one constructors the invoking constructors are executed first then follows the
// execution the constructor where the constructor is called for eg
/*
Bankaccount :: Bankaccount(string name, float balance):

    Bankaccount(n,b,"checking"){
        cout << the constructor of the bankaccount with 2 parameters
 }

 Bankaccount :: Bankaccount(string name, float balance,string  type):
    name(n), balance(balance),accounttype(type){
        cout << "Invoking the constructor of teh 4 parameter constructor" << endl;
    }
 output: will be
Invoking the constructor of teh 4 parameter constructo
 the constructor of the bankaccount with 2 parameters
 
 
 */