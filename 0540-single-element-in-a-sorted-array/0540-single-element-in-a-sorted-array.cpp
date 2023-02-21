class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int i=1;
        while(i<nums.size()){
            if(nums[i-1]!=nums[i])
                return nums[i-1];
               i=i+2;
        }
        return nums[nums.size()-1];
    }
};