class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                nums[i]=0;
            else
                nums[i]=1;
        }
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
        mp[sum]++;
        }
        return count;
    }
};