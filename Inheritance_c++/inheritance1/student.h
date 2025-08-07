#pragma once

#include<iostream>
#include<string>

using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;

class Student{
    private:
        string name;
    protected:
        int grade;
    public:
        string major;
        Student() = default;
        string get_name() const;
        void set_name(string n){
            name = n;
        }
        int  get_grade() const;
        void set_grade(int g){
            grade = g;
        }

    
};