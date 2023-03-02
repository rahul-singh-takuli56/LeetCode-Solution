class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>st;
        for(auto it:jewels)
            st.insert(it);
        int count=0;
        for(auto it:stones){
            if(st.find(it)!=st.end())
                count++;
        }
        return count;
    }
};