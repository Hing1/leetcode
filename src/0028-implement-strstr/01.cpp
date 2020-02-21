/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 17 00:35:57 2020
 ************************************************************************/

class Solution {
public:
    bool same_begin(string str, int idx, string key) {
        for (int i = 0; i < key.size(); ++i) {
            if (str[i + idx] != key[i])
                return false;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        for (int i = 0; i < haystack.size(); ++i) {
            if (same_begin(haystack, i, needle))
                return i;
        }
        return -1;
    }
};
