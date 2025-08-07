#pragma once

#include<iostream>
#include<string>
#include<cmath>
#define M_PI		3.14159265358979323846

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class Circle{
    private:
        float radius;
    public:
        Circle(float radius = 1.0);
        Circle(const Circle& other);
        float get_area() const;
        float get_perimeter() const;
        float get_radius() const;
};
