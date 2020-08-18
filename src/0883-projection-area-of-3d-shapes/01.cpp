/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 14:41:09 2020
 ************************************************************************/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> rowMax(row, 0);
        vector<int> colMax(col, 0);
        int ans = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j]) {
                    ++ans;
                    rowMax[i] = max(rowMax[i], grid[i][j]);
                    colMax[j] = max(colMax[j], grid[i][j]);
                }
            }
        }
        for (int i = 0; i < row; ++i) {
            ans += rowMax[i];
        }
        for (int j = 0; j < col; ++j) {
            ans += colMax[j];
        }
        return ans;
    }
};
