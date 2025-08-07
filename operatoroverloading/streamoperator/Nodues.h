#pragma once


#include<string.h>
#include<iostream>

using std :: string;
using std :: ostream;

class Noduesform{
    public:
        string name;
        float amount;
    
        Noduesform(string name, float amount);
        Noduesform() = default;
        float get_amount() const;
        string get_name() const;
        ~Noduesform();
    
};

inline std :: ostream& operator<<(std :: ostream&stream, Noduesform& node){
    stream <<"****Amount yet to be payed*****" << node.get_amount();
    return stream;
}