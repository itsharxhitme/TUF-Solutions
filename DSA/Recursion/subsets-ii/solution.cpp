class Solution {
public:

    void subsetsWithDupHelper(vector<int>& nums,int index,vector<int> &arr,vector<vector<int>>& ans) {
        ans.push_back(arr);
        for(int i = index;i<(int)nums.size();i++){
            if(i > index && nums[i] == nums[i-1]) continue; 
            arr.push_back(nums[i]);
            subsetsWithDupHelper(nums,i+1,arr,ans);
            arr.pop_back();
        }
        
    }
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        //your code goes here
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        subsetsWithDupHelper(nums,0,arr,ans);
        return ans;


    }
};