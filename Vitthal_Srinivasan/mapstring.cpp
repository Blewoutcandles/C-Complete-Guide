#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using std :: cout ;
using std :: endl;
using std :: cin;
using std :: getline;
using std :: string;
using std :: vector;
using std :: map;

int main(){
    string s1 ("Travel");
    string s2 ("through");
    string s3 ("clouds");
    string s4 ("without worries");
    map<int, string*> empname{
        {111,&s1},
        {222,&s2},
        {333,&s3},
        {444, &s4}
    };

    for(auto &variable : empname){
        cout << &variable << endl;//this statement refer to the address reference to the key value pair
        //in the output you can see that varied address for each key value pair
        cout << variable.first << ": " << *variable.second <<endl;
        cout << "Length of the employee name :" << variable.second/*this is a address now of the string object and /
        and invoke the memeber function according to your wish*/-> length()<< endl;
        
    }
    /*Here we have used the auto &variable since it is used for referrring the key value pairs(referring - address)*/
    return 0;
}