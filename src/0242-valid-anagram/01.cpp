/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 16:15:42 2020
 ************************************************************************/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int len = s.size();
        if (len != t.size())
            return false;
        vector<int> sAscill(128, 0);
        for (int i = 0; i < len; ++i) {
            int temp = s[i] - ' ';
            ++sAscill[temp];
        }
        vector<int> tAscill(128, 0);
        for (int i = 0; i < len; ++i) {
            int temp = t[i] - ' ';
            ++tAscill[temp];
        }
        for (int i = 0; i < 128; ++i) {
            if (sAscill[i] != tAscill[i])
                return false;
        }
        return true;
    }
};
