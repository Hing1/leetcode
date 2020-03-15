/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar 15 21:20:15 2020
 ************************************************************************/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int flag = 0;
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1]) {
                if (flag == 0)
                    flag = 1;
                else if (flag == 2)
                    return false;
            } else if (A[i] < A[i + 1]) {
                if (flag == 0)
                    flag = 2;
                else if (flag == 1)
                    return false;
            }
        }
        return true;
    }
};
