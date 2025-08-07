#include<iostream>
#include<string>
#include<algorithm>
#include<typeinfo>
#include<typeof>
using namespace std ;

int main(){

    string a = "abcdef";
    for(int i = 0; i<a.length(); i++){
        for(int j = 0; j<=a.length()-i-1; j++){
            cout << a.substr(j,i+1) << endl;
        }
    }
    cout << typeid(a).name() << endl;

    return 0;
}