/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:53:16 2020
 ************************************************************************/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lenS = s.size();
        int lenT = t.size();
        int j = 0;
        for (int i = 0; i < lenT && j < lenS; ++i) {
            if (s[j] == t[i]) {
                ++j;
            }
        }
        return (j == lenS);
    }
};
