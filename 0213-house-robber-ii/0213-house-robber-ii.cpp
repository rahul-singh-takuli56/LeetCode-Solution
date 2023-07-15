class Solution {
public:
    int solve(vector<int>&nums,int start,int end,vector<int>&temp){
        if(start>end)
            return 0;
        if(start==end)
            return nums[start];
        if(temp[start]!=-1)
            return temp[start];
        
        int rob=nums[start]+solve(nums,start+2,end,temp);
        int skip=solve(nums,start+1,end,temp);
        return temp[start]= max(rob,skip);

    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        
        vector<int>temp1(n,-1);
        vector<int>temp2(n,-1);
        
        int max1=solve(nums,0,n-2,temp1);
        int max2=solve(nums,1,n-1,temp2);
        return max(max1,max2);
    }
};