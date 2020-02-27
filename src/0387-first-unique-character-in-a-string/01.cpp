/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 16:55:38 2020
 ************************************************************************/

class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.size();
        vector<int> vi(26, 0);
        for (int i = 0; i < len; ++i) {
            int temp = s[i] - 'a';
            ++vi[temp];
        }
        for (int i = 0; i < len; ++i) {
            int temp = s[i] - 'a';
            if (vi[temp] == 1)
                return i;
        }
        return -1;
    }
};
