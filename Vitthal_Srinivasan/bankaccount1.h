// #ifndef _bankaccount1_h
// #define _bankaccount1_h

// #include<string>
// #include<iostream>
// #include<vector>


// class Bankaccount{
//     private:
//         std :: string name;
//         float balance;
//         std :: vector <std :: string> transactionlog;
      
//     public:
//         Bankaccount(std :: string name, float balance);

//         bool withdraw(float amount);
//         bool deposit(float amount);
//         friend void display_transaction_report(const Bankaccount &bank_account);//Note getting by const reference will actually reduce the copying time of the constructor objec 
//         //which indeed invoke the copy_constructor //this statement is to avoid the above scenario (vector changed)
//         //this function is in main1.cpp inorder to access this class we use friend keyword
//         ~Bankaccount();
// };
// #endif

#include"CreditCard1.h"

class Bankaccount{
    private:
        std :: string name;
        float balance;
        CreditCard credit_card;

    public:
        Bankaccount (std::string name, float balance);
        void update_credit_card(std:: string n);
        void update_credit_card_limit(float l);
        void display() const;

};