class Solution {
public:
    string largestOddNumber(string num) {
        int j=num.size()-1;
        string ans="";
        while(j>=0){
            if(num[j]%2!=0){
                ans=num.substr(0,j+1);
                return ans;
            }
            else
                j--;
        }
        return ans;
    }
};