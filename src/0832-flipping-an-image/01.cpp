/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu May  7 22:50:03 2020
 ************************************************************************/

class Solution {
public:
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
};
