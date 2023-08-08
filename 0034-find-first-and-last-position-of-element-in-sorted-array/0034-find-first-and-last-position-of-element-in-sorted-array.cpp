class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        auto s=find(nums.begin(),nums.end(),target);
        if(s!=nums.end()){
            int s_ind=s-nums.begin();
            ans[0]=s_ind;
        }
        
        auto e=find(nums.rbegin(),nums.rend(),target);
        if(e!=nums.rend()){
            int e_ind=nums.rend()-e-1;
            ans[1]=e_ind;
        }
        return ans;
    }
};