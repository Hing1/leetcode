/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar  5 11:29:37 2020
 ************************************************************************/

class Solution {
public:
#if 0
    int findLUSlength(string a, string b) {
        int lenA = a.size();
        int lenB = b.size();
        if (lenA == lenB) {
            for (int i = 0; i < lenA; ++i) {
                if (a[i] != b[i])
                    return lenA - i;
            }
        } else {
            return max(lenA, lenB);
        }
        return -1;
    }
#else
    int findLUSlength(string a, string b) {
        return (a == b) ? -1 : max (a.size(), b.size());
    }
#endif
};
