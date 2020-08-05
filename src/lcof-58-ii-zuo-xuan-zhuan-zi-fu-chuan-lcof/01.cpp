/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 13:23:35 2020
 ************************************************************************/

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string ans;
        for (int i = n; i < s.size(); ++i) {
            ans += s[i];
        }
        for (int i = 0; i < n; ++i) {
            ans += s[i];
        }
        return ans;
    }
};
