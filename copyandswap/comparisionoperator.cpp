#include<iostream>
#include <vector> 
#include<string>
#include<algorithm>
using namespace std;
struct a{
    int x, y;
    bool comparisionop(const a &aref){
        if(x != aref.x) return x < aref.x;
        else return y < aref.y;
    }
};
 int main(){
    vector<int> value(10);
    for(auto i : value) cout << i << endl;

    // vector <int> values{1,2,3,4,5};
    // auto a  = lower_bound(values.begin(), values.end(), 2);//equals or greater values pointing iterator
    // auto b=  upper_bound(values.begin(),values.end(), 2);//greater than the humber specified iterator pointer
    // int number_of_elements = b -a;
    // cout << *a << endl; 
    // cout << *(b+1) << endl;
    // cout << number_of_elements << endl;
    // //efficient usages of the equal range to minimise the upper and lower bound
    // auto equal = equal_range(values.begin(), values.end(), 2);
    // cout << equal.second -  equal.first << endl;//thisprints the number of elements to the console
    return  0;
 }

