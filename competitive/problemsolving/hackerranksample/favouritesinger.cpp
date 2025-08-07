#include <iostream>
#include<map>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	long long arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	
	map <long long, int> mp;
	for(int  i = 0; i<n; i++){
		++mp[arr[i]];
	}
	int maxcount = 0;
	for(auto i : mp){
        if(maxcount < i.second){
            maxcount = i.second;
        }
    }
    int count = 0;
    for(auto i : mp){
        if(maxcount == i.second){
            ++count;
        }
    }
    cout << count;
	return 0;

}