#pragma once

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

class StringLonger{
    public :
        bool operator()(const string& variable1, string& variable2) const{
            string returningstring;
            if(variable1.length() > variable2.length()){
                variable2 = variable1;
                return true;
            }
            return false;
        }
};
class StringShorter{
    public :
        bool operator()(const string& variable1, string& variable2) const{
            string returningstring;
            if(variable1.length() < variable2.length()){
                variable2 = variable1;
                return true;
            }
            return false;
        }
};