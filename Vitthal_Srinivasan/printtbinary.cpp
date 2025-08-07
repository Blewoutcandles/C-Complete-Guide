#include<iostream>
#include<bitset>

using namespace std;

int main(){
    __int32 n = 10;
    bitset<32> m(n);
    cout << m << endl;
    cout << 0;//signed bit representation
    for(int i = 30; i>=0; i--){
        if((n&(1<<i)) != 0){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    return 0;
}