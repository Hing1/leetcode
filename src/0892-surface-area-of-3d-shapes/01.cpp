/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 25 22:01:00 2020
 ************************************************************************/

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans = 0;
        int len = grid.size();
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if (grid[i][j]) {
                    ans += 2;
                    ans += (i - 1 >= 0) ? ((grid[i][j] - grid[i - 1][j] > 0) ? (grid[i][j] - grid[i - 1][j]) : 0) : grid[i][j];
                    ans += (j - 1 >= 0) ? ((grid[i][j] - grid[i][j - 1] > 0) ? (grid[i][j] - grid[i][j - 1]) : 0) : grid[i][j];
                    ans += (i + 1 < len)? ((grid[i][j] - grid[i + 1][j] > 0) ? (grid[i][j] - grid[i + 1][j]) : 0) : grid[i][j];
                    ans += (j + 1 < len)? ((grid[i][j] - grid[i][j + 1] > 0) ? (grid[i][j] - grid[i][j + 1]) : 0) : grid[i][j];
                }
            }
        }
        return ans;
    }
};
