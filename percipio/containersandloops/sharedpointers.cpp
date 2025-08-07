#include<bits/stdc++.h>
#include<memory>
#include<iomanip>

using std :: cout;
using std :: endl;
using std :: unique_ptr;
using std :: make_unique;
using std :: string;
using std ::ostream;
using std :: shared_ptr;
using std :: make_shared;
using std :: weak_ptr;


class Person{
    private:
        string name;
    public:
    Person():
    name(""){
        cout <<"invoking the no argument constructor" << endl;
    }
        Person(string name):
            name(name){
                cout << "constructing the person class" << name << endl;
        }
        string get_name(){
            return name;
        }

        void set_name(string name){
            this -> name = name;
        }
        ~Person(){
            cout << "destructing the person class" << name << endl;
        }
};
int main(){
    //old school
    shared_ptr<string> name_ptr_1 {new string{"justine"}};
    //new way of implementation
    //prevents from subtle memory leaks
    shared_ptr<string> name_ptr_2{make_shared<string>("Mallory")};

    //compact modern level implementation
    auto name_ptr_3{make_shared<string>("lion")};

    cout << "Name 1: " << *name_ptr_1 << endl;
    cout << "Name 2 : " << *name_ptr_2 << endl;
    cout << "Name 3 : " <<*name_ptr_3 << endl;
    //we dont have to cleanup or delete just like the unique pointer

    shared_ptr<Person> noone{make_shared<Person>()};
    shared_ptr<Person> Nirmala_ptr{make_shared<Person>("Nirmala")};
    cout << "--------------------------" << endl;
    cout <<"Nirmala_ptr :  "<< Nirmala_ptr->get_name() << endl;
    cout <<"Noone_ptr : " << noone -> get_name() << endl; 
    cout <<"---------------------------" << endl;

    //making changes through shared pointer copy
    shared_ptr<Person> Nirmala_ptr_copy = Nirmala_ptr;
    Nirmala_ptr_copy -> set_name("Mrs. Nirmala");
    cout << "Nirmala's updated name : " << Nirmala_ptr -> get_name() << endl;
    //checking whether the name updates among the shared pointers
    /*current ouput:
Name 1: justine
Name 2 : Mallory
Name 3 : lion
invoking the no argument constructor
constructing the person classNirmala
--------------------------
Nirmala_ptr :  Nirmala
Noone_ptr : 
---------------------------
Nirmala's updated name : Mrs. Nirmala
destructing the person classMrs. Nirmala
destructing the person class*/

//exploration on teh shared pointers
//creating the weak pointer

weak_ptr<Person> weak_pointer = Nirmala_ptr;
auto temp_ptr = weak_pointer.lock();
//lock method is used to return the shared pointer, inorder for the weak pointer to utilize the resource
//under it, it ought to invoke the lock method and utlize the resource note that a weak pointer could
//never access the resources of address it's holding only shared pointer could  access it.
//if the shared pointer expired then lock mechanism returns null value
if(temp_ptr){
    cout << temp_ptr/*shared poitner*/ -> get_name() << endl;
}else{
    cout << "The shared pointer is expired" << endl;
}

if(auto inscope = weak_pointer.lock()){
    cout << inscope/*shared poitner*/ -> get_name() << endl;
}else{
    cout << "The shared pointer is expired" << endl;
}
name_ptr_1.reset();
name_ptr_2.reset();
name_ptr_3.reset();
temp_ptr.reset();
//accessing the resources using the weakpointer output: error
// cout << weak_pointer -> get_name() << endl;
/*output : sharedpointers.cpp:102:22: error: base operand of '->' has non-pointer type 'std::weak_ptr<Person>'
  102 | cout << weak_pointer -> get_name() << endl; */

//relinquish the ownership of the nirmala_ptr
Nirmala_ptr.reset(new Person("some other nirmala")/*value inside here will be new location which the nir
mala_ptr would be pointing to, if no values are given then points to null*/);
Nirmala_ptr_copy.reset();
if(weak_pointer.expired()){
    /*this expired function is applicable on the weak pointer and not others*/
    cout << "The pointer's holding address expired" << endl;
}else{
    cout << "The underlying resource is still active" << endl;
}
cout << Nirmala_ptr_copy.get() << endl;
cout << Nirmala_ptr.get() << endl;
cout << Nirmala_ptr -> get_name() << endl;


// how to check if the shared pointer is expired or not
// if(Nirmala_ptr.expired()){
//     cout <<"The shared pointer is expired"<< endl;
// }else{
//     cout << "The shared pointer is still active" << endl;
// }

    return 0;
}