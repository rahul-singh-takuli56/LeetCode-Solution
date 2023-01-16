class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0;  
        int i=0, j=0; 
        int n = s.size();
        unordered_map<char, int>freq; 
        while(i<n && j<n)
        {
            freq[s[j]]++; 
            if(j-i+1 < 3) 
                j++;
            else if(freq.size()==3) 
            {
                ans++;
                freq.erase(s[i]); 
                i++; 
                j++; 
            }
            else 
            {
                freq[s[i]]--; 
                if(freq[s[i]]==0)
                    freq.erase(s[i]); 
                i++;
                j++;
            } 
        }       
        return ans;
    }
};