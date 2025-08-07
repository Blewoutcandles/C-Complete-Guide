#include<iostream>
#include<string>

using std :: cout;
using std ::endl;
using std :: string;
using std :: cin;
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
    cout <<"*************** C ***********" << endl;
    double *revenuepointer = (double *) malloc(sizeof(double));
    cout << "Unpredicatable value of revenue pointer " <<*revenuepointer << endl;
    free(revenuepointer);

    cout << "creating an object should run the constructor" << endl; 
    Person *person_ptr = (Person *) malloc(sizeof(Person));
    cout <<"Freeing the object should run the destructor" << endl;
    free(person_ptr);
    cout << "*************c++**************" << endl;
    /*NOTE: cstyle malloc and free will not call the constructor and destructor which may lead to serioud issues*/
    /*usage of new and delete are very essential for the class types constructor and destructor*/
    Person *person = new Person{};//which is equivalent to Person *person {new Person{}}
    cout << "creating an object should run the constructor" << endl; 
    delete person;
    cout <<"Freeing the object should run the destructor" << endl;

    //using c++ standard new and delete will call the respective constructor and destructor which may not lead to vulnerabilities
    return 0;
}