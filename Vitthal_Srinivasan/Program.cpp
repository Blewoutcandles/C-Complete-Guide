#include<iostream>

#include"Program.h"
using std :: cout;
using std :: endl;

Program :: Program(std:: string major):
    major(major){
        cout << "The calling of the program constructor" << endl;
}

std :: string Program::get_major() const{
    return major;
}

Program :: ~Program(){
    cout << " Calling of the destructor of the class Program" << endl;
}