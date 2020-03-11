/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 11 22:40:24 2020
 ************************************************************************/

class Solution {
public:
    string sortString(string s) {
        int len = s.size();
        vector<int> bucket(26, 0);
        for (int i = 0; i < len; ++i) {
            ++bucket[s[i] - 'a'];
        }
        for (int i = 0; i < len; ) {
            for (int j = 0; j <= 25 && i < len; ++j) {
                if (bucket[j]) {
                    s[i] = 'a' + j;
                    --bucket[j];
                    ++i;
                }
            }
            for (int j = 25; j >= 0 && i < len; --j) {
                if (bucket[j]) {
                    s[i] = 'a' + j;
                    --bucket[j];
                    ++i;
                }
            }
        }
        return s;
    }
};
