class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> map;
    int n=arr.size();
    map[0] = 1;
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (map.find(sum - k) != map.end()) {
            count += map[sum - k];
        }
        map[sum]++;
    }
        return count;
    }
};