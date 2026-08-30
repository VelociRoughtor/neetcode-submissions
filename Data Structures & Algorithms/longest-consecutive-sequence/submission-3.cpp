class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        vector<int> v(st.begin(), st.end());
        int ans = (v.size() != 0), cnt = 1;
        for (int i = 0; i + 1 < v.size(); i++) {
            if (v[i] + 1 == v[i + 1]) cnt++, ans = max(ans, cnt);
            else cnt = 1;
        }
        return ans;
    }
};