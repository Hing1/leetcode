/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 04:29:24 2020
 ************************************************************************/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        for (int i = 1; i < A.size(); ++i) {
            if (A[i] <= A[i - 1])
                return i - 1;
        }
        return -1;
    }
};
