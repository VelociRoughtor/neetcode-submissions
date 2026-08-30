class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) freq[x]++;

        map<int, vector<int>, greater<int>> mp;
        for (auto [a, b] : freq) mp[b].push_back(a);

        vector<int> ans;
        for (auto [a, b] : mp) {
            for (int x : b) {
                ans.push_back(x);
                k--;
                if (k == 0) break;
            }
            if (k == 0) break;
        }
        return ans;
    }
};
