class Solution {
public:	
    vector<vector<int> > powerSet(vector<int>& nums) {
        //your code goes here

        int n = (int)nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < (1 << n);i++){
            int j = i;
            vector<int> arr;
            for(int k = 0;k < n;k++){
                if(j&1) arr.push_back(nums[k]);
                j >>=1;
                if(!j) break;
            }
            ans.push_back(arr);
        }
        return ans;
    }
};