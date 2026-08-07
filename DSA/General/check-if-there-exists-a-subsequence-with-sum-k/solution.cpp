class Solution{
    public:

    bool helper(vector<int>&nums,int k,int idx){
        if(k == 0) return 1;
        if(idx >= (int)nums.size()) return 0;

        return helper(nums,k-nums[idx],idx+1) || helper(nums,k,idx+1);
    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
         //your code goes here
        return helper(nums,k,0);
    }
};