class Solution {
public:	

    void helper(vector<int>&nums,int idx,vector<int> arr,vector<vector<int>> &ans){
        if(idx >= (int)nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[idx]);
        helper(nums,idx+1,arr,ans);
        arr.pop_back();
        helper(nums,idx+1,arr,ans);
    }
    vector<vector<int> > powerSet(vector<int>& nums) {
        //your code goes here
        vector<int> arr;
        vector<vector<int>> ans;
        helper(nums,0,arr,ans);
        return ans;
    }
};