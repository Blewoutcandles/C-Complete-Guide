#pragma once

#include<iostream>
#include<string.h>

using std :: string;
using std :: cin;
using std :: cout;
using std :: endl;
using std :: ostream;

class CREDITCARD{
    private:
        string name;
        float limit;
    public:
        CREDITCARD(string name, float limit);

        float get_limit()const{
            return limit;
        }
        string get_name()const{
            return name;
        }

        ~CREDITCARD();

};

inline ostream& operator << (ostream& stream,const CREDITCARD& other){
    stream << "\nCredit Card Name : " << other.get_name() << endl;
    stream << "Credit Card Limit : " << other.get_limit() << endl;
    return stream;
}