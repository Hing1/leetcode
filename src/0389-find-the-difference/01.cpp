/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 16:39:05 2020
 ************************************************************************/

class Solution {
public:
    char findTheDifference(string s, string t) {
        int len = s.size();
        if (t.size() != len + 1)
            return ' ';
        vector<int> sVi(26, 0);
        vector<int> tVi(26, 0);
        for (int i = 0; i < len; ++i) {
            int temp = s[i] - 'a';
            ++sVi[temp];
            temp = t[i] - 'a';
            ++tVi[temp];
        }
        ++tVi[t[len] - 'a'];
        for (int i = 0; i < 26; ++i) {
            if (sVi[i] != tVi[i])
                return i + 'a';
        }
        return ' ';
    }
};
