/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 15:01:42 2020
 ************************************************************************/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> rMin(row, INT_MAX);
        vector<int> cMax(col, 0);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                rMin[i] = min(rMin[i], matrix[i][j]);
                cMax[j] = max(cMax[j], matrix[i][j]);
            }
        }
        vector<int> ans;
        ans.reserve(min(row, col));
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (rMin[i] == cMax[j])
                    ans.push_back(rMin[i]);
            }
        }
        return ans;
    }
};
