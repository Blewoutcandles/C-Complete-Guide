#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[7]{2,4,1,6,5,1,2};
    int  n = 7, moves = 0, sum = 0;
    for(int i = 1; i<n; i++){
        if(sum){
            sum = 0;
            arr[i-1] += arr[i];
            for(int j = i; j<n-1; j++){
                arr[j] = arr[j+1];
            }
            --n;
            int k = i-1;
            for(int m = 0; m<n; m++){
                if(k!=m){
                    if(arr[k] > arr[m] && k<m){
                        swap(arr[k],arr[m]);
                        k = m;
                    }else if(arr[k] < arr[m] && k>m){
                        swap(arr[k],arr[m]);
                        k = m;
                    }
                }
            }
            ++moves;
            
        }
        if(arr[i-1] > arr[i]){
            sum = 1;
        }
    }
    cout << moves << endl;
    return 0;
}