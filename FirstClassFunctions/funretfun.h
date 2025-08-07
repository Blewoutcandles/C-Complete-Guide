#pragma once

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

double add(double value1, double value2);
double subtract(double value1, double value2);
double multiply(double value1, double value2);
double divide(double, double);

double add(double value1, double value2){
    return value1 + value2;
}
double subtract(double value1, double value2){
    return value1 - value2;
}

double multiply(double value1, double value2){
    return value1 * value2;
}
double divide(double value1, double value2){
    return value1 / value2;
}