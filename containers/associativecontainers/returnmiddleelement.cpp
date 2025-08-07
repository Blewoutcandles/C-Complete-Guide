    #include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multiset;

int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
       
       int i = 0, j  = 0, len1 = arr1.size(), len2 = arr2.size(), k = 0;
       vector<int> mergedarray(len1 + len2);
       while(i < len1 && j < len2){
           if(arr1[i] < arr2[j]){
               mergedarray[k++] = arr1[i++];
           }else if(arr1[i] > arr2[j]){
               mergedarray[k++] = arr2[j++];
           }
           else{
               mergedarray[k++] = arr1[i++];
               mergedarray[k++] = arr2[j++];
           }
       }
       while(i < len1){
           mergedarray[k++] = arr1[i++];
       }
       while(j < len2){
           mergedarray[k++] = arr2[j++];
       }
       return mergedarray[k/2]+mergedarray[(k/2)-1];
    }

int main(){
    vector<int> arr1{1,2,3,4,5};
    vector<int> arr2{6,7,8,9,10};
    cout << SumofMiddleElements(arr1, arr2) << endl;
    return 0;

}