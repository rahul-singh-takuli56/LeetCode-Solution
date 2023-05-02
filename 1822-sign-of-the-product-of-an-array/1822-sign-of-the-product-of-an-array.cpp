class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0,pos=0;
        auto zero=find(nums.begin(),nums.end(),0);
        if(zero!=nums.end())
            return 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                neg++;
            else if(nums[i]>0)
                pos++;
        }
        if(neg%2==0)return 1;
        else return -1;
    }
};