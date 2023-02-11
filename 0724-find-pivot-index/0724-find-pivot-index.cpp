class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(auto it:nums)
            total+=it;
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            int rightsum=total-nums[i]-leftsum;
            if(rightsum==leftsum)
                return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};