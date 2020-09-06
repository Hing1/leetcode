/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Sep  6 09:57:03 2020
 ************************************************************************/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len = mat.size();
        int ans = 0;
        for (int i = 0; i < len; ++i) {
            ans += mat[i][i] + mat[len - i - 1][i];
        }
        if (len % 2)
            ans -= mat[len / 2][len / 2];
        return ans;
    }
};
