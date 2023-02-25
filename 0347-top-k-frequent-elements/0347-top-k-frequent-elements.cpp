typedef pair<int,int>pr;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        priority_queue<pr,vector<pr>,greater<pr>>pq;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            pq.push(make_pair(it.second,it.first));
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
