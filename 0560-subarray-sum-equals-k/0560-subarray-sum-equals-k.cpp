class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
    int n=arr.size();
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    }
    int count = 0;
    unordered_map<int, int> freq;
    for (int i = 0; i <= n; i++) {
        if (freq.find(prefix_sum[i] - k) != freq.end()) {
            count += freq[prefix_sum[i] - k];
        }
        freq[prefix_sum[i]]++;
        }
        return count;
    }
};