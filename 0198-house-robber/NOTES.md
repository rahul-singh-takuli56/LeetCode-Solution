class Solution {
public:
int rob(vector<int>& nums) {
int sum1=0,sum2=0;
for(int i=0;i<nums.size();i+=2){
sum1+=nums[i];
}
for(int i=1;i<nums.size();i+=2){
sum2+=nums[i];
}
return max(sum1,sum2);
}
};
[2,1,1,2] wrong answer with this test case:-