#include<iostream>
#include<algorithm>
#include<map> 
#include<vector>

using namespace std;

int main(){
    int length;
    cin >> length;
    char t[20];
    for(int i = 0; i<length; i++){
        cin >> t[i];
        if(t[i] == '.'){
            t[i] = 'B';
        }
    }
    for(int i = 1 ;i <length; i++){
        if(t[i] == 'H' && t[i-1] =='H'){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}