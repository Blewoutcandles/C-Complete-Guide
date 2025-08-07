#include<bits/stdc++.h>

using namespace std;


// auto power_of_num(double nums,int times){
//     double result = 1;
//     for(int i = 0; i<times; i++){
//         result*= nums;
//     }
//     return result;
// }

/*greater the larger string*/
auto get_larger_string(const string &first, const string& second){
    if(first.length() > second.length()){
        return first;
    }
    else if(second.length() > first.length())
        return second;
    return string{};
    /*note : return " "; means you are returning const char* not string so that
    compiler says that the returning is ambiguous we have to make clear for the 
    compiler to compile*/

    //the last return string{} means returning an empty string

}

const string& out_large_string(const string&first, const string& second){
    return first.length() > second.length()? first : second;
}
int main(){
    // double result = power_of_num(2.00, 10);
    string first = "I love ice cream";
    string last = "I hate losing";
    string result = get_larger_string(first, last);
    cout << result;
    result = get_larger_string("I love ice cream", "I hate losing");
    cout << result;
    const string& literal = out_large_string(first,last);
    cout << literal << endl;

    return 0;
}