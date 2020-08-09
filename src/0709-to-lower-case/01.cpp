/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 20:43:03 2020
 ************************************************************************/

class Solution {
public:
    string toLowerCase(string str) {
        int mask = 1 << 5;
        for (int i = 0; i < str.size(); ++i) {
            str[i] |= mask;
        }
        return str;
    }
};
