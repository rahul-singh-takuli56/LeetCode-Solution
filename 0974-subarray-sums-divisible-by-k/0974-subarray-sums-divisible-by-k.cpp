class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>ans(k,0);
        int sum=0;
        for(auto it:nums){
            sum+=(it%k+k)%k;
            ans[sum%k]++;
        }
        int res=ans[0];
        for(int it:ans){
            res+=(it*(it-1))/2;
        }
        return res;
    }
};