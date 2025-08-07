#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string t = "sky";
    for(int i = 0 ;i <t.size(); i++){
        for(int j = i; j<t.size(); j++){
            cout << t[j]<< " ";
        }
        cout << " ";
    }
}