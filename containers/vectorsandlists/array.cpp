#include<iostream>
#include<string>
#include<list>
#include<chrono>
#include<vector>
#include<array>

using std :: cout;
using std :: cin;
using std :: endl;
using namespace std ::chrono;//for time calculation
using std :: vector;
using std :: array;
using std :: string;


int main(){
    array<string, 5> names_arr{"Liz", "lucy", "godrick", "marika"};
    //could not use the common parenthesis, 
    /*since because the constructor normal arguments could not accomodate these many values
    we could use array<string> names_arr(5);//assign space for 5 values
    */
    array<int,5> int_array{1,2,3,4,5};
    //array<datatype, size> array_name{values, values, values};
    cout << "--------------Size--------------" << endl;
    cout << "Sizeof the array : " << names_arr.size() << endl;
    cout <<"Maximum size of the array : " << names_arr.max_size() << endl;
    cout << "Is array empty ?  : " << std :: boolalpha << names_arr.empty() << endl;
    cout <<"----------------Contents-----------------" << endl;
    for(auto & names : names_arr){
        cout << names << " ";
    }
    cout << "\n";

    cout << "---------------Accessing the elements------------------" << endl;
    cout << "Element at the index 1 :" << names_arr[1] << endl;
    cout << "Element at the index 0 : " << names_arr.at(0) << endl; 

        cout << "--------------Size--------------" << endl;
    cout << "Sizeof the array : " << int_array.size() << endl;
    cout <<"Maximum size of the array : " << int_array.max_size() << endl;
    cout << "Is array empty ?  : " << std :: boolalpha << int_array.empty() << endl;
    cout <<"----------------Contents-----------------" << endl;
    for(auto & names : int_array){
        cout << names << " ";
    }
    cout << "\n";

    cout << "---------------Accessing the elements------------------" << endl;
    cout << "Element at the index 1 :" << int_array[1] << endl;
    cout << "Element at the index 0 : " << int_array.at(0) << endl;    

    /*difference between the at method and square method accessing, at method will do some bound checking 
    while the square bracket will not care about the bound checking, will access the location that is beyound
    our size or scope, while ad method will throw exception if trying to access the elements out of bound*/
//at method - robustness of the program


    //filling the array using a single element
    array <int ,5> array_name;
    array_name.fill(4);
    //fills the entire array with the element 4
    for(auto & a : array_name){
        cout << a << " ";
    } 
    cout << "\n";
    cout << "Accessing the element using the front " << array_name.front() << endl;
    cout << "Accessing the element using the back " << array_name.back() << endl;
/*output : 
    --------------Size--------------
Sizeof the array : 5
Maximum size of the array : 5
Is array empty ?  : false
----------------Contents-----------------
Liz lucy godrick marika  
---------------Accessing the elements------------------
Element at the index 1 :lucy
Element at the index 0 : Liz
--------------Size--------------
Sizeof the array : 5
Maximum size of the array : 5
Is array empty ?  : false
----------------Contents-----------------
1 2 3 4 5
---------------Accessing the elements------------------   
Element at the index 1 :2
Element at the index 0 : 1
4 4 4 4 4
Accessing the element using the front 4
Accessing the element using the back 4*/
    return 0;
}