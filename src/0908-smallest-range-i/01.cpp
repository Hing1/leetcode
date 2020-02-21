/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sun Jan 12 15:33:11 2020
 ************************************************************************/

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int minnumb = A[0];
        int maxnumb = A[0];
        for (auto &i:A) {
            maxnumb = max (i, maxnumb);
            minnumb = min (i, minnumb);
        }
        return max((maxnumb - minnumb - 2 * K), 0);
    }
};
