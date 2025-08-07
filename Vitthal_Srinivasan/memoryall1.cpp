#include<iostream>
#include<string>
#include<vector>

using std :: cout;
using std ::endl;
using std :: string;
using std :: cin;
using std :: vector;
//creating a class below
class Person{
    private:
        string name;
    public:
        Person(){//constructor
            //does important stuff like initializing Person
            cout << "constructing person" << endl;

        }
        ~Person(){//destructor
            //does important stuff to cleanup the Person
            cout << "Destructing person" << endl;
        }
};

int main(){
    double *revenuepointer = NULL; // which is equivalent to double *revenuepointer {}; with brace initializer
    revenuepointer = new double;//request memory to the pointer revenue pointer to store a double variable similar to malloc
    //it invokes the no argument constructor
    *revenuepointer = 1098.768;
    cout << *revenuepointer << endl;
    delete revenuepointer;

    //creating a argument constructor
    double *pointer { new double{1098.768}};//brace initializer form
    cout << *pointer << endl;
    delete pointer;
    pointer = nullptr;
    //functional form
    double *pointer1 = new double(2003.548);
    cout << *pointer1 << endl;
    delete pointer1;
    pointer1 = nullptr;

    //Finer points of new and delete
    double *point { new double {1009.654}};
    cout << *point << endl;
    delete point;
    //is it essential to store the point he nullptr after deleting operation
    //successive delete operation will lead to segmentation fault using nullptr will make the error explicit whereas accessing the element 
    //after delete will have garbage value without any warning
    // cout << *point << endl;//garbage value is producedwihtout the below values
    point = nullptr;
    // cout << *point << endl; this statement will print nothing but explicit error like segmentation fault
    string *emptystring = new string{};
    string *currentstring {new string{"Beautiful flowers in the garden"}};
    delete emptystring;
    delete currentstring;
    emptystring = nullptr;
    currentstring = nullptr;//this is the correct way of defining and using the pointers in c++ to avoid erros during compile time and mitigate code crash 
    //such as invalid data accessing 

        /****handling vector based objects*/
    vector<float> *float_vector = new vector<float>{};
    vector<float> *float_vector1 {new vector<float> {0.34f, 3.48f, 5.35f}};

    cout << "Is the vector empty  " << std::boolalpha << float_vector->empty()<< endl;
    cout << "Is the vector empty  " << std::boolalpha << float_vector1->empty()<< endl;

    for(auto gpa : *float_vector1){
        cout << gpa << endl;
    }

    delete float_vector;
    delete float_vector1;
    float_vector= nullptr;
    float_vector1 = nullptr;
    return 0;
}