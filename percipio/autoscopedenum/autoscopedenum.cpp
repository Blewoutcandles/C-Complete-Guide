#include<iostream>
#include<string>


using namespace std;

// enum fillcolor{
//     RED,
//     GREEN,
//     BLUE
// };

// enum outlinecolor{
//     RED,
//     BLACK,
//     YELLOW
// };
//compiling the above two may produce the errors since RED is declared in the global scope
/*autoscopedenum.cpp:14:5: error: 'RED' conflicts with a previous declaration
   14 |     RED,
      |     ^~~
autoscopedenum.cpp:8:5: note: previous declaration 'fillcolor RED'
    8 |     RED,*/
    //to mitigate the issue we have to use the scoped enum unlike in c programming


// enum fillcolor{
//     RED,
//     GREEN,
//     BLUE
// };

// enum  outlinecolor{
//     INDIGO,
//     BLACK,
//     YELLOW
// };

enum class fillcolor{
    RED, 
    GREEN,
    BLUE
};//inscope

enum class outlinecolor{
    RED,
    GREEN,
    PURPLE
};//in scope

enum unscoped{
    RED,
    GREEN,
    VIOLET
};//in global namespace and uscoped
int main(){
    fillcolor object = fillcolor :: RED;
    outlinecolor variable = outlinecolor :: RED;

    /*accomodating the scoped enum values to the variables apart from their own type will lead to conflict
    which is not the case in unscoped enum*/
    int value =  RED;//this will not happen in the scoped enum
    //the above can be modified as int value = unscoped :: RED; which is also correct because it is global namespace
    //and in the unscoped enum type
    unscoped value1 = RED;
    cout << value << "  " << value1 << endl;
    if(object == fillcolor :: RED && variable == outlinecolor :: RED) 
        cout << "both are red color" << endl;
    else cout << "both are not red color " << endl;
    // fillcolor variable =  RED;
    // cout << variable << endl;
    // auto a = 90;
    // auto b = 76.22;
    // string returnvalue = "Hello Hi how are you";
    // auto result = a + b;
    // cout << typeid(a).name() << endl;
    // cout << typeid(b).name() << endl;
    // cout << typeid(result).name() << endl;
    // cout << "a value :  " << a << endl;
    // cout << "b value : " << b << endl;
    // cout << "result of the addition " << result << endl;
    // cout << typeid(returnvalue).name() << endl;
    /*output :int
double
double
signed char value :  90
bool value : 76.22
result of the addition 166.22
std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*/

    return 0;
}