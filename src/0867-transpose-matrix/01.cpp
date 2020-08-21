/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 13 12:55:08 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        vector<vector<int>> ans(col, vector<int>(row, 0));
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                ans[j][i] = A[i][j];
            }
        }
        return ans;
    }
};
