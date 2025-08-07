#include "instudent.h"
#include<iostream>
#include<string>
using namespace std;

student :: student(){
    cout << "student : invoking the no argument constructor" << endl;
}

student :: student(string name, int gpa, string major):
    name(name), gpa(gpa), major(major){
        cout << "Student paramaterized constructor" << endl;
    }
student :: student(const student& st):
    name(st.name), gpa(st.gpa), major(st.major){
        cout << "copy constructor of the student class" << endl;
    }

int student  :: get_gpa()const{
    return gpa;
}

std :: string student :: get_major() const{
    return this -> major;
}
std :: string student :: get_name() const{
    return this -> name;
}
student  :: ~student(){
    std :: cout << "Invoking the student class destructor" << std :: endl;
}