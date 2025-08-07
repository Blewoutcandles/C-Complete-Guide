#pragma once

#include<iostream>
#include<string>
 
using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class Vehicle{
    private:
        string vehicle_type;
        float price;
    public:
        Vehicle(std :: string vehicle_type,float price);
        std :: string get_vehicle_type() const;
        float virtual get_price() const;
        float taxes() const;
};