#pragma once

#include<iostream>
#include<string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class Accessories{
    private:
        string accessories;
        float price;
        float taxes;
    public:
        Accessories(string accessories, float price);
        string get_accessories() const;
        float virtual get_price()const;
        float get_taxes() const;

};