class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size(), i = 0, j = n - 1, ans = INT_MIN;
        while (i < j) {
            int a = min(h[i], h[j]) * (j - i);
            ans = max(ans, a);
            if (h[i] < h[j]) i++;
            else if (h[i] > h[j]) j--;
            else i++, j--;
        }
        return ans;
    }
};
