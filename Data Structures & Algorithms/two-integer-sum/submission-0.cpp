class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i], y = target - nums[i];
            if (mp.count(y)) {
                ans.push_back(mp[y]);
                ans.push_back(i);
                return ans;
            }
            mp[x] = i;
        }
    }
};
