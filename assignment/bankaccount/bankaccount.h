#pragma once

#include<iostream>
#include<string>
#include<cstdlib>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class Bankaccount{
    private:
        double accountnumber;
        double currentbalance;
    protected:
        double generate_account_number(double& value);
    public:
        Bankaccount(const Bankaccount& other);
        Bankaccount(double accountnumber, double currentbalance = 0.0);
        Bankaccount();
        void deposit(double amount);
        void withdraw(double amount);
        double get_balance() const;
        double get_accountnumber() const;
};