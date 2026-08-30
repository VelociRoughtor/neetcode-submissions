class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n + 1, 1), s(n + 1, 1), ans;
        for (int i = 0; i < n; i++) p[i + 1] = p[i] * nums[i];
        for (int i = n - 1; i >= 0; i--) s[i] = s[i + 1] * nums[i];
        for (int i = 0; i < n; i++) {
            int x = p[i] * s[i + 1];
            ans.push_back(x);
        }
        return ans;
    }
};
