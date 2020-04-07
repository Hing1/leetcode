/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Apr  7 22:47:56 2020
 ************************************************************************/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for (int i = 0; i * 2 < len; ++i) {
            for (int j = 0; j < len; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[len - i - 1][j];
                matrix[len - i - 1][j] = temp;
            }
        }
        for (int i = 1; i < len; ++i) {
            for (int j = 0; j < i; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};
