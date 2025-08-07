#include <bits/stdc++.h>
using namespace std;

bool isacronym(string& n){
    for(int i = 0 ; i<n.length(); i++){
        if(!isupper(n[i]))
            return false;
    }
    return true;
}

int main() {
    int queries;
    cin >> queries;
    cin.ignore();
    while(queries--){
        string n;
        getline(cin, n);
        stringstream ss{n};
        while(ss >> n){
            if(!isacronym(n)){
                n[0] = toupper(n[0]);
                for(int i = 1; i<n.length(); i++){
                    n[i] = tolower(n[i]);
                }
            }
            cout << n << " ";
        }
        cout <<'\n';
    }

    string s = "abc,def,ghi";
    stringstream ss{s};
    string token;
    while(getline(ss,token,',')){
        cout << token << endl;
    }
    return 0;
}

