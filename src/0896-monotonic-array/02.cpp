/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Feb 28 20:41:31 2021
 ************************************************************************/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int len = A.size();
        if (A[0] < A[len - 1]) {
            for (int i = 0; i < len - 1; ++i) {
                if (A[i] > A[i + 1])
                    return false;
            }
        } else if (A[0] > A[len - 1]) {
            for (int i = 0; i < len - 1; ++i) {
                if (A[i] < A[i + 1])
                    return false;
            }
        } else {
            for (int i = 0; i < len - 1; ++i) {
                if (A[i] != A[i + 1])
                    return false;
            }
        }
        return true;
    }
};
