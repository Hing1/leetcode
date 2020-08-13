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

class Solution {
public:
    string sortString(string s) {
        vector<int> bucket(26, 0);
        int len = s.size();
        for (int i = 0; i < len; ++i) {
            ++bucket[s[i] - 'a'];
        }
        string ans;
        ans.reserve(len);
        while (len) {
            for (int i = 0; i < 26; ++i) {
                if (bucket[i]) {
                    ans += 'a' + i;
                    --bucket[i];
                }
            }
            --len;
            if (len == 0)
                break;
            for (int i = 25; i >= 0; --i) {
                if (bucket[i]) {
                    ans += 'a' + i;
                    --bucket[i];
                }
            }
            --len;
        }
        return ans;
    }
};