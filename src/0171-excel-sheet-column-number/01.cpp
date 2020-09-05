/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan 15 21:30:25 2020
 ************************************************************************/

class Solution {
public:
    int titleToNumber(string s) {
        unsigned int ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            ans = ans * 26 + (s[i] - 'A' + 1);
        }
        return ans;
    }
};
