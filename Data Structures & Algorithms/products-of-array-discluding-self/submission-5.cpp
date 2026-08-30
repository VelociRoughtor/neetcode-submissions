class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), x = 1;
        vector<int> s(n + 1, 1), ans;
        for (int i = n - 1; i >= 0; i--) s[i] = s[i + 1] * nums[i];
        for (int i = 0; i < n; i++) ans.push_back(x * s[i + 1]), x = x * nums[i];
        return ans;
    }
};
