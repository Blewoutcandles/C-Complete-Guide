#include<bits/stdc++.h>
#define longlong ll;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: map;

vector<int> a;
vector<int> countBits(int n) {
    vector<int> dp(n+1,0);
    for(int i = 01; i<=n; i++){
        dp[i] = dp[i>>1] +(i&1);
    }
    return dp;
}

int main(){
    vector<int> a = countBits(5);
    for(auto&i : a) cout << i << " ";
    return 0;
}