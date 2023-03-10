class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>count(101,0);
        for(auto it:nums){
            count[it]++;
        }
        for(int i=1;i<101;i++){
            count[i]+=count[i-1];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                ans.push_back(0);
            else{
                ans.push_back(count[nums[i]-1]);
            }
        }
        return ans;
    }
};