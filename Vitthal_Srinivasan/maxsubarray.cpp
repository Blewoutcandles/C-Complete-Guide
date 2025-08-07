#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    int sum = 0;
    int answer = INT_MIN;
    for(int i = 0; i<n; i++){
        sum = max(sum+arr[i], arr[i]);
        answer = max(answer, sum);
    }
    cout << answer;
}