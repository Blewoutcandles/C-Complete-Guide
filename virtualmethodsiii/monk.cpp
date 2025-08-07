#include <bits/stdc++.h>

using namespace std;

int stringcompare(string& a, string& b){
	int len = min(a.length(), b.length());
	for(int i = 0 ; i<len; i++ ){
		if(a[i] != b[i]){
			return a[i] - b[i];
		}
	}
	return a.length() - b.length();
}
int main() {
	int num, totfanmeet, i; bool flag = 0;
	cin >> num >> totfanmeet;
	vector<pair<int, string>> a;
	vector<string> normal;
	while(num--){
		int fanquo;
		string no;
		cin >> no >> fanquo;
		a.push_back(make_pair(fanquo, no));
	}
	sort(a.begin(), a.end());
	for(i = a.size()-1; i-1>=0; ){
         flag = false;
		if(a[i].first == a[i-1].first){
			if(stringcompare(a[i].second,a[i-1].second)>=0){
                flag = true;
				normal.push_back(a[i-1].second);
				normal.push_back(a[i].second);
			}else{
				normal.push_back(a[i].second);
				normal.push_back(a[i-1].second);
			}
			i-=2;
		}else{
			normal.push_back(a[i--].second);
		}		
	}
    if(i == 0 && flag) {
        normal.push_back(a[i].second);
    }

	for(int i =0 ; i<totfanmeet; i++){
		cout << normal[i] << endl;
	}
	return 0;
}