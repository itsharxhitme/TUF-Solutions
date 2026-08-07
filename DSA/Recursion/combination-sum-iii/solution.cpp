class Solution {
public:

    void helper(int k,int n,int idx,vector<int>&arr,
    vector<vector<int>> &ans){
        if(k == 0){
            if(n == 0) ans.push_back(arr);
            return;
        }
        if(idx > 9 || k < 0) return;
        

        if(n >= idx){
            arr.push_back(idx);
            helper(k-1,n-idx,idx+1,arr,ans);
            arr.pop_back();
        }
        helper(k,n,idx+1,arr,ans);

    }
    vector<vector<int> > combinationSum3(int k, int n) {
    	//your code goes here
        if(n > 45 - ((9 - k)*(10 - k))/2) return {};
        vector<int> arr;
        vector<vector<int>> ans;
        helper(k,n,1,arr,ans);
        return ans;
    }
};