#include<bits/stdc++.h>
using namespace std;
long helperfunction(vector<int>&arr, vector<int>&profit, int k, int index, int restraint){
    if(index == arr.size()) return 0;
    if((restraint|arr[index])<=k){
        return profit[index] + helperfunction(arr,profit,k, index+1, restraint|arr[index]);
    }
    return helperfunction(arr,profit,k, index+1, restraint);
}

long maxprofit(vector<int> &arr, vector<int> &profit, int k){  
    return helperfunction(arr,profit, k, 0, 0);
}

int main(){
    vector<int> arr{2,1,3,4,5};
    vector<int> profit{3,1,5,1,9};
    cout << maxprofit(arr,profit,3) << endl;
    return 0;

}