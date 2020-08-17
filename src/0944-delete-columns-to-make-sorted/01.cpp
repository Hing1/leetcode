/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 15:57:41 2020
 ************************************************************************/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int len = A[0].size();
        vector<bool> vi(len, true);
        for (int j = 0; j < len; ++j) {
            for (int i = 1; i < A.size(); ++i) {
                if (A[i - 1][j] > A[i][j])
                    vi[j] = false;
            }
        }
        int ans = 0;
        for (int j = 0; j < len; ++j) {
            if (!vi[j])
                ++ans;
        }
        return ans;
    }
};
