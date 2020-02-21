/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 18 23:42:03 2020
 ************************************************************************/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int i = s.size() - 1;
        while (s[i] == ' ')
            --i;
        while (i >= 0 && s[i] != ' ') {
            --i;
            ++ans;
        }
        return ans;
    }
};
