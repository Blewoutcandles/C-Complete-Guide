#include"functionobjects.h"


template<typename T, typename Transform>
vector<T> apply_transform(const vector<T>& values, Transform transform){
    vector<T>  transformed_values;
    for(const T& val : values){
        transformed_values.push_back(transform(val));
    }
    return transformed_values;
}

template<typename T>
void print_vals(const vector<T>& values){
    for(const T& val : values){
        cout << val << " ";
    }
    cout << endl;
}
int main(){
    string input;
    std :: getline(cin, input);
    StringUpperCase stringupper;
    StringLowerCase stringlower;
    cout << "-------input original string-----" << endl;
    cout << input << endl;
    cout << "------lowercase string--------- " << endl;
    cout << stringlower(input) <<endl;
    cout << stringlower.operator()(input) << endl;
    cout << "------uppercase string--------- " << endl;
    cout << stringupper(input) << endl;
    cout << stringupper.operator()(input) << endl;

    vector<double> double_vector{1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7};

    multiply Multiply_by(10);
    divide Divide_by(2);//invoking the constructors 


    print_vals(apply_transform(double_vector, Multiply_by));
    print_vals(apply_transform(double_vector, Divide_by));

    
    return 0;
}