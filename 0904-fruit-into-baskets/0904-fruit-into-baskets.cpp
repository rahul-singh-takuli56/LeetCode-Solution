class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=0;
        int i=0,j=0;
        unordered_map<int,int>mp;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            
            if(mp.size()<=2){
                maxi=max(maxi,j-i+1);
                    j++;
            }
            else if(mp.size()>2){
                while(mp.size()>2){
                   mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)
                        mp.erase(fruits[i]);
                    i++;
                 }
            j++;
            }
        }
        return maxi;
    }
};