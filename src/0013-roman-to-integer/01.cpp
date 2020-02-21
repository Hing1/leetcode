/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Jan 30 20:01:19 2020
 ************************************************************************/

class Solution {
public:
    int charToInt(char ch) {
        if (ch == 'I') {
            return 1;
        } else if (ch == 'V') {
            return 5;
        } else if (ch == 'X') {
            return 10;
        } else if (ch == 'L') {
            return 50;
        } else if (ch == 'C') {
            return 100;
        } else if (ch == 'D') {
            return 500;
        } else {
            return 1000;
        }
    }
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (charToInt(s[i]) >= charToInt(s[i + 1])) {
                ans += charToInt(s[i]);
            } else {
                ans -= charToInt(s[i]);
            }
        }
        ans += charToInt(s[s.size() - 1]);
        return ans;
    }
};
