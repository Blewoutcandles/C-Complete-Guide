#pragma once
#include<string>
#include<vector>
#include<iostream>

class bankaccount{
    private:
        std::string name{};
        float balance{0};
        class CreditCard{   
            public://making everything inside the class public to make it accessible within the bankaccount
            //class and securing within the class through private keyword inside bankaccount
                float limit{0};
                float current_limit{0};
                std :: string name{};

                CreditCard(std::string name, float limit):
                    name(name), limit(limit), current_limit(limit){
                }
        };
        CreditCard credit_card;
        std :: vector<std :: string> transaction_log; 

        public:
            bankaccount(std :: string name, float balance);
            bool withdraw(float amount);
            bool deposit(float amount);
            bool buy_on_credit(float amount);
            bool pay_off_credit();
            void display_transaction_report() const;
            // ~bankaccount(); no need now since the funcion is not using pointers
};