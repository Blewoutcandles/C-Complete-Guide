#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string character){
    int i =0, j = character.length()-1;
    while(i < j){
        if(character[i++] != character[j--]){
            return false;
        }
    }
    return true;
}
string helperfunction(string& s, int start, int end,string& returnstring){
    if(start == s.size() || end == 0){
        return returnstring;
    }
    string substring = (s.substr(start, end - start+1));
    
    if(ispalindrome(substring)){
        if(returnstring.size() < substring.size()) returnstring = substring;
        return returnstring;
    }
    string a = helperfunction(s, start+1, end, returnstring);
    string b = helperfunction(s, start, end-1, returnstring);
    returnstring =  a.size() > b.size()? a : b;
    return returnstring;
}

    string longestPalindrome(string& s) {
        if(s.size() == 1) return s;
        string returnstring= "";
        helperfunction(s,0,s.size()-1,returnstring);
        return returnstring;
    }

int main(){
    string s = "a";
    cout << longestPalindrome(s);
    return 0;
}