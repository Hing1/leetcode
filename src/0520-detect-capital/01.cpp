/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar  4 10:25:58 2020
 ************************************************************************/

class Solution {
public:
    bool isCap(char c) {
        return 'A' <= c && c <= 'Z';
    }
    bool detectCapitalUse(string word) {
        int len = word.size();
        if (len <= 1)
            return true;
        if (isCap(word[0])) {
            bool flag = isCap(word[1]);
            for (int i = 2; i < len; ++i) {
                if (isCap(word[i]) != flag)
                    return false;
            }
        } else {
            for (int i = 1; i < len; ++i) {
                if (isCap(word[i]))
                    return false;
            }
        }
        return true;
    }
};
