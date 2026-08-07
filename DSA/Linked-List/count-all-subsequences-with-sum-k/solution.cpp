class Solution{
    public:    	
    int helper(vector<int>&nums,int k ,int idx){
        if(idx >=(int)nums.size()){
            return k == 0;
        }

        return helper(nums,k-nums[idx],idx+1) + helper(nums,k,idx+1);
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        return helper(nums,k,0);
    }
};