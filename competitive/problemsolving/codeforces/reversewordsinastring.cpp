#include<bits/stdc++.h>

using namespace std;

string rwordsinastring(string& s){
    int  i =0, j = 0;
    while(i<s.length()){
        j = i;
        while(j<s.length() && s[j] != ' '){
            j++;
        }
        int start = i, end = j-1;
        while(start < end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        i = j+1;
    }
    return s;
}

int main(){
    string s{"kuzjram demahom"};
    cout << "Before reversing" << s << endl;
    cout << "After reversing" << rwordsinastring(s);
    return 0;
}