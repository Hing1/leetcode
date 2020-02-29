/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Feb 29 22:55:36 2020
 ************************************************************************/

class Solution {
public:
    int countSegments(string s) {
        s += ' ';
        int count = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            if ((s[i] != ' ' && s[i + 1] == ' ')) {
                ++count;
            }
        }
        return count;
    }
};
