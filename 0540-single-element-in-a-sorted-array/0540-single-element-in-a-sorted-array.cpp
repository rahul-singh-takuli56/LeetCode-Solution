class Solution {
public:
    //op method
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-2; // -2 beacause last element
        // agr single hogha to hmara low apne aap point kregha
        // use and in the end we're returning nums[low];
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==nums[mid^1])
                //logic of xor use hogha
                //XOR IMP PROPERTY
                //ODD^1=ODD-1;
                //EVEN^1=EVEN+1;
                low=mid+1;
            else
                high=mid-1;
        }
        return nums[low];
    }
};