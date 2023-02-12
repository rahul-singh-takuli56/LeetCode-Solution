class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        long long sum=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            string s=to_string(nums[i])+to_string(nums[j]);
            sum+=stoi(s);
            i++;j--;
        }
        int mid=(i+j)/2;
        if(nums.size()%2!=0)
            sum+=nums[mid];
        return sum;
    }
};