class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int ans = 0;
        vector<int> left(n, 0);
        vector<int> right(n, n - 1);
        vector<int> heights(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
            }

            int curLeft = 0;
            for (int j = 0; j < n; ++j) {
                if (heights[j] > 0) {
                    left[j] = max(left[j], curLeft);
                }
                else {
                    left[j] = 0;
                    curLeft = j + 1;
                }
            }

            int curRight = n - 1;
            for (int j = n - 1; j >= 0; --j) {
                if (heights[j] > 0) {
                    right[j] = min(right[j], curRight);
                }
                else {
                    right[j] = n - 1;
                    curRight = j - 1;
                }
            }

            for (int j = 0; j < n; ++j) {
                ans = max(ans, (right[j] - left[j] + 1) * heights[j]);
            }
        }

        return ans;
    }
};
