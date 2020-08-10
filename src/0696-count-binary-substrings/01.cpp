/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 10 14:06:38 2020
 ************************************************************************/

class Solution {
public:
    int countBinarySubstrings(string s) {
        char ch = s[0];
        int cur = 1;
        int pre = 0;
        int ans = 0;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == ch) {
                ++cur;
            } else {
                ch = s[i];
                ans += min(pre, cur);
                pre = cur;
                cur = 1;
            }
        }
        ans += min(pre, cur);
        return ans;
    }
};
