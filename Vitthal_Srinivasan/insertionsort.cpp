#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int* arr = new int[5];
    for(int i = 0 ; i< 5; i++){
        cin>> arr[i];
    } 

    //implementing the selection sort
    for(int i = 0; i<4; i++){
        int minidx = i+1;
        for(int j = i+1; j<5; j++){
            if(arr[minidx] > arr[j]){
                minidx =  j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int i = 0; i<5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}