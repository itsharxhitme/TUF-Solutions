class Solution {
public:

    void helper(vector<int> & candidates,int target,int idx,vector<int> &arr,vector<vector<int>> &ans){
    
        if(target < 0) return;
        if(idx >= (int)candidates.size()){
            if(target == 0) ans.push_back(arr);
            return;
        }
        arr.push_back(candidates[idx]);
        helper(candidates,target - candidates[idx],idx+1,arr,ans);
        arr.pop_back();
        int ub = upper_bound(candidates.begin(),candidates.end(),candidates[idx]) - candidates.begin();
        helper(candidates,target,ub,arr,ans);
    }

    vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
        //your code goes here
        sort(candidates.begin(),candidates.end());
        vector<int> arr;
        vector<vector<int>> ans;
        helper(candidates,target,0,arr,ans);
        return ans;
    }
};