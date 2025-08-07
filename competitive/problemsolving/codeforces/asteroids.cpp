#include<bits/stdc++.h>

using namespace std;
bool c_greater_smaller(){
        return false;
    return true;
}

vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int> po; int len = asteroids.size();

       for(int i = 0 ;i<len; i++){
            if(asteroids[i]>0 || po.empty()){
                po.push(asteroids[i]);
            }
            else{
                while(!po.empty() && po.top()>0){
                    if(po.top() < abs(asteroids[i])){
                        po.pop();
                    }
                    else{
                        break;
                    }
                }
            }
       }
       vector<int> a;
       while(!po.empty()){
        a.push_back(po.top());
        po.pop();
       }
       return a;
       
    }
int main(){
    vector<int> asteroids{-5,2};
    vector<int> house = asteroidCollision(asteroids);
    for(auto i : house)
        cout << i<< " ";
    return 0;
}












