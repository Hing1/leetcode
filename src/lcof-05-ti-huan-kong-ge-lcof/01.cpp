/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 21:23:40 2020
 ************************************************************************/

class Solution {
public:
    string replaceSpace(string s) {
        int len = s.size();
        string ans;
        ans.reserve(len + 64);
        for (int i = 0; i < len; ++i) {
            if (s[i] == ' ')
                ans += "%20";
            else
                ans += s[i];
        }
        return ans;
    }
};
