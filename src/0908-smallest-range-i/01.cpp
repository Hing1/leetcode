/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sun Jan 12 15:33:11 2020
 ************************************************************************/

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int nMax = 0, nMin = INT_MAX;
        for (int i = 0; i < A.size(); ++i) {
            nMax = max(nMax, A[i]);
            nMin = min(nMin, A[i]);
        }
        return max((nMax - nMin - 2 * K), 0);
    }
};
