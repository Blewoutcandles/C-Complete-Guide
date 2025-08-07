#include<iostream>

#include<cstring.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    int count= 0;
    int temp[1000] {0}, arr[1000]{0};
    arr[0] = number;
     int currentsize = 1;
    cout << number<<endl;
    for(int i  = 0; i<1; i++){
        memset(temp,arr,sizeof(int) *1000);
        for(int j = 0; j<currentsize; j++){
            int currelem = arr[j]; count =1;
            for(int k = 1 ; k<currentsize; k++){
                if(currelem == temp[k]){
                    ++count;
                }
                else{
                    break;
                }
            }
            arr[j] = count;
            arr[j+1] = number;
            cout << count << " " << number << endl;
            currentsize = j+1;
        }
        
    }
}

/*temp : 1
currentsize = 1
arr = 1
count =1, number
arr[j] = count,  arr[j+1] = number*/