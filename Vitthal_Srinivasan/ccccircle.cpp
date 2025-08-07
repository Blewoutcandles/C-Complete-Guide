#include<iostream>
#include "cccircle.h"

using std :: cout;
using std :: endl;

Circle :: Circle(float r):
    radius(r){
        cout << "Constructing the Circle constructor" << endl;
}

bool Circle :: islargercircle(Circle othercircle){
    if(get_area() > othercircle.get_area()){
        return true;
    }
    return false;
}

