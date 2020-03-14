/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 14 23:30:14 2020
 ************************************************************************/

class Solution {
public:
    bool rotateString(string A, string B) {
        int len = A.size();
        if (len != B.size())
            return false;
        if (len == 0)
            return true;
        int target = A[0];
        for (int i = 0; i < len; ++i) {
            if (B[i] == target) {
                bool flag = true;
                for (int j = i; j < len + i; ++j) {
                    if (B[j % len] != A[j - i])
                        flag = false;
                }
                if (flag)
                    return true;
            }
        }
        return false;
    }
};
