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
using std :: exception;

int main(){
    vector<int> int_vector{1,2,3,4,5,6,7,8,9};

    cout << "-----------------Original values--------------" << endl;
    std :: for_each(int_vector.begin(), int_vector.end(), [](int el){cout << el << endl;});
    std :: for_each(int_vector.begin(), int_vector.end(), [](int& el){el = el + 10;});

    cout << "-------------Incremented by value 10----------------" << endl;
    std :: for_each(int_vector.begin(), int_vector.end(), [](int el){cout << el << endl;});
    
    //finding the particular element from the vector
    auto even = std :: find_if(int_vector.begin(), int_vector.end(), [](const int& a)->bool{return a%2 == 0;});
    if(even != int_vector.end()){
        cout << "even number is present in the vector " << *even << endl;
    }
    auto odd = std :: find_if(int_vector.begin(), int_vector.end(), [](const int & b){return b %2 == 1;});
        if(odd != int_vector.end()){
        cout << "even number is present in the vector " << *odd << endl;
    }

    vector<double> double_vector{11.1, 22.2, 33.3, 44.44};

   double data = 0;
    auto value = std :: accumulate(/*staring pos or iterator*/ double_vector.begin(), /*ending position*/\
                    double_vector.end(), \
                    /*variable to store the accumulated value initialize to 0*/data,\
                    [](double sum, const double& double_value){return sum + double_value;});

    vector<string> string_vector{"com", "muni", "cat", "ion"};     

    string string_concat{};
    auto string_value = std :: accumulate(string_vector.begin(), string_vector.end(),  string_concat, \
                                                    [](const string& concat, const string& stringpart){return concat + stringpart;});   
    cout << value << " " << string_value;
    cout << endl;

    auto generic_accumulate  = [] (auto sum, auto a){return sum + a;};
    //the above is same as type alias or alias in c++
    data = 0;
    cout << "Accumulated value : " << accumulate(double_vector.begin(), double_vector.end(), data, generic_accumulate) << endl;
    string_concat="";
    cout << "Accumulated value : " << accumulate(string_vector.begin(), string_vector.end(), string_concat, generic_accumulate) << endl;

    return 0;
}