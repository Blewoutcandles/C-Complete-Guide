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

int main(){
    //*using of the lamnda functions
    auto print = [] (){cout << "hellow lamdas" << endl;};
    print();

    auto  print_message = [] (string message) -> void{cout << "lamdas can accept input arguments" << endl;};
    print_message("dummy value being passed to the lamda function");

    auto upper_case = [] (string message) -> string{
        cout << "lamdas can accept input arguments and return values" << endl;
        string message1;
        for(const char& ch : message){
                message1 += ::toupper(ch);
        }
        return message1;
        };
    auto returning_value = upper_case("childhood");
cout << "returned string which is upper case from the lamda function " << returning_value << endl;

    auto lowercase = [] (string message) -> string \
    { 
        string message2;
        for(const char ch : message){message2 += ::tolower(ch);}
        return message2;
    };
    cout << "letters after passing through lower case lambda functions "<< lowercase("IAMTOOSMALL") << endl;

    return 0;
}
