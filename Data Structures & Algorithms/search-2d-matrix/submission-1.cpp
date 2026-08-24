class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, r = n * m - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int row = mid / m;
            int col = mid % m;
            int x = matrix[row][col];
            if (x == target) return true;
            else if (x < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
