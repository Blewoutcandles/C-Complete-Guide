#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<cmath>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class rectangle{
    private:
        float length, width;
    public:
        rectangle(float length = 1.0, float width = 1.0);
        rectangle(const rectangle& rect);
        float virtual get_perimeter()const;
        float virtual get_area() const ;
};