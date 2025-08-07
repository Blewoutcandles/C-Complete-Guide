#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using std :: cout ;
using std :: cin;
using std :: endl;
using std :: vector;
std :: map<int, int> mp;
bool compare(const int& a, const int& b){
    return (mp[a]>mp[b])? 1 : 0;
}

void sort_by_max_occurence(vector<int> & value){
    for(const int &i : value){
        mp[i]++;
    }
    std :: sort(value.begin(), value.end(), compare);
}

int main(){
    vector<int> value{1,1,2,2,2,3};
    sort_by_max_occurence(value);
    for(auto &i : value){
        cout << i << endl;
    }
    return 0;
}