class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (auto x : nums) mp[x]++;
        sort(nums.begin(), nums.end());
        set<vector<int>> vis;
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                int x = -(nums[i] + nums[j]);
                if (mp[x]) {
                    int need = 1;
                    if (x == nums[i]) need++;
                    if (x == nums[j]) need++;
                    if (mp[x] >= need) {
                        vector<int> tmp = {nums[i], nums[j], x};
                        sort(tmp.begin(), tmp.end());
                        if (!vis.count(tmp)) ans.push_back(tmp), vis.insert(tmp);
                    }
                }
            }
        }
        return ans;
    }
};
