/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 27 13:07:24 2020
 ************************************************************************/

class Solution {
public:
    string freqAlphabets(string s) {
        string rev;
        rev.reserve(128);
        int len = 0;
        for (int i = s.size() - 1; i >= 0; --i, ++len) {
            int dif = 0;
            if (s[i] == '#') {
                dif = s[--i] - '0';
                dif += (s[--i] - '0') * 10;
            } else {
                dif = s[i] - '0';
            }
            rev += 'a' + dif - 1;
        }
        string ans(len, ' ');
        for (int i = 0; i < len; ++i) {
            ans[i] = rev[len - i - 1];
        }
        return ans;
    }
};
