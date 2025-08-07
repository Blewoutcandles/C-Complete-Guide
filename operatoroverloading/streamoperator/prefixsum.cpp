#include<bits/stdc++.h>

using namespace std;
int main(){
     int tar[5]{3,4,3,0,4};
    int arr[5]{1,2,3,-1,0};
   
    int diff[5];// 2,2,0,1,4
    int markindex  = 0;
    for(int i  = 0 ; i< 5; i++){
        diff[i] = tar[i] - arr[i];
        if(diff[i] == 0) markindex = i;
    }
    int negcount = 0, positivecount = 0;
    for(int i = 0;i <5; i++){
        if(diff[i]<0) ++negcount;
        else if(diff[i]>0) ++positivecount;
    }
    if(negcount <0 && positivecount >0){
        return -1;
    }
    int operations = 0;
    for(int i =0 ;i<markindex; i++){//prefixaddition
        operations += diff[i];
    }
    int count = operations/(markindex-0);
    operations = 0;
    int i = markindex+1;
    for(; i<5; i++){
        operations += diff[i];
        markindex = i;
    }
    int n = 5;
    count += (operations/(n-1-markindex));
    cout << "Operations " << operations << endl;
    return 0;
}