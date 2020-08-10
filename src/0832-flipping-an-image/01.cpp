/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu May  7 22:50:03 2020
 ************************************************************************/

class Solution {
public:
#if 0
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int col = A[0].size();
        vector<int> notvi = {1, 0};
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < col / 2; ++j) {
                int temp = A[i][j];
                A[i][j] = notvi[A[i][col - j - 1]];
                A[i][col - j - 1] = notvi[temp];
            }
            if (col % 2)
                A[i][col / 2] = notvi[A[i][col / 2]];
        }
        return A;
    }
#else
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int len = A[0].size();
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < len / 2; ++j) {
                A[i][j] ^= A[i][len - j - 1];
                A[i][len - j - 1] ^= A[i][j];
                A[i][j] ^= A[i][len - j - 1];
                A[i][j] = (A[i][j] == 1) ? 0 : 1;
                A[i][len - j - 1] = (A[i][len - j - 1] == 1) ? 0 : 1;
            }
            if (len % 2) {
                A[i][len / 2] = (A[i][len / 2] == 1) ? 0 : 1;
            }
        }
        return A;
    }
#endif
};
