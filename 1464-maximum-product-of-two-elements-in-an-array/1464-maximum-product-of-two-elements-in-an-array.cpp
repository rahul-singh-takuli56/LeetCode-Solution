class Solution {
public:
    // TC->O(nlongn)
    // but can you optimize i....YES 
    int maxProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        return ((nums[0]-1)*(nums[1]-1));
    }
};