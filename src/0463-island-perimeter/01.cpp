/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar  1 00:19:41 2020
 ************************************************************************/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int c = 0;
        int row = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j]) {
                    if (i == 0 || grid[i - 1][j] == 0)
                        ++c;
                    if (i == row - 1 || grid[i + 1][j] == 0)
                        ++c;
                    if (j == 0 || grid[i][j - 1] == 0)
                        ++c;
                    if (j == col - 1 || grid[i][j + 1] == 0)
                        ++c;
                }
            }
        }
        return c;
    }
};
