#pragma once
#include<iostream>
class Accessory{
    float price;
    public: 
        Accessory(float price);
        float virtual get_price() const;
};