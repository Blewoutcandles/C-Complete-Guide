#include<bits/stdc++.h>
using namespace std;


string countAndSay(int n) {
    if(n<=9) return to_string(n);
    string resultant;  map<int, int> value;

    while(n>0){
        int rem = n%10;
        if(value[rem] == 0){
            while(n>0 && rem == (n%10)){
                value[rem]++;
                n /=10;
            }
            resultant += to_string(rem);
            if(value[rem]>1){
                resultant += to_string(value[rem]);
            }
            value[rem] = 0;
        }
    }
    reverse(resultant.begin(), resultant.end());
    return resultant;
}

int main()
{
    cout << countAndSay(3322211)<<endl;
    return 0;
}