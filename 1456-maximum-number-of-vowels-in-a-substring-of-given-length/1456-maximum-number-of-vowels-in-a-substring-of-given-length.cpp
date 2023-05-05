class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        int maxi=0;
        int count=0;
        vector<char>ans;
        while(j<n){
            if(s[j]=='a' || s[j]=='e' || s[j]=='o' || s[j]=='i' || s[j]=='u'){
                count++;
            }
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                maxi=max(maxi,count);
                if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                    count--;
            }
                i++;
                j++;
            }
        }
        return maxi;
    }
};
