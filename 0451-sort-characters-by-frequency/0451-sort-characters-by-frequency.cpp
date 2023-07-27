bool sortBySecond(const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second;
}

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto it : s)
            mp[it]++;
        
        vector<pair<char, int>> sortedPairs;
        for (auto it : mp)
            sortedPairs.push_back(it);
        
        sort(sortedPairs.begin(), sortedPairs.end(), sortBySecond);
        
        string ans = "";
        for (auto it : sortedPairs) {
            while (it.second > 0) {
                ans += it.first;
                it.second--;
            }
        }
        
        return ans;
    }
};
