#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    set<int> s{9,10,4,2,3};
    int q = 5, num;
    // cin >> q;
    while(q--){
        int a;
        cin >> a >> num;
        if(a == 1){
            s.insert(num);
        }
        else if(a == 2){
            s.erase(a);
        }
        else{
            if(s.find(num)!= s.end()){
                cout <<"Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    } 
    return 0;
}
