#pragma once

#include<string> 
#include<iostream>

class Bankaccount{
    private:
        float bankbalance;
        mutable unsigned int balance_check_count = 0;//this keyword allow you to change the 
        //balance_check_count variable though it is inside the const bankaccount object see in 9th implementation
    public:
        Bankaccount(float bankbalance);
        float get_bank_balance() const;
        /*first implementation*/
        // bool withdraw(float amount);
        // bool deposit(float amount);
        // float deposit(int amount);
        // std :: string withdraw(int amount);
        void display();
        /*second implementation*/
        // Bankaccount* withdraw(float amount);
        // Bankaccount* deposit(float amount);

              /*third implementation*/
        Bankaccount& withdraw(float amount);
        Bankaccount& deposit(float amount);
        void set_bank_balance(float amount);

        /*overloading the above bank balance function through having reference based return type*/
        float& get_bank_balance() ;//if this function were to given the const keyword then compiler may flag error
    //because of the function already existing within the file and important thing is to note that the compiler 
    //does not differntiate between the returning type so flags error as a result
};