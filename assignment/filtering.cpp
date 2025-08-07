#include<iostream>
#include<vector>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: vector;
using std :: string;

template<typename T, typename lamdaclosure>
void filtering_function(T& collection, lamdaclosure functor){
    for(auto i : collection){
        if(functor(i)){
            cout << i << " " << "is an even number " << endl;
        }else{
            cout << i << " " << "is an odd number " << endl;
        }
    }

}

int main(){
    vector<int> vector_variable{1,2,3,4,5,6,7};
    vector<string> string_variable{"moon", "pearls", "sea" , "corals"};
    auto lamdavariable = [] (const int& value1){return value1 % 2 == 0;};
    auto lamdavariable1 = [] (const int& value1){return value1 % 2 != 0;};
    auto lamdavariable2 = [] (const string& a){return a.find("a") != std :: string :: npos;};
    filtering_function(vector_variable, lamdavariable);
    filtering_function(vector_variable, lamdavariable1);
    filtering_function(string_variable, lamdavariable2);


    return 0;
}