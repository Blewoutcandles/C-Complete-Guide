#include <bits/stdc++.h>
using namespace std;
int main() {
	int n ;
    cin >> n;
    int arr[n], brr[n], mine = INT_MAX,count = 0;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
        mine = min(arr[i], mine);
    }
    for(int i = 0; i<n; i++){
        cin >> brr[i];
        if(arr[i]!=mine && arr[i]>brr[i]){
            count += (arr[i]-mine)/brr[i];
        }
    }
    count = count == 0? -1 : count;
    cout << count;
    return 0;
}