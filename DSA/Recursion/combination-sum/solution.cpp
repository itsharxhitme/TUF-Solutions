class Solution {
public:

    void helper(vector<int>&candidates,int target,int idx,vector<int>arr,vector<vector<int>> &ans){
        if(target < 0) return;
        if(idx >= (int)candidates.size()){
            if(target == 0){
                ans.push_back(arr);
            }
            return;
        }
        arr.push_back(candidates[idx]);
        helper(candidates,target - candidates[idx],idx,arr,ans);
        arr.pop_back();
        helper(candidates,target,idx+1,arr,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //your code goes here
        vector<int> arr;
        vector<vector<int>> ans;
        helper(candidates,target,0,arr,ans);
        return ans;

    }
};