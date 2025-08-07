#pragma once

#include<string> 
#include<iostream>
#include<math.h>
#include<utility>

using namespace std::rel_ops;//overloading the relational operator over the standard template namespace
//generally using namespace in the header is not good but in this case of operator overloading it is ok!!
using namespace std;

class Bankaccount{

    private:
        float balance;
        std :: string name;
        int account_id;

    public:
        Bankaccount(float balance, std::string name, int account_id);
        float get_balance() const;
        bool buy_on_balance(float amount);
        void show();

        bool operator <(Bankaccount& person) const{
            if(balance < person.balance)
                return true;
        return false;
        }

        bool operator ==(Bankaccount& person) const{
            if(balance == person.balance)
                return true;
        return false;
        }

        // bool operator >(int amount) const{
        //     if(balance  > amount)
        //         return true;
        //     return false;
        // }

        friend bool operator<(const Bankaccount&first, const Bankaccount& second);
        friend bool operator<(double first, const Bankaccount&other);
        // friend bool operator>(const Bankaccount& first, const Bankaccount& second);
        // friend bool operator>(double first, const Bankaccount& second);
};


inline bool operator<(const Bankaccount& first, const Bankaccount& second){
    return first.get_balance() - second.get_balance() < 0 ? true : false;
}

inline bool operator<(double first, const Bankaccount& second){
    return first - second.get_balance() < 0 ? true : false;
}
// inline bool operator>(const Bankaccount& first, const Bankaccount& second){
//     return fabs(first.get_balance() - second.get_balance()) > 1e-9 ? true : false;
// }

// inline bool operator>(double first, const Bankaccount& second){
//     return first - second.get_balance() > 0 ? true : false;
// }

