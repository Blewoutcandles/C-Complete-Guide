#pragma once
#include"bankaccount.h"
#include<vector>

using std :: vector;

class Accountholder {
    private:
        string name;
        vector<Bankaccount> bankaccounts;
    public:
        Accountholder(string name);
        void add_account(const Bankaccount& bankaccount);
        Bankaccount* get_account(int accountnumber) ;
        int get_account_count()const;
        void display_accounts()const;
        void display_specific_account(int index)const;
        void deposit(double accountnumber, double amount);
        void withdraw(double accountnumber, double amount);
};