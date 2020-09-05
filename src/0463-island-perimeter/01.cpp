/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar  1 00:19:41 2020
 ************************************************************************/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int row = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j] == 1) {
                    if (i - 1 < 0 || grid[i - 1][j] == 0)
                        ++ans;
                    if (j - 1 < 0 || grid[i][j - 1] == 0)
                        ++ans;
                    if (i + 1 >= row || grid[i + 1][j] == 0)
                        ++ans;
                    if (j + 1 >= col || grid[i][j + 1] == 0)
                        ++ans;
                }
            }
        }
        return ans;
    }
};
