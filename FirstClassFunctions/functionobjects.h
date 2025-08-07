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

class StringUpperCase{
    public :
        string operator()(const string& variable) const{
            string returningstring;
            for(const char &it : variable){
                returningstring += ::toupper(it);
            }
            return returningstring;
        }
};
class StringLowerCase{
    public :
        string operator()(const string& variable) const{
            string returningstring;
            for(const char &it : variable){
                returningstring += ::tolower(it);
            }
            return returningstring;
        }
};

class multiply{
    private:
        int factor;
    public:
        multiply(int factor):  factor(factor){ }
        double operator()(const double& value1)const{
            return value1 *factor;
        }
};
class divide{
    private:
        int divideby;
    public:
        divide(int divideby):  divideby(divideby){ }
        double operator()(const double& value1)const{
            return value1 / divideby;
        }
};