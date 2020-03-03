/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar  3 16:12:52 2020
 ************************************************************************/

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string ans;
        bool hasBegin = false;
        for (int count = 0, i = S.size() - 1; i >= 0; --i) {
            if (S[i] != '-') {
                if (hasBegin && count % K == 0)
                    ans += '-';
                ans += ('a' <= S[i] && S[i] <= 'z') ? S[i] + 'A' - 'a' : S[i];
                ++count;
                hasBegin = true;
            }
        }
        string rev;
        for (int i = ans.size() - 1; i >= 0; --i) {
            rev += ans[i];
        }
        return rev;
    }
};
