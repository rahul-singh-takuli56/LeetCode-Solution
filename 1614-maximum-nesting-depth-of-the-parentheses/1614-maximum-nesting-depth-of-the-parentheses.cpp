class Solution {
public:
    int maxDepth(string s) {
        int curr_max=0;
        int maxi=0;
        for(auto it:s){
            if(it=='('){
                curr_max++;
                maxi=max(maxi,curr_max);
            }
            else if(it==')')
                curr_max--;
        }
        return maxi;
    }
};