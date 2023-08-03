class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=n-k;
        int Tsum=0;
        for(int i=j;i<n;i++){
            Tsum+=nums[i];
        }
        int maxi=Tsum;
        while(j<n){
            Tsum+=(nums[i]-nums[j]);
            maxi=max(maxi,Tsum);
            i++;
            j++;
        }
        return maxi;
    }
};