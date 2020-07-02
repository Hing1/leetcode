/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Jul  2 21:34:47 2020
 ************************************************************************/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        ans.reserve(row * col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[k - 1];
    }
};
