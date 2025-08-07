#include<bits/stdc++.h>

using namespace std;
int main(){
    map<string, int> mp;
    mp.insert(pair<string, int>("land", 30));
    mp.insert(pair<string,int>("rain", 50));
    mp.insert(pair<string, int>("thunder", 100));
    mp.insert(pair<string, int> ("clouds",10));
    for(auto &i : mp)
        cout << i.first << "-" << i.second << endl;
    for(pair<string, int> m: mp){ //datatype: pair<string,int>
    //the above initialization cannot be of reference type no such method exist
        cout << m.first << " _ " << m.second << endl;
    }
    for(auto& [name, value] : mp){//auto binding
        cout << name << "->" << value << endl;
    }
    return 0;
}