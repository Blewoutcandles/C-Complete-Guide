#include<bits/stdc++.h>
#include<memory>

using std :: cout;
using std :: endl;
using std :: unique_ptr;
using std :: make_unique;
using std :: string;
using std ::ostream;


class Person{
    private:
        string name;
    public:
        Person(string name):
            name(name){
                cout << "constructing the person class" << name << endl;
        }
        string get_name(){
            return name;
        }

        ~Person(){
            cout << "destructing the person class" << name << endl;
        }
};

ostream& operator<<( std :: ostream& stream, unique_ptr<double>& pointer){
    stream << pointer.get();
    return stream;
}
int main(){
    //prec++ style of initialization unique pointers
    unique_ptr<double> revenue_ptr_1{new double{234.5}};
    //do not use the above for performing operations like move causes segmentation
    //fault cause: unknown
//Modern style of  initializing  uniquepointers-this function prevents subtle 
//memory leaks
unique_ptr<double> revenue_ptr_2(make_unique<double>(1000.345));

//compact modern syle of  initializing unique pointers
    auto  revenue_ptr_3(make_unique<double>(456434.55));

    cout << "revenue_ptr_1" << *revenue_ptr_1 << endl;
    cout << "revenue_ptr_2" << *revenue_ptr_2 << endl;
    cout << "revenue_ptr_3" << *revenue_ptr_3 << endl;
    
    /*unique pointers for the classes*/

    // unique_ptr<Person> perpointerunique(make_unique<Person>("beckham"));
    // unique_ptr<Person> perpointerunique1(make_unique<Person>(""));
    // cout << perpointerunique -> get_name() << endl;
    // cout << perpointerunique1 -> get_name() << endl;

    //perform operations on the unique pointers such as 
    //release, reset(), move --> these involves the ownership of unque pointer

    //trying to copy the unique pointer results in error
    /*unique poitner --> it holds the address of the particular object or
    data type but other pointer holds the address of the same object which
    is poited by the unique pointer
    trying to do so will result in error*/

    // unique_ptr<Person> perpointerunique_copy(perpointerunique);
    //this may result in error:
    /*smartpointers.cpp:56:62: error: use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = Person; _Dp = std::default_delete<Person>]'
   56 |     unique_ptr<Person> perpointerunique_copy(perpointerunique);*/
   /*note: this unique poiters are actually stored in the stack that manages the dynamic 
   memory allocation on our behalf, it is based on RAII - RESOURCE ACQUISITION IS INITIALIZATION
   we only need to initialize as make_unique<datatype>(value) then when the program goes out of scope
   it will free up the dynamic memory allocated, and the stack where the unqieue pointer resides
   will be cleared thus negating the causes of the memory leaks*/

/*trying the move operation --> moving the ownership of the uniquepointer, (#include<memory>)*/
/*now  the revenue_ptr_2 will points to 0x00(NULL) since it's pointing 
address (ownership) been transferred to the revenue_ptr_mov2 pointer*/
cout << "Before moving" << revenue_ptr_2.get() << endl;
auto revenue_ptr_mov2 = std :: move(revenue_ptr_2);

//checking out the addresses using .get() without using the method it will not print anything
cout << "aftermoving "<<revenue_ptr_2 << endl; //thisprinting will not work without ostream function (get method used)
cout << "After moving revenue_ptr_2 " << revenue_ptr_2.get() << endl;
cout << "The move_ownership revenue_ptr_mov1 " << revenue_ptr_mov2.get() << endl;
/*output: Before moving0x1f82c861aa0
After moving revenue_ptr_2 0
The move_ownership revenue_ptr_mov1 0x1f82c861aa0*/

//reset operation
/*reset() - this will free the uniquepointer of current address  and make it to point to 
new address which was passed in as parameter*/

revenue_ptr_mov2.reset(nullptr);
if(revenue_ptr_mov2 == nullptr) cout << "The evenue ptr mov2 is pointing to the null";
revenue_ptr_mov2.reset(new double{234.3433});
cout << endl << *revenue_ptr_mov2 << endl;
cout <<"address of the revenue pointer" << revenue_ptr_mov2 << endl;
/*output: 
The move_ownership revenue_ptr_mov1 0x1bbddbc1aa0
The evenue ptr mov2 is pointing to the null
234.343
address of the revenue pointer0x1bbddbc1aa0*/

/*trying the release operation()*/
/*release will let go fo the current owner ship of the address to another dumb raw pointer who
is in the left hand side of the intialization*/
//this release in invoked on the unique pointer whom do you want to release
//note: this release function will return dump raw pointer to the function
double* dumpraw_pointer = revenue_ptr_2.release();
//the above dumprawpointer will not free itself we have to free it manually
delete dumpraw_pointer;
//dereferencing a nullpoitner causes segmentation fault
dumpraw_pointer = nullptr;


/*unique pointer of array type*/
int size = 5;
unique_ptr<int[]> unitsales_redmond{make_unique<int[]>(size)};
//array initialization with 5 indicating the size of the array begin() created-common bracket
//if you want to initialze the elements then you have to curly braces
for(int i = 0; i<size; i++){
    unitsales_redmond[i] = 2*(i+7);
}
for(int i = 0 ;i<size; i++){
    cout << unitsales_redmond[i] << endl;
}
//the memory allocated for the array will already be cleared up

    return 0;
}