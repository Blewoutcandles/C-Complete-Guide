#include"functors.h"

using std :: exception;

// const double find_max_or_min(vector<double> values, \
//                             bool (*compute_fn)(const double, const double))
// using Doublecompare_fn = bool (*)(const T& , const T&);
//The above can be implemented using the c style typedef alias
// typedef bool(*Doublecompare_fn)(const double, const double);


//implementing the below function argument as typedef or type alias or using c++ constructs

template<typename T, typename Transform>
const T find_max_or_min(vector<T> values, \
                            Transform compute_fn)
//Compute_fn<T> means the templated type alias used when using the templated arguments here T-double ,string, anyother type
// and return types for the typealiased function

{
    if(values.empty()){
        throw exception();
    }

    T max_or_min = values.at(0);

    for(const T& val : values){
        if(compute_fn(val, max_or_min)){
            max_or_min = val;
        }
    }
    return max_or_min;
}

int main(){
    vector<string> string_vector{"mathew", "palestine", "archamaidian"};
    StringLonger stringlonger;
    StringShorter stringshorter;//functors

    //if you have functions in header file without the class then usign teh name of those functions is called 
    //function pointers
    

    cout << "The string with maximum length : "  <<find_max_or_min(string_vector, stringlonger) << endl;
    cout << "The string with minimum length : " << find_max_or_min(string_vector, stringshorter) << endl;


    return 0;
}