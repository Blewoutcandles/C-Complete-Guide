#include<bits/stdc++.h>
using std :: pair;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multimap;
using std :: lower_bound;
using std :: upper_bound;
using std :: exception;
using std :: make_pair;

int main(){
    int threshold = 10;
    auto greater = [threshold] (int element){ return element  > threshold;};/*stateless lamda*/
    //the variable inside the [] is capturing by value
    /*by adding threshold, the variable is added as the private member variables to functor class which is compiler generated
    sample compile generated function*/
    /*class __somecompilergeneratedfunction__{
    private:
        int threshold;//being added after adding thevariable inside the [] parenthesis
    public:
        __somecompilergeneratedfunction__(int threshold): threshold(threshold){}

        bool operator()(int element){
            return element > threshold;
        }
    };
        */
    bool result = greater(9);
    cout << "Smaller " << std :: boolalpha << result << endl;

    auto great = [=] (int element){ return element  > threshold;};/*stateless lamda*/
    //= sign inside the [] will capture all the variables surrounding the enclosing lamda function will be captured by value
    //if we do want to capture the surrounding variables using the reference then use [&]

    bool result1 = great(11);
    cout << "Greater  " << std :: boolalpha << result1 << endl;

    //if we capture the variable by call By reference then we could be able to change the variable using the [&] type or
    // [&variable name] within the lambda function

    auto grea = [&](int element){return threshold < element;};
    threshold = 13;
    bool result3 = grea(11);
    cout << std :: boolalpha << result3 << endl;
    
    return 0;
}