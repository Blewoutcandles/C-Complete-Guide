#include<iostream>
#include"cccircle.h"
using std :: cout;
using std :: cin;
using std :: endl;

int main(){
    Circle firstcircle(10.0f);
    Circle secondcircle(14.0f);

    // cout<< std :: boolalpha << firstcircle.islargercircle(secondcircle) << endl;
    // cout << std :: boolalpha << secondcircle.islargercircle(firstcircle) << endl;
    cout<< std :: boolalpha << firstcircle.islargercircle(secondcircle) << endl;
    //in the above statement the firstcircle.islargercircle is taking the float value instead of circle object
    //when we invoke the function C++ compiler implicitly search the circle class that matches the above statement
    //with the float parameter in it, then it implicitly calls the constructor in the ccccircle.cpp 
    //which leads to the creation of the larger object with radius 400.0f
    //however we can avoid this by using explicit keyword in the cccircle.h file on the circle class
    //saying that do not implicitly call the constructor regardless of the situation.
    //doing so will result in a warnign or an error. removing explicit keyword will run and invoke the constructor
    //and go on to create a circle of larger radius by invoking the constructor of the class circle
    return 0;
}