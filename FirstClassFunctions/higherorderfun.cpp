#include"higherorderfun.h"

using std :: exception;

// const double find_max_or_min(vector<double> values, \
//                             bool (*compute_fn)(const double, const double))
// using Doublecompare_fn = bool (*)(const T& , const T&);
//The above can be implemented using the c style typedef alias
// typedef bool(*Doublecompare_fn)(const double, const double);


//implementing the below function argument as typedef or type alias or using c++ constructs
template<typename T>
using Compute_fn = bool(*) (const T&, const T&);
template<typename T>
const T find_max_or_min(vector<T> values, \
                            Compute_fn<T> compute_fn)
//Compute_fn<T> means the templated type alias used when using the templated arguments here T-double ,string, anyother type
// and return types for the typealiased function
//when using the templated aliases we gotta use the data type associating with the particular operation to deduce the type of the 
//function

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
    vector<double> values{11.1, 22.2,33.3, 44.4, 55.5, 66.6, 66.7,};
    Compute_fn<double> double_larger{larger};
/*  this Compute_fn<double> double_larger{larger}; is similar to 
    typedef bool(*Compute_fn)(const double&, const double&);
    Compute_fn double_larger ;                                                       */

    Compute_fn<double> double_smaller{smaller};

    cout << "maximum value is  : " << find_max_or_min(values, larger) << endl;
    cout << "minimum value is  : " << find_max_or_min(values, smaller) << endl;

    Compute_fn<string> string_larger{longer};

    /*basically the Compute_fn is  bool(*) (const T&, const T&); so here with template string
    the function will be seen as  bool(*) (const string&, const string&) so overall meaning of the statement is :
    Compute_fn<string> string_larger is just the another name for the underlying function longer,
    the prefix compute_fn<string> just determines type for the string_larger which acting as function variable to store the function longer
    so the variable should have the same datatype as the value, so compute_fn<string> is similar to
    bool (*)(const string&, const string&) and the succeeding name is the variable name to hold the function"longer" as value*/
    
    Compute_fn<string> string_smaller{shorter};  

    vector<string> string_vector{"burj", "tajmahal","eiffeltower","pizza"};
    cout << "greater string is  : " << find_max_or_min(string_vector, string_larger) << endl;
    cout << "smaller string is  : " << find_max_or_min(string_vector, string_smaller) << endl;    

    return 0;
}