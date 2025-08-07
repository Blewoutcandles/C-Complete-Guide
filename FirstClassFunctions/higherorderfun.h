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

bool smaller(const double& firstnum, const double& secondnum){
    return firstnum < secondnum ? true : false;
}

bool larger(const double& firstnum, const double& secondnum){
    return firstnum > secondnum ? true : false;
}


bool shorter(const string& firstnum, const string& secondnum){
    return firstnum.length() < secondnum.length() ? true : false;
}

bool longer(const string& firstnum, const string& secondnum){
    return firstnum.length() > secondnum.length() ? true : false;
}

/*to combat these two different types we can use the template we assume the data type of the 
particular function or the variable */