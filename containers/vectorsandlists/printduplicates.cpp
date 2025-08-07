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

int main(){
    vector<int> value{1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    map<int, int> mp;
    vector<int> dup_elem;
    for(int i : value){
        ++mp[i];
        if(mp[i]>1){
            if(find(dup_elem.begin(), dup_elem.end(), i) == dup_elem.end())
                dup_elem.push_back(i);
        } 
    }
    for(int i : dup_elem){
        cout << i << endl;
    }

    //another method
    array<int,10> array_name;
    array_name.fill(0);
    for(int i = 0 ; i<value.size(); i++){
        ++array_name[value[i]];
    }
    for(int i = 0; i<sizeof(array_name)/sizeof(int); i++){
        if(array_name[i] > 1) cout << i << endl;
    }

    set<int> intvalue;
    vector<int> dup_elements;
    for(int i = 0 ; i<value.size(); i++){
        if(intvalue.count(value[i]) == 0)
            intvalue.insert(value[i]);
        else{
            if(find(dup_elements.begin(), dup_elements.end(), value[i]) == dup_elements.end()){
                dup_elements.push_back(value[i]);
            }
        }
    }
    for(auto i : dup_elements){
        cout << i << endl;
    }
    
    return 0;
}