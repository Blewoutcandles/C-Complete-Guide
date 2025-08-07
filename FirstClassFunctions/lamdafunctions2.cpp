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

 double add(double value){
    return value + 10;
 }

 class multiply_by{
    public:
        double operator()(double value){
            return value * 10;
        }
 };

 template<typename T,typename Transform>
const T find_max_or_min(vector<T> values, \
                             Transform compute_fn)


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

template<typename T, typename Transform>
vector<T> apply_transform(vector<T> vect, Transform function){
    vector<T> sample_vector;

    for(const T& val : vect){
        sample_vector.push_back(function(val));
    }

    return sample_vector;
}

int main(){
    multiply_by multiply;
    vector<double> double_vector{11.1,12.1,13.1, 14.1};
    for(const double& it :  double_vector){
        cout << it << " ";
    }
    cout << endl;
    
    vector<double> sample = apply_transform(double_vector, multiply);
    for(const double& it :  sample){
        cout << it << " ";
    }
    cout << endl;

    vector<double> sample1 = apply_transform(double_vector, add);
    for(const double& it :  sample1){
        cout << it << " ";
    }
    cout << endl;

    vector<double> sample2 = apply_transform(double_vector, [](const double num){return num/10;});
    //the passing of the above function is similar to the 
    //below syntax:
    //auto variable = [] (const double num{return num/10;});
    for(const double& it :  sample2){
        cout << it << " ";
    }
    cout << endl;
    vector<string> eldenring{"limgrave","liurnia","altius","volcano manor"};
    cout <<"maximum value is : " << find_max_or_min(double_vector,[] (const double& a, const double& b){return a > b ;}) << endl;
    cout <<"minimum value is : " << find_max_or_min(double_vector,[] (const double& a, const double& b){return a < b ;})  << endl;
    cout <<  "maximum_length = " <<  find_max_or_min(eldenring, [] (const string& a, const string& b){return a.length() > b.length();}) << endl;
    cout << "minimum lenghth = " << find_max_or_min(eldenring, [] (const string& a, const string& b){return a.length() < b.length() ;}) << endl;
    return 0;
}