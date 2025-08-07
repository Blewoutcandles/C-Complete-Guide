#include<bits/stdc++.h>

using namespace std;

    void helper(int index, vector<int> & nums, vector<vector<int>> &ans, vector<int> v) {
        if(index>=nums.size()) {
            ans.push_back(v);
            return;
        }

        helper(index+1, nums, ans, v);
        v.push_back(nums[index]);
        helper(index+1, nums, ans, v);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(0, nums, ans, v);
        return ans;
    }

int main()
{
    int a{};
    cout << a << endl;
  vector<int> hs{1,2,3};

vector<vector<int>> ha = subsets(hs);
for(auto h : ha){
    for(auto i : h){
        cout << i << " ";
    }
    cout << endl;
}   
    return 0;
}