/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri May 15 22:29:04 2020
 ************************************************************************/

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> temp(m, 0);
        vector<vector<int>> matrix(n, temp);
        for (int i = 0; i < indices.size(); ++i) {
            vector<int> cur = indices[i];
            for (int j = 0; j < n; ++j) {
                ++matrix[j][cur[1]];
            }
            for (int j = 0; j < m; ++j) {
                ++matrix[cur[0]][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] % 2)
                    ++count;
            }
        }
        return count;
    }
};
