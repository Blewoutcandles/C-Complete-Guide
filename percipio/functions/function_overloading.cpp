#include<bits/stdc++.h>

using namespace std;

/*************************************************************/
int find_max(int *arr, size_t n){
    int max =  INT_MIN;
    for(int i = 0 ;i<n; i++){
        max = max < arr[i]? arr[i] : max;
    }
    return max;
}

// int find_max(int arr[], size_t n){
//     int max =  INT_MIN;
//     for(int i = 0 ;i<n; i++){
//         max = max < arr[i]? arr[i] : max;
//     }
//     return max;    
// }

/*from the two functions the compiler could not differentiate them
because both have the same parameters, but functions with same
name but different argument are different and compiler can
differentiate them*/
/***********************************************************/


// int add(int num1, int num2) {
//     return num1 + num2;
// }

// float add(float num1, float num2 ){
//     return num1 + num2;
// }

// string add(const string& num1, const string& num2){
//     return string{num1 + num2};
// }

/*notes: casting and function overloading*/
double find_square(double num){
    cout << "pass by value" << endl;
    return num * num;
}

long find_square(long& num){
    cout << "inside the non const reference" << endl;
    return num * num;
}
int main(){
    // int arr[]{1,2,3,4,5};
    // int max = find_max(arr,5);
    // cout << max << endl;

    // //addition overloadint
    // int value_sum = add(10,200);
    // cout << value_sum << endl;

    // float value = add(11.22f, 123.998f);
    // cout << value << endl;

    // string literal = add("string ", "concatenation");
    // cout << literal << endl;
    double value = 7.0;
    cout << find_square(value) << endl;
    cout << find_square(static_cast<long>(value));
    /*note: passing number 7.0 is marked to const reference or just call by
    value so that conflict for this function overloading will occur only when 
    find_square(const double& num) 
    and
    find_square(double num)    both exist
    whereas the find_square(double num) and
    find_square(double& num) --> non-const will not make any issue.
    */
    return 0;
}