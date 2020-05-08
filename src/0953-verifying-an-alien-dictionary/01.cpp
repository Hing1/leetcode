/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri May  8 22:29:17 2020
 ************************************************************************/

class Solution {
    bool isOrdered(string s1, string s2, string order) {
        int i = 0;
        int len1 = s1.size();
        int len2 = s2.size();
        while (i < len1 && i < len2) {
            if (s1[i] != s2[i]) {
                bool found1 = false;
                for (int j = 0; j < 26; ++j) {
                    if (order[j] == s1[i])
                        found1 = true;
                    else if (order[j] == s2[i]) {
                        return found1;
                    }
                }
            }
            ++i;
        }
        return (i == len1);
    }
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 1; i < words.size(); ++i) {
            if (!isOrdered(words[i - 1], words[i], order))
                return false;
        }
        return true;
    }
};
