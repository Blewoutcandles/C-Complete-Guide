#include<bits/stdc++.h>
using namespace std;


    int myAtoi(string s) {
        auto it  = s.begin(); long value = 0; bool flag = 0;

        while(*it == ' '){ 
            it++;}            

        if(*it == '-'){
            flag = true;
            it++;
        }else if(*it == '+')
            it++;

        while(it != s.end()){
            if(*it >= '0' && *it <= '9')
                value  = value*10 + *it - '0';
            else break;
            if(flag && -value <= INT_MIN) return INT_MIN;
            else if(value >= INT_MAX) return INT_MAX;
            it++;
        }
        return flag? -(int)value : (int)value;
    }


    int main(){
        string name{"-2147483647"};
        cout << myAtoi(name) << endl;
        cout << INT_MAX << endl;
        return 0;
    }