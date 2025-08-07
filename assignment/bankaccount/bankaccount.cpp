#include"bankaccount.h"


Bankaccount :: Bankaccount(double accountnumber, double currentbalance):
    accountnumber(generate_account_number(accountnumber)), currentbalance(currentbalance){}

Bankaccount::Bankaccount(const Bankaccount& other):
    currentbalance(other.currentbalance), accountnumber(other.accountnumber){
    }

Bankaccount :: Bankaccount():
    accountnumber(0), currentbalance(0){}
double Bankaccount :: get_accountnumber() const{
    return accountnumber;
}

double Bankaccount :: generate_account_number(double& value){
    accountnumber = value;
    return accountnumber;
}

void Bankaccount :: deposit(double amount){
    cout <<"THE AMOUNT " << amount << "HAS BEEN DEPOSITED TO YOUR ACCOUNT " << accountnumber << endl;
    currentbalance += amount;
    cout <<"CURRENT AVAILABLE BALANCE : " << currentbalance << endl;

}

void Bankaccount :: withdraw(double amount){
    cout << "TRANSACTION IS BEING PROCESSED______" << endl;
    if(currentbalance>=amount){
        cout << "AMOUNT HAS BEEN WITHDRAWN SUCCESSFULLY" << endl;
        currentbalance -= amount;
    }else{
        cout << "TRANSACTION FAILED! INSUFFICIENT BALANCE IN ACCOUNT : " << accountnumber<<endl;
    }
    cout << "AVAILABLE BALANCE : " << currentbalance << endl;
    
}

double Bankaccount :: get_balance() const{
    return currentbalance;
}