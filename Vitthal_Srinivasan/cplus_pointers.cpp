#include<iostream>
#include<string>

using std :: cout;
using std :: endl;
using std :: string;
using std :: cin;

int  main(){
    int balance {1000};
    int phonebalance{2000};
    cout << balance<<endl;
    cout <<phonebalance << endl;
    int  *balancepointer = &balance;
    int *phonebalancepointer {&phonebalance};
    cout << *balancepointer << endl;
    cout << *phonebalancepointer << endl;
    double salary {100000};
    auto salarypointer = &salary;

    float median {43.5};
    auto medianpointer {&median};

    char value = 'A';
    auto *valuepointer{&value};
    cout << typeid(salarypointer).name() << endl;
    cout << typeid(valuepointer).name() << endl;
    cout << typeid(medianpointer).name()<< endl;
    cout << typeid(phonebalancepointer).name() << endl;
    /* Note: It is better to use ./a | c++filt -t ot unmange the c++ name 
    which is basically to decode the variables to be a meaning names
    Also Note that: It is better to use the nullptr rather than null at occasions to mitigate subtle errors at the runtime
    for example: we can pass an pointer that points to null as a parameter that is of type int datatype.
    people may have confusions kindly know null is of integer based value whereas nullptr is like pointing nothing and also 
    have the benefit of usage of null wherever you can use null you can also use nullptr. */
    return 0;
}