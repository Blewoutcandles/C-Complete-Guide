#include<bits/stdc++.h>
using namespace std;
bool ispalindromeornot(string s){
    int i = 0, j = s.length()-1;
    while(i < j){
        if(s[i++]!=s[j--]) return false;
    }
    return true;
}

void check(string &s,vector<string>&droplet,vector<vector<string>>&droplets, int index){
    if(index == s.length()){
        droplets.push_back(droplet);
        return;
    }
    string normal;
    for(int i = index; i<s.length(); i++){
        normal += s[i];
        if(ispalindromeornot(normal)){
            droplet.push_back(normal);
            check(s,droplet,droplets, i+1);
            droplet.pop_back();
        }
    }
}

vector<vector<string>> palindromesubstring(string s){
    vector<vector<string>> droplets;
    vector<string> droplet;
    for(int i =0; i<s.length(); i++) check(s,droplet,droplets,i);
    return droplets;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s = "abcaa";
    vector<vector<string>> a = palindromesubstring(s);
    for(auto o : a){
        for(auto i : o){
            cout << i << " ";
        }
        printf("\n");
    }
    return 0;

}