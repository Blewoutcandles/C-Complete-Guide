#pragma once

#include<string> 
#include<iostream>

class Bankaccount{
    private:
        float balance;
        float credit_point;
    public:
        Bankaccount(float balance, float credit_point);
        float get_balance() const;
        bool buy_on_balance(float amount);
        void set_credit_score(float credit_point);
        int compare(const Bankaccount &person) const;
        // bool operator <(Bankaccount& person) const;//operator overloadin gimplementation
        // bool operator =(Bankaccount& person) const;//operator should be given
        // bool operator <(int amount) const;
        //making the below function as member function
        friend bool operator<(const Bankaccount&first, const Bankaccount& second);/*here two parameters are considered since it si external functino that is 
        marked as friend*/
        friend bool operator<(double first, const Bankaccount&other);
};

// inline bool operator<(const Bankaccount& first, const Bankaccount& second){//inline to expand the function from where the function is calling
// //however it is better to mark function that have very minimum instruction or return statements to be marked as inline.
// /*note : since the operator function is defined outside the class bankaccount class we should have two bankaccount objects as '
// parameters

// this function is declared inside the header file which makes it odd since because operator functions are bound so close to the 
// objects that they work on and it is required to mark the non member function as inline (onlu if it  is inside the header file)*/
//     return first.get_balance() - second.get_balance() < 0 ? true : false;
// }
/*this functino could only access the public sections inorder to access the private sections than you should declare it as friend
function inside the public section of the Bankaccount class*//*see the below implementation*/
inline bool operator<(const Bankaccount& first, const Bankaccount& second){
    float balance1 = first.balance - first.credit_point; /*not using the function now it is declared in the public section fo teh class*/
    float balance2 =second.balance - second.credit_point;
    return balance1 - balance2 < 0 ? true : false;
}

inline bool operator<(double first, const Bankaccount&other){//marked as inline no need ot imiplement in the .cpp file
    return first - (other.balance - other.credit_point) < 0 ? true : false;
}



