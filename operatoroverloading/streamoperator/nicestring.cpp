#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k = 0;
    cin >> n;
	char str[n];
	while(k<n){
		cin>>str[k++];
	}
	char str_copy[n];
	memcpy(str_copy, str, sizeof(char)*n);

	sort(str,str+n);
	map<char, int> mp;
	mp[str[0]] = 0;
	for(int i = 1; i<n; i++){
		if(str[i]!=str[i-1]){
			mp[str[i]] = mp[str[i-1]]+1;
		}
		else{
			mp[str[i]] = mp[str[i-1]];
		}
	}
	for(int i = 0; i<n; i++){
		cout << mp[str_copy[i]] << endl;
	}
	return 0;
}