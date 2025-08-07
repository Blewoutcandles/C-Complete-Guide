#include<bits/stdc++.h>
/*keynotes: the function should never return reference to the automatic variable*/

using std :: cout;
using std :: cin;
using std :: endl;
using std  :: string;

// void greet(const string& greeting = "default argument");
/*note the function default argument should be of part of declaration 
and not definition, trying to have both default argument on both declaration and
definition we 'll indicate errors*/

/*funcitons with multiple arguments: when using default arguments when the paramters 
that are intialized during the declaration should be grouped at last in function
declaration, or all the 
parameters after the one parameter which is initialized should be of default 
argument types (intialized)*/
// void multiple_arg_greet( int next, const string& first ="metre", const string&second = "kilo",
//  int value = 100);


//  /*string formatted function*/
//  string* get_formatted_string(const string& first, const string& second, const string& third);


// const string *returngreaterstring(const  string* first, const string* second){
//     return first->length() > second -> length()? first : second;
//  }

//  string *danglingpointer(){
//     string one = "Rain";
//     string two = "bow";
//     string resultant = one + two;
//     return &resultant;
//  }

// const string& danglingpointer_ref(){
//     string resultant1 = "Guillitone";
//     return resultant1;
// } 

const string no_error_reference_greatstr(const string& first, const string& second){
    return first.length() > second.length() ? first : second;
}
int main(){
    // greet();
    // greet("hello how are you??");
    // greet("ohayo gozaimasu"); 
    // greet("this expected to replace the default argument");
    // multiple_arg_greet(1000);
    // multiple_arg_greet(1200,"Melania", "Blade_of_Miquella", 1200 );
    /*note: c++ types fill the arguments from left to right to the function definition parameters*/

    //string formatted function ex
    // string* formatted_string = get_formatted_string("chris", "redfield","Resident Evil");
    // cout << *formatted_string << endl;
    // delete formatted_string;


    // string first = "Hemsworth";
    // string second = "Maliketh_the_black";
    // const string *value = returngreaterstring(&first, &second);//in c passing string literal means
    //passing the address of the base of the array of characters this is not the case in c++
    //if we receive the parameters to the pointers then the passing values should be of reference types
    // cout << *value << endl;
/************************************************************************************************/
    //concept of the dangling poitner
    // const string *str = danglingpointer();
    // cout << *str << endl;
    //The resultant string created inside the function will be cleared as soon as the stack goes 
    /*out of scope str is pointing to the address that is already deallocated - leading to 
    name called "dangling pointer"*/

        //dangling pointer in terms of the reference function
        // const string& reference = danglingpointer_ref();
        // cout << reference << endl;

        /*ouptut for the above two:
        default_values.cpp:35:12: warning: address of local variable 'resultant' returned [-Wreturn-local-addr] 
   35 |     return &resultant;
      |            ^~~~~~~~~~
default_values.cpp:34:12: note: declared here       
   34 |     string resultant = one + two;
      |            ^~~~~~~~~
default_values.cpp: In function 'const std::string& danglingpointer_ref()':
default_values.cpp:40:12: warning: reference to local variable 'resultant' returned [-Wreturn-local-add 
]
   40 |     return resultant;
      |            ^~~~~~~~~
default_values.cpp:39:12: note: declared here       
   39 |     string resultant = "Guillitone"; */


   //non error code for the above two cases
   string j1 = "Mom Its raining outside";
   string j2 = "I can't play today";
   /*TODO: cant understand the direct passing and argument passing*/
    const string finalstr = no_error_reference_greatstr("Mom Its raining outside",\
    "I can't play today");
    cout << endl << finalstr;
/*********************************************************************************************/
    return 0;
}

// void greet(const string& greeting){
//     cout << greeting << endl;
// }
// void multiple_arg_greet( int next, const string& first, const string&second,
//  int value){//the default argument should be in the declaration and not in definition
//     cout << first << " "<< second << " " << value << " " << next << endl;
//  }


//  string *get_formatted_string(const string&first ,const string&second, const string& third){
//     string *result = new string(first+" "+second+" from "+third);
//     return result; 
//  }

