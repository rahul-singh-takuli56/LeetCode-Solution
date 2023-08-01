class Solution {
public:
    vector<vector<int>>ans;
    void solve(int ind,int k,vector<int>&nums,int n){
            if(nums.size()==k){
                ans.push_back(nums);
                return;
            }
            for(int i=ind;i<n+1;i++){
                nums.push_back(i);
                solve(i+1,k,nums,n);
                nums.pop_back();
            }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        solve(1,k,nums,n);
        return ans;
    }
};