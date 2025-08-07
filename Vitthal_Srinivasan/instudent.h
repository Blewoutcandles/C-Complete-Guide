#pragma once
#include<string>
#include<iostream>

class student{
    protected:
        std :: string name;
        std :: string major;
        int gpa;
    public:
        student();
        student(std :: string name, int gpa, std :: string major);
        student(const student &st);
        int get_gpa() const;
        std :: string get_major() const;
        std :: string get_name() const;
        ~student();

};