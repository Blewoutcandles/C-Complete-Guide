#include"Accountholder.h"

Accountholder :: Accountholder(string name):
   name(name),bankaccounts(){}

void Accountholder :: add_account(const Bankaccount& bankaccount){
    bankaccounts.push_back(bankaccount);
}

Bankaccount* Accountholder :: get_account(int accountnumber){
    for(auto & account : bankaccounts){
        if(account.get_accountnumber() == accountnumber){
            return &account;
        }
    }
    cout <<"Bankaccount not found" << endl;
    return nullptr;
}

int Accountholder :: get_account_count()const{
    return bankaccounts.size();
}

void Accountholder :: display_accounts() const{
    cout <<"********************************" << endl;
    cout << "ACCOUNTHOLDER NAME : " << name << endl;
    cout << "------------ACCOUNT DETAILS--------- " << endl;
    for(auto &i : bankaccounts){
        cout << "ACCOUNT NUMBER: "  << i.get_accountnumber() <<endl<<\
       "ACCOUNT BALANCE : " << i.get_balance() << endl << endl;
    }
    cout << "-------------------------------------" << endl;
}


void Accountholder :: deposit(double accountnumber, double amount){
    Bankaccount* account = get_account(accountnumber);
    if(account){
        account -> deposit(amount);
        return;
    }
    cout << "Sorry could not find the account" << endl;
    
}

void Accountholder :: withdraw(double accountnumber,double amount){
    Bankaccount* account = get_account(accountnumber);
    if(account){
        account -> withdraw(amount);
        return;
    }
    cout << "Sorry could not find the account" << endl;   
}