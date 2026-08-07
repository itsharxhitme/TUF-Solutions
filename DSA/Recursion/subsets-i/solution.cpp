class Solution {
  public:

    
    vector<int> subsetSums(vector<int>& nums) {
        //your code goes here
        int n = (int)nums.size();
        vector<int> sums(1 << n);
        for(int i = 0;i < (1 << n);i++){
            int j = i;
            int currSum = 0;
            for(int k = 0; k < n ; k++){
                if(j&1) currSum += nums[k];
                j >>= 1;
                if(!j) break;
            }
            sums[i] = currSum;
        }
        return sums;
    }
};