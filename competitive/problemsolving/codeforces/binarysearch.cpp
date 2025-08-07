#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n = 9;
    int searchelement = 6;
    int mid, step;
    for(mid =n/2, step = 0; mid >0; mid/=2){
        while(mid +step < n && arr[mid + step] <= searchelement) step += mid;
    }
    if(arr[step] == searchelement)
        cout << "Searching element is successfull" << endl;
    return 0;
}