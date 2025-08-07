#include<bits/stdc++.h>

using namespace std;

struct company;
struct Person{
    string name;
    shared_ptr<company> company_ptr;
    ~Person(){
        cout << "DEstructing the person class" << endl;
    }
};

struct company{
    string name;
    weak_ptr<Person> person_ptr;
    ~company(){
        cout << "DEstructing the company class" << endl;
    }
};
int main(){
    shared_ptr<Person> nina_ptr{make_shared<Person>()};
    shared_ptr<company> doug_ptr{make_shared<company>()};
    nina_ptr -> name = "Brendon";
    doug_ptr -> name = "Mccullum";
    /*output as shared_ptr in both structs are 0x00
    output:
    DEstructing the company class
DEstructing the person class*/

    /*initializing the shared_ptr in both the structs will cause circular
    dependancy and hence no destructor would be called*/
    nina_ptr -> company_ptr  = doug_ptr;
    doug_ptr -> person_ptr = nina_ptr;
    /*output: 
    PS C:\c++\percipio\containersandloops> g++ cyclicdependancy_sharedptr.cpp -o a
PS C:\c++\percipio\containersandloops> ./a
PS C:\c++\percipio\containersandloops>  thus no output in the console*/

/*inorder to resolve the above issue then use weak pointer for anyone of the 
structure class lets change it in company*/

/*now output shows in the console:
DEstructing the person class
DEstructing the company class*/

    return 0;
}