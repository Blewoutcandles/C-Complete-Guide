#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>
#include<bits/stdc++.h>


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

double add(double value1, double value2);
double subtract(double value1, double value2);
double multiply(double value1, double value2);
double divide(double, double);

int main(){
    // double (*function_pointer)(double , double );
    // function_pointer = add;
    /*this can be done using the below method*/
    // double (*function_pointer)(double , double ){add};
    // the above method can further be simplified by auto keyword
    // auto function_pointer(add);
    // auto * function_pointer(add);
    /*as a good practise it is better to use the star after the auto keyword*/
    /*the above is similar to the below*/
    // auto * function_pointer(&add);
    // cout << function_pointer(11.1, 1.9) << endl;

    // function_pointer = subtract;
    // cout << function_pointer(11.1, 1.1) << endl;


    //using the input values from theuser
    double (*compute_fn) (double, double) = nullptr;
    char op;
    double value1, value2;
    cout << "Enter the problem in this format 11.2 * 7.2 : " << endl;
    cin >> value1 >> op >> value2;
    switch(op){
        case '+':
            compute_fn = add;
            break;
        case '-':
            compute_fn = subtract;
            break;
        case '*':
            compute_fn = multiply;
            break;
        case '/':
            compute_fn = divide;
            break;
        default:
            cout << "Please enter the valid operator" << endl;
            break;
    }
    /*if the input is not valid in this example consider 12 ) 9 ; the output will not be performed however in the output
    we might get the computation result is : (novalue) just a blank space. so we might have to assign 
    nullptr to the compute_fn*/
    if(compute_fn != nullptr){
        cout << "Computation result is : " << compute_fn(value1, value2) << endl;
    }else{
        cout << "Please check your input" << endl;
    }
    return 0;
}
/*notes : a programming language is a first class functions if it treats other functions
as data, i.e., the functions can be stored in the variable and can be used to point to 
different functions at different times */

double add(double value1, double value2){
    return value1 + value2;
}
double subtract(double value1, double value2){
    return value1 - value2;
}

double multiply(double value1, double value2){
    return value1 * value2;
}
double divide(double value1, double value2){
    return value1 / value2;
}