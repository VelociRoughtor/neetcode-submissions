class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int i = 0, j = nums.size() - 1, x;
        vector<int> ans;
        while (i < j) {
            x = nums[i] + nums[j];
            if (x < tar) i++;
            else if (x > tar) j--;
            else {
                ans = {i + 1, j + 1};
                break;
            }
        }
        return ans;
    }
};
