/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 04:24:28 2020
 ************************************************************************/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int len = A.size();
        vector<int> ans(len, 0);
        int idx = len - 1;
        int i = 0, j = len - 1;
        while (i <= j) {
            int a = A[i] * A[i];
            int b = A[j] * A[j];
            if (a > b) {
                ans[idx--] = a;
                ++i;
            } else {
                ans[idx--] = b;
                --j;
            }
        }
        return ans;
    }
};
