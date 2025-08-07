#include<iostream>

using std :: cout ;
using std :: endl;
using std :: cin;
using std :: string;

class Person{
    private: 
        string name;
    public:
        Person(){
        cout <<"invoking the constructor" << endl;
    }

        ~Person(){
        cout <<"Invoking the destructor" << endl;
    }

};
int main(){
    const int size = 4;
    Person *person = new Person[size]{};
    delete[] person;//the output would be the 4times the constructor and destructor 
    //flow and constructor and destructor: allocate memory, call constructor, call destructor, deallocate memory
    person = nullptr;
    return 0;
}