#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int>nextPermutation(vector<int>& nums) {
        int n=nums.size();
        // next_permutation(nums.begin(),nums.end());STL
         if (n <= 1) return nums; // No need to process if there's 1 or fewer elements
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return nums;
        }
        for(int i=n-1;i>ind;i--){
           if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
           }
        }
        reverse(nums.begin()+ind+1,nums.end());
        return nums;
    }


int main(){
    vector<int> a{3,5,2,1};
    vector<int> b= nextPermutation(a);
    for(auto i : b){
        cout << i << ',';
    }
    return 0;
}