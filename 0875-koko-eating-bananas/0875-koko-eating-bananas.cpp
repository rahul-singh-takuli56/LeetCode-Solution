class Solution {
public:
        int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        long int high=*max_element(piles.begin(),piles.end());
        
        int ans=0;
        while(low<high){
            int mid=low+(high-low)/2;
            int time=time_fun(mid,piles);
            if(time<=h){
                high=mid; //possible ans  changes made
                // high=mid-1;
            }
            else 
                low=mid+1;
        }
        return low;  // return ans -->chanes made
    }
    
      int time_fun(int mid,vector<int>&piles){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]/mid);
            if(piles[i]%mid>0)
                sum++;
        }
        return sum;
    }
};