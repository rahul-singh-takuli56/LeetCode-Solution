class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto it:gifts)
            pq.push(it);
        while(k--){
            pq.push(sqrt(pq.top()));
            pq.pop();
        }
        long long ans=0;
        while(pq.size()>0){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};