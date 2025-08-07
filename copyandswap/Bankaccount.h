#pragma once
#include "creditcard.h"
#include <algorithm>

using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: ostream;

class BANKACCOUNT {
    private:
        string name;
        float salary;
        CREDITCARD * ccpoint;
    public:
        BANKACCOUNT(string name, float salary);
        BANKACCOUNT();//this should not be used for the class with pointer variables
        BANKACCOUNT(BANKACCOUNT& other);
        void swap(BANKACCOUNT &other);

        string get_name(){
            return name;
        }
        float get_salary(){
            return salary;
        }

        
    BANKACCOUNT& operator=( BANKACCOUNT& other){
        cout << "********************************************" << endl;
        cout << "ASSIGNMENT OPERATOR =()" << endl;
        if(this != &other){
            cout <<"thispointer" <<  this << endl;
            cout << "other pointer" << &other << endl;
            BANKACCOUNT stack{other}; 
            cout <<"ccpointer" <<this->ccpoint << endl;  
            delete ccpoint;     
            ccpoint =  nullptr;
            cout << "checkpoint" << endl;
            ccpoint = new CREDITCARD(*(other.ccpoint));
            //the above can be donw without implementing since the creditclass does not contain
            //any pointer variables. //the compiler will take care of it.
            swap(stack);
    }
        return *this;
    }

        ~BANKACCOUNT();
        friend inline ostream& operator << (ostream& stream,const BANKACCOUNT& other);

};

inline ostream& operator << (ostream& stream,const BANKACCOUNT& other){
    stream << "Account Name : " << other.name << '\n' << "Balance : " << other.salary  << endl;
    stream << "Address of the credit card : " << other.ccpoint << endl;
    stream << *(other.ccpoint);
    
    return stream;
}