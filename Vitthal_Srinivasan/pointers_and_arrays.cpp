#include<iostream>
#include<vector>
#include<string>
using std :: cout ;
using std :: endl;
using std :: cin;
using std :: getline;
using std :: string;
using std :: vector;

int main(){
    string name = "marzjuk";
    cout << name << endl;
    const char *name1 {"Mishary Alafasy"};
    cout << name1 << endl;
    char name2[] {"Ken Block"};
    cout << name2 << endl;

    name = "mohamed";
    cout << name << endl;
    name = name2;
    name1 = name2;
    cout << name1 << endl;
    cout << name << endl;

    string text1 = "Cult to Hero isn't an easy path";
    string *text_ptr;//remember braced initializer can be used here but not for normal usage apart from intialization
    const char *str = "Cult to Hero isn't an easy path";
    cout << *str << endl;
    text_ptr = &text1;//cant directly assign the string to the string pointer but can be assigned the string address    
    cout << *text_ptr << endl;
    cout << text1 << endl;
    *text_ptr = "A gentle breeze over the mountains";
    cout << text1 << endl;
    cout << *text_ptr << endl;

//function or methods to perform on the string pointers
    cout << "Sentence is: " << *text_ptr<< endl;
    cout << "The letter at the position is: " << (*text_ptr).at(6) << endl;
    cout << "The length of the string is: " << (*text_ptr).length() << endl;
    cout << "Whether the stirng is empty or not: " <<std :: boolalpha << (*text_ptr).empty() << endl;
    //The struct operator like -> is the same as below
     cout << "Sentence is: " << *text_ptr<< endl;
    cout << "The letter at the position is: " << text_ptr->at(6) << endl;
    cout << "The length of the string is: " << text_ptr -> length() << endl;
    cout << "Whether the stirng is empty or not: " <<std :: boolalpha << text_ptr->empty() << endl;

    /***vector based string objects*/
    string name11 ="sisimaru";
    string name21 ="kio";
    string name31 = "kamamaki";
    string name41 = "hattori";

    std :: vector <string*> workload {&name11, &name21, &name31, &name41};// creating the vector objects string
    //syntax and declaration with the names

    cout << "Print the element at theposition ;" << *workload[1] << endl;
    cout << "print" << *(workload.at(3)) << endl;
    cout << "print" << workload.at(3) -> length() << endl;//workload.at(3) = address of the string  at index 3
    //in the above workload.at(3) function as object since the deferencing string is a object in which we can invoke 
    //member function like length
    cout << "print" << (workload.at(3))->length() << endl;
    cout << "print" << (workload[2])->length() << endl;
    
    
    for(auto variable : workload){
        cout << *variable << endl;
    }

    //creating pointer to a vector of strings
    vector <string> myname{name11,name21,name31,name41};
    vector <string>* myname_ptr= &myname;
    cout << &myname << endl;
    cout << myname_ptr << endl;

    cout << "Name at the posiiton 2 " << myname_ptr->at(2) << endl;
    cout << "And the length of the string is" << myname_ptr->at(2).length() << endl;

    for(auto it = myname_ptr->cbegin(); it!= myname_ptr->cend(); it++){
        cout <<  *it << endl;
    }
   


    return 0;
}