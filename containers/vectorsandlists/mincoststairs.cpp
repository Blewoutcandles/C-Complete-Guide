#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<array>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: map;
using std :: array;
using std :: min;

int dp[1000]={0};

int mincostclimbingstairs(array<int,4>& cost, int i){
    if(i <0) return 0;
    if(dp[cost[i]]){
        return dp[cost[i]];
    }
    dp[cost[i]] = cost[i]+ min(mincostclimbingstairs(cost,i-1),mincostclimbingstairs(cost,i-2));
    return dp[cost[i]];
}
int main(){
    array<int,4> cost{10,15,20,0};
    mincostclimbingstairs(cost,3);
    cout << dp[cost[0]]<< endl;
    cout << dp[cost[1]] << endl;
    return 0;
}