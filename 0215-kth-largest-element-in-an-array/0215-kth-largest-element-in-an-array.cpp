class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++){
            return nums[k-1];
        }
        return 1;
    }
};