#pragma once

#include<iostream>
#include<string>

using std :: string;

class Student{
    private:
        string name;
    public:
        Student(string name);
        string get_name() const;
        float virtual compute_tuition() const = 0;
};