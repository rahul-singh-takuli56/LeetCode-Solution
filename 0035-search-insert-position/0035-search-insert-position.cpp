class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto m=lower_bound(nums.begin(),nums.end(),target);
        if(m==nums.end())
            return nums.size();
        auto it=find(nums.begin(),nums.end(),*m);
        int index=it-nums.begin();
        return index;
    }
};