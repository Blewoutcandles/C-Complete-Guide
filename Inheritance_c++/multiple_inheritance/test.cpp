 #include<bits/stdc++.h>
 using namespace std;

     void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
    //  string removeDuplicates(string s, int k) {
    //     vector<pair<char,int>> stk;
    //     stk.push_back({'!', 0});
    //     for (char ch: s) {
    //         if (stk.back().first != ch) {
    //             stk.push_back({ch, 1});
    //         }
    //         else if (++stk.back().second == k) {
    //             stk.pop_back();
    //         }
    //     }
    //     string ans;
    //     for (auto& p: stk) {
    //         ans.append(p.second, p.first);
    //     }
    //     return ans;
    // }

    // string removeDuplicates(string s, int k) {
    //     stack<pair<char,int> >st; string result;
    //     for(char ch : s){
    //         if(!st.empty() && st.top().first == ch){
    //             st.top().second++;
    //         }else{
    //             st.push({ch,1});
    //         }
    //         if(st.top().second == k){
    //             st.pop();
    //         }
    //     }
    //     while(!st.empty()){
    //         while(st.top().second--) 
    //             result += st.top().first;
    //         st.pop();
            
    //     }
    //     reverse(result.begin(), result.end());
    //     return result;
    // }

int main(){
    // string s = "yfttttfbbbbnnnnffbgffffgbbbbgssssgthyyyy";
    // cout << removeDuplicates(s, 4);
    vector<int> nums{0,2,0,1,1,2};
    sortColors(nums);
    for(auto i : nums) cout << i << " ";
    return 0;
}
/*yet to review:
    bool equalFrequency(string s)
    {
        int ch[26] = {0};
        for (char &c : s)
            ch[c - 'a']++;

        for (int i = 0; i < 26; i++)
            if (ch[i])
            {
                ch[i]--;
                unordered_set<int> st;
                for (int j = 0; j < 26; j++)
                    if (ch[j])
                        st.insert(ch[j]);
                if (st.size() == 1)
                    return 1;
                ch[i]++;
            }
        r*/