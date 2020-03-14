/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 14 21:24:12 2020
 ************************************************************************/

class Solution {
public:
    bool buddyStrings(string A, string B) {
        int len = A.size();
        if (len != B.size())
            return false;
        int dif = -1;
        vector<int> vi(26, 0);
        for (int i = 0; i < len; ++i) {
            if (A[i] != B[i]) {
                if (dif == -2) {
                    return false;
                } else if (dif == -1) {
                    dif = i;
                } else {
                    if (A[i] == B[dif] && A[dif] == B[i]) {
                        dif = -2;
                    } else {
                        return false;
                    }
                }
            } else {
                ++vi[A[i] - 'a'];
            }
        }
        if (dif == -1) {
            for (int i = 0; i < 26; ++i) {
                if (vi[i] >= 2)
                    return true;
            }
            return false;
        }   
        return true;
    }
};
