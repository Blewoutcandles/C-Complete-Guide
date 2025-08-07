#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>
#include<bits/stdc++.h>


using std :: cout;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multimap;
using std :: lower_bound;
using std :: upper_bound;

bool smallerstring(const string& a, const string& b) {
    return a.length() < b.length() ? true : false;
}//if the function is inside the structure as the builtin type we have to const qualifier while 
//returning otherwise no need to specify the constant qualifier

struct SmallerString{
    bool operator()(const string& a, const string& b) const{
        return a.length() < b.length() ? true : false;
    }
    /*this operator() is a call operator or the application operator*/
} string_length_smaller;

bool starts_with_C(const string& a){
    if(a[0] == 'C'){
        return true;
    }
    return false;
}

    /*call or application operator*/
void convert_to_upper(string& a){
    for(char& ch : a){//take reference to reflect the change
        ch =  :: toupper(ch);
        /*returns the upper case of the current character*/
    }
}
//*above one can also be implemented as below */

// struct value{
//     void operator()(string& a){
//         for(char& ch : a){//take reference to reflect the change
//             ch =  :: toupper(ch);
//         /*returns the upper case of the current character*/       
//         }
//     }
// }convert_to_upper;


struct string_printer_struct{
    void operator()(const string& a)const{
        cout << a << endl;
    }
}string_printer;

//lambda functions
void print_nums(const vector<int>& integer){
    std :: for_each(integer.begin() ,integer.end(), [](int num){cout << num << " ";});
    cout << endl;

}

int increment_by_100(int num){
    return num + 100;
}

int main(){
    vector<float> value{1.2, 1.3, 1.4, 1.5};
    vector<float> :: iterator it_min = min_element(value.begin() ,value.end());
    vector<float> :: iterator it_max = max_element(value.begin() ,value.end());
    cout << "Minimum element is  : " << *it_min << endl;
    cout << "Maximum element is : " << *it_max << endl;

    vector<string> string_vector{"Maria", "Radahn","Queen Islando","Bayle"};
    vector<string> :: iterator imin = min_element(string_vector.begin() ,string_vector.end());
    vector<string> :: iterator imax = max_element(string_vector.begin() ,string_vector.end()); 
    cout << "Minimum element is  : " << *imin << endl;
    cout << "Maximum element is : " << *imax << endl;  

    /*string operations using the external functions as function pointer like cases*/
    imin = min_element(string_vector.begin() ,string_vector.end(), smallerstring);
    imax = max_element(string_vector.begin() ,string_vector.end(), smallerstring);
    cout << "Minimum element is  : " << *imin << endl;
    cout << "Maximum element is : " << *imax << endl; 

/*the above functions will work intermas of the underlying container and it will not change any of the structure
of the underlying container, theses functions are highly efficient*/
    /*using the functions object named functor*/  
    imin = min_element(string_vector.begin() ,string_vector.end(), string_length_smaller);
    imax = max_element(string_vector.begin() ,string_vector.end(), string_length_smaller);
    /*FOR FUNCTOR WHETHER A STRUCT OR A CLASS CAN BE USED */
    cout << "Minimum element is  : " << *imin << endl;
    cout << "Maximum element is : " << *imax << endl;  

    vector<string> cities{"Bangalore","chennai", "Chinnamanur", "Selam","Gohilapuram"};
    cout << "ANy of function " << std :: boolalpha << \
    std :: any_of(cities.begin(), cities.end(), starts_with_C) << endl; 
    cout <<"none_of function "<< std :: boolalpha << std :: none_of(cities.begin(), cities.end(), starts_with_C) << endl;  
    cout << "all_of function "<< std :: boolalpha << \
    std :: all_of(cities.begin(), cities.end(), starts_with_C) << endl;  
    /*the above functions returns any of the string contain the starting letter as C or the all the words startign with C
    or the none of the words starting with the letter C*/
    /*the third variable is the comparator functions which identifies whether the first letter of the string is
    starting with the letter C*/

    /*toggling uppercase*/
    /*functors overload te calling or the parenthesis oeprator*/
    cout << "----------------Before conversion--------------" << endl;
    std :: for_each(cities.begin(), cities.end(), string_printer);
    std :: for_each(cities.begin(), cities.end(), convert_to_upper);
    cout << "------------------------AFter conversion----------------------" << endl;
    std :: for_each(cities.begin(), cities.end(), string_printer);

    vector<int> a{1,2,4,5,3};
    vector<int> b{6,7,9,8,10};
    print_nums(a);
    print_nums(b);
    cout << "--------Shuffling the letter inside the vector------------" << endl;
    std :: shuffle(a.begin(), a.end(),std :: default_random_engine(123));
    std :: shuffle(b.begin(), b.end(), std :: default_random_engine(123));
    print_nums(a);
    print_nums(b);
    cout <<"Ordering the values using the sorting function" << endl;
    std :: sort(a.begin(), a.end());
    std :: sort(a.begin(), a.end()); 
    print_nums(a);
    print_nums(b);


    /*transform functions and resize*/
    vector<int> a_copy,b_copy;
    a_copy.resize(a.size());
    b_copy.resize(b.size());

    std :: transform(a.begin(), a.end(), a_copy.begin(), increment_by_100);
    /*the first two arguments are the range of elements from the source to be copied to
    and the latter is the destination and other functions to place the elements in the vecotr 
    after performing some operations
    */
      std :: transform(b.begin(), b.end(), b_copy.begin(), increment_by_100);
      print_nums(a_copy);
      print_nums(b_copy);
      /*the values from then source vectors will be sent to teh function
      provided in the transform function and the returning value will be placed on the 
      destination vector*/

      /*reversing the element in the copy vectors*/
      std :: reverse(a_copy.begin(), a_copy.end());
      std :: reverse(b_copy.begin(), b_copy.end());
      cout << "printing our after reversing the elements in the vector copies" << endl;
      print_nums(a_copy);
      print_nums(b_copy);


    return 0;
}