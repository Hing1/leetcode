/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Jun 27 18:19:43 2020
 ************************************************************************/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenH = haystack.size();
        int lenN = needle.size();
        if (lenN == 0)
            return 0;
        if (lenH < lenN)
            return -1;
        for (int i = 0; i < lenH - lenN + 1; ++i) {
            int j = 0;
            for (; j < lenN; ++j) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (lenN == j)
                return i;
        }
        return -1;
    }
};
