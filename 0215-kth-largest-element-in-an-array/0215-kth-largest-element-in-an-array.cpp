class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // brute force
        sort(nums.rbegin(),nums.rend());
        return nums[k-1];
    }
};