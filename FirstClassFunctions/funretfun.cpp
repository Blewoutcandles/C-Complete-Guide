#include"funretfun.h"   

// double(*)(double,double) get_compute_fn(const char& op){
    //*this function returning function which returns double with two double arguments
//the star in these types of implementation will act as a place holder value to store the function name
//or function pointer

/*double(*)(double,double) get_compute_fn(const char& op) : produces error due to clunky syntax
inorder to resolve this use auto or typedef or type aliases*/

// typedef double(*Arithmetic_fn)(double,double);

/*the typedef is used to define a type which is responsible for returning the function pointer
typedef double(*-star indicates returning function pointer,name indicates name of the type) (arguments)*/

/*the above typedef can also be implemented using the c++ constructs and is similar to c style typedef*/
using Arithmetic_fn = double (*) (double,double);
/*the star here acts as a place holder for the function name*/

Arithmetic_fn get_compute_fn(const char& op){
//     // double (*compute_fn) (double, double) ; can be replaced by
    Arithmetic_fn compute_fn;
// //normal function pointer with two double arguments

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
            compute_fn = nullptr;
            cout << "Please enter the valid operator" << endl;
            break;
    }    
    return compute_fn;
}

/*well there are cases where the auto keyword may lead to error while compiling*/
// auto* get_compute_fn(const char& op){

//     switch(op){
//         case '+':
//             return add;
//         case '-':
//             return subtract;
        
//         case '*':
//             return  multiply;
//         case '/':
//             return divide;
//         default:
//             return nullptr;
//     }    
//     return nullptr;
//     /*here for the auto keyword the function pointer cannot be directly returned as a return value to 
//     the function that's y we cant use auto all the time, so that's why we 'll go for the 
//     typedef or type aliases or using constructs of the c++*/
// }

int main(){

    char op;
    double value1, value2;

    cout << "Enter the problem in this format 11.2 * 7.2 : " << endl;
    cin >> value1 >> op >> value2;

    // double (*compute_fn) (double, double) = get_compute_fn(op);
    //After typedef the above thing can be replaced as 
    Arithmetic_fn compute_fn = get_compute_fn(op);

    if(compute_fn != nullptr){
        cout << "Computation result is : " << compute_fn(value1, value2) << endl;
    }else{
        cout << "Please check your input" << endl;
    }
    /*note : the function which accepts the other function as input argument or return other function is called 
    highter order function while the function which is being passed to the fucntion is known as callback
    function*/
    return 0;
}