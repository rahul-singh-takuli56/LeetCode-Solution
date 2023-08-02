class Solution {
public:
    void solve(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,vector<int>&frq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!frq[i]){
                ds.push_back(nums[i]);
                frq[i]=1;
                solve(ds,nums,ans,frq);
                frq[i]=0;
                ds.pop_back();  
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
        vector<int>frq(n,0);
        solve(ds,nums,ans,frq);
        return ans;
    }
};