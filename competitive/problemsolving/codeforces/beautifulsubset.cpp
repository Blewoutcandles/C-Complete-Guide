#include<bits/stdc++.h>
using namespace std;

int _beautifulSubsets(vector<int>& nums, int k, unordered_map<int, int>& freq, int i) {
    if (i == nums.size()) { // base case
        return 1;
    }
    int result = _beautifulSubsets(nums, k, freq, i + 1); // nums[i] not taken
    if (!freq[nums[i] - k]) { // check if we can take nums[i]
        freq[nums[i]]++;
        result += _beautifulSubsets(nums, k, freq, i + 1); // nums[i] taken
        freq[nums[i]]--;
    }
    return result;
}
    

int beautifulSubsets(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    sort(nums.begin(), nums.end());
    return _beautifulSubsets(nums, k, freq, 0) - 1; // -1 for empty subset
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> nums{2,4,6};
    int a= beautifulSubsets(nums, 2);
    cout << "value : " << a << endl;
    return 0;
}