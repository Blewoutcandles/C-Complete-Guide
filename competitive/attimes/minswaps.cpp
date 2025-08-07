// C++ program for
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to calculate
// min swaps to make
// binary strings equal
int minSwaps(string& s1, string& s2)
{

	int c0 = 0, c1 = 0;

	for (int i = 0; i < s1.size(); i++) {
		// Count of zero's
		if (s1[i] == '0' && s2[i] == '1') {
			c0++;
		}
		// Count of one's
		else if (s1[i] == '1' && s2[i] == '0') {
			c1++;
		}
	}

	// As discussed
	// above
	int ans = c0 / 2 + c1 / 2;

	if (c0 % 2 == 0 && c1 % 2 == 0) {
		return ans;
	}
	else if ((c0 + c1) % 2 == 0) {
		return ans + 2;
	}
	else {
		return -1;
	}
}

// Driver code
int main()
{

	string s1 = "1011", s2 = "0100";
    unordered_set<char> st(s1.begin(), s1.end());
    for(auto t : st) cout << t;
    	// int ans = minSwaps(s1, s2);

	// cout << ans << '\n';

	return 0;
}
// // C++ program for
// // the above approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function to calculate
// // min swaps to make
// // binary strings equal
// int minSwaps(string s1, string s2) {
// 	int n = s1.length();
// 	int diff = 0;
// 	vector<int> pos1, pos2;
// 	for (int i = 0; i < n; i++) {
// 		if (s1[i] != s2[i]) {
// 			diff++;
// 			if (s1[i] == '0') {
// 				pos1.push_back(i);
// 			} else {
// 				pos2.push_back(i);
// 			}
// 		}
// 	}
// 	if (diff % 2 != 0) {
// 		return -1;
// 	}
// 	int swaps = 0;
// 	for (int i = 0; i < pos1.size(); i += 2) {
// 		if (s2[pos1[i]] == '1') {
// 			swaps++;
// 		}
// 	}
// 	for (int i = 0; i < pos2.size(); i += 2) {
// 		if (s1[pos2[i]] == '1') {
// 			swaps++;
// 		}
// 	}
// 	return swaps;
// }

// // Driver code
// int main()
// {

// 	string s1 = "0011", s2 = "1100";
// 	int ans = minSwaps(s1, s2);

// 	cout << ans << '\n';

// 	return 0;
// }
