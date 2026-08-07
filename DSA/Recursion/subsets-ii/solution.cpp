class Solution {
public:

    void helper(vector<int>&nums,int idx,vector<int>& arr,vector<vector<int>>& ans){
        if(idx >= (int)nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[idx]);
        helper(nums,idx+1,arr,ans);
        arr.pop_back();
        int ub = upper_bound(nums.begin(),nums.end(),nums[idx]) - nums.begin();
        helper(nums,ub,arr,ans);

    }
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        //your code goes here
        sort(nums.begin(),nums.end());
        vector<int> arr;
        vector<vector<int>> ans;
        helper(nums,0,arr,ans);
        return ans;
    }
};