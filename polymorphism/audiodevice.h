#pragma once

#include<string>
#include<iostream>
using std :: endl;
using std :: cout;
using std :: cin;
using std :: string;

class AudioDevice{
    private:
        string brand;
        float price;
    public:
        AudioDevice(string brand, float price);
        string get_brand() const;
        float get_price() const;
        void display_price()const;
};