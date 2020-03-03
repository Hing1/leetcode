/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar  3 15:32:44 2020
 ************************************************************************/

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        for (int idx = m + n - 1, i = m - 1, j = n - 1; idx > i; --idx)
            A[idx] = (i >= 0 && A[i] > B[j]) ? A[i--] : B[j--];
    }
};
